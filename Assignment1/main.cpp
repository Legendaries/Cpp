#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

double calculateFahrenheit(double celsius){
    return celsius*9.0/5.0+32;
}

void tempThingMenu(){
    double temp1 = 0, temp2 = 0;
    cout << "Enter two Celsius temperatures, one to start from and one to end at" << endl;
    cin >> temp1;
    cin >> temp2;
    for(int i = 0; i < (int)(temp2-temp1); i++){
        cout << "Celsius: " << temp1+i << "\tFahrenheit: " << calculateFahrenheit(temp1+i) << endl;
    }
}

void printThingMenu(){
    int rowNum = 0;
    cout << "Enter # of rows" << endl;
    cin >> rowNum;
    
    string temp = "";
    
    if(rowNum%2 == 1)
        rowNum+=1;
    
    for(int i = 0; i < rowNum; i++){
        if(i < rowNum / 2)
            cout << temp.append("*") << endl;
        else
            cout << temp.substr(0, rowNum-i) << endl;
    }
}

int overload(int a, int b, int c){
   return (a+b)*c; 
}

double overload(double a, double b, double c){
    return (a+b)*c;
}

void overloadMenu(){
    int ia, ib, ic;
    cout << "Enter three integers for (a+b)*c" << endl;
    cin >> ia;
    cin >> ib;
    cin >> ic;
    cout << overload(ia, ib, ic) << endl;
    
    double da, db, dc;
    cout << "Enter three doubles for (a+b)*c" << endl;
    cin >> da;
    cin >> db;
    cin >> dc;
    cout << overload(da, db, dc) << endl;
}

template <typename T>
T overloadpt2(T a, T b, T c){
    return (a+b)*c;
}

void overloadMenupt2(){
    double da, db, dc;
    cout << "Enter three numbers for (a+b)*c" << endl;
    cin >> da;
    cin >> db;
    cin >> dc;
    cout << overloadpt2(da, db, dc) << endl;
}

void asciiMenu(){
    int chara = 64;
    
    //lazy way
    int i = 1;
    
    while(chara != 122){
        chara = (chara == 90) ? 97 : chara+1;
        cout << char(chara);
        if(i++%13 == 0)
            cout << endl;
    }
    
}

int main(int argc, char** argv) {
    while(true){
        int choice = 0;
        cout << "Enter:\n\t"
                "1: Temperature converter\n\t"
                "2: Shape thing\n\t"
                "3: Function Overload\n\t"
                "4: Function Overload pt2 with template\n\t"
                "5: Ascii Menu\n\t"
                "6: Quit" << endl;

        cin >> choice;

        switch(choice){
            case 1: tempThingMenu(); break;
            case 2: printThingMenu(); break;
            case 3: overloadMenu(); break;
            case 4: overloadMenupt2(); break;
            case 5: asciiMenu(); break;
            case 6: return 0;
        }
    }
    return 0;
}

