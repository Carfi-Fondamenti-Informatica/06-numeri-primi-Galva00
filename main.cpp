#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int n;
  cin >>n;
  if (primi(n)==2) {
    cout <<"numero primo"<<endl;
  } else { 
    cout <<"numero non primo"<<endl;
  }
  return 0;
}
