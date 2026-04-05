#include <stdio.h>

void recursive_function(int n) {
    int local_var = n;
    printf("Глубина рекурсии: %d, Адрес переменной: %p\n", n, (void*)&local_var);
    
    recursive_function(n + 1);
}

int main() {
    printf("Запуск рекурсии...\n");
    recursive_function(1);
    return 0;
}