//3.1 分队列
#include<stdio.h>
 int main()
{
int n;
int i=1;
   scanf("%d",&n);
   for(i=1;i<n;i++){
		if(i%2==0){
   		printf(" ");
   		}
  else{ printf("%d",i);
		}
	}
if(n%2!=0){
	printf("%d",n);
}

return 0;
}

//3.2 时间转换
#include<stdio.h>
 
int main()

{
   int x = 0;
   int a = 0;
   int b = 0;
   scanf("%d", &x);
   a = x/100;
   b = x%100;
   if(a<8){  
      a += 16;}
   else{      
      a -= 8;}
   if( a!=0){
    printf("%d", 100*a+b);
	}
   else if((b/10==0)&&(a==0)){
   	printf("%d", b%10);
	}
   else if((b/10!=0)&&(a==0)){
   printf("%d", b);
	}
return 0;
}
  
//4.1 奇偶个数
#include<stdio.h>
 int main()
{
	int a = 0;
	int countji = 0;
	int countou = 0;
	scanf("%d", &a);
	while (a!=-1){
   		if(a%2==0){
      		countou ++;
   		} else {
      		countji ++;
   		}
   	scanf("%d", &a);
  	}
printf("%d %d" , countji, countou);

return 0;
}

//4.2 数字特征值
#include<stdio.h>
int main()
{
	int x = 0;
	int s = 0;
	int t = 0;
	int b = 0;
	int sum = 1;
	int p = 0;
	int count = 2;
	int k = 0;
	scanf("%d", &x);
	s = x % 10;
	if (s%2!=0) {
      	p = 1;
   	} else {
      p = 0;
   	}
	t = x/10;
	while (t!=0){
   		b = t%10;
   		sum = sum *2;
   		if (((b%2==0)&&(count%2==0)) || ((b%2!=0)&&(count%2!=0))){
      		k = k + sum;
      	} 
   	count++;
   	t = t/10;
	}

 	printf ("%d",k+p);
   	
   	return 0;
}

//5.1质数求和

#include<stdio.h>

int main()
{
	int m,n;
	scanf("%d %d", &n,&m);

	int x = 2;//第一个素数
	int sum = 0; //求和n到m的素数
	int i; //质数判断循环所用
	int cnt = 0;//指数计数器

	while(cnt<m){
    	int isprime = 1;
    	for(i=2;i<x;i++){
        	if(x%i==0){
            	isprime=0;
            	break;
        	}
    	}
    	if(isprime == 1){
        	cnt++;
    	}
    
    	if(cnt<=m && cnt>=n && isprime==1){ //非常重要，isprime=1必须作为条件并入其中。
    		                                //根据纸上的演算，偶数虽然没有cnt，但是也会和奇数有相同的cnt，所以需要区分。
        	sum = sum +x;
    	}
    	x++;
	}
printf("%d",sum);

return 0;
}

//eg.   x   cnt
//      2    1
//      3    2
//      4    2  <- 4 被重复计入sum，所以需要条件来筛选质数
//      5    3 

//6.1高精度小数
//此题不用数组也能完成，但是鉴于这个章节讨论的是数组，所以采用数组的方式来记录数字

#include<stdio.h>
int main()
{   
  int a;
  int b;
  int size = 200;
  scanf("%d/%d",&a,&b);
  int number[size];
  int c = 0;
  for(int x = 0;x <size;x++){
    number[x]=0;
  }
    printf("0.");
    for(int i = 0;i < size;i++ ){
        c = a*10/b; //商是小数点后的数字
        number[i] = c;
        printf("%d",number[i]);
        a = a*10%b; //余数，然后判断是否除尽；如果没有除尽，则作为下一个被除数重新开始循环；若除尽，则结束，且后面的小数0都不用显示
        if(a==0){
            break;
        }
    }
  return 0;
}


//6.1 多项式加法


#include <stdio.h>
//#include <math.h>
 
int main(int argc, const char * argv[]) {
    int a,b;
     
    int number[101]={0};
    for(int i=0;i<2;i++)
    {
    do
    {
        scanf("%d %d",&a,&b);
        number[a]+=b;
    }while(a);
    }
        int c=1;
    for(int i=101-1;i>=2;i--)
    {
        if(c)
        {
            if(number[i]==1||number[i]==-1)
            {
                printf("x%d",i);
                c=0;
            }
            else if(number[i]!=0)
            {
                printf("%dx%d",number[i],i);
                c=0;
            }
        }else
        {
            if(number[i]==1)
            {
                printf("+x%d",i);
                 
            }else if(number[i]==-1)
            {
                printf("x%d",i);
                 
            }
             
            else if(number[i]>0)
            {
                
               printf("+%dx%d",number[i],i);
            }else if(number[i]<0)
            {
                printf("%dx%d",number[i],i);
            }
             
        }
             
         
    }
    if(c)
    {
        if(number[1]==1||number[1]==-1)
        {
            printf("x");
            c=0;
        }else if(number[1]!=0)
        {
            printf("%dx",number[1]);
            c=0;
        }
     
        if(number[0]!=0)
        {
            printf("%d",number[0]);
            c=0;
        }
    }else
    {
        if(number[1]==1)
        {
             
             printf("+x");
        }else if(number[1]==-1)
        {
             
            printf("x");
        }
        else if(number[1]>0)
        {
           printf("+%dx",number[1]);
             
        } else if(number[1]<0)
        {
            printf("%dx",number[1]);
             
        }
         
        if(number[0]>0)
        {
            printf("+%d",number[0]);
             
        }else if(number[0]<0)
        {
            printf("%d",number[0]);
             
        }
 
    }
     
    if(c){
        printf("0");
    }
    printf("\n");
    return 0;
}




//6.2 畸点
#include<stdio.h>


int main()
{
  int size;
  scanf("%d", &size);
  int a[size][size];

  for(int i =0; i < size; i++){
    for(int j = 0; j <size; j++){
      scanf("%d", &a[i][j]);
    }
  }
  int max = 0;
  int min = 0;
  int row = 0;
  int col = 0;
  for(int i = 0; i < size; i++){  //所有的行和列都要遍历
    max = a[i][0];
    for(int v = 0; v < size; v++){
      if(max < a[i][v]){
        max = a[i][v];
        col = v;
      }
    }
    min = a[0][col];
    for( int u = 0; u < size; u++){
      if(min > a [u][col]){
        min = a [u][col];
        row = u;
      }
    }
    if(min==max){
      printf("%d %d",row,col );
      break;
    }

    
  }
  if (min!=max){
    printf("NO");
  }

  return 0;
}