//Returning_Pointers_from_Function
#include<stdio.h> 
 
 int main(){  
     int a[] = {9,8,7,6,5};
     int n = sizeof(a)/sizeof(a[0]);
     int *mid = findMid(a, n);

     printf("%d", *mid);
      
   return 0;  
 }  

 int *findMid(int a[], int n)
 {
     return &a[n/2];
 }
  

 