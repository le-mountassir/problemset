#include <stdio.h>
int num_of_mvs(int lengh, int *arr){
    int i, k = 0;
    int sw;
    while(lengh > 0){
        i = 0;
        while(arr[i] != '\0' && i+1 != lengh){
            if(arr[i] > arr[i+1]){
                sw = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = sw;
                k++;
            }
            //printf("%d", arr[i]);
            i++;
        }
        lengh--;
    }
    return k;
}
int main(){
    int f;
    int arr[]= {3,2,5,1,7};
    printf("enter the lengh of the array :");

    //scanf("%d", &f);
    f=5;
    //printf("""enter the array : '[<10][no space : 134295]' """);
    //scanf("%ls", arr);
    printf("num of moves is : %d", num_of_mvs(f, arr));
    return 0;
}
