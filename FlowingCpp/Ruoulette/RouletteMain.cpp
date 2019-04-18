#include "Roulette.h"

int main() {
	int turns = 0;
	int bullets = 0;

	srand((unsigned)time(NULL));

	printf("게임 인원 ==> ");
#pragma warning(suppress : 4996)
	if (scanf("%d", &turns)) {
		printf("총알 개수 ==> ");
	}
#pragma warning(suppress : 4996)
	if (scanf("%d", &bullets)) {
		
	}

	int bang = playRoulette(turns, bullets);
	printf("\n ===> %d번 참가자가 총에 맞았습니다..\n", bang);
}