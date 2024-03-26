#include <iostream>

using namespace std;

int main() {
    int room_width {0};
    int room_length {0};

    cout << "Enter the with of the room in m: " << endl;
    cin >> room_width;
    cout << "Enter the length of the room in m: " << endl;
    cin >> room_length;

    cout << "The area of the room is: " << room_width * room_length << " m^2" << endl;

    return 0;
}