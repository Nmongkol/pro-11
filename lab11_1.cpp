#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    
    
    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();  
    
    srand(static_cast<unsigned int>(time(0))); 
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int randomIndex = rand() % 9;  // สุ่มเลขตั้งแต่ 0 ถึง 8 (สำหรับอาร์เรย์มี 9 ตัวเลือก)

    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}
