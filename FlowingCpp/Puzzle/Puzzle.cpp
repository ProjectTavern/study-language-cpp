#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <cstdio>
#define DIM 4

enum Direction { Left = 75, Right = 77, Up = 72, Down = 80};
static int DirKey[4] = { Left, Right, Up, Down };
static int map[DIM][DIM];
static int x;
static int y;
static int moveCount;
static clock_t startTime;

static void init() {
	for (int index = 0; index < DIM * DIM - 1; index++) {
		map[index / DIM][index % DIM] = index + 1;
	}
	map[DIM - 1][DIM - 1] = 0;
	x = DIM - 1;
	y = DIM - 1;

	srand(time(NULL));
	startTime = clock();
	moveCount = 0;
}

static void display() {
	system("cls");
	printf("\tPuzzle\n\t");
	printf("---------------\n\t");
	
	for (int index = 0; index < DIM; index++) {
		for (int count = 0; count < DIM; count++) {
			if (map[index][count] > 0) {
				printf("%3d", map[index][count]);
			} else {
				printf(" ");
			}
		}
		printf("\n\t");
	}

	printf("---------------\n\t");
	clock_t currentTime = clock();
	double elapsedTime = (double)(currentTime - (double)startTime) / CLOCKS_PER_SEC;
	printf("\n\t�̵� Ƚ��:%6d\n\t�ҿ� �ð�:%6.1f\n\n", moveCount, elapsedTime);
}

static bool isMove(int direction) {
	/* ���� ���� ������ �˻� */
	if (direction == Right && x > 0) {
		map[y][x] = map[y][x - 1];
		map[y][--x] = 0;
	/* ���� ������ ������ �˻� */
	} else if(direction == Left && x < DIM - 1) {
		map[y][x] = map[y][x + 1];
		map[y][++x] = 0;
	/* ���� �Ʒ� ������ �˻� */
	} else if (direction == Up && y < DIM - 1) {
		map[y][x] = map[y + 1][x];
		map[++y][x] = 0;
	/* ���� �� ������ �˻� */
	} else if (direction == Down && y > 0) {
		map[y][x] = map[y - 1][x];
		map[--y][x] = 0;
	} else {
		return false;
	}

	moveCount++;
	return true;
}

static void shuffle(int shuffleCount) {
	for (int index = 0; index < shuffleCount; index++) {
		int key = DirKey[rand() % 4];
		if (isMove(key)) {
			index--;
			continue;
		}
		display();
		Sleep(50);
	}
}

static boolean isDone() {
	for (int index = 0; index < DIM; index++) {
		for (int count = 0; count < DIM; count++) {
			if (map[index][count] != index * DIM + count + 1) {
				return (index == DIM - 1) && (count == DIM - 1);
			}
		}
	}

	return true;
}

static int getDirKey() {
	return _getche() == 224 ? _getche() : 0;
}

int playPuzzle() {
	init();
	display();
	printf("\n ������ �����ּ���(����)...");
	_getche();
	shuffle(100);
	printf("\n ������ �����մϴ�...");
	_getche();

	moveCount = 0;
	startTime = clock();

	while (!isDone()) {
		isMove(getDirKey());
		display();
	}

	clock_t currentTime = clock();
	double elapsedTime = (double)(currentTime - (double)startTime);

	return 0;
}

int main() {
	playPuzzle();
}