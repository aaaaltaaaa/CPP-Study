#include <iostream>
#include <string>
using namespace std;

class Student
{
  private:
    char name[18];
    int num;
    int mathScore;
    int englishScore;
    static int count;
    static int mathTotalScore;
    static int englishTotalScore;

  public:
    Student(string nm, int nu, int math, int english)
    {

        for (size_t i = 0; i < 18; i++)
        {
            name[i] = nm[i];
        };
        num = nu;
        mathScore = math;
        mathTotalScore += math;
        englishScore = english;
        englishTotalScore += english;
        count++;
    }
    void showBase()
    {
        cout << "姓名为" << name << "，学号为" << num << ",数学成绩为" << mathScore << "，英语成绩为" << englishScore << endl;
    }
    static void showStatic()
    {
        cout << "人数为" << count << ",数学总成绩为" << mathTotalScore << "，英语总成绩为" << englishTotalScore << endl;
    }
};
int Student::count = 0;
int Student::mathTotalScore = 0;
int Student::englishTotalScore = 0;
int main(int argc, char const *argv[])
{
    Student s1 = Student("刘桐桐", 57, 100, 100), s2 = Student("曾雅宁", 4, 98, 98);
    s1.showBase();
    s2.showBase();
    Student::showStatic();
    return 0;
}
