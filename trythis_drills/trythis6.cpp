// Write a program that "bleeps" out words that you don't like
// That is, you read in words using cin and print them out again on cout
// If a word is a amoung the few you have defined, you write out BLEEP instead of that word

#include <iostream> 
#include <vector>

using namespace std;

int main () {

    cout << "Please enter in some words: " <<endl;
    vector<string> dislikedWords = {"broccoli", "asparagus", "shoot", "kill"};
    vector<string> likedWords;
    
    for(string word; cin>>word;)
    {
        bool isDisliked = false;
        for(string dislikedWord: dislikedWords) {
            if(word == dislikedWord) 
            {
                isDisliked = true;
                break;
            }
        }
        if(!isDisliked)
        {
            likedWords.push_back(word);
        }
    }

    for(int i = 0; i<likedWords.size(); i++)
    {
        cout<< likedWords[i] <<endl;
    }

    return 0;
}