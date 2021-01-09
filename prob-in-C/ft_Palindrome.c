#include <stdio.h>

void isPalindrome(int x){
    int index =0;
    int pr = x;
    while (x != '\0')
    {
        index = index*10 + x%10;
        x = x / 10;
    }
    if (index == pr){
        printf("true");
    }
    else{
        printf("false");
    }
}


int main(){
    int y;
    printf("type a num=\n");
    scanf("%d", &y);
    isPalindrome(y);
    return 0;
}