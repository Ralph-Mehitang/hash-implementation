#include <iostream>
//#include "hash.cpp"
#include <math.h>
using namespace std;

size_t hashfunc(size_t x){
size_t w= 32;
size_t p=17;
size_t a= 72559;
size_t W=size_t(1)<<w;
size_t temp=size_t((a*x)%W)>>(w-p);
return temp;

}
int main(){
cout<<hashfunc(9);
cout<<endl;
  return 0;
}
