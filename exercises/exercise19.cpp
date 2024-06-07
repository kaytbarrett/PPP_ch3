/*
    Write a program where you first enter a set of name-and-value pairs, such as Joe 17 
    and Barabar 22. For each pair, add the name to a vector called names and the number to a vector
    called scores (in corresponding positions, so that name[1]=="Joe" and scores[1]==17). 
    Terminate input with NoName 0. Check that each name is unique and terminate with an error
    message if a name is entered twice. Write out all the name/score pairs, one per line.  
*/

// I think it makes more sense to use a map for this, rather than two separate vectors so Ill do that


#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> mapInputs(){

    map<string, int> mp;
    string name;
    int score; 
    char response;

    do {
        cout << "Please enter a name followed by a score (ex: John 17): " << endl;
        cin >> name >> score;

        mp[name] = score;

        cout << "Do you want to enter in another name and score? (y/n): " << endl;
        cin >> response;

    } while (response == 'y');

    return mp;
}

int main() {

    map<string, int> mapResults = mapInputs();

    cout << "\n" << endl;
    cout << "Here are the results: " << endl;
    for (const auto input : mapResults){
        cout << input.first << "\t" << input.second << endl;
    }
    cout << "\n" << endl;

    return 0;
}