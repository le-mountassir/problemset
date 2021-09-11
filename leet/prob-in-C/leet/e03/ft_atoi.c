#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str){
    int i;
    int k;
    int l;
    int j;
    i=0;
    k=1;
    j=0;
    if(str[0]=='-'){
        k = -1;
    }
    if(str[0] == '-' || str[0] == '+'){
        i++;
    }
    while(str[i] != '\0'){
        if(str[i] >= 48 && str[i] <= 57){
            l = str[i] - '0';
            j = (j * 10) + l;
        }
        else{
            break;
        }
        i++;
    }
    return (k*j);
}
int  main (){
    printf("%d", ft_atoi("-2149jjdfjvj23981"));
    return 0;
}