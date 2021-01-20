#include <stdio.h>
int ft_atoi(char *str){
    int i;
    int p;
    int l;
    char  k;
    p = 0;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 48 && str[i] <= 57){
            l = 0;
            k = 48;
            while(k != str[i]){
                k++;
                l++;
            }
            p = (p * 10) + l;
        }
        else if(str[i] < 48 || str[i] > 57){
            return p;
        }
        i++;
    }
    return p;
}
int main(){
    printf("%d", ft_atoi("7077jkjkl08"));
    return 0;
}