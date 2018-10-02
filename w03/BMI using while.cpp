#include<stdio.h>
#include<math.h>
int main(){
	float a,b,bmi;
	printf("Enter your height:");
	scanf("%f.2",&a);
	printf("Enter your weigft:");
	scanf("%f.1",&b);
	bmi=b/(a*a);
	
	while(bmi>=0){
		    if(bmi<18.5)printf("過輕\n");
		    else if(bmi>=18.5 &&bmi<24)printf("正常\n");
		    else if(bmi>=24&&bmi<27)printf("過重\n");
		    else if(bmi>=27&&bmi<30)printf("輕度肥胖\n");
		    else if(bmi>=30&&bmi<35)printf("中度肥胖\n");
		    else printf("重度肥胖\n");
		    printf("Enter your height:");
	        scanf("%f.2",&a);
	        printf("Enter your weigft:");
	        scanf("%f.1",&b);
	}
}
