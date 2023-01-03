# CosproC 🌟
cospro c언어 2급 대비😚

1. 동적할당
-  int* nums = (int*)malloc(sizeof(int) * 100);
- char* s = (char*)malloc(sizeof(char) * 103);
2. 메모리 초기화 
- memset(nums, 0, sizeof(int) * 100); //배열 0으로 초기화
- memset(s, 'A', sizeof(char) * 103); //배열을 'A'로 초기화

3. 정렬함수
##### (1) 사용자 정의 함수
int arr[] = {1, 2, 3, 4, 5}; <br/>
int len = arr.length();<br/>
//오름차순<br/>
for(int i = 0; i < len-1; i++) { //마지막 배열은 자동 정렬됨<br/>
	for(int j = i + 1; j < len; j++){<br/>
		if(arr[i] > arr[j]){<br/>
			int temp = arr[i];<br/>
			arr[i] = arr[j];<br/>
			arr[j] = temp;<br/>
		}<br/>
	}<br/>
}<br/>
//내림차순<br/>
for(int i = 0; i < len - 1; i++){<br/>
	for(int j = i + 1; j < len; j++){<br/>
		if(arr[i] < arr[j]){<br/>
			int temp = arr[j];<br/>
			arr[j] = arr[i];<br/>
			arr[i] = temp;<br/>
##### (2) qsort() 함수
- qsort(arr, arr.length(), sizeof(int), compare); <br/>
int compare(const void *a, const void *b){<br/>
	if(*(*int)a > *(int)b){<br/>
		return 1;<br/>
	}else if(*(int)a < *(*int)b){<br/>
		return -1;<br/>
	}else{ 		<br/>
		return 0;<br/>

4. 문자열 배열
- char* str = (char*)malloc(sizeof(char) * strlen(str));
- char s1[10] = "Hello";
- char* animal[3] = { "dog", "cat", "rabbit"};
- char abc[4][10] = { "hello!", "hi!", "apple"};

5. 포인터
- int num = 5;
- int* n = &num; //또는 int *n = num;
- *n = 10; // *n = *n + 5;
- printf("num의 값은 : %d", num); // 10출력
- printf("포인터 n의 주소: %d", n);
- printf("포인터 n이 가리키는 값: %d", *n);

5. sprintf() 정수 -> 문자열
- sprintf(newstr, "%d", oldint); //oldint 정수를 newstr 문자열로 변경

6. 문자열 함수
#include<string.h>
- (1) 문자열의 길이
	- strlen(str);
- (2) 두 개의 문자열 비교 
	- strcmp(str1, str2) 
	- 리턴값: -1(str1 < str2) 0(str1 == str2) 1(str1 > str2)
- (3) 문자열 복사
	- strcpy(result, oldstr);
- (4) 문자열 합치기
	- strcat(result,oldstr);

7. atoi/atof/atol 함수 문자열 -> 정수 
- (1) atoi() -> 문자열 -> 정수
- (2) atof() -> 문자열 -> 실수
- (3) atol() -> 문자열 -> 실수
