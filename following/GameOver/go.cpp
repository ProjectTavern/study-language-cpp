#include <stdio.h>

const double RateKphMph = 1.609344;

int main()
{
	int kph = 100;
	double mph;

	printf("KM: ");
	mph = kph / RateKphMph;
	printf(" %lf [MPH]\n", mph);
}