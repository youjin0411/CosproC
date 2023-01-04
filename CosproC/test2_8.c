#include<stdio.h>
#include<stdlib.h>
int solution(char* name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; i++) {
		for (int j = 0; j < strlen(name_list[i]); j++) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break;
			}
		}
	}
	return answer;
}
int main() {
	char* name_list[] = { "jack", "james", "ere", "jk"};
	int name_list_len = 4;
	printf("%d", solution(name_list, name_list_len));
}