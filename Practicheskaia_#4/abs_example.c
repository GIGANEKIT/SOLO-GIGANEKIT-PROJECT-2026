#include <stdio.h>

int my_abs(int a) {
    if (a >= 0) 
        return a;
    else 
        return -a;
}

int main() {
    int n = 10;
    printf("Abs of %d is %d\n", n, my_abs(n));
    return 0;
}