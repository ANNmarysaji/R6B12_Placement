//string validation
#include<stdio.h>
int main(){
  char str[20];
  int count=0;
  printf("enter string to be validated:");
  scanf("%s",str);
  for(int i=0;str[i]!='\0';i++){
     if(str[i]=='*')
         count++;
     else if (str[i]=='#')
         count --;
 }
printf("count:%d",count);
 
return 0;
}