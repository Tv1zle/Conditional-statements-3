﻿
#include <iostream>

int main()
{
    //Task 1
    int x1, y1, x2, y2;
    std::cout << "x1 = ";
    std::cin >> x1;


    std::cout << "y1 = ";
    std::cin >> y1;


    std::cout << "x2 = ";
    std::cin >> x2;


    std::cout << "y2 = ";
    std::cin >> y2;


    if (x1 == x2 && y1 == y2) {
        std::cout << "Parallel to the y-axis and x-axis, because it's a point. \n \n";
    }
    else if (x1 == x2) {
        std::cout << "Parallel to the y-axis. \n \n";
    }
    else if (y1 == y2) {
        std::cout << "Parallel to the x-axis. \n \n";
    }
    else {
        std::cout << "Not parallel. \n \n";
    }



    //Task 2
    double Number;
    std::cout << "Number = ";
    std::cin >> Number;


    double Answer = Number - (int)Number;

    if (Answer == 0.0 || 0) {
        std::cout << "The entered number doesn't have a real part \n \n";
    }
    else {
        std::cout << "The entered number have a real part \n \n";
    }



    //Task 3
    int Hours, Minutes, Seconds;
    std::cout << "Quantity of hours = ";
    std::cin >> Hours;


    std::cout << "Quantity of minutes = ";
    std::cin >> Minutes;


    std::cout << "Quantity of seconds = ";
    std::cin >> Seconds;


    if (Hours >= 24 || Minutes >= 60 || Seconds >= 60 || Hours >= -1 || Minutes >= -1 || Seconds >= -1) {
        std::cout << "Time isn't correct \n \n";
    }
    else{
        std::cout << "All is correct ! \n \n";
    }



    //Task 4
    int SixthNumber;
    std::cout << "Number with six symbols = ";
    std::cin >> SixthNumber;


    int FirstThree = (SixthNumber / 100000 % 10) + (SixthNumber / 10000 % 10) + (SixthNumber / 1000 % 10);
    int SecondThree = (SixthNumber / 100 % 10) + (SixthNumber / 10 % 10) + (SixthNumber % 10);


    if (FirstThree == SecondThree) {
        std::cout << "Happy ticket \n \n";
    }
    else {
        std::cout << "Unhappy ticket \n \n";
    }


    //Task 5
    int Time;
    std::cout << "What time ?\n";
    std::cin >> Time;


    if (Time >= 0 && Time <= 6) {
        std::cout << "Good night";
    }
    else if (Time >= 7 && Time <= 11) {
        std::cout << "Good morning";
    }
   else if (Time >= 12 && Time <= 16) {
       std::cout << "Good day";
   }
   else if (Time >= 17 && Time <= 21) {
       std::cout << "Good evening";
   }
   else {
       std::cout << "Good night, bruh";
   }

}
