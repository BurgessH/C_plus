#include <iostream>
#include "date.h"
using namespace std;
//数据和行为在一起，对内数据开放，对外提供接口； 类-类对象-行为
class Date_type
{
public:
    void init()
    {
        cin>>year;
        cin>>month;
        cin>>day;
    }

    void print()
    {
        cout<<"year:"<<"month:"<<"day:"<<endl;
        cout<<year<<month<<day<<endl;
    }

private:
    int year;
    int month;
    int day;
};


int main(void)
{
    cout << "Hello World!" << endl;
#if 0
    Date d;
    init(d);
    print(d);

    if(IsLeapYear(d))
        cout<<d.year<<" is leap year"<<endl;
    else
        cout<<d.year<<" is not leap year"<<endl;
#endif

    Date_type m;
    m.init();
    m.print();




    return 0;
}
