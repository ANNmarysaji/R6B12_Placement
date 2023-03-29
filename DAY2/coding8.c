//2D array introduction
#include<stdio.h>
int main(){
    int row,col;
    int arr[10][10];
    int d=0,ld=0,ud=0;
     int diag [10],ldiag[10],udiag[10];
    printf("enter rowno col no:");
    scanf("%d %d",&row,&col);
    printf("enter the elements row wise:\n");
    for(int i=0;i<row;i++)
       for(int j=0;j<col;j++)
           scanf("%d",&arr[i][j]);
    for(int i=0;i<row;i++){
        printf("\n");
       for(int j=0;j<col;j++){
           if (i==j){
              diag[d++]=arr[i][j];
           }
           if(i<j){
               udiag[ud++]=arr[i][j];
           }
           if(i>j){
               ldiag[ld++]=arr[i][j];
           }
           printf(" %d ",arr[i][j]);
        }
       
     }

printf("\ndiagonal elements\n");
for(int i=0;i<d;i++)
    printf(" %d ",diag[i]);

printf("\nupper diagonal elements\n"); 
for(int i=0;i<ud;i++)
    printf(" %d ",udiag[i]);
printf("\nlower diagonal elements\n"); 
for(int i=0;i<ld;i++)
    printf(" %d ",ldiag[i]);

     
return 0;

}