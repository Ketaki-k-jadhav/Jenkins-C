#include <stdio.h>

int multiply(int a, int b){
    return a*b;
}

int main(){
    int x=67;
    int y=29;

    int res1=multiply(x,y);
    printf("%d * %d : %d\n",x,y,res1);

}