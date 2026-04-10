#define	HEIGHT	8
#define	WIDTH	8
#include <cstdio>

int image[HEIGHT][WIDTH] = {
  {  10,  30,  55,  80, 120, 160, 200, 230},
  {  20,  45,  70, 100, 140, 180, 220, 210},
  {  35,  60,  90, 130, 170, 210, 240, 190},
  {  50,  80, 115, 150, 190, 230, 255, 170},
  {  40,  65, 100, 140, 175, 215, 235, 150},
  {  25,  50,  80, 115, 155, 195, 210, 130},
  {  15,  35,  60,  90, 130, 165, 185, 110},
  {    5,  20,  40,  70, 105, 140, 160,  90},
};

int find_max_score(int h, int w) {

	int i, j;
	int tmp;

	tmp = image[0][0];

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			if (image[i][j] > tmp) {
				tmp = image[i][j];
			}
		}
	}return tmp;
};

int main() {

	int  MAX_SCORE;


	MAX_SCORE = find_max_score(HEIGHT, WIDTH);

	printf("최대 화소 밝기 = %d\n", MAX_SCORE);

	return 0;

}
