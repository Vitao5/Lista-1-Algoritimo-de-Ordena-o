
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

int main()
{
    std::vector<char> letters = {'p', 'a', 't', 'r', 'o', 'c', 'i', 'n', 'i', 'o'};
    std::string newTex = "";
    int sizeVetor  = letters.size();
    
    for (int i = 0; i < sizeVetor - 1; i++) {
        for (int j = 0; j < sizeVetor - i - 1; j++) {
            if (letters[j] > letters[j + 1]) {
                char temp = letters[j];
                letters[j] = letters[j + 1];
                letters[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < sizeVetor; i++) {
        newTex += letters[i];
    }
    
    printf("%s\n", newTex.c_str());
    return 0;
}