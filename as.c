#include <stdio.h>


int main(){
    
  

int c,r,i,j;
double a[100][100];
a[0][0]=1 ,a[0][1]=0;
c=50;
r=3;

    
    for(i=1;i<50;i++) {
        a[i][0]=1;
         a[i][i]=1;
       a[i][i+1]=0; }

for (i=1; i <c;i++)
  {
for (j=1;j< r;j++)
{
a[i][j]= a[i-1][j-1] + a[i-1][j];
        }

r++;
} 
    
  r=1;
    for(i=0;i<50;i++) 
    {
   for(j=0;j<r;j++)
  printf("%.0lf\t",a[i][j]);
  printf("\n");
        r++;
   } 
    return 0;   
}