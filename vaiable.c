#include<stdio.h>
int main()
{
    // get values from user
    int A;
    long long B;
    float C;
    char D;
    scanf("%d %lld %f %c", &A, &B, &C, &D);

    // print them
    printf("%d\n%lld\n%.2f\n%c\n", A, B, C, D);

    return 0;
}