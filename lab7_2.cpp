#include <iostream>
using namespace std;
int main(){
    string name,id,movie,day,quote;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin, name); 
    cout << "?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    getline(cin, id);
    int gear = (10*((int)id[0]-48) + ((int)id[1]-48)) - 12;
    cout << name << ": ";
    cout << "Fahsai: I think you may be "<< "GEAR " << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    getline(cin, movie);
    cout << name << ": ";
    cout << "Fahsai: So....which day are you free to go with me?\n";
    getline(cin, day);
    cout << name << ": ";
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    getline(cin, quote);
    cout << name << ": ";
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
return 0;
}
//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
