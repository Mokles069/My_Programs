#include <iostream>
#include <thread>
#include <chrono>
#include<iomanip>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int digits(int n)
{
    int count = 0;
    n = abs(n);
    if(n == 0) return 1;
    while(n!=0){
        n /= 10;
        count++;
    }
    return count;
}

void timer(int hour, int min, int sec)
{

    int total_sec = (hour*60*60) + (min*60) + sec;
    while(total_sec >= 0)
    {
        int curr_hr = total_sec / 3600;
        int h_dig = digits(curr_hr);

        int curr_min = (total_sec % 3600) /60;
        int  m_dig = digits(curr_min);

        int curr_sec = total_sec % 60;
        
        cout << "\r"<< setw(h_dig) << setfill('0') << curr_hr << ":"<< setw(m_dig) << setfill('0') << curr_min  << ":"<< setw(2) << setfill('0') << curr_sec  << flush;

        sleep_for(seconds(1));
        total_sec --;
    }
    cout << "\n...⏳..." ;
    sleep_for(milliseconds(1500));
    cout << "\n🛑 Somoy sesh hoye gese! Hahhaha 😂" << endl;
}

int main()
{
    system("clear");
    int hour, min, sec;
    cout << "Enter Hours: ";
    cin >> hour;

    system("clear");

    cout << "Enter Minutes: ";
    cin >> min;
    system("clear");

    cout << "Enter Seconds: ";
    cin >> sec;
    system("clear");

    if(hour >= 0 && min >=0 && sec >=0 ){
        cout << "Timer Set for ";
        if(hour > 0 ) cout << hour << " hour"  << (hour > 1 ? "s ":" ");
        if(min > 0) cout << min << " min" << (min > 1 ? "s ":" ");
        if(sec > 0) cout << sec << " sec" <<(sec > 1 ? " s":" ");
        cout << endl;
        timer(hour, min, sec);
    }
    else{
        cout <<"Sorry Time Can't Be Negative"<<endl;
    }
}
