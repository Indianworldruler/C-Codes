#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary;

    public:
    //Setter
    void setSalary(int s)
    {
        salary = s;
    }

    //Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee obj;
    obj.setSalary(50000);
    cout<<obj.getSalary();

    return 0;
}