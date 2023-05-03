#include <stdio.h> 
#include <string.h>
 
void cust_details();
void main()
{
  cust_details(); 
  
  return 0;
  
}
 
void cust_details()
{
  int custid,custage,quant;
  char cust_type[100];
  float pcs_amt,price,Tot_amt,gst,price_discount;
  printf("Input Customer ID :\n");
  scanf(" %d",&custid);
  printf("Input Customer Age : \n");
  scanf(" %d",&custage);
  printf("enter the quantity :\n");
  scanf(" %d",&quant);
  printf("enter the amount of 1medicine : \n");
  scanf(" %f",&pcs_amt);
  printf("Input the cust_type (r,t): \n");
  scanf(" %d",&cust_type);
 
if (strcmp(cust_type,"r") == 0 || strcmp(cust_type,"R"))
{
  price=quant*pcs_amt;
  gst=price*0.05;
  price_discount=(price*10)/100;
  Tot_amt=price-price_discount+gst;
}
else if (strcmp(cust_type,"t") == 0 || strcmp(cust_type, "T"))
{
  price=quant*pcs_amt;
  gst=price*0.05;
  Tot_amt=price+gst;
}
  
printf("Customer ID: %d\n",custid);
  printf("Customer age: %d\n",custage);
  printf("quantity: %d\n",quant);
  printf("amount of 1 medicine: %f\n",pcs_amt);
  printf("price: %f\n",price);
  printf("total amount: %f\n",Tot_amt);
 
}
