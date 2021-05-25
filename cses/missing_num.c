#include <stdio.h>

void find_missn(int n, int *l){
    int count;
    int g = n;
    while (g > 0){
        count = 0;
        while ((l[count] != '\0')&&(count+1 != n-1))
        {
            if (l[count] > l[count+1])
            {
                int c = l[count];
                l[count] = l[count+1];
                l[count+1] = c;
            }
            count++;
        }
        g--;
    }
    count = 0;
    while (count < n){
        if(count+1 != l[count]){
            printf("%d",count+1);
            break;
        }
        count++;
    }
    
}
int main(){
    int l[] = {6,7,4,2,1,5};
    find_missn(7, l);
    return 0;
}