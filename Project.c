#include<stdio.h>
int main()
{
	float Principal_amount;
	float Interest;
	float Duration;
	float Interest_percentage;
	float Total_Interest_payable;
	float Total_amount_payable;
	float Amount_payable_per_month;

	printf("Enter the Principal_amount:");
	scanf("%f",&Principal_amount);
	printf("Your choosen Principal_amount:%f\n",Principal_amount);


	printf("Enter the Interest:");
	scanf("%f",&Interest);
	printf("Your choosen Interest:%f\n",Interest);

	printf("Enter the Duration:");
	scanf("%f",&Duration);
	printf("your choosen Duration:%f\n",Duration);
	

	 Interest_percentage=Interest/12;
	printf("Your choosen Interest_percentage:%f\n",Interest_percentage);
	
	Total_Interest_payable= Principal_amount/100* Interest_percentage;
	
	printf("Total_Interest_payable:%f\n",Total_Interest_payable);

	
	Total_amount_payable=Principal_amount+Total_Interest_payable;
	printf("Total_amount_payable:%f\n",Total_amount_payable);

	Amount_payable_per_month=Total_amount_payable/Duration;
	printf("Amount_payable_per_month:%f\n",Amount_payable_per_month);

	printf("|-----------------------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("|					M0NTHLY EMI												|\n");	
	printf("|				Rupees  %f*		 										|\n",Amount_payable_per_month);	
	printf("|		Principal_Amount			:	%f									|\n",Principal_amount);
	printf("|		Total_interest_Payable			:	%f									|\n",Total_Interest_payable);
	printf("|		Total_Amount_payable			:	%f									|\n",Total_amount_payable);
	printf("|-----------------------------------------------------------------------------------------------------------------------------------------------|");															

		

	return 0.2;
}

	