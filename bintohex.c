#include<stdio.h>
int main(){
	long int bin;
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char res[];
	int k=1,i=0,rem=0,re=0,j=0,t;
	printf("enter binary number");
	scanf("%ld",&bin);
	while(bin){
		++i;
		rem=bin%10;
		re=re+rem*k;
		k=k*2;
		bin=bin/10;
		if(i%4==0)
		{
			res[j++]=hex[re];
			re=0;
		}
	}
	res[j++]=hex[re];
	printf("%c",res[0]);
	for(t=sizeof(res)-1;t>=0;t++){
		printf("%c",res[i]);
	}
	
	
	
}
