#include <iostream>
using namespace std;
class Data
{
  private:
    int day;
    int month;
    int year;

  public:
    void dateSet(int year, int month, int day)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void dataGet();
};
void Data::dataGet()
{
    cout << year << "年" << month << "月" << day << "日" << endl;
}
