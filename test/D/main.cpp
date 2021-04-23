#include <iostream>
#include <sstream>
using namespace std;

void f(char *t,int &a,int &b){
    stringstream ss;
    ss<<t;
    ss>>a;
    ss>>b;
}

int main() {
  char s[]="ab12abq256bglicq5678acyi57",*p;
  char s1[]="abcdefghijklmnopqrstuvwxyz";
  int min,max,a=0,b=0;

  string p=strtok(s,s1);
  int f(p,a,b);
  min=a;
  max=b;
  while(p){
      f(p,a,b);
      if(min>a)min=a;
      if(max<b)max=b;
      p=strtok(NULL,s1);
  }
  cout<<min<<"   "<<max;
  system("pause");
  return 0;
}
