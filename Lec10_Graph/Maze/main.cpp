#include "Location2D.h"
#include <stack>
#include <deque>
#include <queue> 
#include <iostream>
using namespace std;
const int MAZE_SIZE = 6;
char map[MAZE_SIZE][MAZE_SIZE] = {
	{'1', '1', '1', '1', '1', '1'},
	{'e', '0', '1', '0', '0', '1'},
	{'1', '0', '0', '0', '1', '1'},
	{'1', '0', '1', '0', '1', '1'},
	{'1', '0', '1', '0', '0', 'x'},
	{'1', '1', '1', '1', '1', '1'},
};

bool isValidLoc(int r, int c)
{
	if (r < 0 || c < 0 || r >= MAZE_SIZE || c >= MAZE_SIZE) return false;
	else return map[r][c] == '0' || map[r][c] == 'x';
}

int main() {

	int ds_num;
	printf("DFS 데이터 구조 라이브러리 선택 1)stack, 2)deque \n");
	scanf_s("%d", &ds_num);

	switch (ds_num) {
	case 1: {
		stack<Location2D> locStack;
		Location2D entry(1, 0);
		locStack.push(entry);

		// (학습용 기존 코드 유지)
		stack<int> intStack;
		intStack.push(3);
		int x = intStack.top();
		intStack.pop();

		stack<Location2D> locSt;
		locSt.push(Location2D(1, 0));
		Location2D p = locSt.top();
		locSt.pop();

		while (locStack.empty() == false) {
			Location2D here = locStack.top();
			locStack.pop();

			int r = here.row, c = here.col;
			printf("(%d,%d)", r, c);
			if (map[r][c] == 'x') {
				printf("미로 탐색 성공\n");
				break; // 성공 시 while문만 탈출
			}
			else {
				map[r][c] = '.';
				if (isValidLoc(r - 1, c)) locStack.push(Location2D(r - 1, c));
				if (isValidLoc(r + 1, c)) locStack.push(Location2D(r + 1, c));
				if (isValidLoc(r, c - 1)) locStack.push(Location2D(r, c - 1));
				if (isValidLoc(r, c + 1)) locStack.push(Location2D(r, c + 1));
			}
		}
		// 스택이 완전히 비어서 탈출했다면 탐색 실패인 것임
		if (locStack.empty()) printf("미로탐색 실패\n");

		break;
	}

	case 2: {
		deque<Location2D> locDeque;
		Location2D entry(1, 0);
		locDeque.push_front(entry);

		while (locDeque.empty() == false) {
			Location2D here = locDeque.front();
			locDeque.pop_front();

			int r = here.row, c = here.col;
			printf("(%d,%d)", r, c);
			if (map[r][c] == 'x') {
				printf("미로 탐색 성공\n");
				break;
			}
			else {
				map[r][c] = '.';
				if (isValidLoc(r - 1, c)) locDeque.push_front(Location2D(r - 1, c));
				if (isValidLoc(r + 1, c)) locDeque.push_front(Location2D(r + 1, c));
				if (isValidLoc(r, c - 1)) locDeque.push_front(Location2D(r, c - 1));
				if (isValidLoc(r, c + 1)) locDeque.push_front(Location2D(r, c + 1));
			}
		}
		// 데크가 완전히 비어서 탈출했다면 탐색 실패
		if (locDeque.empty()) printf("미로탐색 실패\n");

		break;
	}
	default:
		printf("잘못된 선택입니다.\n");
		break;
	}

	// --- switch와 별개로 무조건 실행되는 BFS 미로 탐색 ---

	// 맵 초기 상태로 복구
	map[1][1] = '0'; map[2][1] = '0'; map[2][2] = '0'; map[2][3] = '0';
	map[3][1] = '0'; map[3][3] = '0'; map[4][1] = '0'; map[4][3] = '0'; map[4][4] = '0';

	printf("\n//BFS로 미로탐색 구현\n");
	queue<Location2D> locQueue;
	Location2D entry(1, 0);
	locQueue.push(entry);

	while (locQueue.empty() == false) {
		Location2D here = locQueue.front();
		locQueue.pop();

		int r = here.row, c = here.col;
		printf("(%d,%d)", r, c);
		if (map[r][c] == 'x') {
			printf("미로 탐색 성공\n");
			break;
		}
		else {
			map[r][c] = '.';
			if (isValidLoc(r - 1, c)) locQueue.push(Location2D(r - 1, c));
			if (isValidLoc(r + 1, c)) locQueue.push(Location2D(r + 1, c));
			if (isValidLoc(r, c - 1)) locQueue.push(Location2D(r, c - 1));
			if (isValidLoc(r, c + 1)) locQueue.push(Location2D(r, c + 1));
		}
	}
	// 큐가 완전히 비어서 탈출했다면 탐색 실패
	if (locQueue.empty()) printf("미로탐색 실패\n");

	return 0;
}