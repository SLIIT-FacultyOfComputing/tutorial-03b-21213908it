#include <iostream>
#include <iomanip>
struct box1{
int height;
int width;
int length;
};
struct box2{
int height;
int width;
int length;
};

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
  int Heightbox1,Widthbox1,Lengthbox1;
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
  int Heightbox2,Widthbox2,Lengthbox2;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Heightbox1;
    cout << "Enter Box 1 Width : ";
    cin >> Widthbox1;
    cout << "Enter Box 1 Length : ";
    cin >> Lengthbox1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Heightbox2;
    cout << "Enter Box 2 Width : ";
    cin >> Widthbox2;
    cout << "Enter Box 2 Length : ";
    cin >> Lengthbox2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(Heightbox1 ,Widthbox1 ,Lengthbox1 )
             + volume(Heightbox2 ,Widthbox2 ,Lengthbox2 );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height,int width,int length)
{
  return height * width * length;
}