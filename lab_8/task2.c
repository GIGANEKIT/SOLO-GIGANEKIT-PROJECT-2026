#include <stdio.h>

int main() {
    printf("Размеры типов данных на этой архитектуре:\n");
    printf("char:        %zu byte\n", sizeof(char));
    printf("int:         %zu bytes\n", sizeof(int));
    printf("float:       %zu bytes\n", sizeof(float));
    printf("double:      %zu bytes\n", sizeof(double));
    printf("long:        %zu bytes\n", sizeof(long));
    printf("int pointer: %zu bytes\n", sizeof(int*)); 
    return 0;
}