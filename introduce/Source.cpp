#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
        char A[100];
        int B;
        float C;
        printf("Enter nickname : ");
        scanf("%s", A);
        printf("Enter age : ");
        scanf("%d", &B);
        printf("Enter grade : ");
        scanf("%f", &C);

        printf("your nickname is %s\n", A);
        printf("your age is %d\n", B);
        printf("grade is %.2f", C);
}
