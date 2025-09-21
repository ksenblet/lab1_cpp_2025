#include <bitset>
#include <iostream>

int Function(unsigned int firstTerm, unsigned int lastTerm){
    int count = 0;

    if(firstTerm > lastTerm){
        unsigned int temp = firstTerm;
        firstTerm = lastTerm;
        lastTerm = temp;
    }

    for(unsigned int i = firstTerm; i <= lastTerm; ++i){
        std::string binI = std::bitset<32>(i).to_string();
        for(char j : binI){
            if(j == '1'){
                count += 1;
            }
        }
    }
    return count;
}