#include <iostream>
using namespace std;

class Time{
    int h, m, s;
    public:
    Time(int hours, int minutes, int seconds):h(hours), m(minutes), s(seconds){}

    Time operator+ (Time t){
        Time temp(0, 0, 0);
        temp.s = (s + t.s)%60;
        if (s + t.s >= 60){
            temp.m = t.m + m + 1;
        }else{
            temp.m = t.m + m;
        }
        if(temp.m >= 60){
            temp.m %= 60;
            temp.h = h + t.h + 1;
        }else{
            temp.h = h + t.h;
        }
        return temp;
    }
    void show(){
        cout << h << ':' << m << ':' << s << endl;
        return;
    }
};

int main(){
    Time t1(5, 15, 34), t2(9, 53, 58);
    Time t3 = t1 + t2;
    t3.show();
    return 0;
}