#include <stdio.h>
#include <string.h>

int main() 
{ 
    //STRLEN
    char Sentence[50] = "This is an"; 
    char src[50] = " example"; 
    printf("Sentence Before: %s\n", Sentence); 
    // concatenating src at the end of dest 
    strcat(Sentence, src); 
    printf("Sentence After: %s\n", Sentence); 
   //STRCAT
 char name[ ]= "Hello"; 
  int len1, len2;
  len1 = strlen(name); 
  len2 = strlen("Hello World");
  printf("length of %s = %d\n", name, len1); 
  printf("length of %s = %d\n", "Hello World", len2);
  //STRCMP
   char s1[ ]= "Hello"; 
  char s2[ ]= "World"; 
  int i, j;
  i = strcmp(s1, "Hello");
  j = strcmp(s1, s2);
  printf("%d \n%d\n", i, j);
 //STRCPY
 char s3[ ]= "Hello"; 
  char s4[10]; 
  strcpy(s4, s3);
  printf("Source string = %s\n", s3); 
  printf("Target string = %s\n", s4); 
  
  return 0;
}
