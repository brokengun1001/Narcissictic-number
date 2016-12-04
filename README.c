# Narcissictic-number
打印水仙花数
#include<stdio.h>
#include<math.h>
int JudgeSXH(int i);
int main(){
	int i;
	for(i=100;i<=1000;i++){
		if(JudgeSXH(i)){
			printf("%5d",i);
		}
	}
}

int JudgeSXH(int i){
	int a,b,c,d=i;
	a=d%10;
	d/=10;
	b=d%10;
	d/=10;
	c=d%10;
	if(i==pow(a,3)+pow(b,3)+pow(c,3)){
		return 1;
	}
	else{
		return 0;
	}
}
