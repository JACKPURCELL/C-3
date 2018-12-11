#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

int main()
{

//srand((unsigned) time(NULL));
	int k,i=0,j=0;
	char a[10][10];
	char abc;
	bool b[10][10]={false};

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j] = '.';
		}
	}
	i=0,j=0;
	a[i][j]='A';
	b[0][0]=true;
	
	for(abc='B';abc<='Z';abc++){
		k=rand()%4;
		
		if(k==0){
			j--;
			if(j<0||b[i][j]) {
			j++;
			abc--;
			}else{
				a[i][j]=abc;
				b[i][j]=true;
			}
		}
		else if(k==1){
			j++;
			if(j>9||b[i][j]) {
			j--;
			abc--;
			}else{
				a[i][j]=abc;
				b[i][j]=true;
			}
		}
		else if(k==2){
			i--;
			if(i<0||b[i][j]){
		    i++;
			abc--;
			}else{
				a[i][j]=abc;
				b[i][j]=true;
			}
		}
		else if(k==3){
	        i++;
			if(i>9||b[i][j]){
			i--;
			abc--;
			}else{
				a[i][j]=abc;
				b[i][j]=true;
			}
			
			
		}
	}
	
    for(i=0;i<10;i++){
			for(j=0;j<10;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
	return 0;
	
}
