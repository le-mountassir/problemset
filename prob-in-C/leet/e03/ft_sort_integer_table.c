#include <unistd.h>
#include <stdio.h>
int ft_sort_int(int *tab, int size){
    int j;
    while(size >=0){
      int i= 1;
        while(tab[i]!='\0'){
            if(tab[i-1] > tab[i]){
                j = tab[i];
                tab[i] = tab[i-1];
                tab[i-1] = j;
            }
            i++;
        }
        size--;
    }
    return (*tab);
}
int main(){
    int k[] = {12,-1,142,901,'\0'};
    int i =5;
    int j=0;
    while(j <= 5){
        printf("%d",ft_sort_int(&(*k), i));
        j++;
    }
    return 0;
}