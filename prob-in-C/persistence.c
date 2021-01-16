#include <stdio.h>
int persistence(int n){
    int k=n,j=0;
    if(k < 10){
        k=0;
        return k; 
    }
    else{
        while(k >=10){ 
          if(n>=100000){
              n=(n/100000)*((n%1000)/100)*(n%10)*((n%100)/10)*((n%10000)/1000)*((n%100000)/10000);
              k=n;
          }
          else if(n>=10000){
              n=(n/10000)*((n%1000)/100)*(n%10)*((n%100)/10)*((n%10000)/1000);
              k=n;
          }
          else if(n>=1000){
                n=(n/1000)*((n%1000)/100)*(n%10)*((n%100)/10);
                k=n;
            }
            else if(n>=100){
                n=(n/100)*((n%100)/10)*(n%10);
                k=n;
            }
            else if(k>=10){
                n=(n%10)*(n/10);
                k=n;
            }
            j++;
        }
        return j;
    }
}
int main(){
    int k =persistence(999);
    printf("%d",k);
    return 0;
}