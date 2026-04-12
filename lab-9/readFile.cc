#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("NOTES.txt");
    int count = 0;
    char c = 0;
    // while(file >> c){
    //     cout << c;
    //     count++;
    // }

    while((c = file.get()) != EOF){   //we cant use file.eof() it is set to 1 when a read FAIL has already occured. This means the count has already been added for that non existent character
    //BEST WAY!!we can also use while(file.get(c)) and it will be false for a false read ie EOF and stored to c
        //cout << file.get(); prints binary values WRONG
        // c =  file.get();         //we directly read in the while loop and avoid checking for eof with the .eof() function
        cout << c;
        count++;
    }
    file.close();
    cout << "\nThere are " << count << " characters in NOTES.txt" << endl;
    return 0;
}

/*We canNOT use c = file.get() != EOF because comparison has higher precedence than equality so C is never assigned the value from file.get() which is directly compared with EOF and then 0 is assigned to c*/