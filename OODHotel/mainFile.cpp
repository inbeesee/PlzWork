


//hotel.h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Guest {
public:
    Guest (string name, int age, double money, int id, int room) {
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
protected:
    string guestName;
    int guestAge;
    double moneyAvailable;
    int guestID;
    int guestRoom;

};

class VIP : public Guest {
public :
    VIP(string name, int age, double money, int id, int room) : Guest (name, age, money, id, room) {
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
    int roomNumber; //0 is default, 1-10 is double room, 11-20 is suite
    int roomType; // 1= suite, 2 = double
    int booked; // 0 is not booked, 1 is booked
    int clean; // 0 is not clean, 1 is clean
    double price;
public:
    Room(int number, int type, int book, int c) {
        roomNumber = number;
        roomType = type;
        booked = book;
        clean = c;
    }
    void setRoomType(int number) {
        roomType = number;
    }
    void checkClean() {
        if (clean == 1) {
            cout << "Room is currently clean.";
        }
        else {
            cout << "Room is not clean. Requesting a janitor now!";
        }
    }
    void setBooked() {
        booked = 1;
    }
    int getBooked() {
        return booked;
    /*    if (booked == 0) {
            cout << "Room " << roomNumber << " is not booked" << endl;;
        }
        if (booked == 1) {
            cout << "Room " << roomNumber <<  " is taken" << endl;
        }
        */
    }
    int getRoomNumber() {
        return roomNumber;
    }

    void setPrice() {
        if (roomType == 1) { //suite
            price = 207.50;
        }
        else if (roomType == 2) { //double
            price = 150.75;
        }
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

    void checkRoom(int number) {
    }

};

class Payment {
private:
    int billNumber;
    string guestID;
public:
    
};
