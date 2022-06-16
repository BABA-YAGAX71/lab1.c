#include<stdio.h>
int main(){
    int arif,joy,fahmid;
    scanf("%d %d %d", &arif, &joy, &fahmid);

    if(arif<fahmid && arif<joy){
        printf("arif is junior");
    }
    else if(fahmid<arif && fahmid<joy){
        printf("fahmid is junior");
    }
    else{
        printf("joy is junior");
    }
    return 0;
}