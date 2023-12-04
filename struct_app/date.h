//C语言的封装风格，数据放到一起找包struct
struct Date
{
    int year;
    int month;
    int day;
};

void init(Date &d);
void print(Date &d);
bool IsLeapYear(Date &d);


//C++认为C封装不切底，数据和行为分开，没有权限控制，对内数据开放，逻辑抽象，对外提供接口
