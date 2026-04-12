#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("NUM.txt", ios::out);
    for(int i = 1; i <= 200; i++){
        file << i << ' ';
    }
    file.close();
    return 0;
}