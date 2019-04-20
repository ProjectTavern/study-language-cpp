#pragma once
#include <cstdio>
#include <stdlib.h>
#include <time.h>

struct PlayInfo {
	char	name[255];
	int		moveCount;
	double	elapsedTime;
};

extern void loadRanking(const char* filename);
extern void storeRanking(const char* filename);
extern void printRanking();
extern int addRanking(int moveCount, double elapsedTime);
