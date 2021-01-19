#include<stdio.h>
void ft_comb2(void){
    int i,k,j,l;
    i = -1;
    while (i++<9){
        k = -1;
        while (k++<9){
            j = -1;
            while (j++<9){
                l=-1;
                while (l++<9){
                    printf("%d",i);
                    printf("%d",k);
                    printf(" ");
                    printf("%d",j);
                    printf("%d",l);
                    if(i!=9 || l!=9 || k!=9 || j!=9){
                        printf(" ");
                        printf(",");
                    } 
                }
            }
        }       
    }
}
int main(){
    ft_comb2();
    return 0;
}