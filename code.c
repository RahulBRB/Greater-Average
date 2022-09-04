#include<stdio.h>
int main(){
    
    int T;
    scanf("%d", &T);
    
    int A,B,C;
    
    while(T--){
    scanf("%d%d%d", &A,&B,&C);
    if(((A+B)/2) > C){
        printf("YES \n");
    } else {
        printf("NO \n");
    }}
    return 0;
}
