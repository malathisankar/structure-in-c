// using Structure complex number fun,subtarction
#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex num1, num2, sub;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f",&num1.real, &num1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f",&num2.real, &num2.imaginary);
    sub.real = num1.real-num2.real;
    sub.imaginary = num1.imaginary-num2.imaginary;
     printf("SUB = %0.2f + %0.2fi", sub.real, sub.imaginary);
}

