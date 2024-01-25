int findMaxPixel(int a[][5], int height, int width);

#include <cstdio>

int main() {
	int img[3][5] = {
		{ 3, 24, 82, 12, 22 },
		{ 99, 7, 65, 73, 58 },
		{ 20, 7, 9, 48, 29 }
	};
	int maxPixel = findMaxPixel(img, 3, 5);
	printf("영상의 최대 밝기 = %d\n", maxPixel);
}

/**
* @brief Find max Pixel.
* @detail Find max Pixel.
* @param int[][5] a
* @param int height
* @param int width
* @return int
* @throw
*/
int findMaxPixel(int a[][5], int height, int width) {
	int maxVal = 0;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (maxVal < a[i][j]) {
				maxVal = a[i][j];
			}
		}
	}

	return maxVal;
}