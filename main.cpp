#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "i am a pro player!";
    string s1,s2;
    s1 = sentence;
    s2.assign(sentence); // s1 == s2
    cout << sentence.substr(7,3) << endl; //(a,b) from a to capture length b
    cout << sentence.find("a") << endl; // from home to end
    cout << sentence.rfind("a") << endl; // from end to home
    cout << sentence.at(11) << endl;
    cout << s1 << " " << s2 << endl;
    return 0;
}
