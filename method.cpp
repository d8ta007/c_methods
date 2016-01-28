/* Bryan Denslow 1/28/16 */

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int multiply(int a, int b);

int main()
{
  int number_1;
  int number_2;

  cout << "Please enter a number to add:";
  cin >> number_1;
  cout << "Please enter another number to add:";
  cin >> number_2;

  cout << "add: " <<  add(number_1, number_2) << endl;
  cout << "subtract: " << subtract(number_1, number_2) << endl;
  cout << "divide: " << divide(number_1, number_2) << endl;
  cout << "multiply: " << multiply(number_1, number_2) << endl;

  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int divide(int a, int b)
{
  return a/b;
}

int multiply(int a, int b)
{
  return a*b;
}
