#include "Roulette.h"

int main() {
	int turns = 0;
	int bullets = 0;

	srand((unsigned)time(NULL));

	printf("���� �ο� ==> ");
#pragma warning(suppress : 4996)
	if (scanf("%d", &turns)) {
		printf("�Ѿ� ���� ==> ");
	}
#pragma warning(suppress : 4996)
	if (scanf("%d", &bullets)) {
		
	}

	int bang = playRoulette(turns, bullets);
	printf("\n ===> %d�� �����ڰ� �ѿ� �¾ҽ��ϴ�..\n", bang);
}