/**------------------------------------------

    Program 1: Matryoshka Dolls
        Prompt for the number of dolls and display
        ASCII Matryoshka dolls in decending order
        above each other.

    Course: CS 141, Spring 2022.
    System: Windows using Visual Studio CMake
    Author: Prof. Christopher Fulton

    Original ASCII graphics gives:
        ------------------------------------------
             Happy New Year!  Welcome to:
            ___      __     ___     ___
               \    /  \       \       \
               /   |    |      /       /
              /    |    |     /       /
             /     |    |    /       /
            /____   \__/    /____   /____

        ------------------------------------------

 ---------------------------------------------*/

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menuOption = 0;
    cout << "Program 1: Matryoshka Dolls            \n"
        << "Choose from among the following options:  \n"
        << "   1. Display original graphic  \n"
        << "   2. Display Matryoshka Dolls         \n"
        << "   3. Exit the program          \n"
        << "Your choice -> ";
    cin >> menuOption;

    // Handle menu option of 3 to exit
    if (menuOption == 3) {
        exit(0);
    }
    // Handle menu option of 1 to display custom ASCII graphics
    else if (menuOption == 1) {
        // My own graphic.  You must create your own.
        cout << setw(8) << " ";
        // Display a line across the top
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
        // Display ASCII graphics for "2022".  Yours must be different!
        cout << setw(8) << " " << "         _nnnn_                      \n"
            << setw(8) << " " << "        dGGGGMMb     ,**************.\n"
            << setw(8) << " " << "       @p~qp~~qMb    | Hello World! |\n"
            << setw(8) << " " << "       M|@||@) M|   _;..............'\n"
            << setw(8) << " " << "       @,----.JM| -'\n"
            << setw(8) << " " << "      JS^\\__/  qKL\n"
            << setw(8) << " " << "     dZP        qKRb\n"
            << setw(8) << " " << "    dZP          qKKb\n"
            << setw(8) << " " << "   fZP            SMMb\n"
            << setw(8) << " " << "   HZM            MMMM\n"
            << setw(8) << " " << "   FqM            MMMM\n"
            << setw(8) << " " << " __| |.        ||dS|qML\n"
            << setw(8) << " " << "  |    `.       | `' |Zq\n"
            << setw(8) << " " << " _)      \\.___.,|     .'\n"
            << setw(8) << " " << "|____   )MMMMMM|   .'\n"
            << setw(8) << " " << "     `-'       `--' hjm\n"
            << endl;
        cout << setw(8) << " ";
        // Display a line across the bottom
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
    } //end if( menuOption == 1)  // menu option to display custom graphic

    else if (menuOption == 2) {
        // Prompt for and get the number of dolls.
        int numberOfDolls = 0;
        cout << "Number of dolls -> ";
        cin >> numberOfDolls;

        // Place your code starting here
       for(int i = 0; i < numberOfDolls; i++){
           cout << setw(numberOfDolls + 3) << "( )" << endl;
           for(int j = 0; j <= i; j++){
               cout << setw(numberOfDolls - j) << "/";
               if(i % 2 == 0 && j == 0){
                   cout << " - ";
               }else if(i % 2 == 1 && j == 0){
                   cout << " : ";
               }else{
                   for(int k = 0; k <= (2 * (j + 1)); k++){
                       cout << " ";
                   }
               }
               cout << "\\" << endl;
           }
           for(int j = i; j >= 0; j--){
               cout << setw(numberOfDolls - (j - 1)) << "\\";
               for(int k = 0; k <= (2 * j); k++){
                   cout << " ";
               }
               cout << "/" << endl;
           }
           cout << setw(numberOfDolls + 2) << "-" << endl;

       }
        // ...


       

    } //end if( menuOption == 2) // menu option to display dolls
    
    cout << "Exiting" << endl;
    return 0;
}
