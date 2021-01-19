#include <sys/types.h>
#include <string.h>

void check_if_less_found(int *s, int *c){
  if(*c < *s || *s == 0)
    *s = *c;
  *c = 0;
}

ssize_t find_short(const char *s){
  int curr = 0, shortest = 0;

  while(*s != '\0'){
    if(*s == ' ') check_if_less_found(&shortest, &curr);
    else curr++;
    s += sizeof(char);
  }
    
  check_if_less_found(&shortest, &curr);
  return shortest;
}