#include<stdio.h>
int main()
{int wi;
float ba;
scanf("%d %f",&wi,&ba);
if((wi%5==0)&&(wi+0.5)<ba)
ba=ba-wi-0.5;
printf("\n %0.2f",ba);
return 0;
}
