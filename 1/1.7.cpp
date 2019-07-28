#include <iostream>
using namespace std;

class Cuboid
{
private:
	double length;
	double width;
	double height;

public:
	void set()
	{
		cin >> this->length >> this->width >> this->height;
	}
	double getArea()
	{
		return length * width * height;
	}
};
int main(int argc, char const *argv[])
{

	Cuboid cub[3];

	for (size_t i = 0; i < 3; i++)
	{
		cub[i].set();
		cout << cub[i].getArea() << endl;
	}
}