#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ofstream;

int main() {
    cout << "Hello, World!" << endl;

    cout << "How wide of a box do you want?" << endl;

    int x;
    cin >> x;
    cout << "Width: " << x << endl;

    cout << "How tall of a box do you want?" << endl;

    int y;
    cin >> y;
    cout << "Height: " << y << endl;

    int xX=0;
    int yY=0;
    while (yY<y)
    {
        xX=0;
        while (xX < x) {
            cout << "X";
            xX++;
        }
        cout << endl;
        yY++;
    }




    return 0;


}