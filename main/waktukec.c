#include <stdio.h>
#include <conio.h>
void main()
{
  float speed,t,ft,a;
  printf("enter speed:");scanf("%f",&speed);
  
printf("enter time of video :");scanf("%f",&t); 
ft=(t*60.0)/speed;
 a=ft/60.0;
  printf("\nfinal time in seconds: %f ",ft);
 printf("\nfinal time in minutes is: %f",a);
  getch();
  }
