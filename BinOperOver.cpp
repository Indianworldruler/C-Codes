#include<iostream>
using namespace std;

class Number
{
    private:
    int n;

    public:
    void getn()
    {
        cout<<"Enter a number"<<endl;
        cin>>n;
    }
    void printn()
    {
        cout<<n<<endl;
    }
    Number operator +(Number Y)
    {
        Number ans;
        ans.n = Y.n;
        return ans;
    }
};

int main()
{
    Number 01, 02, 03;
    01.getn();
    02.getn();

    03=01;
    cout<<"\n Number 1 = ";
    01.putn();
    cout<<"\n Number 2 = ";
    02.putn();
    cout<<"Addition = ";
    03.putn();
    return 0;
}