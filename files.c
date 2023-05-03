#include <stdio.h>
#include <stdlib.h>
 
struct customer 
{
  int customer_id,age,weight,bill,medicine;
  char customer_type[30] ;
};
int main()
{
char con[100];
char yn;
FILE *fptr;
FILE *fptr2;
int size,i,Total=0;
printf("Enter no.of customer :");
scanf("%d",&size);
struct customer arr[size];
struct customer *ptr;
fptr=fopen("D:\christ.txt","w");
if (fptr == NULL)
   {
       printf("File does not exists \n");
       return 1;
   }
 
for(i=0;i<size;i++)
{
   printf("Enter customer id :");
   scanf(" %d",&arr[i].customer_id);
   printf("Enter age :");
   scanf(" %d",&arr[i].age);
   printf("Enter weight :");
   scanf(" %d",&arr[i].weight);
   printf("Enter customer type :");
   scanf(" %s",&arr[i].customer_type);
   printf("enter number of medicines:");
   scanf("%d",&arr[i].medicine);
   printf("Enter bill paid by the customer:");
   scanf(" %d",&arr[i].bill);
}

 for (i=0;i<size;i++)
{
       Total+=arr[i].bill;
}
ptr=arr;
 
 for (i=0;i<size;i++)
{
   fprintf(fptr,"customer %d \n customer id :%d\n age :%d\n weight :%d\n customer type :%s\n number of medicine : %d\n bill paid :%d\n\n",i,ptr->customer_id,ptr->age,ptr->weight,ptr->customer_type,ptr->medicine,ptr->bill);
  ptr++;
}
 fprintf(fptr,"Total Amount received by the pharmacy :%d",Total);
 fclose(fptr);
 
 printf("Do you want to extract the patient details from file(Y/N) :");
 scanf(" %c",&yn);
 
if(yn=='Y')
{
   fptr2=fopen("D:\christ.txt","r");
   if (fptr2 == NULL)
   {
       printf("File does not exists \n");
       return 1;
   }
   while (fgets(con, 1000, fptr2) != NULL)
   printf("%s",con);
   fclose(fptr2);
}
else
 return 0;
 
}
