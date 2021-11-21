#include <stddef.h>
size_t duplicate_count(const char *text) {
  int i=0,j=0;
  char s[0]=" ";
  while(text[i]!='\0'){
    int b=i+1;
    while(text[b]!='\0'){
      if(text[i]==text[b]){
        if(s[0]!=text[b]){
          j++;
        }
        s[0]=text[b];
      }
      b++;
    }
    i++;
  }
  return j;
}