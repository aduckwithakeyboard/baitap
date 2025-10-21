#include <stdio.h>

void main() {
    char a[20];
    int b;
    printf("Enter a hexadecimal number (e.g., 1A3F): ");
    scanf("%s", a);
    sscanf(a, "%x", &b);
    printf("Decimal: %d\n", b);
}
//nguon :https://www.w3schools.com/c/ref_stdio_sscanf.php
//nguon :https://www.geeksforgeeks.org/c/format-specifiers-in-c/
