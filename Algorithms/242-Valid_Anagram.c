/*
 * Given two strings s and t, write a function to determine if t is an anagram of s.
 *
 * For example,
 * s = "anagram", t = "nagaram", return true.
 * s = "rat", t = "car", return false.
 *
 * Note:
 * You may assume the string contains only lowercase alphabets.
 */

#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
	int a[26] = {};

	for(int i=0;t[i]!='\0';i++){
		a[t[i]-'a']++;
	}

	for(int i=0;s[i]!='\0';i++){
		a[s[i]-'a']--;
	}

	for(int i=0;i<26;i++){
		if(a[i]!=0)return false;
	}

	return true;
}

int main(void){
	char s[] = "fuck";
	char t[] = "kucf";

	bool result = isAnagram(s,t);
	printf("%d\n",result);

	return 0;
}
