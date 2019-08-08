#include "Sentences.h"
#include <iostream>
#include <cctype>
#include <cstring>

Sentences::Sentences(){}

string Sentences::getSentence(){
    return sentence;
}

void Sentences::setSentence(string s){
    sentence = s;
}

int Sentences::getNumWords(){
    int numChars = sentence.length();
    vector<string> setOfWords;
    string currentWord;
    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' && !currentWord.empty()){
            setOfWords.push_back(currentWord);
            currentWord.clear();
        }
    else{
        currentWord += sentence[i];
        }
    }

    return (setOfWords.size() + 1);
}


vector<string> Sentences::getWords(){
    int numChars = sentence.length();
    string currentWord;
    words.clear();

    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?'){
            words.push_back(currentWord);
            currentWord.clear();
        }
        {
            currentWord += sentence[i];
        }
    }

    return words;
}

  	vector<char> Sentences::getCharacters(){

    int numChars = sentence.length();

    for(int i=0;i<numChars;i++){
        characters.push_back(sentence[i]);
    }

    return characters;
}

Sentences::~Sentences(){}
