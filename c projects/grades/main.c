#include  <stdio.h>
#define PI 3.142
#define AREA ((r)*(r)*PI)

main()
{

int r;
float A;
printf("Enter radius");
scanf("%d", &r);
A=AREA;
printf("area is %f",A);

getch();

}
