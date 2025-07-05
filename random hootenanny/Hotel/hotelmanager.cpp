#include <iostream>
#include <string>
#include <map>

using namespace std;

void printMenu();
void listAllRooms(map<int, string> map);
void logMessage(const string& message, const string& level = "INFO");


int main() {

    int* roomNumbers;
    map<int, string> hotelRoom;

    cout << "How many rooms would you  like to have in your hotel? \n> ";
    cin >> *roomNumbers;

                            for (int i = 0; i < *roomNumbers + 1; i++) {
        hotelRoom.insert(pair<int, string>(i, "NONE"));
    }

    listAllRooms(hotelRoom);
    
    return 0;
}

void printMenu() {
    cout << "\tHotel Manager";
    cout << "1. Add Occupier"   << endl;
    cout << "2. Lookup Room"    << endl;
    cout << "3. List all Rooms" << endl;
    cout << "3. Quit";
}

void listAllRooms(map<int, string> map) {
    for (const auto& pair : map) {
        cout << "Room #: " << pair.first << " Occupant: " << pair.second << endl;
    }
    logMessage("All rooms have been listed.");
}

void logMessage(const string& message, const string& level) {
    cout << '[' << level << ']' << ' ' << message;
}