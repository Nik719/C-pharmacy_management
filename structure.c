#include<stdio.h>

struct customer

{
     int cust_id,p_age,quant;
     float tot_amt,pcs_amt,gst,price_discount,price;
     char p_type,p_name;
};
int main()
{
  int i,n; 
  struct customer p[200];
  
printf ("Enter the no. of customer:\n");
  scanf ("%d", &n);

  for ( i = 0; i < n; i++)
    {
        printf("Enter the customer ID :-\n");
        scanf("%d",&p[i].cust_id);
        printf("Enter the customer type(R=regular,T=temporary):-\n");
        scanf("%s",&p[i].p_type);
        printf("Enter the customer name :-\n");
        scanf("%s",&p[i].p_name);
        printf("Enter the customer age :-\n");
        scanf("%d",&p[i].p_age);        
        printf("enter the no. of tablet\n");
        scanf("%d",&p[i].quant);
        printf("enter the price of 1 tablet \n");
        scanf("%f",&p[i].pcs_amt);
    }
        for ( i = 0; i < n; i++)
        {
             if(p[i].p_type=='R')
             {
                    p[i].price=p[i].quant*p[i].pcs_amt;
                    p[i].gst=p[i].price*0.05;
                    p[i].price_discount=(p[i].price*10)/100;
                    p[i].tot_amt=p[i].price-p[i].price_discount+p[i].gst;
             }
else if (p[i].p_type=='T')
{
  p[i].price=p[i].quant*p[i].pcs_amt;
  p[i].gst=p[i].price*0.05;
  p[i].tot_amt=p[i].price+p[i].gst;
}
        }
    printf("CUSTOMER DETAILS\n");
 for ( i = 0; i < n; i++)
 {
   printf("customer ID: %d\n",p[i].cust_id);
   printf("customer type: %c\n",p[i].p_type);
   printf("customer NAME: %c\n",p[i].p_name);
   printf("customer AGE: %d\n",p[i].p_age);
   printf("quantity: %d\n",p[i].quant);
   printf("amount of 1 medicine: %f\n",p[i].pcs_amt);
   printf("price: %f\n",p[i].price);
   printf("total amount: %f\n",p[i].tot_amt); 

}
return 0;
}
