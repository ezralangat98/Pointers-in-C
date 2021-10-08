#include<stdio.h> 
//Two or more variables cannot be returned from this function at a time
//Therefore pointers need to be used
 void minMax(int arr1[], int len, int *min, int *max){
     //using pointers to change values so that they can be 
     //refelected in the main function
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
     //Making changes to this variables outside main func without using 
     //pointers is called call by value and Changes will not be reflected 
     //in these variables because copies are being passed
     int min , max; 
     int len = sizeof (a)/sizeof (a[0]);
     minMax(a, len, &min, &max);
     printf("Max Value is: %d and Min Value is: %d", max, min);
    
   return 0;  
 }   

 