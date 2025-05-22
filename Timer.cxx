/*==================================================================================
    TIMER PROGRAM - Created by Ushio Basumatary

    Description:
    A simple yet cool console-based countdown timer program built using C++.
    Allows the user to input hours, minutes, and seconds and runs a countdown.
    Includes looping functionality to restart or exit after the timer ends.

    Author:       Ushio Basumatary
    Gmail:        basumataryushio@gmail.com
    Instagram:    @vynce.0
    Discord:      peaches_0011

    All code, logic, and design belong to the creator. This project is made 
    for fun, learning, and to remind you: even seconds matter!

    © 2025 Ushio Basumatary. All rights reserved.
==================================================================================*/

#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;

int hr, mins, sec, sp;
string op;

void option()
{
    while (true)
    {
        for (sp=0; sp<19; sp++)
        cout << "-";
        cout << "Welcome To The Timer Program.";
        for (sp=0; sp<19; sp++)
        cout << "-";
        cout << endl << endl;
        cout << "     It is a simple program to just make a countdown aka timer." << endl << endl;
        for (sp=0; sp<67; sp++)
        cout << "-";
        cout << endl << endl << endl;
        
        cout << "     Enter \"Start\" to start the timer." << endl << endl;
        cout << "     Enter \"Exit\" to exit the timer." << endl << endl;
        cout << "     User>> "; cin >> op;

        if (op == "start" || op == "Start" || op == "exit" || op == "Exit")
            break;
            
            system ("cls");

        cout << "The option you entered is not correct. Please retry." << endl << endl;
    }
}

void value()
{
    for (sp=0; sp<19; sp++)
    cout << "-";
    cout << "Welcome To The Timer Program.";
    for (sp=0; sp<19; sp++)
    cout << "-";
    cout << endl << endl;
    cout << "     It is a simple program to just make a countdown aka timer." << endl << endl;
    for (sp=0; sp<67; sp++)
    cout << "-";
    cout << endl << endl << endl;
    
    
    cout << "     Enter The Value Of Hour: ";
    cin >> hr;
    cout << "     Enter The Value Of Minutes: ";
    cin >> mins;
    cout << "     Enter The Value Of Seconds: ";
    cin >> sec;
}

void timer()
{
    for (int hour = hr; hour >= 0; hour--)
    {
        for (int minute = (hour == hr ? mins : 59); minute >= 0; minute--)
        {
            for (int seconds = (hour == hr && minute == mins ? sec : 59); seconds >= 0; seconds--)
            {
                system("cls"); // Clear screen on Windows
                
                for (sp=0; sp<19; sp++)
                cout << "-";
                cout << "Welcome To The Timer Program.";
                for (sp=0; sp<19; sp++)
                cout << "-";
                cout << endl << endl;
                cout << "     It is a simple program to just make a countdown aka timer." << endl << endl;
                for (sp=0; sp<67; sp++)
                cout << "-";
                cout << endl << endl << endl;
               
                cout << "     Hour:      " << hour << endl;
                cout << "     Minute:    " << minute << endl;
                cout << "     Seconds:   " << seconds << endl;

                std::this_thread::sleep_for(std::chrono::seconds(1)); // add delay
            }
        }
    }
    char re;
    cout << endl << endl << "     Do You Want To Rer-Run Again?";
    cout << endl << "     Enter In Y/N" << endl << "     User>> ";
    cin >> re;
    
    if (re == 'y' || re == 'Y')
    {
        system ("cls");
        hr=0;
        mins=0;
        sec=0;
        
        value ();
    }
    
    else if (re == 'n' || re == 'N')
    {
        
    }
    
    else
    cout << "Invalid Option (We Asume It As Exit)";
}

int main()
{
    
    for (sp=0; sp<19; sp++)
        cout << "-";
        cout << "Welcome To The Timer Program.";
        for (sp=0; sp<19; sp++)
        cout << "-";
        cout << endl << endl;
        cout << "     It is a simple program to just make a countdown aka timer." << endl << endl;
        for (sp=0; sp<67; sp++)
        cout << "-";
        cout << endl << endl << endl;
        
        
    cout << "===================================================================" << endl << endl;
    cout << "TIMER PROGRAM - Created by Ushio Basumatary" << endl << endl << endl;

    cout << "Description:\n"
    "A simple yet cool console-based countdown timer program built using C++.\n"
    "Allows the user to input hours, minutes, and seconds and runs a countdown.\n"
    "Includes looping functionality to restart or exit after the timer ends." << endl << endl << endl;

    cout <<
    "Author:       Ushio Basumatary\n"
    "Gmail:        basumataryushio@gmail.com\n"
    "Instagram:    @vynce.0\n"
    "Discord:      peaches_0011\n\n";

    cout << "All code, logic, and design belong to the creator. This project is made \n"
   " for fun, learning, and to remind you: even seconds matter!\n\n\n"

   " © 2025 Ushio Basumatary. All rights reserved.";
cout << "\n\n===================================================================";
    
    cout << endl << endl << endl;
    cout << "Enter Any Key To Proceed";
    
    getch ();
    system ("cls");
    option();

    if (op == "start" || op == "Start")
    {
        system("cls");
        value();
        timer();
    }
    else if (op == "exit" || op == "Exit")
    {
        cout << endl << endl << "     Exiting the program..." << endl;
    }

    return 0;
}