#include <stdio.h>
int main ()
{
    int a = 10;
    float b = 10.5;
    char c = 'z';
    double e = 10.5006090;

    printf("int = %zu bytes\n", sizeof(int));
    printf("float = %zu bytes\n", sizeof(float));
    printf("char = %zu bytes\n",sizeof(char));
    printf("double = %zu bytes\n",sizeof(double));

    return 0 ;
}