#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

 double sum (double a, double b)
{
return a + b;
}

int main(int argc, char* argv[])
{
double x;
for (int i=0; i<argc; i++)
{
if (argv[i] == '+')
        {
         x = sum(argv[i-1], argv[i+1]);
        cout << x;
        }
}
return 0;
}
