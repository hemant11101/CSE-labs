#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
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
printf ("%s ino number is %ld \n", argv[1], sb.st_dev);
printf ("%s ino number is %ld \n", argv[1], sb.st_mode);
printf ("%s ino number is %ld \n", argv[1], sb.st_nlinks);
printf ("%s ino number is %ld \n", argv[1], sb.st_uid);
printf ("%s ino number is %ld \n", argv[1], sb.st_gid);
printf ("%s ino number is %ld \n", argv[1], sb.st_rdev);
printf ("%s ino number is %ld \n", argv[1], sb.st_size);
printf ("%s ino number is %ld \n", argv[1], sb.st_blksize);
printf ("%s ino number is %ld \n", argv[1], sb.st_blocks);
printf ("%s ino number is %ld \n", argv[1], sb.st_atime);
printf ("%s ino number is %ld \n", argv[1], sb.st_mtime);
printf ("%s ino number is %ld \n", argv[1], sb.st_ctime);
return 0;
}