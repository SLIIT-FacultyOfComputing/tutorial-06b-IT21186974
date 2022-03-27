#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   // 1. Create a Box type object called box1
  Box box1;
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int pheight, plength, pwidth;
   cout << "Enter the Height of the Box : ";
   cin >> pheight;
   cout << "Enter the Length of the Box : ";
   cin >> plength;
   cout << "Enter the width of the Box : ";
   cin >> pwidth;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
    box1.Box::setMesurement1(plength);
    box1.Box::setMesurement2(pwidth);
    box1.Box::setMesurement3(pheight);
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getheight() << endl;
   cout << "Box Length " << box1.getlength() << endl;
   cout << "Box Width " << box1.getwidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

