#include <stdio.h>
#include <stdbool.h>
bool isBadVersion(int x){
    if(x == 1){
        return true;
    }
    else{
        return false;
    }
}
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int i = 0;
    int r;
    bool j;
    while(n !=0){
        j = isBadVersion(i);
        if(j == true){
            return i;
        }
        else{
            i++;
            n--;
        }
    }
    return i;
}

int main(){
    int u = 1;
    int i = firstBadVersion(u);
    printf("%d\n",i);
    return 0;
}