#include <iostream>
//#include "hash.cpp"
#include <math.h>
#include <iomanip>
using namespace std;

size_t hashfunc(size_t x){
size_t w= 32;
size_t p=17;
size_t a= 54059;
size_t W=size_t(1)<<w;
size_t temp=size_t((a*x)%W)>>(w-p);
return temp;

}
size_t hashstrin(string word){
  int size=501; //setting the max size of hashtable
  int sum = 0;
        for (int i = 0; i < word.length(); i++)
            sum = sum + int(word[i]);
        return  sum % size;
}
size_t hashstrin2(string word){
  int size=5000; //setting the max size of hashtable
  int seed = 131;
     unsigned long hash = 0;
     for(int i = 0; i < word.length(); i++)
     {
        hash = (hash * seed) + word[i];
     }
     return hash % size;
}
int main(){
cout<<hex<<hashfunc(11463)<<endl;
cout<<hashstrin("hello")<<endl;
cout<<hashstrin2("hello")<<endl;
cout<<endl;
  return 0;
}
