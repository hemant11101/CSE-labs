#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

char *filterdir;

int filter_dir(const struct dirent *e)
{
    char buf[NAME_MAX];
    struct stat st;

    if (filterdir) {
        snprintf(buf, sizeof(buf), "%s/%s", filterdir, e->d_name);    
        stat(buf, &st);
    } else {    
        stat(e->d_name, &st);
    }
    return (st.st_mode & S_IFDIR);
}


void printdir (char *path)
{
    struct dirent **namelist;
    int n;

    filterdir = path;
    n = scandir(path, &namelist, filter_dir, alphasort);
    filterdir = NULL;

    if (n < 0) {
        perror("scandir");
    } else {
        int i;

        for (i = 0; i < n; i++) {
            if(strcmp(".",namelist[i]->d_name) == 0 ||strcmp("..",namelist[i]->d_name) == 0)
                continue;
            printf("%s\n", namelist[i]->d_name);
            free(namelist[i]);
        }
        free(namelist);
    }
}

int main () {
    printdir(".");
}
