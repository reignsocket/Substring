Problem Description  
There are some case-sensitive strings of English characters. Please write a program to find the longest string x, such that: for any y, x or y substring in the given string, or a new string after the reverse order of the characters in x Is a substring of y.
Input: The first line of the input is an integer t (1 <= t <= 10), where t is the number of test data. For each set of test data, the first line is an integer n (1 <= n <= 100), indicating that n strings have been given. Next n lines, each line gives a string between 1 and 100.
Output: For each set of test data, output one line, giving the length of the string x required in the title; if no string is found, the output 0.
  
Input sample  
2  
3  
ABCD  
BCDFF  
BRCD  
2  
Rose  
Orchid  
  
Output sample  
2  
2  

problem analysis  
Suppose x0 is the shortest of the input strings, x is the string you are looking for, and x' is the string obtained after x is reversed. Obviously, either x is a substring of x0 or x' is a substring of x0. Therefore, as long as each substring x of x0 is taken out, it is judged whether x satisfies a given condition, and the longest substring in which the condition is satisfied is found.  
  
solution  
After entering a set of strings, first find the shortest string x0. Then search for the substring that satisfies the condition based on x0. The substrings of x0 are judged from time to time to determine whether the condition is satisfied until a qualified substring is found. The key to this problem is twofold:  
(1) Search each substring of x0, and judge from the length to the short of the length of the substring, do not miss any
What substring.  
(2) Proficiency in the following string processing functions to ensure that the program code is simple and efficient.  
Strlen: calculate the length of the string  
Strncpy: copy the substring of the string  
Strcpy: copy string  
Strstr: look for substrings in strings  
Strrev: reverse the string  
  
Implementation skills  
In theory, you can find the desired answer x by taking a string y from the input string and then searching for the eligible substring of y. From the input string, select the shortest string as the basis for the search, which can improve the efficiency of the search.
  
  
Common mistakes  
When using strncpy to get a substring, you need to add the string terminator '\0' at the end of the fetched substring.  
