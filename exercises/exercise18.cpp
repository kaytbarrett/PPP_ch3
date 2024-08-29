/*
    Write a program where you first enter a set of name-and-value pairs, such as Joe 17 
    and Barabar 22. For each pair, add the name to a vector called names and the number to a vector
    called scores (in corresponding positions, so that name[1]=="Joe" and scores[1]==17). 
    Terminate input with NoName 0. Check that each name is unique and terminate with an error
    message if a name is entered twice. Write out all the name/score pairs, one per line.  
*/

// I did this in exercise 19 using a map rather than two vectors but I want to go back and 
// do it with two vectors, because that is what the exercise asks for.

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){

    char response = 'y';
    vector<string> names;
    vector<int> scores;

    do {

        string name;
        int score = 0;

        cout << "\nPlease enter a name followed by a score. Ex: Joe 17\n";
        cin >> name >> score; 

        names.push_back(name);
        scores.push_back(score);

        cout << "\nDo you want to enter another name and score? (y/n)\n";
        cin >> response;

    } while (response == 'y');

    cout << "\n";
    
    for (int i = 0; i < names.size(); i++){
        cout << names[i] << " " << scores[i] <<"\n";
    }

}