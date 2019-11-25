/* Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов. 
*/
 #include <iostream>
 using namespace std;
 void a(bool *array, int c){
 for(int i = 2 ; i < c; ++i){
 for(int k = 2*i; k < c; k = k + i){
 array[k] = false;
 }
 }
 }
 int main()
 { int n;
 cin >> n;
 bool *comp = new bool[n + 1];
 for (int i = 0; i <= n; i++)
 {
 comp[i] = true;
 }
 a(comp, n + 1);
 long long primorial = 1;
 for(int i = 2; i <= n; ++i)
 {
 if(comp[i] == true)
 {
 primorial = primorial * (1LL * i);
 }
 }
 cout << primorial;
 delete[] comp;
 return 0;
 } 
