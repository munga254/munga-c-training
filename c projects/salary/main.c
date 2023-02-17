#include <stdio.h>
#include <stdlib.h>
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
int main()
{
 int quantity;
 float gross_salary, price;
 float bonus, commission;
 printf("Input number units sold and price\n");
 scanf("%d %f", &quantity,&price);
 bonus = BONUS_RATE * quantity;
 commission = COMMISSION * quantity * price;
 gross_salary = BASE_SALARY + bonus + commission;
 printf("\n");
 printf("Bonus = %f\n",bonus);
 printf("Commission = %f\n",commission);
 printf("Gross salary=%f\n",gross_salary);
}
