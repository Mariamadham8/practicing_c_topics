#include<stdio.h>

 int f1() { printf ("Geeks\n"); return 1;}
int f2() { printf ("Quiz\n"); return 1;}
  int er=10;

  static int i;
static int i=27; //if the local var is not exist 27 will bre printed:)
static int i; //if this is written like i=45; this is error


 //ques::12
 #define numm 10
int main(){
  //ques::1 
  int p = f1() + f2();
  printf("%d",p);
  

   //ques::2
 int a = 10, b = 20, c = 30; 
  if (c > b > a) 
    printf("TRUE\n"); 
  else
    printf("FALSE\n"); 


 //ques::3
char ch =65;
printf("%c",ch) ;


 //ques::4
printf("%d\n",printf("%s","hello world"));

 //ques::5
int a1=1, b1=2 ,c1=3;
printf("%d\n",a1+=(a1+=3,5,a1));


 //ques::6
int test =2;
test=8;
printf("%d\n",test);


 //ques::7 
  extern int er;
printf("%d\n",er );


 //ques::8
static int i; //if this = number this number will be printed
printf("%d\n",i);

 //ques::9
static int in =20;
in++;
printf("%d",in);

  //ques::10
//هنا جايه اختبر هل الرقم الدبل يساوي الفلوت طبعا الدبل هياخد مساحه اكبر 
float f1 =.1;
if(.1f==f1){
  printf("%s","equal");
}
else{
  printf("%s\n","unequal");
}

 //ques::11
//هنا برضو عندك فكرة ان ممكن زي ما بخزن رقم في الكار ممكن العكس وهيحول للاسكي
float w3='a';
printf("\n%f\n",w3);



//ques::12
//const int numm =5; this gives an error
printf("%d\n",a);


 //ques::13
 //خدي بالك هنا من السيمي كولن االلي جمب اول فاريبل كدا خلينا الاتين في اسكوب مختلف يعني
 int k;
 {
  int k;
  for(k=0;k<10;k++);
 }

 
 return 0; 
}
