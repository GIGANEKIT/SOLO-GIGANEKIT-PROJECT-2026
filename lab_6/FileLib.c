#include "FileLib.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void save_message(const char *filename, const char *message) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    
    if (fd != -1) {
        write(fd, message, strlen(message));
        write(fd, "\n", 1); 
        close(fd);
    }
}