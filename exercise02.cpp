#include <iostream>

using namespace std;

int volume(int height, int width, int length);

int main() {

 int box1Height, box1Width, box1Len; // box1 variables declaration
 int box2Height, box2Width, box2Len;// box2 variables declaration
 int totVolume, totalSurface;
 
 cout << "Enter Box 1 Height : "; //get inputs from users
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Len : ";
 cin >> box1Len;
 
 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Len : ";
 cin >> box2Len;
 
 totVolume = volume(box1Height, box1Width, box1Len) //calculation
 + volume(box2Height, box2Width, box2Len);
 
 cout << "Volume of Box is " << totVolume << endl;
 
 return 0;
}
//function declaration
int volume(int height, int width, int length) {

   return height*width*length ;

}
