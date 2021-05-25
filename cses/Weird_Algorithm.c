#include <stdio.h>

void the_weirdo(int numb){
    while (numb != 1)
    {
        printf("%d ",numb);
        if((numb % 2) == 0){
            numb = numb / 2;
        }
        else{
            numb = (numb * 3) + 1;
        }
    }
    printf("1");
}