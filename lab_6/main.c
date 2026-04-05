#include <stdio.h>
#include "FileLib.h"

int main() {
    printf("Это обычный вывод (stdout)\n");

    fprintf(stderr, "Внимание! Сообщение об ошибке (stderr)\n");

    save_message("log.txt", "Программа успешно запущена");
    save_message("log.txt", "Библиотека FileLib работает корректно");

    return 0;
}