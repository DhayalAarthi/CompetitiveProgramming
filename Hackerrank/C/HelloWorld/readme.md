<p align="center">
    <a href="https://www.hackerrank.com/RodneyShag">
        <img height=85 src="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/styleguide/logo_wordmark-f5c5eb61ab0a154c3ed9eda24d0b9e31.svg">
    </a>
    <br>All efficient solutions to HackerRank problems
</p>

<b>Link:</b> <a href="https://www.hackerrank.com/challenges/hello-world-c/">"Hello World!" in C</a>

<b>Objective:</b> Read input and write output in C Programming.

<b>Solutions</b>
1) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution.c">Solution.c</a> - Normal solution
2) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution2.c">Solution2.c</a> - Removed unnecessary include headers
3) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution3.c">Solution3.c</a> - Using gets
4) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution4.c">Solution4.c</a> - Using gets & puts
5) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution5.c">Solution5.c</a> - printf without %s
6) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution6.c">Solution6.c</a> - scanf inside printf
7) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution7.c">Solution7.c</a> - gets inside printf
8) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution8.c">Solution8.c</a> - scanf different format input
9) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution9.c">Solution9.c</a> - printf using character by character
10) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/Hackerrank/Hackerrank/C/HelloWorld/Solution10.c">Solution10.c</a> - using fgets

## 1) Solution.c - Normal solution

```c
char s[100];
scanf("%[^\n]%*c", &s);
printf("Hello, World!\n"); 
printf("%s", s);
```
<b>Explanation:</b> 

```char s[100];```

* Declaration for the character array size 100, assuming input length won't exceed more than 100 characters which is not specified in the requirement.
* char is a keyword refering to character which allocated single byte of memory (8 bits) which is to store ACSII reference value

```scanf("%[^\n]%*c", &s);```

* scanf is library function in c programming
* scanf function reads the input from stdin
* first parameter we can pass as "format" which is pointer to the null terminator
* % matches literal 
* [] set - matching non empty characters
* \n - new line escape sequence
* %[^\n] - Will search till it reaches new line
* "%[^\n]%*c" - Will search till the new line repeatedly and read a character
* &s - Store in address of "s" variable 

```printf("Hello, World!\n");```

* printf is library function in c programming
* printf function writes the output to stdout
* first parameter which we are passing is *format
* prints "Hello, World!" and new line 

```printf("%s", s);```

* % - Introductory character in format which will look for the next parameter in the code.
* In format we are spefifying %s which will look for string or array of characters, here we refering as s. 
* When we pass s, it will pass first character address and prints till it reaches '\0' which we call as null. 
