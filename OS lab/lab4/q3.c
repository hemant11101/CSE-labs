

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(int argc, char *argv[])
{
    char oldpath[20];
    printf("enter Old path: ");
    scanf("%s",oldpath);

    char *newpath = "newpath.txt";

    struct stat file_stat;
    printf("Before linking new link:\n");
    system("ls");
    int rv = stat(oldpath, &file_stat);
    if(rv != 0){
        perror("stat");
        return 1;
    }
    printf("Number of links before linking: %ld\n", file_stat.st_nlink);

    sysmlink(oldpath, newpath);

    printf("After linking new link:\n");
    system("ls");

    rv = stat(newpath, &file_stat);
    if(rv != 0){
        perror("stat");
        return 1;
    }
    printf("Number of links after linking: %ld\nThe new path is: %s\n", file_stat.st_nlink,
    newpath);

    unlink(oldpath);

    printf("After unlinking old link:\n");
    system("ls");
    
}


