#include <stdio.h>
#include <fcntl.h>   
#include <unistd.h>  
#include <string.h>  

int main() {
    // Имя файла и текст для записи
    const char *filename = "myfile.txt";
    const char *text = "Hello, system programming!\n";

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1) {
        perror("Ошибка при открытии файла");
        return 1;
    }

    printf("Файл успешно открыт. Дескриптор: %d\n", fd);

    write(fd, text, strlen(text));

    close(fd);

    printf("Данные записаны в %s. Проверьте файл командой cat.\n", filename);
    return 0;
}