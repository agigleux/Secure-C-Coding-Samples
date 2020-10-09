#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

void func()
{
long symlink_max;
size_t bufsize;
char *buf;
ssize_t len;
 
errno = 0;
symlink_max = pathconf("/usr/bin/", _PC_SYMLINK_MAX);
if (symlink_max == -1) {
  if (errno != 0) {
    /* handle error condition */
  }
  bufsize = 10000;
}
else {
  bufsize = symlink_max+1;
}
 
buf = (char *)malloc(bufsize);
if (buf == NULL) {
  /* handle error condition */
  abort();
}
 
len = readlink("/usr/bin/perl", buf, bufsize);
buf[len] = '\0';
 free(buf);
}
