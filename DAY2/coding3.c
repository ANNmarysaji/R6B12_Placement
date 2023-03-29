//array sum prime
#include<stdio.h>
int main(){
  int arr[10];
  int n,sum=0,flag=1;
  printf("enter no of elements:");
  scanf("%d",&n);
  printf("enter elements of the array:");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
 }
 for(int j=2;j<=sum/2;j++){
        flag=1;
    if (sum%j==0){
          flag=0;
          break;
    }
}
if(sum>=1 && flag==1)
    printf("sum :%d is prime",sum);  
else 
    printf("sum:%d is not prime",sum);       
 
return 0;
}