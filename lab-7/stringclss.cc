#include <iostream>
#include <cstring>
using namespace std;

class STRING{
    public:
    char str[1000];
    
    STRING(const char* s){
        for(int j = 0; s[j] != '\0'; j++){
            str[j] = s[j];
        }
    }

    STRING(){
        str[0] = '\0';
    }

    bool operator==(const STRING obj){
        int i = 0;
        do{
            if(str[i] != obj.str[i]){
                return 0;
            }i++;
        }while(str[i] != '\0' && obj.str[i] != '\0');
        if(str[i] != obj.str[i])
        return 0;
        return 1;
    }

    STRING operator+ (STRING &obj){
        STRING ans;
        int i = 0;
        while(str[i] != '\0'){
            ans.str[i] = str[i];
            i++;
        }
        int j = 0;
        while(obj.str[j] != '\0'){
            ans.str[i] = obj.str[j];
            i++, j++;
        }
        ans.str[i] = '\0';
        return ans;
    }

    STRING& operator= (STRING obj){
        int i = 0;
        for(; obj.str[i] != '\0'; i++){
            str[i] = obj.str[i];
        }
        str[i] = '\0';
        return *this;
    }
    STRING& operator= (const char* s){
        int i = 0;
        for(; s[i] != '\0'; i++){
            str[i] = s[i];
        }
        str[i] = '\0';
        return *this;
    }
};

int main(){
    STRING s1("Stringy");
    STRING s2("st");

    if(s1 == s2){
        cout << "Strings are equal!" << endl;
    }else{
        cout << "Strings are not equal!" << endl;
    }
    
    s2 = "Stringy";
    if(s1 == s2){
        cout << "Strings are equal!" << endl;
    }else{
        cout << "Strings are not equal!" << endl;
    }
    
    STRING s3;
    s3 = s1 + s2;
    for(int i = 0; (s1 + s2).str[i] != '\0'; i++){
        cout << (s1 + s2).str[i];
    }
    cout << endl;
    
    return 0;
}