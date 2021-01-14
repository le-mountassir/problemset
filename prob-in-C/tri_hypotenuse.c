#include <stdio.h>
int main(){
	double r, res, fst, nd, t;
	r =0;
	printf("enter the 1st number : \n");
	scanf("%g", &fst);
	printf("-2nd number-\n");
	scanf("%g", &nd);
	res=(fst*fst)+(nd*nd);
	if(res < 0){
		res=0;
	}
	while((r*r)< res){
		r++;
	}
	if((r*r)==res){
		res=r;
	}
	else{
		res =0;
	}
	
	printf("the triangle hypotenuse is : %g\n", res);
	return 0;
}
