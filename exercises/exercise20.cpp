/*
    Modify the program from the previous exercise so that once you have entered the name and value pairs,
    you ask for names: In a loop, when you enter a value, the program will output all the names with that
    score or score not found.
*/

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

    char response = 'y';

    while (response == 'y'){

        cout << "Please enter a score to see all names with that score:\n";
        cin >> score;

        for(int i = 0; i < scores.size(); i++){
            if (score == scores[i]){
                cout << names[i] << "\n";
            }
        }

        cout << "\nDo you want to check another score? (y/n)\n";
        cin >> response;
    }

}