#include "Words.h"
#include <iostream>
#include <cctype>
#include <cstring>

Words::Words(){}

string Words::getWord(){
    return word;
}

void Words::setWord(string w){
    word = w;
}

Words::~Words(){}
