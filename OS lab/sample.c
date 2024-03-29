#include<unistd.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>
#include<stdlib.h>
void printdir(char *dir, int depth) //pass path name and till which depth you want to serch folder 
{
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;
	if((dp = opendir(dir)) == NULL) {
	fprintf(stderr,"cannot open directory: %s\n", dir);
	return;
}
chdir(dir); //change the directory
while((entry = readdir(dp)) != NULL) 
{
	lstat(entry->d_name,&statbuf); //lstat=give paath name and it will return all file name and , statbuf will have all the info of file
	if(S_ISDIR(statbuf.st_mode)) {
	/* Found a directory, but ignore . and .. */
	if(strcmp(".",entry->d_name) == 0 ||
	strcmp("..",entry->d_name) == 0)
	continue;
	printf("%*s%s/\n",depth,"",entry->d_name);
	/* Recurse at a new indent level */
	printdir(entry->d_name,depth+4);
}
else printf("%*s%s\n",depth,"",entry->d_name);
}
chdir("..");
closedir(dp);
}
int main()
{
	printf("enter the file path and depth of search\n") ;
	printdir(".",1) ;
	return 0 ;
}