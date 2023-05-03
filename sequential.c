#include <stdio.h>
#include <conio.h>
#include <string.h>
int first=5,second=5;
void regular()
{  
   int custid,custage,medid,quant;
   float pcs_amt,price,Tot_amt,gst;
   printf("Input Customer ID :\n");
   scanf(" %d",&custid);
   printf("Input Customer Age : \n");
   scanf(" %d",&custage);
   printf("Input the medicine ID : \n");
   scanf(" %d",&medid);
   printf("enter the quantity :\n ");
   scanf(" %d",&quant);
   printf("enter the amount of 1medicine : \n");
   scanf(" %f",&pcs_amt);

   price=quant*pcs_amt;
   gst=price*0.05;
   Tot_amt=price+gst;

   printf("Customer ID: %d\n",custid);
   printf("Customer age: %d\n",custage);
   printf("medicine ID: %d\n",medid);
   printf("quantity: %d\n",quant);
   printf("amount of 1 medicine: %f\n",pcs_amt);
   printf("price: %f\n",price);
   printf("total amount: %f\n",Tot_amt);
} 
void temporary()
{  
   int custid,custage,medid,quant;
   float pcs_amt,price,Tot_amt,gst;
   printf("Input Customer ID :\n");
   scanf(" %d",&custid);
   printf("Input Customer Age : \n");
   scanf(" %d",&custage);
   printf("Input the medicine ID : \n");
   scanf(" %d",&medid);
   printf("enter the quantity :\n ");
   scanf(" %d",&quant);
   printf("enter the amount of 1medicine : \n");
   scanf(" %f",&pcs_amt);
   price=quant*pcs_amt;
   gst=price*0.05;
   Tot_amt=price+gst;
   printf("Customer ID: %d\n",custid);
   printf("Customer age: %d\n",custage);
   printf("medicine ID: %d\n",medid);
   printf("quantity: %d\n",quant);
   printf("amount of 1 medicine: %f\n",pcs_amt);
   printf("price: %f\n",price);
   printf("total amount: %f\n",Tot_amt);
}
   void main()
{
int n;
printf("Pharmacy management(MDS) \n Enter Customer type \n");
printf("1.R:regular\n2.T:temporary \nenter your option:");
scanf("%d",&n);
switch(n)
{
case 1: regular();
    break;
case 2: temporary();
    break;
default:
       break;
}
   getch();
}