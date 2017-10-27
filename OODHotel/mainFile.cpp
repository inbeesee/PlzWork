class room {    //main room class (will probably turn into more inherited classes)
				// The name off the room will correspond with the floor 
				// and there will be sub rooms inside of suites.
public:
	room(string roomName, int occupants, )
}



//brooke’s source code stuff. Basic form

#include <iostream>
#include <string>
#include "Hotel.h"
using namespace std;

int main() {
	cout << "Welcome to the front desk of the ___ Hotel\n";
	cout << "Are you a VIP Member? Enter 1 if yes and 0 if no" << endl;
	int decision;
	cin >> decision;
	if (decision == 1) {
		VIP vip1("Name", 18, 0, 0, 0);
		cout << "Please enter your first name: " << endl;
		string name;
		cin >> name;
		vip1.setName(name);
		cout << "Please enter your age: " << endl;
		int age;
		cin >> age;
		if (age >= 18 && age <= 115) {
			vip1.setAge(age);
		}
		else {
			cout << "You must be 18 or older to stay at this hotel." << endl;
			return 0;
		}
		cout << "How much money do you have to spend on a room?: " << endl;
		double money;
		cin >> money;
		vip1.setMoney(money);
		cout << "Enter your ID number: " << endl;
		int id;
		cin >> id;
		vip1.setID(id);
	}
	else {
		Guest guest1("Name", 0, 0, 0, 0); //name, age, money, id, room
		cout << "Please enter your first name: " << endl;
		string name;
		cin >> name;
		guest1.setName(name);
		cout << "Please enter your age: " << endl;
		int age;
		cin >> age;
		if (age >= 18 && age <= 115) {
			guest1.setAge(age);
		}
		else {
			cout << "You must be 18 or older to stay at this hotel." << endl;
			return 0;
		}
		cout << "How much money do you have to spend on a room?: " << endl;
		double money;
		cin >> money;
		guest1.setMoney(money);
		cout << "Enter your ID number: " << endl;
		int id;
		cin >> id;
		guest1.setID(id);
	}
	cout << "Please choose an option below:\n";
	cout << "1. Request a room\n";
	cout << "2. Check out of a room\n";
	cout << "3. See current bill\n";
	cout << "4. Request a janitor or supplies\n";
	cout << "Press 0 to exit the system.\n\n";
	int option;
	cin >> option;
	switch (option) {
	case 1:
		cout << "\nWelcome to the reservation system.\n";
		Room room1;
		cout << "What type of room do you want? Enter 1 for Suite or 2 for Double: ";
		int type;
		cin >> type;
		if (type == 1) {
			while (room1.getRoomNumber() <= 10) {
				room1.getBooked(room1.getRoomNumber());

			}
		}
		if (type == 2) {

		}

		break;
	case 2:
		cout << "\nPlease continue to check out of the room.\n";
		break;
	case 3:
		cout << "\nWelcome to the Payment system to see current bill.\n";
		break;
	case 4:
		cout << "\nWelcome to the hotel housekeeping service\n";
		break;
	default:
		break;
	}
}




//hotel.h header file containing all the classes. It can all be in same source code but it just seemed easier this way to organize stuff


#include <iostream>
#include <string>
using namespace std;

class Guest {
protected:
	string guestName;
	int guestAge;
	double moneyAvailable;
	int guestID;
	int guestRoom;
public:
	Guest(string name, int age, double money, int id, int room) {
		guestName = name;
		guestAge = age;
		moneyAvailable = money;
		guestID = id;
		guestRoom = room;
	}
	void setName(string n) {
		guestName = n;
	}
	string getName() {
		return guestName;
	}
	void setAge(int a) {
		guestAge = a;
	}
	int getAge() {
		return guestAge;
	}
	void setMoney(double m) {
		moneyAvailable = m;
	}
	double getMoney() {
		return moneyAvailable;
	}
	void setID(int id) {
		guestID = id;
	}
	int getID() {
		return guestID;
	}
	void setRoom(int room) {
		guestRoom = room;
	}
	int getRoom() {
		return guestRoom;
	}
	void checkIn(int roomNum) {
		guestRoom = roomNum;
	}
	void checkOut() {
		guestRoom = 0;
	}
	void payBill() {

	}

};

class VIP : public Guest {
public:
	VIP(string name, int age, double money, int id, int room) : Guest(name, age, money, id, room) {
		guestName = name;
		guestAge = age;
		moneyAvailable = money;
		guestID = id;
		guestRoom = room;
	}
	double discout = .05;
};

class Room {
private:
	int roomNumber{ 0 }; //0 is default, 1-10 is double room, 11-20 is suite
	int roomType; // 1= suite, 2 = double
	int booked; // 0 is not booked, 1 is booked
	int clean; // 0 is not clean, 1 is clean
public:
	void setRoomType() {
		if (roomNumber > 0 && roomNumber <= 10) {
			roomType = 2;
		}
		else if (roomNumber > 10 && roomNumber <= 20) {
			roomType = 1;
		}
	}

	//trying to figure out how to check if a certain room of a certain type is booked or not. Having trouble with that.
	void checkClean() {
		if (clean == 1) {
			cout << "Room is currently clean.0";
		}
		else {
			cout << "Room is not clean. Requesting a janitor now!";
		}
	}

	void getBooked(int number) {
		roomNumber = number;
		if (booked == 0) {
			cout << "Room is not booked";
		}
		if (booked == 1) {
			cout << "Room is taken";
		}
	}
	int getRoomNumber() {
		return roomNumber;
	}
};

class Storage {
private:

public:
};

class Janitor {
private:
	string name;
	int ID;
	string location;
public:
	void cleanRoom() {

	}
};

class FrontDesk {
private:
	string name;
	int ID;
	string location;
	int phoneNumber;

public:

	void checkRoom() {

	}

};

class Payment {
private:
	int billNumber;
	string guestID;
public:

};


