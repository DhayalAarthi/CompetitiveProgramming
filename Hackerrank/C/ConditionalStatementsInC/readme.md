<p align="center">
    <a href="https://www.hackerrank.com/RodneyShag">
        <img height=85 src="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/styleguide/logo_wordmark-f5c5eb61ab0a154c3ed9eda24d0b9e31.svg">
    </a>
    <br>All efficient solutions to HackerRank problems
</p>

<b>Link:</b> <a href="https://www.hackerrank.com/challenges/conditional-statements-in-c/">Conditional Statements in C</a>

<b>Objective:</b> Use conditional statement to solve the problem.

<b>Points:</b> 10

<b>Difficulty:</b> Easy

<b>Assumptions</b> 
* The input n should be greater or equals to 1 and lesser than or equals to 10 power of 9

<b>Solutions</b>

1) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution.c" target="_blank">Solution.c</a> - Simple solution using if, else if, else and printf
2) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution2.c" target="_blank">Solution2.c</a> - Solution using array of string with printf
3) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution3.c" target="_blank">Solution3.c</a> - Simple solution using if, else if, else and puts
4) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution4.c" target="_blank">Solution4.c</a> - Solution using array of string with puts
5) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution5.c" target="_blank">Solution5.c</a> - Solution using switch case and printf
6) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution6.c" target="_blank">Solution6.c</a> - Solution using switch case and puts
7) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution7.c" target="_blank">Solution7.c</a> - Solution using switch case, using tempravary variable and printf
8) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution8.c" target="_blank">Solution8.c</a> - Solution using switch case, using tempravary variable and puts
9) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution9.c" target="_blank">Solution9.c</a> - Solution using if statement and printf alone
10) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution10.c" target="_blank">Solution10.c</a> - Solution using if statement and puts alone
11) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution11.c" target="_blank">Solution11.c</a> - Solution using string array and for loop 
12) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution12.c" target="_blank">Solution12.c</a> - Solution using printf and multi ternary operator
13) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution13.c" target="_blank">Solution13.c</a> - Solution using string array and printf
14) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution14.c" target="_blank">Solution14.c</a> - Soluion using string array and while loop
15) <a href="https://github.com/DhayalAarthi/CompetitiveProgramming/blob/master/Hackerrank/C/ConditionalStatementsInC/Solution15.c" target="_blank">Solution15.c</a> - Solution using enum, string array and switch case

---
## 1) Solution.c - Simple solution using if, else if, else and printf.

<b>Code</b>
```c
    int n;
    scanf("%d",&n);

    if (n == 1)         printf("one");
    else if (n == 2)    printf("two");
    else if (n == 3)    printf("three");
    else if (n == 4)    printf("four");
    else if (n == 5)    printf("five");
    else if (n == 6)    printf("six");
    else if (n == 7)    printf("seven");
    else if (n == 8)    printf("eight");
    else if (n == 9)    printf("nine");
    else                printf("Greater than 9");
```

<b>Explanation</b>

1. ```int n;```  Declaring variable n and allocating memory as integer, which is specific to the compilers few compilers allocated 4 bytes and recent compilers allocating 8 bytes. As we didn't mentioned anything before the int, it takes as ```unsigned int a;``` which can store negative value also as value.

2. ```scanf("%d",&n);``` scanf is the functio allows program to get input from standard in which is generally from keyboard. As developer specified ```%d``` it reads input as int and store in the location of n which specified as ```&n```.

3. ```if (n == 1) printf("one");``` If is a conditional check statement, it knows only true(1) or false(0). Inside ``` n == 1 ``` is the condition, which returns true/false based on the value of n. When the value returns true it will go inside the execution. Here execution is ```printf("one");``` Which prints the output. When the condition is true, it will skip the upcoming "else if" and "else" statement. 

4. ```else if (n == 2) printf("two");``` "else if" is the condition which comes after "if" or some other "else if". When the previous condition fails, then it will come to this statment. Works same like if statement. "else if" is the optional condition and can't declare without giving "if" condition.

