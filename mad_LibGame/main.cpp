
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
  
  //takes user input to write a random history
    string nounOne, nounTwo,nounThree, pluralNoun, pluralNounTwo,finalNoun;
    string monthOne, monthTwo, adjective, verb_ed, cardinalNumber;
    cout << "The Following is a history related to the fall season" << endl;
    cout <<" Enter  a noun: "<< endl;
    cin >> nounOne;
    cout <<" Write a Cardinal Number:(no numbers) "<< endl;
    cin >> cardinalNumber;
    cout <<" Enter a month: "<< endl;
    cin >> monthOne;
    cout <<" Enter a different month: "<< endl;
    cin >> monthTwo;
    cout <<"Enter a different noun: "<< endl;
    cin >> nounTwo;
    cout <<"Enter an adjective: "<< endl;
    cin >> adjective;
    cout <<" Enter a noun: "<< endl;
    cin >> nounThree;
    cout <<" Enter a plural noun: "<< endl;
    cin >> pluralNoun;
    cout <<" Enter a different plural noun: "<< endl;
    cin >> pluralNounTwo;
    cout <<" Enter a verb: "<< endl;
    cin >> verb_ed;
    cout <<" Enter a different plural noun: "<< endl;
    cin >> finalNoun;
    
    cout << ""<< endl;
    //outputs History
    cout << "Fall, also know as "<< nounOne << ", is one of the\
    "<<cardinalNumber<< " seasons of the year. In the United\
    States, fall takes place from "<< monthOne << " to "<<monthTwo<<".\
    Two holidays that happen during fall are "<<nounTwo<<", where people\
    dress up in "<<adjective<< " costumes and\
    “"<<nounThree << " Day”, a time to give thanks.\
    This is also harvest time, when "<<pluralNoun<<"\
    and "<<pluralNounTwo<<" are "<<verb_ed<< " for us to\
        eat fresh or bake into " <<finalNoun<<""<< endl;
    
    
    
    
    
    
    return 0;
}
