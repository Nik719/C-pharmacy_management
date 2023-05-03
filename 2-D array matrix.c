#include <stdio.h>
#include <stdlib.h>
 int main()
{ 
  int a[3][3],b[3][3],c[3][3],i, j;
printf("enter the 1st  matrix\n");
{
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
  scanf("%d",&a[i][j]);
   }
}
}
printf("enter the 2nd  matrix\n");
{
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
  scanf("%d",&b[i][j]);
 }
}
}
printf("the 1st is matix\n");
{
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
  printf("%d\t",a[i][j]);
}
printf("\n");
}
}
printf("the second matrix is\n");
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
printf("%d\t",b[i][j]);
}

printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){ 
  c[i][j]=a[i][j] +b[i][j];
}
}
printf("the sum of two matrices is\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
