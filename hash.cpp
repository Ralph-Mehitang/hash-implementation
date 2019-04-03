#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

//size_t hashtablex

size_t hashfunc(size_t x){
size_t w= 64;
int p=63;
int a= 72559;
w=size_t(1)<<w;

return ((a*x)%w)>>(w-p);

}
