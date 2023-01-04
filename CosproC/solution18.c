#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char* name_list[], int name_list_len) {
	int count = 0; 
	for (int i = 0; i < name_list_len; i++) {
		for (int j = 0; j < strlen(name_list[i]); j++) {
			if (name_list[i][j] == 'k' || name_list[i][j] == 'j') {
				count++;
				break;
			}
		}
	}
	return count;
}
int main() {
	char* name_list[] = { "james", "jack", "ei", "kdf" };
	int name_list_len = 4;
	printf("%d", solution(name_list, name_list_len));
}