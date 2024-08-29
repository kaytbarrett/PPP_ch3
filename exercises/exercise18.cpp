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

    string name;
    int score = 0;
    vector<string> names;
    vector<int> scores;

    do {

        cout << "\nPlease enter a name followed by a score. Ex: Joe 17\n";
        cin >> name >> score; 

        bool isSameName = false;

        for(int i = 0; i < names.size(); i++){
            if (name == names[i]){
                isSameName = true;
                break;
            }
        }

        if (name != "NoName" && score != 0){
            if (!isSameName){
                names.push_back(name);
                scores.push_back(score);
            } else {
                cout << "This name has already been entered.\n";
            }
        }
        
    } while (name != "NoName" && score != '0');

    cout << "\n";

    for (int i = 0; i < names.size(); i++){
        cout << names[i] << " " << scores[i] <<"\n";
    }

}