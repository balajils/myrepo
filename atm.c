#include<stdio.h>
int main()
{float wi,ba;
scanf("%0.2f %0.2f",&wi,&ba);
if((wi%5==0)&&(wi+0.5)<ba)
ba=ba-wi-0.5;
printf("%0.2f",ba);
return 0;
}
