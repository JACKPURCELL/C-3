

    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    int x = 0, y = 0, dx = 0, dy = 0;
    char a[10][10];
	
    int check(){
        int z = 0;
        if((x+1)<=9){
            if(a[x+1][y]=='.')z = 1;
        }
        if((y+1)<=9){
            if(a[x][y+1]=='.')z = 1;
        }
        if((x-1)>=0){
            if(a[x-1][y]=='.')z = 1;
        }
        if((y-1)>=0){
            if(a[x][y-1]=='.')z = 1;
        }
        return z;
    }
    void go(){
        int u;
        //srand((unsigned) time(NULL));
        u = rand()% 4;
        if(u == 0){
            dx =-1;
            dy = 0;
        }
        if(u == 1){
            dx = 1;
            dy = 0;
        }
        if(u == 2){
            dx = 0;
            dy =-1;
        }
        if(u == 3){
            dx = 0;
            dy = 1;
        }
        if((x+dx)< 0
        || (x+dx)> 9
        || (y+dy)< 0
        || (y+dy)> 9)
        go();
    }
    void run(){
        int i = 66, z = 1;
        for(; i!= 91;){
            z = check();
            if(z==0)break;
            go();
            if(a[x+dx][y+dy]=='.'){
                x += dx;
                y += dy;
                a[x][y]= i;
                i++;    
            }
        }
    }
    int main(){
        int i = 0, j = 0;
        for(;i !=10; i++){
            for(j = 0;j !=10; j++){
                a[i][j] = '.';
            }
        }
        srand((unsigned) time(NULL));
        a[0][0] = 'A';
        run();
        for(i = 0;i != 10; i++){
            for(j = 0; j!= 10; j++){
                if(j== 9)printf("%c\n",a[i][j]);
                else printf("%c ",a[i][j]);
            }
        }
        return 0;
    }


