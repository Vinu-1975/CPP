#include<cstdio>
#include<iostream.h>
using namespace std;

int main(){
   int a;long b;char c;float d;double e;
   scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
   printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",a,b,c,d,e);
   return 0;

}