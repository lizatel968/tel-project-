/*  Напишите программу находящую первые n составных чисел.  Программа должна работать не более чем за O(n*log log n) шагов.  */ 
#include <iostream>
 using namespace std;
 void a(bool *array, int c){
          for(int i = 2 ; i < c; ++i){
                  for(int k = 2*i; k < c; k = k + i){ 
                         array[k] = false;
         }
     }
 }
 int main(){
          int n;
     cin >> n;
          bool *comp = new bool[2 * n + 10];
          for(int i = 0; i < 2 * n + 10; ++i){
                  comp[i] =true;
              }
          a(comp, 2 * n + 10);
          int nucomp = 0;
     int i = 4;
          while (nucomp < n){
          if(comp[i] == false ){
                       cout << i << endl;
     nucomp = nucomp + 1;
         }
     i = i + 1;
         }
               return 0; 
} 
