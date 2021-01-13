#include <stdio.h>
int main(){
	double res, fst, nd;
	printf("enter the 1st number : \n");
	scanf("%lf", &fst);
	printf("-2nd number-\n");
	scanf("%lf", &nd);
	res=(fst*fst)+(nd*nd);
	res*=res;
	printf("the triangle hypotenuse is : %f\n", res);
	return 0;
}
