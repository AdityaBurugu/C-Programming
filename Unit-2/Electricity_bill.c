#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, consunits;
   float chg, surchg=0, gramt,netamt;
   char custname[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",custname);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&consunits);
   if (consunits <200 )
	chg = 1.20;
   else	if (consunits>=200 && consunits<400)
		chg = 1.50;
	else if (consunits>=400 && consunits<600)
			chg = 1.80;
		else
			chg = 2.00;
   gramt = consunits*chg;
   if (gramt>300)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",custname);
   printf("Unit Consumed                       :%d\n",consunits);
   printf("Amount Charges @Rs. %4.2f  per unit  :%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

}  
