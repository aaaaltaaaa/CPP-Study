#include <iostream>
#include <string>

using namespace std;

class Account
{
  private:
    string account;
    string name;
    string password;
    double deposit;
    double rate;

  public:
    Account(string account, string name, string password, double rate)
    {
        this->account = account;
        this->name = name;
        this->password = password;
        this->rate = rate;
    }
    void save(double amount)
    {
        deposit += amount;
        cout << "Successful save." << endl;
    }
    void withdraw(double amount)
    {

        if (deposit - amount >= 0)
        {
            deposit -= amount;
            cout << "Successful withdrawals." << endl;
        }
        else
            cout << "Failure to withdraw money." << endl;
    }
    double calculatedRate()
    {
        return deposit * rate;
    }
    void info()
    {
        cout << "account:" << account << endl
             << "name:" << name << endl
             << "deposit:" << deposit << endl
             << "rate:" << rate << endl;
    }
};
int main(int argc, char const *argv[])
{
    Account user1 = Account("1", "liu", "123456", 0.06);
    user1.save(100);
    user1.withdraw(50);
    cout << user1.calculatedRate() << endl;
    user1.info();
    return 0;
}
