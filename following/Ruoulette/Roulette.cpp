#include "Roulette.h"

int playRoulette(int turns, int bullets) {
	int start = rand() % turns;
	printf("\n총을 돌립니다. %d번부터 시작합니다.\n", start + 1);
	while (true) {
		int pos = rand() % 6;
		printf("[%d번]\t탄창을 무작위로 돌립니다.\n", start + 1);
		printf("\t엔터를 누르면 격발됩니다..");
		if(getchar())
		if (pos < bullets) {
			break;
		}
		printf("\t살았습니다!");
		start = (start + 1) % turns;
	}
	printf("\t빵!");
	return start + 1;
}