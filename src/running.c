

#include <stdio.h>
#include <string.h>
int t, n;
char str[100][101];
int searchMaxSubString(char* source) {
	int subStrLen = strlen(source), sourceStrLen = strlen(source);
	int i, j;
	bool foundMaxSubStr;
	char subStr[101], revSubStr[101];
	while ( subStrLen > 0 ) {//Search for substrings of different lengths and start searching from the longest substring
		for (i = 0; i <= sourceStrLen - subStrLen; i++) {//Search all substrings of length subStrLen
			strncpy(subStr, source+i, subStrLen);
			strncpy(revSubStr, source+i, subStrLen);
			subStr[subStrLen] = revSubStr[subStrLen] = '\0';
			strrev(revSubStr);
			foundMaxSubStr = true;
			for( j = 0; j < n; j++)
				if ( strstr(str[j], subStr) == NULL && strstr(str[j], revSubStr) == NULL ) {
					foundMaxSubStr = false;
					break;
				}
			if (foundMaxSubStr) return(subStrLen);
		}
		subStrLen--;
	}
	return(0);
}

void main()
{
	int i, minStrLen, subStrLen;
	char minStr[101];

	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		minStrLen = 100;
		for (i = 0; i < n; i++) {//Enter a set of strings
			scanf("%s", str[i]);
			if ( strlen(str[i]) < minStrLen ) {//Find the shortest string in the input string
				strcpy(minStr, str[i]);
				minStrLen = strlen(minStr);
			}
		}
		subStrLen = searchMaxSubString(minStr);//Search for the longest string that satisfies the condition
		printf("%d\n", subStrLen);
	}
}
