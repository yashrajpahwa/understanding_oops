#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // string s;
    //getline(cin, s);
    char s[20];
    cout << "Enter the string : ";
    char c;
    int i = 0;
    while(cin >> c){
        s[i] = c;
    }

    fstream file("stringFile.txt", ios::in | ios::out);
    file.write(s, 20);

    // file.seekg(0, ios::beg);
    // char c;
    // int count = 0;
    // cout << "Reading contents from the file : " << endl;
    // while((c = file.get()) != '\n'){
    //     cout << c;
    //     count++;
    // }
    //cout << "/nRead successful!\nThe number of characters in the string : " << count << endl;
    return 0;
}