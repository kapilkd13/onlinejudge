#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5][5];
	int n=5,p,flag=1,r,c,i,j;
//Taking input matrix
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}  
//taking players-code 
	scanf("%d",&p);
	
	while(flag){
                srand((unsigned)(time(NULL)));
		r=rand()%5;//randomly placing output
		c=rand()%5;
		if(a[r][c]/10==p||a[r][c]/10==0)//check randomly generated box to be 
		flag=0;
	}
	printf("%d %d",r,c);//outputs your move
}  