#include <stdio.h>
char find_short(const char *s)
{
  int wn=2000,i=0,k=1;
  while(s[i]!='\0'){
    if(s[i]==32){
      if(k<=wn){
        wn = k;
        k=0;
      }
      else{
        k=0;
      }
    }
    k++;
    i++;
  }
    return wn-1;
}
int main(){
  int h = find_short("ahmed el mountassir he");
  printf("%d",h);
  return 0;
}