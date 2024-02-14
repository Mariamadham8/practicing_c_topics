/*
#include<stdio.h>
int main(){
     //here a secial presentation of an fun proram

     //we have 3 calls every eteration updates the val 
     //in loop intial val = first call =16
     //first call =test condition =15 --> 12 -->9 -->6 -->3 -->0(test ==false)
     //sec call= print =14 -->11 -->8 -->5 -->2 
     // third call =updating = 13 -->10 -->7 -->4 -->1
     for(fun();fun();fun()){
        printf("%d",fun());

     }
     main();
}
int fun(){
    static int num=16;
    return num-- ;
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//here its a good way to avoid the looping :) with indirct recursion

/*
#include <stdio.h>
void even();
void odd();
int n =1;
int main() {

 odd();

}

void odd(){
    if(n<=10){
        printf("%d \t",n+1);
        n++;
        even();
    }
}
void even(){
    if(n<=10){
        printf("%d \t",n-1);
        n++;
        odd();
    }
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
/*
#include <stdio.h>
int fun(int n);
//this recursive function out =3 
//to explain this :
// when we come to one then the fun(1)=0 then pop from call stack
//then fun(2)=1+fun(0)=1 
//then fun(4)=1+fun(2)=2
//then fun(8)=1+fun(4)=3
//this is the logic sequence :)
int main() {
    printf("%d",fun(8));
}
int fun(int n){
    if(n==1){
        return 0;
    }
    else{
        return 1+fun(n/2); 
    }
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//this what makes it very tricky :(
  //we call get() 25 times thinnnnnnnnnnnnk obout later fool !
 /* 
#include <stdio.h>
void get(int n);
int main(){
    get(6);
}
void get(int n){
    if(n<1) return;
    get(n-1);
    get(n-3);
    printf("%d \t",n);
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//this is other recursion trick :(

//the idea of this code basically in static that d stores its value and in the sequence of
//recusion it self :
//cout(3)=>print (3,1)&call count(2)
//cout(2)=>print (2,2)&call count(1)
//cout(1)=>print (1,3)& return to excute evry print d for call 1,2,3 (4,4,4)

/*
#include <stdio.h>
void count(int n){
    static int d =1;
    printf("%d",n);
    printf("%d",d);
    d++;
    if(n>1) count( n-1);
    printf("%d",d);
}
int main(){
    count(3);
} 
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// NOTE THIS
//  void fun()
//this prototypt can be called with any number of parameters with any types
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 //dont run this !!infinitr loop
 //this proggram kinda wierd but it acually focus that main is normal can be called many times

 /*
  int main(){
    printf("hi");
    main();
    return 0;
  }
  */
  