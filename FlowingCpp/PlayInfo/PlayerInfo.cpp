#include "PlayerInfo.h"
#define NUM_MVP 5

static PlayInfo MVP[NUM_MVP];
static int MVPCount = NUM_MVP;

static void initRanking() {
	PlayInfo noname = { "NONAME", 1000, 1000.0 };
	for (int i = 0; i < MVPCount; i++) {
		MVP[i] = noname;
	}
}

void loadRanking(const char* filename) {
	FILE* fp;
	fopen_s(&fp, filename, "r");
	if (fp == NULL) {
		initRanking();
	} else {
		for (int i = 0; i < MVPCount; i++) {
			fscanf_s(fp, "%d%s%lf", &MVP[i].moveCount, MVP[i].name, MVP[i].elapsedTime);
		}
		fclose(fp);
	}
}

void storeRanking(const char* filename) {
	FILE* fp;
	fopen_s(&fp, filename, "w");
	if (fp == NULL) {
		return;
	}
	for (int i = 0; i < MVPCount; i++) {
		fprintf(fp, "%4d %-16s %-5.1f\n", MVP[i].moveCount, MVP[i].name, MVP[i].elapsedTime);
	}
	fclose(fp);
}

void printRanking() {
	for (int i = 0; i < MVPCount; i++) {
		printf("[%2d��] %4d %-16s %-5.1f\n", i + 1, MVP[i].moveCount, MVP[i].name, MVP[i].elapsedTime);
	}
}

int addRanking(int moveCount, double elapsedTime) {
	if (moveCount < MVP[MVPCount - 1].moveCount) {
		int pos = MVPCount - 1;
		for (; pos > 0; pos--) {
			if (moveCount >= MVP[pos - 1].moveCount) {
				break;
			}
			MVP[pos] = MVP[pos - 1];
		}
		MVP[pos].moveCount = moveCount;
		MVP[pos].elapsedTime = elapsedTime;
		printf("%d�� �Դϴ�. �̸��� �Է��ϼ���: ", pos + 1);
		
		/* scanf_s �� ���ڿ� �Է��� �޸��� ũ�⸦ �Ѿ �� �ִ� ������ ���� ���� �ݵ�� ���ڿ� �޸��� ũ�⸦ ������־�� �Ѵ�. */
		scanf_s("%s", MVP[pos].name, 255);
		return pos + 1;
	}

	return 0;
}

int main() {
	srand((unsigned int)time(NULL));
	loadRanking("ranking.txt");
	printRanking();
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", rand() % 500);
		addRanking(rand() % 500, rand() % 1000 * 0.1);
	}
	storeRanking("ranking.txt");
}

