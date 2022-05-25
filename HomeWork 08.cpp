
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


    switch (Time) {
    case 1:
        std::cout << "Good night !";
        break;
    case 2:
        std::cout << "Good night !";
        break;
    case 3:
        std::cout << "Good night !";
        break;
    case 4:
        std::cout << "Good night !";
        break;
    case 5:
        std::cout << "Good night !";
        break;
    case 6:
        std::cout << "Good night !";
        break;
    case 7:
        std::cout << "Good morning !";
        break;
    case 8:
        std::cout << "Good morning !";
        break;
    case 9:
        std::cout << "Good morning !";
        break;
    case 10:
        std::cout << "Good morning !";
        break;
    case 11:
        std::cout << "Good morning !";
        break;
    case 12:
        std::cout << "Good day !";
        break;
    case 13:
        std::cout << "Good day !";
        break;
    case 14:
        std::cout << "Good day !";
        break;
    case 15:
        std::cout << "Good day !";
        break;
    case 16:
        std::cout << "Good day !";
        break;
    case 17:
        std::cout << "Good evening !";
        break;
    case 18:
        std::cout << "Good evening !";
        break;
    case 19:
        std::cout << "Good evening !";
        break;
    case 20:
        std::cout << "Good evening !";
        break;
    case 21:
        std::cout << "Good evening !";
        break;
    case 22:
        std::cout << "Good night !";
        break;
    case 23:
        std::cout << "Good night !";
        break;
    case 24:
        std::cout << "Good night !";
        break;
    case 0:
        std::cout << "Good night !";
        break;
    default:
        std::cout << "Good night, forever ...";
    }
}

