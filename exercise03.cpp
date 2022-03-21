#include <iostream>
using namespace std;
int volume(int height, int width, int length);

// 1. Define a  box structure 

struct box {
  int height, width, length ;
} ;

int main() {
  // create box 1 structure type
  struct box box1;
  int box1Height, box1Width, box1Length;

 // create box 2 structure type
  struct box box2;
  int totalVolume;
 
 //Input height, width, lenght of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.length;
 
 cout << "Enter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;
 
 //calculation part
 totalVolume = volume( box1.height , box1.length  , box1.width )
 + volume( box2.width , box2.length , box2.height );
 
 
 cout << "Volume of Box is " << totalVolume << endl;
 
 return 0;
}
// functions declaration here

int volume(int height, int width, int length) {

   return height*width*length ;

}
