#include <iostream>
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
  int size=5000; //setting the max size of hashtable
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
void hexcode(int val){


}
int main(){
int arrt[10];
for (int i =0; i < 10; i++) {
int j=rand()%100;
arrt[i]=j;
}
cout<<"------------ Integer Hash Test----------------"<<endl;
for (int k = 0; k < 10; k++) {
  cout<<"The hash of "<<dec<<arrt[k]<<" is "<<hex<<hashfunc(arrt[k])<<endl;
}
cout<<"------------ String Hash Test----------------"<<endl;
cout<<"----------------------------------------------------------"<<endl;
string values[10] = {"ralph","jennifer","anderson","billy","jessica","rivaldo","sheckan","vinny","emily","judy"};
for (int i = 0; i <10; i++) {

cout<<"the hash of "<<values[i]<< " is "<<hashstrin(values[i])<<endl;
}
cout<<"----------------------------------------------------------"<<endl;
cout<<"second string hash"<<endl;
for (int i = 0; i <10; i++) {

cout<<"the hash of "<<values[i]<< " is "<<hashstrin2(values[i])<<endl;
}

  return 0;
}
