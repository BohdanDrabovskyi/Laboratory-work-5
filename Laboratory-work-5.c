#include <stdio.h>

int count_of(int n) {
    int a = 1; 
    int b = 2; 
    int c = 4; 

    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;

    int num = 0;

    for (int i = 4; i <= n; i++) {
        num = (a + b + c) % 12345;
        a = b;
        b = c;
        c = num;
    }

    return num;
}

int main() {
    int n;

    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int s = count_of(n);
    printf("Кількість шуканих послідовностей: %d\n", s);

    return 0;
}