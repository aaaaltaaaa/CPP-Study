#include <iostream>
using namespace std;

class Circle
{
private:
	double const PI = 3.14159265;

public:
	float Radius;
	float GetArea()
	{
		return Radius * Radius * PI;
	}
};
int main(int argc, char const *argv[])
{
	Circle circle;
	circle.Radius = 2;
	cout << circle.GetArea();
	return 0;
}
