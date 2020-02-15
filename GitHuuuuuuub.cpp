#include <iostream>
using namespace std;

template <class T>
T bigger (T x, T y)
{
	return ( x < y ? x : y);
}

int main ()
{
	cout << "OutPut:" << endl;
	double x = 33.3;
	int y = 5;
	
	cout << bigger (x, y) << endl;
	return (0);
}
