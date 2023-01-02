#include<stdio.h>
void main() {
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" }; //color[5][10] 5행 10열로 5개의 단어의 길이가 10개 이하이다. 
	int i, k;
	for (i = 0; i < 5; i++) printf("%s\n", color[i]); //행별로 출력 즉, 단어별 출력

	//문자들을 하나씩 출력
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 10; k++) {
			printf("%c", color[i][k]);
		}
		printf("\n");
	}
}