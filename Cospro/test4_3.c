#include<stdio.h>
#include<stdlib.h>
int solution(int student[], int apts) {
	int result = 0;
	for (int i = 0; i < apts; i++) {
		if (student[i] <= 12) result++;
		else {
			result += student[i] / 12; //12명 씩 몇 그룹으로 태어서 보냄
			if(student[i] % 12 != 0) result++; //나머지 학생들이 태워서 보냄 
		}
	}
	return result;
}
int main() {
	int student[] = { 14, 4, 23, 24, 24 }; //2 + 1 + 2 + 2 + 1 => 8;
	int apts = 5;
	printf("%d",solution(student, apts));
}