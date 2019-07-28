#include <iostream>
using namespace std;

class Dog
{
  private:
    char *name;
    int age;
    int sex;
    double weight;

  public:
    Dog(string name, int age, int sex, double weight)
    {
        this->name = (char *)name.data();
        this->age = age;
        this->sex = sex;
        this->weight = weight;
    }
    void show()
    {
        cout << "name：" << name << endl
             << "age:" << age << endl
             << "sex:"
             << (sex == 0 ? "male" : "female") << endl
             << "weight:" << weight << endl;
    }
    void eat()
    {
        weight += 1;
    }
    void sleep()
    {
        age += 1;
    }
};
int main(int argc, char const *argv[])
{
    Dog d1 = Dog("lili", 1, 0, 10), *d = &d1;
    d->sleep();
    d->eat();
    d->show();
    return 0;
}
