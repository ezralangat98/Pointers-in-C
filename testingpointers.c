#include<stdio.h> 

 int minMax(int arr1[], int len, int *min, int *max){
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
     
     int arr1[] = {30, 7,78,99};
     int min , max;
     int len = sizeof (arr1)/sizeof (arr1[0]);
     minMax(arr1, len, &min, &max);
     printf("Max Value is: %d and Min Value is: %d", max, min);
    
   return 0;  
 }   

 