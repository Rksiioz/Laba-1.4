#include <iostream>
#include "TSorter.h"
using namespace std;

int main() {

    TSorter sorter;
    Train train;
    int menu;
    do{
        cout << "[1] - Train from file" << endl;
        cout << "[2] - Train from the keyboard" << endl;
        cout << "[3] - Display" << endl;
        cout << "[4] - Sort train" << endl;
        cout << "[0] - Exit the program" << endl;
        cout << "Enter the command value: "; cin >> menu;
        cout << endl << endl << endl;
        switch (menu) {
            case 1:
                train.fromFile("test.txt");
                break;
            case 2:
                train.read();
                break;
            case 3:
                train.display();
                break;
            case 4:
                sorter.sort(train);
                break;
            case 0:
                break;
        }
    } while (menu != 0);

    return 0;
}