/*
Для чисел Фибоначчи известны некоторые тождества:
Докажите эти тождества и напишите программу для вычисления ЧФ с помощью разделяй и властвуй.

*/

#include <iostream>

using namespace std;

long long number(int n)


{

if(n == 1 || n == 2)

{
return 1;
}

           if(n % 5 == 0)
{

           if(n % 2 == 0)
{
         long long k = number(n / 5);
return 25 * k*k*k*k*k + 25 * k*k*k + 5 * k;
}
else
{
long long k = number(n / 5);
return 25 * k*k*k*k*k - 25 * k*k*k + 5 * k
}
}
else if(n % 2 == 1)
{
long long k = number(n / 2);
long long m = number(n / 2 + 1);
return k * k + m * m;
}
else
{
long long k = number(n / 2 - 1);
long long m = number(n / 2 + 1);
return m * m - k * k;
}
}

int main()
{
int n;
cin » n;

cout « number(n);

return 0;
}
