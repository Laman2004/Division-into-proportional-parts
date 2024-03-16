#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float func(float x){
	float y;
	y=2*x*x+x;
	return y;
}
int main(){
	int c=0;
	float e=0.2,x,y,z,a,b,L;
	float fx,fy,fz;
	a=0;
	b=10;
	L=fabs(b-a);
	while(L>=e){
		x=(a+b)/2;
		L=fabs(b-a);
		if(L>=e){
		    fx=func(x);
		    y=a+L/4;
		    z=b-L/4;
		    fy=func(y);
		    fz=func(z);
		    if(fy<fx){
			    b=x;
		    }
		    else{
			    if(fz<fx){
				    a=x;
			    }
			    else{
				    a=y;
				    b=z;
			    }
		    }
		}
		printf("x[%d]= %f\t\t",c,x);
		printf("y[%d]= %f\t\t",c,y);
		printf("z[%d]= %f\n",c,z);
		c++;
	}
	return 0;
}
