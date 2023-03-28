#include <iostream>
using namespace std;

int main(){

    string str = "Abracadabra";
    char character = 'b';
    int count = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] ==  character)
        {
            ++ count;
        }
    }

    cout << "Number of " << character << ": " << count;

    return 0;
}