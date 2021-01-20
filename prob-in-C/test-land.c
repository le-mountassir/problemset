#include<unistd.h>
int main(void){
    char c;
    c ='z';
    write(1, &c, 1);
}
