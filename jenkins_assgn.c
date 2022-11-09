#include <stdio.h>

int multiply(int a, int b){
    return a*b;
}

int diff(int a,int b){
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main(){
    
    int x=6497;
    int y=2309;

    int res1=multiply(x,y);
    printf("%d * %d : %d\n",x,y,res1);
    
    int res2=diff(x,y);
    printf("Difference between %d and %d : %d\n",x,y,res2);

}
