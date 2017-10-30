//source.cpp

#include <iostream>
#include <string>
#include "Hotel.h"

using namespace std;

int main() {
        cout << "Welcome to the front desk of the ___ Hotel\n";
        int loop{ 1 };
        while (loop == 1) {
            Room room1(1, 2, 0, 1); //room number (1-10 double, 1-20 suite), type(1 == suite, 2 == double), booked (1 == booked), clean (1 == clean)
            Room room2(2, 2, 0, 1), room3(3, 2, 0, 1), room4(4, 2, 0, 1), room5(5, 2, 0, 1), room6(6, 2, 0, 1), room7(7, 2, 0, 1), room8(8, 2, 0, 1), room9(9, 2, 0, 1), room10(10, 2, 0, 1);
            Room room11(11, 1, 0, 1), room12(12, 1, 0, 1), room13(13, 1, 0, 1), room14(14, 1, 0, 1), room15(15, 1, 0, 1), room16(16, 1, 0, 1), room17(17, 1, 0, 1), room18(18, 1, 0, 1), room19(19, 1, 0, 1), room20(20, 1, 0, 1);
            Guest guest1("Guest", 18, 0, 0, 0); //name, age, money, id, room
            VIP vip1("VIP", 18, 0, 0, 0); //name, age, money, id, room
            cout << "Are you a VIP Member? Enter 1 if yes and 0 if no" << endl;
            int decision;
            cin >> decision;
            cout << "Please enter your first name: " << endl;
            string name;
            cin >> name;
            if (decision == 1) {
                vip1.setName(name);
            }
            else {
                guest1.setName(name);
            }
            cout << "Please enter your age: " << endl;
            int age;
            cin >> age;
            if (age >= 18 && age <= 115) {
                if (decision == 1) {
                    vip1.setAge(age);
                }
                else {
                    guest1.setAge(age);
                }
            }
            else {
                cout << "You must be 18 or older to stay at this hotel." << endl;
                return 0;
            }
            cout << "The lowest room price is $150.75 and the highest is $207.50" << endl;
            cout << "How much money do you have to spend on a room?: " << endl;
            double money;
            cin >> money;
            if (decision == 1) {
                vip1.setMoney(money);
            }
            else {
                guest1.setMoney(money);
            }
            int innerLoop{ 100 };
            while (innerLoop == 100) {

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
                {
                    cout << "\nWelcome to the reservation system.\n";
                    cout << "Double rooms cost $150.75 a night. Suites cost $207.50 a night." << endl;
                    cout << "What type of room do you want? Enter 1 for Suite or 2 for Double: ";
                    int type;
                    cin >> type;
                    cout << "The following lists availability" << endl;
                    if (type == 2) {

                        if (room1.getBooked() == 0) {
                            cout << "Room 1 is not booked." << endl;
                        }
                        else {
                            cout << "Room 1 is taken." << endl;
                        }

                        if (room2.getBooked() == 0) {
                            cout << "Room 2 is not booked." << endl;
                        }
                        else {
                            cout << "Room 2 is taken." << endl;
                        }

                        if (room3.getBooked() == 0) {
                            cout << "Room 3 is not booked." << endl;
                        }
                        else {
                            cout << "Room 3 is taken." << endl;
                        }

                        if (room4.getBooked() == 0) {
                            cout << "Room 4 is not booked." << endl;
                        }
                        else {
                            cout << "Room 4 is taken." << endl;
                        }

                        if (room5.getBooked() == 0) {
                            cout << "Room 5 is not booked." << endl;
                        }
                        else {
                            cout << "Room 5 is taken." << endl;
                        }

                        if (room6.getBooked() == 0) {
                            cout << "Room 6 is not booked." << endl;
                        }
                        else {
                            cout << "Room 6 is taken." << endl;
                        }

                        if (room7.getBooked() == 0) {
                            cout << "Room 7 is not booked." << endl;
                        }
                        else {
                            cout << "Room 7 is taken." << endl;
                        }

                        if (room8.getBooked() == 0) {
                            cout << "Room 8 is not booked." << endl;
                        }
                        else {
                            cout << "Room 8 is taken." << endl;
                        }

                        if (room9.getBooked() == 0) {
                            cout << "Room 9 is not booked." << endl;
                        }
                        else {
                            cout << "Room 9 is taken." << endl;
                        }

                        if (room10.getBooked() == 0) {
                            cout << "Room 10 is not booked." << endl;
                        }
                        else {
                            cout << "Room 10 is taken." << endl;
                        }
                    }
                    else if (type == 1) {
                        if (room11.getBooked() == 0) {
                            cout << "Room 11 is not booked." << endl;
                        }
                        else {
                            cout << "Room 11 is taken." << endl;
                        }

                        if (room12.getBooked() == 0) {
                            cout << "Room 12 is not booked." << endl;
                        }
                        else {
                            cout << "Room 12 is taken." << endl;
                        }

                        if (room13.getBooked() == 0) {
                            cout << "Room 13 is not booked." << endl;
                        }
                        else {
                            cout << "Room 13 is taken." << endl;
                        }

                        if (room14.getBooked() == 0) {
                            cout << "Room 14 is not booked." << endl;
                        }
                        else {
                            cout << "Room 14 is taken." << endl;
                        }

                        if (room15.getBooked() == 0) {
                            cout << "Room 15 is not booked." << endl;
                        }
                        else {
                            cout << "Room 15 is taken." << endl;
                        }

                        if (room16.getBooked() == 0) {
                            cout << "Room 16 is not booked." << endl;
                        }
                        else {
                            cout << "Room 16 is taken." << endl;
                        }

                        if (room17.getBooked() == 0) {
                            cout << "Room 17 is not booked." << endl;
                        }
                        else {
                            cout << "Room 17 is taken." << endl;
                        }

                        if (room18.getBooked() == 0) {
                            cout << "Room 18 is not booked." << endl;
                        }
                        else {
                            cout << "Room 18 is taken." << endl;
                        }

                        if (room19.getBooked() == 0) {
                            cout << "Room 19 is not booked." << endl;
                        }
                        else {
                            cout << "Room 19 is taken." << endl;
                        }

                        if (room20.getBooked() == 0) {
                            cout << "Room 20 is not booked." << endl;
                        }
                        else {
                            cout << "Room 20 is taken." << endl;
                        }
                    }
                    cout << "Which room would you like to resesrve? ";
                    int reserve;
                    cin >> reserve;
                    switch (reserve) {
                    case 1:
                        if (room1.getBooked() == 0) {
                            room1.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 1." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 2:
                        if (room2.getBooked() == 0) {
                            room2.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 2." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 3:
                        if (room3.getBooked() == 0) {
                            room3.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 3." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 4:
                        if (room4.getBooked() == 0) {
                            room4.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 4." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 5:
                        if (room5.getBooked() == 0) {
                            room5.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 5." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 6:
                        if (room6.getBooked() == 0) {
                            room6.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 6." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 7:
                        if (room7.getBooked() == 0) {
                            room7.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 7." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 8:
                        if (room8.getBooked() == 0) {
                            room8.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 8." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 9:
                        if (room9.getBooked() == 0) {
                            room9.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 9." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 10:
                        if (room10.getBooked() == 0) {
                            room10.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 10." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 11:
                        if (room11.getBooked() == 0) {
                            room11.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 11." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 12:
                        if (room12.getBooked() == 0) {
                            room12.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 12." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 13:
                        if (room13.getBooked() == 0) {
                            room13.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 13." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 14:
                        if (room14.getBooked() == 0) {
                            room14.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 14." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 15:
                        if (room15.getBooked() == 0) {
                            room15.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 15." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 16:
                        if (room16.getBooked() == 0) {
                            room16.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 16." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 17:
                        if (room17.getBooked() == 0) {
                            room17.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 17." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 18:
                        if (room18.getBooked() == 0) {
                            room18.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 18." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 19:
                        if (room19.getBooked() == 0) {
                            room19.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 19." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    case 20:
                        if (room20.getBooked() == 0) {
                            room20.setBooked();
                            if (decision == 1) {
                                vip1.setRoom(reserve);//vip set
                            }
                            if (decision == 0) {
                                guest1.setRoom(reserve);//guest set
                            }
                            cout << "You have booked room 20." << endl;
                        }
                        else {
                            cout << "That room is taken!" << endl;
                        }
                        break;
                    }

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
                    return 0;
                }
                cout << "Would you like to do any other options?  \nEnter 1 to continue or 0 if you would like to end your session.";
                int session;
                cin >> session;
                if (session == 0) {
                    innerLoop = 0;
                    cout << endl;
                }
            }
        }
}












