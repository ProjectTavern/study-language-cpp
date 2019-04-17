#include <stdio.h>

const double RateKphMph = 1.609344;

int main()
{
	int kph = 100;
	double mph;

	printf("당신의 구속을 입력하시요[Km/H]: ");
	mph = kph / RateKphMph;
	printf("당신의 구속은 %lf [MPH] 입니다.\n", mph);
}