#include <stdio.h>
#include <conio.h>

void calculator(float first_numebr  , char operator , float second_number);

void calculator(float first_numebr  , char operator , float second_number)
{
    if (operator == '+')
        printf("%.2f + %.2f = %.2f" , first_numebr , second_number , first_numebr + second_number);
    else if (operator == '-')
        printf("%.2f - %.2f = %.2f" , first_numebr , second_number , first_numebr - second_number);
    else if (operator == '*')
        printf("%.2f * %.2f = %.2f" , first_numebr , second_number , first_numebr * second_number);
    else if (operator == '/')
        printf("%.2f / %.2f = %.2f" , first_numebr , second_number , first_numebr / second_number);
}

int main()
{
    float fnum , snum;char operatr;
    printf("Enter first numebr:");scanf("%f" , &fnum);printf("Enter second number:");scanf("%f" , &snum);
    printf("Enter operator:");operatr = getch();printf("%c\n" , operatr);calculator(fnum , operatr , snum);
    return 0;
}