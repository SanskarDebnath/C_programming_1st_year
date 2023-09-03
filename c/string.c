#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("\nString after concatenation is:\n%s", str1);
    getch();
    return 0;
}
