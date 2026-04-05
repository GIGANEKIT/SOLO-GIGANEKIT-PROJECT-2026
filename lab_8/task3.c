#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    printf("Адрес начала массива (arr):   %p\n", (void*)arr);
    printf("Адрес первого элемента (&arr[0]): %p\n", (void*)&arr[0]);
    printf("Адрес второго элемента (&arr[1]): %p\n", (void*)&arr[1]);
    printf("Адрес третьего элемента (&arr[2]): %p\n", (void*)&arr[2]);

    // Арифметика указателей
    printf("\nЗначение через arr[1]: %d\n", arr[1]);
    printf("Значение через *(arr + 1): %d\n", *(arr + 1));

    return 0;
}