#include<stdio.h> 
int main(){ 
int n,i,a[100]; 
printf("Enter number of elements:"); 
scanf("%d",&n); 
for(i=0;i<=n-1;i++){ 
  printf("Enter a value:"); 
  scanf("%d",&a[i]); 	
} 
printf("The numbers entered are:"); 
for(i=0;i<=n-1;i++)  
  printf("%d\n",a[i]); 
} 

