#include <stdio.h>

int main()
{
  
    int n1, n2, n3;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    n3 = n1 + n2;
    printf("%d + %d = %d", n1, n2, n3);
    return 0;
}