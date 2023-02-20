

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    char text[20];
    char pattern[20];

    printf("Enter the main string: ");
    scanf("%s", text);

    printf("Enter the substring: ");
    scanf("%s", pattern);

    int m = strlen(text);
    int n = strlen(pattern);

    int i, j;
    int opCount=0, flag=0;
    for(i = 0; i< m-n+1; i++) {
        j = 0;
        while(j<n && pattern[j] == text[i+j]) {
            j = j + 1;
            opCount++;
        }
        if(j==n) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("String not found");
    }
    else {
        printf("String found!");
        printf("\nAt position: %d", i);
        printf("\nOperational Count: %d", opCount);
    }
}