5. ```else printf("Greater than 9");``` "else" is the condition which comes after "if" or "else if". When all the previous condition fails then it will execute. "else" is optional condition and can't declate without giving "if" condition

6. Program checks ```if (n == 1)```. When the given value is 1, then prints the output as "one" and skips else if and else conditions in execution.

7. When point no. 6 fails then it will check ```else if (n == 2)```, When the given value is 2, then prints the output as "two" and skips else if and else conditions in execution.

8. When point no. 7 fails then it will check ```else if (n == 3)```, When the given value is 3, then prints the output as "three" and skips else if and else conditions in execution.

9. When point no. 8 fails then it will check ```else if (n == 4)```, When the given value is 4, then prints the output as "four" and skips else if and else conditions in execution.

10. When point no. 9 fails then it will check ```else if (n == 5)```, When the given value is 5, then prints the output as "five" and skips else if and else conditions in execution.

11. When point no. 10 fails then it will check ```else if (n == 6)```, When the given value is 6, then prints the output as "six" and skips else if and else conditions in execution.

12. When point no. 11 fails then it will check ```else if (n == 7)```, When the given value is 7, then prints the output as "seven" and skips else if and else conditions in execution.

13. When point no. 12 fails then it will check ```else if (n == 8)```, When the given value is 8, then prints the output as "eight" and skips else if and else conditions in execution.

14. When point no. 13 fails then it will check ```else if (n == 9)```, When the given value is 9, then prints the output as "nine" and skips else if and else conditions in execution.

15. When point no. 14 fails then it will execute ```else```, It will reach here when all the above conditions failed, then prints the output as "Greater than 9".

<b>More points from Dhayal</b>

1. Giving ``` { } ``` for ```if, else if, ```  and ```else``` is the good practice. It will make the developers and editor to understand better way. For single line statement we don't need to specifically mention ```{ }```. 

2. When the given ```n``` is more than 9, then it is suppose to go inside the condition of ```if``` and 8 ```else if``` which takes "CPU" cost to execute the program. So this code is not very efficient in process wise.

3. Having multiple ```printf``` statment will confuse the developers.

---

## 2) Solution2.c - Solution using array of string with printf

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if(n > 9){
        n = 0;
    }
    printf(numbers[n]);
```
---

## 3) Solution3.c - Simple solution using if, else if, else and puts

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    if (n == 1)         puts("one");
    else if (n == 2)    puts("two");
    else if (n == 3)    puts("three");
    else if (n == 4)    puts("four");
    else if (n == 5)    puts("five");
    else if (n == 6)    puts("six");
    else if (n == 7)    puts("seven");
    else if (n == 8)    puts("eight");
    else if (n == 9)    puts("nine");
    else                puts("Greater than 9");
```
---

## 4) Solution4.c - Solution using array of string with puts

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if(n > 9){
        n = 0;
    }
    puts(numbers[n]);
```
---

## Solution5.c - Solution using switch case and printf

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    switch( n ){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        default: printf("Greater than 9");
    }
```
---

## Solution6.c - Solution using switch case and puts

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    switch( n ){
        case 1: puts("one"); break;
        case 2: puts("two"); break;
        case 3: puts("three"); break;
        case 4: puts("four"); break;
        case 5: puts("five"); break;
        case 6: puts("six"); break;
        case 7: puts("seven"); break;
        case 8: puts("eight"); break;
        case 9: puts("nine"); break;
        default: puts("Greater than 9");
    }
```
---

## Solution7.c - Solution using switch case, using tempravary variable and printf

<b>Code</b>

```c
    int n;
    char result[15] = "";
    scanf("%d",&n);

    if (n == 1)         strcpy(result,"one");
    else if (n == 2)    strcpy(result,"two");
    else if (n == 3)    strcpy(result,"three");
    else if (n == 4)    strcpy(result,"four");
    else if (n == 5)    strcpy(result,"five");
    else if (n == 6)    strcpy(result,"six");
    else if (n == 7)    strcpy(result,"seven");
    else if (n == 8)    strcpy(result,"eight");
    else if (n == 9)    strcpy(result,"nine");
    else                strcpy(result,"Greater than 9");

    printf(result);
