#include <iostream>
using namespace std;

class People
{
  protected:
    int age;
    double height;
    double weight;
    static int num;

  public:
    People(int age, double height, double weight)
    {
        this->age = age;
        this->height = height;
        this->weight = weight;
        num++;
    };
    void Eating()
    {
        weight += 1;
    };
    void Sport()
    {
        height += 1;
    }
    void Sleeping()
    {
        age += 1;
        weight += 1;
        height += 1;
    }
    static void Show(People people)
    {
        cout << "年龄为" << people.age << "岁，身高为" << people.height << "厘米，体重为" << people.weight << "市斤" << endl;
    }
};
int People::num = 0;
int main(int argc, char const *argv[])
{
    People p1 = People(10, 100, 50people.);
    People::Show(p1);
    return 0;
}
