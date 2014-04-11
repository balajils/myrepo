#include<stdio.h>
#include<math.h>
int main()
{
 int n,a,i,j,k,fact,b[100]={0};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a);
  j=1;
  while(a/pow(5,j)>=1)
  {
   b[i]=b[i]+floor(a/pow(5,j));
   j++;
  } 
 }
 for (j=0;j<i;j++)
 printf("\n%d",b[j]);
 return 0;
}
