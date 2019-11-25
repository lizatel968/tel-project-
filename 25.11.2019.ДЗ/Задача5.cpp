/*  Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.  
*/ 
#include <iostream>
 using namespace std;
 void ac(bool *array, int c){
          for(int i = 2 ; i < c; ++i){
                  for(int k = 2*i; k < c; k = k + i){
                          array[k] = false;
         }
     }
 } 
int main(){
       int n;
     cin >> n;
          int *comp = new int[n + 3];
          for (int i = 0; i <= n; ++i){
              comp[i] = 0;
              }
          ac(comp, n + 3);
          comp[2] = 0;
     comp[1] = 1;
                    for (int i = 2; i <= n; i++){
              if (comp[i] == 0 && comp[i + 2] == 0){
                      cout << i << endl;
         }
         else if (comp[i] == 0 && comp[(i + 2) / comp[i + 2]] == 0) 
        {
             cout << i << endl;
         }
     }
                    return 0;
 } 
