#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newpop = population;
	int year;

	printf(" %15s%30s%25s\n", "Year form now", "Populatin (in millions)", "Increase (in millions)");

	for (year = 1; year <= 75; year++)
	{
		newpop = population;
		population= population * (1 + rate);
		
		printf("%15d%30.2f%25.2f\n",year, population,population-newpop);
	}

	system("pause");
	return 0;
}