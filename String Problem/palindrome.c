#include <stdio.h>

#include <string.h>

int main() {

char str[100];
int i, len, isPalindrome = 1;

// Ask the user to input a string 

printf("Enter a string: ");
scanf("%s", str);

len = strlen(str);

// Check for palindrome

for (i = 0; i < len / 2; i++) { 
    if (str[i] != str[len-1-i]) {
        isPalindrome = 0; 
        break;

 }

}
if (isPalindrome){
printf("%s is a palindrome.\n", str);
}
else{
printf("%s is not a palindrome.\n", str);
return 0;
}
}
