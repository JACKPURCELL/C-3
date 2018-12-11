#include <stdio.h>
#include <stdlib.h>
int main (){
char small_letter[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char big_letter[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char text[1000],result[1000];
int c,count=0,k,p;
char function;
printf("Enter message to be encrypted: ");
c=getchar();
while(1) //读取字符串
    {
        if(c == '\n') break;
                text[count]=c;
        count++;
        c=getchar();
    }

    printf("Enter shift amount (1-25): " );
    scanf("%d",&k);
    printf("Encrypted message: ");
        for(int i=0;i<count;i++){
        if(text[i]>='A'&&text[i]<='Z')
        {
            result[i]=big_letter[((text[i]-'A')+k)%26];
        }
        //找出加密后字符在字符数组里的对应位置
        else if (text[i]>='a'&&text[i]<='z')
        {
            result[i]=small_letter[((text[i]-'a')+k)%26];
        }
        else result[i]=text[i];
        printf("%c",result[i]);
    }

return 0;
}

