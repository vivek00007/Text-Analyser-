#ifndef WORDS_H_INCLUDED
#define WORDS_H_INCLUDED

#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Words {

    private:
        //string variable to store one word
        string word;
        int numCharacters;
    public:
        Words();
        //get and set method to retrieve a sentence and to change it
        string getWord();
        void setWord(string w);
        int getNumCharacters();
        ~Words();
};

#endif // WORDS_H_INCLUDED
