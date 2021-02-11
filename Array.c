

#include <stdio.h>


int main(){

	int menu,m;
	
	//////////////////// enter menu //////////////////// 
	
		
	do{
		
		printf("Choose from the menu\n\n");
		
		printf("1. Reverse\n");
		printf("2. Palindromic\n");
		printf("3. Search\n");
		printf("4. Count n-digit numbers\n");
		printf("5. Exit\n\n");
		
		scanf("%i", &menu);
		
	}while(menu < 1);
	
	
	
	if(menu > 4){
	
		return 0;
		
	}
	
	
	
	
	
	
	
	
	//////////////////// 1. reverse ////////////////////
	
	if(menu == 1){
	
		int arr[10], i;
		
		for(i=0; i<10; i++){

			printf("Enter 10 integers [%i/10]: ",i+1);
			scanf("%i", &arr[i]);
		}
		
		for(i=9; i>=0; i--){
		
			printf("%i ",arr[i]);
		
		}

		printf("\n");

	return 0;
	
	
	}
	
	
	
	
	
	
	
	//////////////////// 2. palindromic ////////////////////
	
	if(menu == 2){
	
	unsigned int arr[10];
	int i, plus, minus;
	
		for(i=0; i<10; i++){
			
			do{
			
				printf("Enter 10 1-digit integers [%i/10]: ",i+1);
				scanf("%i", &arr[i]);
			
			}while(arr[i]>9);
		}
		
		
		
		for(plus = 5, minus = 4; plus < 10 && minus >= 0; plus++, minus--){
		
			if(arr[plus] != arr[minus]){
			
				printf("\nnot palindromic\n\n");
				return 0;
			
			}
		
		}

		printf("\npalindromic\n\n");
		return 0;	
	
	}
	
	
	
	
	
	
	//////////////////// 3. search ////////////////////
	
	if(menu == 3){
	int arr[10], m, n, x;
	
		for(m=0; m<10; m++){

			printf("Enter 10 sorted integers [%i/10]: ",m+1);
			scanf("%i", &arr[m]);
			
			/// check if sorted
			
			for(n=m-1; n>=0; n--){
				
				while(arr[m] <= arr[n]){
				
					printf("Integers must be sorted! Re-enter.\nEnter 10 1-digit integers [%i/10]: ",m+1);
					scanf("%i", &arr[m]);
					
				}
			
			}
			
		}
		
		
		
		/////// search for x ///////
		
		printf("\n\nSearch for: ");
		scanf("%i", &x);
		
		////// search loop //////
		
		for(m=0; m<10; m++){
		
			if(x == arr[m]){
				printf("The integer %i was found in index %i of the array.\n\n", x, m);
				return 0;
			}
		}
		
		/////// not found ///////
		
		printf("The integer %i was not found in the array.\n\n", x);
		return 0;
	
	
	}
	
	
	
	
	
	
	//////////////////// 4. count n-digit ////////////////////
	
	if(menu == 4){
	
	unsigned long num, arr[10];
	int count, freq[11], i, lastDigit, highest, lowest, b;
	
	
	for(i=0; i<20; i++){
	
		do{
		
			printf("Enter a non-negative integer [%i/20]: ",i+1);
			scanf("%lu", &arr[i]);
		
		}while(arr[i]<0);
	
	}
	
	///// initialize all 1-10 digit to 0 /////
	
	for(count=0; count<11; count++){
	
		freq[count] = 0;
	
	}
	
	///// check all arr[i] if what digit ///// 
	
	for(i=0; i<20; i++){
		num = arr[i]; // temporary
		
		count=0; // count would equate again to 0
		while (num != 0){
		
			num /= 10;
			count++;
			
		}
		
		//increments after counting of digits
		freq[count]++;
		
	}
	
	
	for(count=0; count < 11; count++){
		
		printf("%i - digit has %i frequency/ies.\n", count, freq[count]);
		
	}
	
	highest = lowest = freq[1];
	
	for(count = 2; count < 11; count++){
	
		if(freq[count] != 0 && freq[count] < lowest){
			b = count;
			lowest = freq[count];
		}
	
	}
	
	printf("\n\nlowest frequency is: %i-digit\n", b);
	

	for(count = 2; count < 11; count++){
	
		if(freq[count] > highest){
			b = count;
			highest = freq[count];
		}
	
	}


	printf("highest frequency is: %i-digit\n\n", b);
	
	return 0;
	
	
	}
	
	
	printf("\n");
	///////// end /////////
}
