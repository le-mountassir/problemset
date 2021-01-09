#include <stdio.h>

int reverse(int x){
    int index = 0;
    while (x != '\0')
    {
        index = index*10 + x%10;
        x = x / 10;
    }
    return index;
}


int main(){
    int y;
    printf("type a num=\n");
    scanf("%d", &y);
 
    int ret = reverse(y);
    printf("rv = %d \n", ret);
    return 0;
}