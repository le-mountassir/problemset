#include <stdio.h>
int dna_rp(char *dna){
    int a=0,b=0,c=0, k = 0, h = 0;;
    while (dna[h] != '\0'){
        if (dna[h] == 'C' && dna[h+1] == 'C')
            a++;
        if(dna[h] == 'T' && dna[h+1] == 'T')
            b++;
        if(dna[h] == 'G' && dna[h+1] == 'G')
            c++;
        ///////////////
        if (a > k && a > b && a > c)
            k = a;
        if (b > k && b > a && b > c)
            k = b;
        if (c > k && c > a && c > b)
            k=c;   
        h++;        
    }
    return k+1;
}
int main(){
    char *f = "CCCGGGGTTTTTTCC";
    printf("%d", dna_rp(f));
    return 0;
}