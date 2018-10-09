#include<stdio.h>

void prchar(char c,int n){
	for(int i=1;i<=n;i++);
	printf("%c",c);
}

int main(){
	
	int height;
	
	while(1){
	
	printf("Enter height(-1 to Exit)");
	scanf("%d",&height);
    if(height==-1){
	printf("Bye!coding by 407410835");
	break;
   }
   
	for(int i=1;i<=height;i++){
		
	prchar(' ',height-i);
    prchar('*',i);
	printf("  ");
	prchar('*',i);
	printf("\n");    
	
     }
    }
    
}
