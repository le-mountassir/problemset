#include<stdio.h>

int main(){
    int i,j,k;
    i = -1;
    while(i++<8){
      j=i;
        while(j++<9){
          k=j;
            while(k++<9)
            {
                printf("%d",i);
                printf("%d",j);
                printf("%d",k);
                if(i!=7){
                    printf(", ");
                }
            }
        }
    }
    return 0;
}
