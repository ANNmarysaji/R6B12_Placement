//array reverse and replace
#include<stdio.h>
int main(){
    char arr[10];
  int n,temp;
  printf("enter no of elements:");
  scanf("%d",&n);
  printf("enter elements of the array:");
  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
    
 }
  for(int i=0;i<n/2;i++){
      temp=arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=temp;
      if(arr[i]=='0') 
           arr[i]='$';
      if(arr[n-1-i]=='0')
           arr[n-1-i]='$' ;   
}
for(int i=0;i<n;i++){
    printf(" %c",arr[i]);
    
 }
return 0;
}