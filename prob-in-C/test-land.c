#include<stdio.h>

int main(){
    int i,j,k;
    i=0;
    while(i<8){
        j=i+1;
        while(j<9){
            k=j+1;
            while(k<=9)
            {
                printf("%d",i);
                printf("%d",j);
                printf("%d",k);
                if(i!=7){
                    printf(", ");
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}
