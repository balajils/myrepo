#include<stdio.h>
#include<math.h>
int main()
{
 int T,j,i,b[100000]={0};
 long int N;
 scanf("%d",&T);
 for(i=0;i<T;i++)
 {
  scanf("%ld",&N);
  j=1;
  while(N/pow(5,j)>=1)
  {
   b[i]=b[i]+floor(N/pow(5,j));
   j++;
  } 
 }
 for (j=0;j<T;j++)
 printf("\n%d",b[j]);
 return 0;
}
