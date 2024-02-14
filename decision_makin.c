 
#include <stdio.h>

// ptroto type of function in line 147
int fac(int n);
int main() {

//1)this here to notice the ; after while cause it leads to error if we forget it
 /* int n;
  do{
    printf("enter a num\n");
    scanf("%d",&n);
  }while(n !=0) ; //!!!!
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//2) print odd num 
/*int n=2,i;
for(i=1;i<20;i++){
   if(i==n){
    n =n+2;
    continue;
   }
   printf(" %d",i);
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//prob 1
 /*int i =1024;
for(;i;i= i>>1){
    printf("hello\n"); 
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//prob 2)

//!!! this shows the importance of break in switch case
//the idea of this is that case 1 ,0,5,default will be evaluated when 0 i=5+2+5+4=16
//then i++ =17 17<20 so default only is match so 17+4 =21

/*int i;
for(i=0;i<20;i++){
    switch(i){
        case 0: i+=5;
        case 1: i+=2;
        case 5: i+=5;
        default: i+=4;
    }
    printf("%d \t",i);
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


/*int i=0;
for(printf("one\n");i<3 &&  printf("");i++){
    printf("hi");
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//prob 4) 
//this is about when we exceed the max number in the renge of specified data type
/*unsigned int  i= 500;
while(i++ !=0);
printf("%d",i);*/
//السبب ان 1 هيطبع هو البوست انكريمنت يعني !!

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//pyramid prob
/*
int n;
int w=0;
int x;
printf("enter n of rows \n");
scanf("%d",&n);
int i=0;
for (int i =1 ;i<= n ;i++)
{
   
   for(int j =0; j<i +w  ; j++)
   {
    if(j==0){
      x=n-i;
      while(x--){
        printf(" ");
      }
    }
       printf("*");
    
   }
   printf("\n");
     w= i;
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//palindrome


//behind this concepet  we can say that the logic is :
// the reversed number = the original number 
//so we need to reverse the number 
//the logic we gonna use is the division by 10 
//اما بقسم باخد كل الرقم ماعدعدا اخر رقم اللي هو اصلا الباقي 
//the equation is : res =res *10 rem هاخد باقي الرقم الكبير وبعدرين اصغير الرقم واخد اللي بعدخ وهكذا
 
/*
 int n , q, res =0,rem;
 printf("inter the number");
 scanf("%d",&n);
 n=q;
 while( q !=0){
 rem = q% 10;
 res =res *10 +rem;
 q =q/10;
 }
 if(res = n){
    printf("is palindrom");
 }
 else{
    printf("is not");
 }
 */
 //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//armstrong number

//consider 371 "armstrong num"
// == (3*3*3)+(7*7*7)+(1*1*1)
// the same idea of  %10 gets the last digit

/*
int n,q,mod ,res =0;
printf("entera number");
scanf("%d",&n);
q =n;
while(q != 0){
    mod = q %10;
    res = res + mod * mod * mod;
    q =q/10;
}
if(res == n){
    printf("is armstrong");
}
else{
    printf("not armstrong");
}*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//strong number
// 145 ==1!+4!+5!
/*
int n ,q ,mod ,res =0; 
printf("enter num");
scanf("%d",&n);
q=n;
while(q !=0){
   mod =q%10;
   res = res +fac(mod);
   q =q/10;
}
if(res ==n){
    printf("strong");
}
else{
    printf("not strong");
}

} //delete this 
int fac( int n){
     if (n == 0 || n == 1) {
        return 1;
    }
     else
    {
        return n * fac(n - 1);
    }
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//add operation without +
//using inc and dec
/*

int x,y;
printf("enter 2 num");
scanf("%d %d",&x,&y);
if(y>0){
    while(y !=0){
    x++;
    y--;
    }
}
else if(y< 0)
{
     while(y !=0)
    {
    x--;
    y++;
    }
}
printf("the sum = %d",x);
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//another way :using half adder
//        (viode 53 niso)          اوي   مفهمتش 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//fibonatcci prob
// next term is obtained by taking the sum of prevous two terms
/*
int res=0;
int a =0;
int b=1;
int n;
printf(" tell a range");
scanf("%d" ,&n);
for(int i =1 ;i<=n;i++){
    printf("%d \t",a);
    res =a+b;
    a=b;
    b=res;
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//floyed triangle
//           1
//           2 3
//           4 5 6
//           7 8 9 10
//           11 12 13 14 15

/*
int n ,count=0;
printf("enter n of rows :\t");
scanf("%d",&n);
for(int i =0;i<n;i++ ){
    for(int j=0;j<i+1;j++){
        count +=1;
        printf("%d \t",count);
    }
    printf("\n");
}
*/ 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//here simple idea for the nigtive exponant and data types and format specifiers
/*
int  n ,num;
scanf("%d %d",&n,&num);
double q=1.0;
if(n >0){
    while(n--){
        q *=num;
    }
    }

else if(n<0){
    
     while(n !=0){
        q =q * (1.0/num);
        n++;
     }    
}
printf("%lf",q);
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
  
// the END:)


}





