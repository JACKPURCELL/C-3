#include <stdio.h>

int main(void)
{
  int times[10]={0,0,0,0,0,0,0,0,0,0};
  int digit,count,i,n;

  printf("Enter a number: ");
  scanf("%d", &n);
if(n==0){
	times[0]=1;
}else{while (n > 0)  {
    digit = n % 10;
    times[digit]++;
    n /= 10;
  }
}


    printf("Digit:		0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:	%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",times[0],times[1],times[2],times[3],times[4],times[5],times[6],times[7],times[8],times[9]);
	return 0;
}
