#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    struct stat st;
    if (fstat(fd, &st) == -1) {
        close(fd);
        return 0;
    }

    size_t file_size = st.st_size;

    char *buffer = malloc(file_size);
    if (buffer == NULL)
    {
        close(fd);
        return 0;
    }

    ssize_t bytes_read = read(fd, buffer, file_size);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    ssize_t bytes_written = write(STDERR_FILENO, buffer, bytes_read);
    free(buffer);
    close(fd);

    if (bytes_written != bytes_read)
        return 0;

    return bytes_written;
}
