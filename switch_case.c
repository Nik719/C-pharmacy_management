#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
void main()
{  
   int custid,custage,medicine_to_purchase,i,a,h;
   int paracetamol_quantity,levocitrizine_quantity,rantac_quantity,amoxicillin_quantity;
   float paracetamol_rate = 5;// this rate is based per tablet 
   float levocitrizine_rate = 2;// this rate is based per tablet
   float rantac_rate = 2;// this rate is based per tablet
   float amoxicillin_rate = 10;// this rate is based per tablet
   float price,gst,Tot_amt,price_discount;
   char medicine_purchased[50];
   char cust_type[50];
   float c,d,e,f;
   char opt[50];
   printf("Input Customer ID :\n");
   scanf(" %d",&custid);
   printf("Input Customer Age : \n");
   scanf(" %d",&custage);
   printf("enter customer type reg for regular temp for temporary \n");
   scanf("%s",&cust_type);
   printf("enter number of medicine to purchase \n");
   scanf("%d",&medicine_to_purchase);
for ( i = 0; i < medicine_to_purchase; i++)
{
    printf("what do you want to purchase p for Paracetamol, l for Levocitrizine,r for Rantac,a for Amoxicillin \n");
    scanf("%s",medicine_purchased);
        if ((strcmp(medicine_purchased,"p") == 0)||(strcmp(medicine_purchased,"P") == 0))
    {
        printf("Input the paracetamol medicine ID :15 \n");
        printf("how many Paracetamol tablets u want: \n");
        scanf("%d",&paracetamol_quantity);        
        c=paracetamol_rate*paracetamol_quantity;
    }
    else  if ((strcmp(medicine_purchased,"l") == 0)||(strcmp(medicine_purchased,"L") == 0))
    {
        printf("Input the levocitrizine medicine ID :20 \n");
        printf("how many Levocitrizine tablets u want: \n");
        scanf("%d",&levocitrizine_quantity); 
        d=levocitrizine_rate*levocitrizine_quantity;
     }
    if ((strcmp(medicine_purchased,"r") == 0)||(strcmp(medicine_purchased,"R") == 0))
    {
       printf("Input the rantac medicine ID :25 \n");
       printf("how many Rantac tablets u want: \n");
       scanf("%d",&rantac_quantity);
       e=rantac_rate*rantac_quantity; 
    }
    else if((strcmp(medicine_purchased,"a") == 0)||(strcmp(medicine_purchased,"A") == 0))
    {
       printf("Input the amoxicillin medicine ID :30 \n");
       printf("how many Amoxicillin tablets u want: \n");
       scanf("%d",&amoxicillin_quantity);        
       f=amoxicillin_rate*amoxicillin_quantity;        
   }    
}
if (strcmp(cust_type,"reg") == 0 || strcmp(cust_type,"REG"))
{
   price= c+d+e+f;
   gst=price*0.05;
   price_discount=(price*10)/100;
   Tot_amt=price-price_discount+gst;
}
else if (strcmp(cust_type,"temp") == 0 || strcmp(cust_type, "TEMP"))
{
    price=c+d+e+f;
    gst=price*0.05;
    Tot_amt=price+gst;
}
do
{
    printf("enter what you want to be displayed \n 1.for customer details\n 2.customer bill \n 3.EXIT\n");
    scanf("%d",&a);
    switch (a)
        {
            case 1:
                   printf("Customer ID: %d\n",custid);
                   printf("Customer age: %d\n",custage);
                   printf("customer type : %s\n", cust_type);
                break;
            case 2:
                printf("your gst is : %f\n",gst);
                printf("price_discount: %f\n",price_discount);
                printf("your total bill is : %f\n",Tot_amt);
                break;
            case 3:
                printf("do you want to display any other information yes or no \n");
                scanf("%s",&opt);
                if (strcmp(opt,"yes") == 0||strcmp(opt,"YES") ==0)
                {
                 h=1;
                }
                 else
                {
                 h=0;
                }
        }
} while (h>0);

getch();
}
