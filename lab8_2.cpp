#include<iostream>
#include<string>

using namespace std;

int main()
{

int studentid,gear;
string name,nmovie,day,answer;


cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";

getline(cin, name);
cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << name << ": ";

cin >> studentid;

cin.ignore();

gear = ((studentid/10000000)-12);
cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << name << ": ";

getline(cin, nmovie);
cout << "Fahsai: So....which day are you free to go with me?\n" << name << ": ";

getline(cin, day);
cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << nmovie << " with you.\n" << name << ": ";

getline(cin, answer);
cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";


return 0;


}