```
---

## Solution8.c - Solution using switch case, using tempravary variable and puts

<b>Code</b>

```c
    int n;
    char result[15] = "";
    scanf("%d",&n);

    if (n == 1)         strcpy(result,"one");
    else if (n == 2)    strcpy(result,"two");
    else if (n == 3)    strcpy(result,"three");
    else if (n == 4)    strcpy(result,"four");
    else if (n == 5)    strcpy(result,"five");
    else if (n == 6)    strcpy(result,"six");
    else if (n == 7)    strcpy(result,"seven");
    else if (n == 8)    strcpy(result,"eight");
    else if (n == 9)    strcpy(result,"nine");
    else                strcpy(result,"Greater than 9");

    puts(result);
```
---

## Solution9.c - Solution using if statement and printf alone

<b>Code</b>

```c
    int n;
    scanf("%d", &n);

    if (n == 1) printf("one");
    if (n == 2) printf("two");
    if (n == 3) printf("three");
    if (n == 4) printf("four");
    if (n == 5) printf("five");
    if (n == 6) printf("six");
    if (n == 7) printf("seven");
    if (n == 8) printf("eight");
    if (n == 9) printf("nine");
    if (n > 9)  printf("Greater than 9");
```
---

## Solution10.c - Solution using if statement and puts alone

<b>Code</b>

```c
    int n;
    scanf("%d", &n);

    if (n == 1) puts("one");
    if (n == 2) puts("two");
    if (n == 3) puts("three");
    if (n == 4) puts("four");
    if (n == 5) puts("five");
    if (n == 6) puts("six");
    if (n == 7) puts("seven");
    if (n == 8) puts("eight");
    if (n == 9) puts("nine");
    if (n > 9)  puts("Greater than 9");
```
---

## Solution11.c - Solution using string array and for loop

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    for(int i=0;i<sizeof(numbers) / sizeof(int); i++){
        if(i == n) printf(numbers[i-1]);
    }
    if(n > 9){
        printf("Greater than 9");
    }
```
---

## Solution12.c - Solution using printf and multi ternary operator

<b>Code</b>

```c
    int n;
    scanf("%d", &n);
    printf(
        ( n == 1 ) ? "one" :
        ( n == 2 ) ? "two" :
        ( n == 3 ) ? "three" :
        ( n == 4 ) ? "four" :
        ( n == 5 ) ? "five" :
        ( n == 6 ) ? "six" :
        ( n == 7 ) ? "seven" :
        ( n == 8 ) ? "eight" :
        ( n == 9 ) ? "nine" :
        "Greater than 9"
    );
```
---

## Solution13.c - Solution using string array and printf

<b>Code</b>

```c
  int n;
  scanf("%d",&n);

  char numbers[10][15] = {
    "Greater than 9",  "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
  };
  puts(numbers[n < 10 ? n : 0]);
  return 0;
```
---

## Solution14.c - Soluion using string array and while loop

<b>Code</b>

```c
    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    int i=0;
    while(i<sizeof(numbers) / sizeof(int)){
        if(i == n) printf(numbers[i-1]);
        i++;
    }
    if(n > 9){
        printf("Greater than 9");
    }
```
---

## Solution15.c - Solution using enum, string array and switch case

<b>Code</b>

```c
    int n;
    enum numbers { one = 1, two, three, four, five, six, seven, eight, nine };
    char numS[10][15] = {
        "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
  
    scanf("%d", &n);
    switch( n ){
        case one : printf(numS[one]); break;
        case two : printf(numS[two]); break;
        case three : printf(numS[three]); break;
        case four : printf(numS[four]); break;
        case five : printf(numS[five]); break;
        case six : printf(numS[six]); break;
        case seven : printf(numS[seven]); break;
        case eight : printf(numS[eight]); break;
        case nine : printf(numS[nine]); break;
        default : printf(numS[0]);
    }
```
---