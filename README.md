# CosproC ð
cospro cì¸ì´ 2ê¸ ëë¹ð

1. ëì í ë¹
-  int* nums = (int*)malloc(sizeof(int) * 100);
- char* s = (char*)malloc(sizeof(char) * 103);
2. ë©ëª¨ë¦¬ ì´ê¸°í 
- memset(nums, 0, sizeof(int) * 100); //ë°°ì´ 0ì¼ë¡ ì´ê¸°í
- memset(s, 'A', sizeof(char) * 103); //ë°°ì´ì 'A'ë¡ ì´ê¸°í

3. ì ë ¬í¨ì
##### (1) ì¬ì©ì ì ì í¨ì
int arr[] = {1, 2, 3, 4, 5}; <br/>
int len = arr.length();<br/>
//ì¤ë¦ì°¨ì<br/>
for(int i = 0; i < len-1; i++) { //ë§ì§ë§ ë°°ì´ì ìë ì ë ¬ë¨<br/>
	for(int j = i + 1; j < len; j++){<br/>
		if(arr[i] > arr[j]){<br/>
			int temp = arr[i];<br/>
			arr[i] = arr[j];<br/>
			arr[j] = temp;<br/>
		}<br/>
	}<br/>
}<br/>
//ë´ë¦¼ì°¨ì<br/>
for(int i = 0; i < len - 1; i++){<br/>
	for(int j = i + 1; j < len; j++){<br/>
		if(arr[i] < arr[j]){<br/>
			int temp = arr[j];<br/>
			arr[j] = arr[i];<br/>
			arr[i] = temp;<br/>
##### (2) qsort() í¨ì
- qsort(arr, arr.length(), sizeof(int), compare); <br/>
int compare(const void *a, const void *b){<br/>
	if(*(*int)a > *(int)b){<br/>
		return 1;<br/>
	}else if(*(int)a < *(*int)b){<br/>
		return -1;<br/>
	}else{ 		<br/>
		return 0;<br/>

4. ë¬¸ìì´ ë°°ì´
- char* str = (char*)malloc(sizeof(char) * strlen(str));
- char s1[10] = "Hello";
- char* animal[3] = { "dog", "cat", "rabbit"};
- char abc[4][10] = { "hello!", "hi!", "apple"};

5. í¬ì¸í°
- int num = 5;
- int* n = &num; //ëë int *n = num;
- *n = 10; // *n = *n + 5;
- printf("numì ê°ì : %d", num); // 10ì¶ë ¥
- printf("í¬ì¸í° nì ì£¼ì: %d", n);
- printf("í¬ì¸í° nì´ ê°ë¦¬í¤ë ê°: %d", *n);

5. sprintf() ì ì -> ë¬¸ìì´
- sprintf(newstr, "%d", oldint); //oldint ì ìë¥¼ newstr ë¬¸ìì´ë¡ ë³ê²½

6. ë¬¸ìì´ í¨ì
#include<string.h>
- (1) ë¬¸ìì´ì ê¸¸ì´
	- strlen(str);
- (2) ë ê°ì ë¬¸ìì´ ë¹êµ 
	- strcmp(str1, str2) 
	- ë¦¬í´ê°: -1(str1 < str2) 0(str1 == str2) 1(str1 > str2)
- (3) ë¬¸ìì´ ë³µì¬
	- strcpy(result, oldstr);
- (4) ë¬¸ìì´ í©ì¹ê¸°
	- strcat(result,oldstr);

7. atoi/atof/atol í¨ì ë¬¸ìì´ -> ì ì 
- (1) atoi() -> ë¬¸ìì´ -> ì ì
- (2) atof() -> ë¬¸ìì´ -> ì¤ì
- (3) atol() -> ë¬¸ìì´ -> ì¤ì
