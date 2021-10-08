#include<stdio.h> 

 void minMax(int arr1[], int len, int *min, int *max){
 *max = *min = arr1[0];
 int i;
  for(int i= 1; i< len; i++)
  {
      if(arr1[i] > *max)
          *max = arr1[i];
      if(arr1[i] < *min)
          *min = arr1[i];
  }
 }

 int main(){  
     
     int a[] = {30, 7,78,99};
     int min , max; //Making changes to this variables outside main func...call by value
     int len = sizeof (a)/sizeof (a[0]);
     minMax(a, len, &min, &max);
     printf("Max Value is: %d and Min Value is: %d", max, min);
    
   return 0;  
 }   

 