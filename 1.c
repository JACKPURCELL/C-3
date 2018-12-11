#include<stdio.h>

int main(){
	char c[24];
	int i = 0, n = 0;
	
	printf("Enter phone number: ");
	c[i] = getchar();
	while(c[i] != '\n'){
		i++;
		c[i] = getchar();
	}
	
	for(;n <= i;n++){
		switch(c[n]){
			case 'A': printf("2");break;
			case 'B': printf("2");break;
			case 'C': printf("2");break;
			case 'D': printf("3");break;
			case 'E': printf("3");break;
			case 'F': printf("3");break;
			case 'G': printf("4");break;
			case 'H': printf("4");break;
			case 'I': printf("4");break;
			case 'J': printf("5");break;
			case 'K': printf("5");break;
			case 'L': printf("5");break;
			case 'M': printf("6");break;
			case 'N': printf("6");break;
			case 'O': printf("6");break;
			case 'P': printf("7");break;
			case 'Q': printf("7");break;
			case 'R': printf("7");break;
			case 'S': printf("7");break;
			case 'T': printf("8");break;
			case 'U': printf("8");break;
			case 'V': printf("8");break;
			case 'W': printf("9");break;
			case 'X': printf("9");break;
			case 'Y': printf("9");break;
			case 'Z': printf("9");break;
			case  45: printf("-");break;
			case  48: printf("0");break;
			case  49: printf("1");break;
			case  50: printf("2");break;
			case  51: printf("3");break;
			case  52: printf("4");break;
			case  53: printf("5");break;
			case  54: printf("6");break;
			case  55: printf("7");break;
			case  56: printf("8");break;
			case  57: printf("9");break;			
		}
	}
	printf("\n");
	return 0;
		
}
