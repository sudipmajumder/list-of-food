#include<stdio.h>
#include<conio.h>
void main ()
{
int x;
printf("Enter your food item\n");
scanf("%d",&x);

  switch(x)
  {
    case 1 :
    printf("pizza\tRs239\n");
    break;


    case 2:
    printf("Burgar\tRs129\n");
    break;

    case 3:
    printf("Pasta\tRs179\n");
    break;

    case 4:
    printf("French Fries\tRs99\n");
    break;

    case 5:
    printf("Sandwich\tRs149\n");
    break;

    default:
    printf("Enter food iteam is not available\n");
    break;
  }
getch();
//return 0;
}
