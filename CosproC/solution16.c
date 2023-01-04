#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int height[], int height_len, int k) {
	int count = 0;
	for (int i = 0; i < height_len; i++) {
		if (height[i] > k) count++;
	}
	return count;
}
int main() {
	int height[] = { 165, 170, 175, 180, 184 };
	int height_len = 5;
	int k = 175;
	printf("%d", solution(height, height_len, k));
}