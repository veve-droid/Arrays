#include <stdio.h>


int main(){

	//variables data types
	int num;
	
	
	//menu
	printf("1.Reverse\n");
	printf("2.Palindromic\n");
	printf("3.Search\n");
	printf("4.Count n-digit numbers\n");
	printf("5.Exit\n\n");
	
	
	//intro
	do{
		printf("Choose from the menu above: ");
		scanf("%i", &num);
	}while(num < 1);
	
	if(num>5){
		printf("Invalid input.\n");
		return 0;
	}
	
	//body
	
	//reverse
	
	if(num==1){
	int n, i, a[20], b[10];
	
		printf("Enter 10 positive integers: ");
		
		for(i=0;i<10;i++){
			scanf("%d", &a[i]);
			if(a[i]<0)
				return 0;
		}
		
		printf("\n");
		
		for(i=9; i>=0;i--){
		printf("%d ", a[i]);}
		
	printf("\n\n");
	return 0;
	}
	
	//palindrome
	
	if(num==2){
	int n, i, y=1, a[20], b[10];
	
		printf("Enter 10 1-digit integers: ");
		
		for(i=0;i<10;i++){
			scanf("%d", &a[i]);
			if(a[i]>9 || a[i]<-9)
				return 0;
		}
		
		printf("\n");
		
		for(i=0;i<5;i++)
			if(a[i] != a[9-i]){
			printf("Not Palindromic\n\n");
			return 0;
			}
			
	printf("Palindromic\n\n");
	
	}
	
	//search
	
	if (num==3){
	int n, i, z, x=0, y=1, a[20];
	
		printf("Enter 10 sorted integers(increasing): ");
		
		while(y){
			
			for(i=0;i<10;i++){
			scanf("%d", &a[i]);
			y=0;
			
				if(i>0 && !(a[i-1]<a[i])){
				y=1;
				
				printf("Integers should be in increasing order!\n");
				return 1;
				}
			}
		}
		
		printf("Find: ");
		scanf("%d", &x);
		
		y=0;
		z=9;
		
		while(y<z){
		n=(y+z)/2;
		
			if(x>a[n]){
				y=n+1;}
			else
				z=n;		
		}
		
		if(x==a[y]){
			printf("%d is in the list.\n",x);
			return 0;
		}
		
		else 
			printf("%d is not in the list.\n",x);
			
	}
	
	// 20 integers
	
	if(num==4){
	
		int n, i, z, x=0, y=1, a[20], b[10];
		
		printf("Enter 20 non-negative integers.\n");
		
		for(i=0;i<10;i++){
			b[i]==0;
		}
		
		for(i=0;i<20;i++){
		scanf("%d", &a[i]);
		
			if(a[i]<0) {
			return 0;}
		
		x=0;
		while(a[i]>=10){
			x++;
			a[i]/=10;
		}
		
		b[x]++;
		
		}
	
		y=0;
		z=20;
		
		for(i=0;i<10;i++){
		
			if(y<b[i]) {
				y=b[i];}
			
			if(z>b[i] && b[i]>0){
				z=b[i];}
		}
		
		printf("Most frequent: %d ",y);
		
		for(i=0;i<10;i++){
			
			if(b[i]==y){
				printf("%d",i+1);}
				
		}
		
		printf("-digit numbers\nLeast frequent: %d ",z);
		
		
		for(i=0;i<10;i++){
			
			if(b[i]==z){
				printf("%d",i+1);}
				
		}
		
		printf("-digit numbers\n");
		
		
		return 0;
	
	}
	
	
	return 0;
}
