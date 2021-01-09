#include <stdio.h>

int reverse(int x){
    long index= 0;
    while (x != 0){
        index = index * 10;  
        index = index + x % 10;
        x = x / 10;
    }
    if(index > -2147483648 && index < 2147483647){
        index=index;
    }
    else{
        index = 0;
    }
    return index;
}
int main(){
    long y;
    printf("type a num=\n");
    //scanf("%d", &y);
    y = 2147483648;
    long ret = reverse(y);
    printf("rv = %d \n", ret);
    return 0;
}