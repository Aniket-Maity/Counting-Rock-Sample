#include<stdio.h>
#include<stdlib.h>
#define gcx getchar_unlocked
#define pcx putchar_unlocked
typedef long int lint;

lint getValue(){
    lint n = 0;
    int c = gcx();
    while(c<'0' ||c>'9') c = gcx();
    while(c>='0' && c<='9'){
        n = n*10 + c-'0';
        c=gcx();
    }
    return n;
}
int main(){
    lint S = getValue();
    lint R = getValue();
    int rockArr[S],rangeArr[R*2];
    int i;
    for(i=0;i<S;i++){
        rockArr[i] = getValue();
    }
    while(R--){
        int count = 0;
        int limit1 = getValue();
        int limit2 = getValue();
        for(i=0;i<S;i++){
            if(limit1<=rockArr[i] && rockArr[i]<=limit2)
                count++;
        }
        printf("%d",count);
    }    
}