#include <iostream>
using namespace std;
int main()
{
int t, a, b, c;
cin >> t;

for (int i=0; i<t; i++)
{
cin >> a;
cin >> b;
cin >> c;

if(a > b && a > c)
{
if (b > c)
{
cout << "case " << i+1 << ": " << b << endl;
}
else
{
cout << "case " << i+1 << ": " << c << endl;
}
}
else if(a < b && a < c)
{
if (b < c)
{
cout << "case " << i+1 << ": " << b << endl;
}
else
{
cout << "case " << i+1 << ": " << c << endl;
}
}
else
{
cout << "case " << i+1 << ": " << a << endl;
}
}
return 0;
}