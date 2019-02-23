#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    char numbers[10][15] = {
      "Greater than 9", 
      "one", "two", "three",
      "four", "five", "six",
      "seven", "eight", "nine"
    };

    if(n > 9){
        n = 0;
    }
    printf("%s", numbers[n]);
    return 0;
}