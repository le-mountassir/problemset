#include <stdio.h>
int persistence(int n){
  int j=0, i=1;
  if(n<10){
    return 0;    
  }
  else{
    while(n>0){      
      i*=(n%10);
      n/=10;
    }
  }
      return 1+ persistence(i);
}
int main(){
    int k =persistence(999);
    printf("%d",k);
    return 0;
}