# include<stdio.h>
 
int main()
{
	//Initializing Variables 
	float icel,ifah,ocel,ofah;
	
	///Celsius to fahrenheit
	
	//Reading value of degree celsius
	printf("Enter degree celsius: ");
	scanf("%f",&icel);
	
	//Calculating Fahrenheit from Celsius
	ofah = (icel*(9/5))+32;
	
	//Displaying Fahrenheit
	printf("Celsius to Fahrenheit %f ",ofah);
	
//////////////////////////////////////////////////////////////////
	
	///Fahrenheit to Celsius
	
	//Reading value of degree Fahrenheit 
	printf("\nEnter degree Fahrenheit: ");
	scanf("%f",&ifah);
	
	//Calculating Celsius from Fahrenheit
	//ocel = ((ifah-32)*5)/9; 
	ocel = ((ifah-32)*0.55555556); 
	
	//Displaying Celsius
	printf("Fahrenheit to Celsius %f ",ocel);
	return 0;
	
}
