#include <iostream>
#include <cmath>	
using namespace std;
int main()
{ int i = 2, a, x;
  bool isprime = true;
  cout << "Enter the number to be tested ";
  cin >> a;
  x = sqrt(a);										
  while (i <= x && isprime)
  { if (a % i == 0)
      isprime = false;
    i++;
  }
  if (!isprime)
    cout << a << " is not a prime number" << endl;
  else 
    cout << a << " is a prime number" << endl;
  return 0;
}
