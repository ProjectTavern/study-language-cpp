#include "Roulette.h"

int playRoulette(int turns, int bullets) {
	int start = rand() % turns;
	printf("\n���� �����ϴ�. %d������ �����մϴ�.\n", start + 1);
	while (true) {
		int pos = rand() % 6;
		printf("[%d��]\tźâ�� �������� �����ϴ�.\n", start + 1);
		printf("\t���͸� ������ �ݹߵ˴ϴ�..");
		if(getchar())
		if (pos < bullets) {
			break;
		}
		printf("\t��ҽ��ϴ�!");
		start = (start + 1) % turns;
	}
	printf("\t��!");
	return start + 1;
}