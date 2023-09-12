#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include<time.h>
int main (int argc, char *argv[])
{
struct stat sb;
int ret;
if (argc < 2) {
fprintf (stderr, "usage: %s <file>\n", argv[0]);
return 1;
}
ret = stat (argv[1], &sb);
if (ret) {
perror ("stat");
return 1;
}
printf ("%s ino number is %ld \n", argv[1], sb.st_ino);
printf ("%s id of device containg file %ld \n", argv[1], sb.st_dev);
printf ("%s permissions %ld \n", argv[1], sb.st_mode);
printf ("%s  number of hard links %ld \n", argv[1], sb.st_nlink);
printf ("%s user id of owner %ld \n", argv[1], sb.st_uid);
printf ("%s group id of owner %ld \n", argv[1], sb.st_gid);
printf ("%s device id %ld \n", argv[1], sb.st_rdev);
printf ("%s total size %ld \n", argv[1], sb.st_size);
printf ("%s block size %ld \n", argv[1], sb.st_blksize);
printf ("%s no of block allocated %ld \n", argv[1], sb.st_blocks);
printf ("%s last acess time %s \n", argv[1], ctime(&sb.st_atime));
printf ("%s last modification time %s \n", argv[1], ctime(&sb.st_mtime));
printf ("%s ino number is %s \n", argv[1], ctime(&sb.st_ctime));
return 0;
}