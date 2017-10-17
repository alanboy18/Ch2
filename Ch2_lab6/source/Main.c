#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count;
	float total = 0;
	float amount = 0;
	float tax = 0;

	printf("Welcome to Fair Tax Calcator!");
	printf("\nHere are some common expense categories:");
	printf("\n1: Hosing, 2: Food, 3: Clothing, 4: Transportations, 5: Eduation, \n6: Health care,7: Vacations\n");
	
	for (count = 1; count <= 7; count++)
	{
		printf("Please input how much paid for expenses in category %d: ",count);
		scanf("%f", &amount);
		total += amount;
	}

	tax = total *.23;

	printf("Your total Fair Tax would be $%.2f\n", tax);
	
	system("pause");
	return 0;
}