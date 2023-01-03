#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>]

bool solution(char* str) {
	char* s = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; i < strlen(str); i++) {
		char ch = str[i];
		if (ch != " " && ch != ".") s[len++] = ch;
	}
	for (int i = 0; i < len/2; i++) {
		if (str[i] != str[len - i - 1]) return false;
	}
	return true;
}
int main() {
	char* str = "racecar";
	bool chk = solution(str);
	if (chk == true) printf("%s", "ÆÓ¸°µå·ÒÀÔ´Ï´Ù.");
	else printf("%s", "ÆÓ¸°µå·ÒÀÌ ¾Æ´Õ´Ï´Ù. ");
}