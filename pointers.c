#include <stdio.h>
#include <string.h>
#define maxsize 10000
void  main()
{    
   int n,i,j,a,h;
   float *p1;
   
   float custid[10000];
   int custage;
   float price[1000];
   float medicine_to_purchase[10];
   float amt[maxsize];
   float gst[1000];
   float Tot_amt[maxsize];
   float discount[maxsize];
   p1=&custid;
   char cust_type[50];
   
   printf("enter number of customer \n");
   scanf("%d",&n);

for( i=0;i<n;i++)
{
   printf("Details of customer_ID %d\n", i+1);
   printf("Input Customer ID :\n");
   scanf(" %f",&custid[i]);
   printf("Input Customer Age : \n");
   scanf(" %d",&custage);
   printf("enter customer type reg for regular temp for temporary \n");
   scanf("%s",&cust_type[i]);
   printf("enter number of medicine to purchase \n");
   scanf("%f",&medicine_to_purchase[i]);
   printf("enter the price of medicine \n");
   scanf("%f",&price[i]);
}   
for( i=0;i<n;i++)
{   
if (strcmp(cust_type,"r") == 0 || strcmp(cust_type,"R"))
{
   amt[i]=price[i]*medicine_to_purchase[i];
   gst[i]=amt[i]*0.05;
   discount[i]=(amt[i]*10)/100;
   Tot_amt[i]=amt[i]-discount[i]+gst[i];
}
else if (strcmp(cust_type,"t") == 0 || strcmp(cust_type, "T"))
{
    amt[i]=price[i]*medicine_to_purchase[i];
    gst[i]=amt[i]*0.05;

    Tot_amt[i]=amt[i]+gst[i];
}
}
for(j=0;j<n;j++)
{

                printf("Customer ID: %f\n",*p1);
                printf("Customer age: %d\n",custage);
                printf("customer type : %s\n", cust_type);
                p1++;

}

}
