#include <stdio.h>
 #include <conio.h> 
#define maxsize 10000 
void main()
{
int x; do
{
int opt,i,j,k,opt_2,H,n,m,opt_3,binary_search; int first,last,middle,p,opt_4,z=2;
int H1,H3;
char H2;
char cust_name[maxsize]; int cust_id[maxsize];
int cust_age[maxsize];
printf("\n MENU \n 1 for entering data \n 2 for searching and displaying the data \n 3 for exit \n");
scanf("%d",&opt);
switch (opt)
{
case 1:
printf("Enter the number of CUSTOMER \n"); scanf("%d",&n);
do {
printf("\n CUSTOMER DETAILS \n 1.for customer id \n 2.for customer name \n 3.for customer age \n 4.Exit this location \n");
scanf("%d",&opt_2); switch (opt_2)
{
case 1:
printf("Enter all customer id one by one \n"); for ( j = 0; j < n; j++)
{
scanf("%d",&H1);
cust_id[j]=H1; }
break; case 2:
printf("Enter all customer name one by one \n");
for ( k = 0; k < n; k++) {
scanf("%s",&H2); cust_name[k]=H2;

}
break; case 3:
printf("Enter all customer age one by one \n"); for ( H = 0; H < n; H++)
{
scanf("%d",&H3); cust_age[H]=H3; }
break; case 4:
printf("Do you want to exit this menu\n 1.YES\n 2.No \n"); scanf("%d",&opt_3);
if (opt_3==1)
{ z=0; } else
{
z=1;
} break;
default: printf("invalid option"); // default statements
}
}while(z>0); case 2:

printf("Enter the customer id you want to search the details \n"); scanf("%d",&binary_search);
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first <= last) {
if (cust_id[middle] < binary_search)
first = middle + 1;
else if (cust_id[middle] == binary_search) {
printf("%d found at location %d.\n", binary_search, middle+1); break;

}
else
last = middle - 1;
middle = (first + last)/2;
}
if (first > last)
printf("Not found! %d not present in list.\n", binary_search); printf("\n the customer details are as follow: \n"); printf("customer id : %d\n",cust_id[middle]); printf("customer name: %c\n",cust_name[middle]); printf("customer age : %d\n",cust_age[middle]);
break;
case 3:
printf("do you want to exit this program 1.yes 2.no \n"); scanf("%d",&opt_4);
if (opt_4==1)
{
x=0; }
else {
x=1; }
break;
default: printf("invalid option");
// default statements
}
} while (x>0);
getch(); 
}
