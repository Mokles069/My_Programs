#include<iostream>
#include<string>
#include<thread>
#include<chrono>
#include<cctype>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main()
{
    system("clear");
    string massage;
    cout << "Enter a Sentence/word: ";
    getline(cin, massage);

    string another;

    for(char c: massage){
        if(!isalpha(c)){
            another.push_back(c);
            cout << c ;
            continue;
        }
    char start = islower(c) ? 'a' : 'A';
    string animate = "";

    for(char letter = start; letter<=c; letter++)
    {
        animate = letter;
        cout << "\r" << another << animate << flush;
        sleep_for(milliseconds(5));
    }
    another.push_back(c);
    cout << "\n";
    }

    cout << "☺☺☺☺" << endl;
}
