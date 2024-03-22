// using Structure complex number fun,addition
#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex num1, num2, sum;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f",&num1.real, &num1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f",&num2.real, &num2.imaginary);
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
     printf("SUM = %0.2f + %0.2fi", sum.real, sum.imaginary);
}

