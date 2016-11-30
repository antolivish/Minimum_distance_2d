#include<stdio.h>
#include<math.h>
void main()
{
 int a[50][50],i,j,m,n,x,y,k,swap1,swap2;
 float s,c[50],small,swap;
 printf("Enter the total number of points \n");
 scanf("%d",&n);
 printf("Enter the coordinates \n");
 for(i=0;i<n;i++)
 {
  printf("Coordinate no. %d\n",i+1);
  for(m=0;m<2;m++)
  {
   //printf("Coordinate no. %d\n",i+1);
   scanf("%d",&a[i][m]);
  }
 }
 printf("Enter the key \n");
 scanf("%d",&x);
 printf("Enter the number of coordinates with smallest distance to be printed\n");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  if(a[x][0]!=a[i][0]&&a[x][1]!=a[i][1])
  {
   s=sqrt(pow((a[x][0]-a[i][0]),2)+pow((a[x][1]-a[i][1]),2));
   c[i]=s;
  }
  else
  {
  c[i]=INFINITY;
  }
 }
 small=c[0];
 //for(i=0;i<n;i++)
 //{
  //if(c[i]<small)
  //{
   //small=c[i];
  //}
  //printf("ce is %f",c[i]);
 //}
for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (c[j] > c[j+1]) /* For decreasing order use < */
      {
        swap   = c[j];
        c[j]   = c[j+1];
        c[j+1] = swap;

        swap1  = a[j][0];
        a[j][0]   = a[j+1][0];
        a[j+1][0] = swap1;

        swap2  = a[j][1];
        a[j][1]   = a[j+1][1];
        a[j+1][1] = swap2;


      }
    }
  }
 //printf("\n\nThe coordinate with small distance is %d %d and distance is %f\n\n",a[i],b[i],small); 
 for(i=0;i<k;i++)
 {
  // printf("\t\t%f\t\n",c[i]);
  printf("%d coordinate with small distance is %d %d and distance is %f \n",i+1,a[i][0],a[i][1],c[i]);
 }
}


                              
