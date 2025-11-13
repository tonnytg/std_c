#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>

int main(int argc, char *argv[])
{
    char buf[BUFSIZE];
    int n = argc;
    int fd;

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        exit(1);
    }

    while (1)
    {
        n = read(fd, buf, BUFSIZE);
        if (n == 0)
            break;
        if (n == -1)
        {
            perror("read");
            exit(1);
        }
        write(1, buf, n);
    }
    return (0);
}
