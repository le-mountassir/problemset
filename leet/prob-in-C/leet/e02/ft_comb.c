#include<unistd.h>
void ft_putchar(char i){
	write(1, &i, 1);
}
void ft_comb(void){
    char i,j,k;
    i='0'-1;
    while(i++<'8'){
        j=i;
        while(j++<'9'){
            k=j;
            while(k++<'9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                if(i!='7'){
                    ft_putchar(',');
					ft_putchar(' ');
                }
            }
        }
    }
}
int main(){
    ft_comb();
    return 0;
}