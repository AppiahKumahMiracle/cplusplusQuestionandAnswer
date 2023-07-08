/*
     Serendipity Booksellers has a book club that awards points to 
     its customers based on the number of books purchased each month. 
     The points are awarded as follows:
    • If a customer purchases 0 books, he or she earns 0 points.
    • If a customer purchases 1 book, he or she earns 5 points.
    • If a customer purchases 2 books, he or she earns 15 points.
    • If a customer purchases 3 books, he or she earns 30 points.
    • If a customer purchases 4 or more books, he or she earns 60 points. 
    Design a program that asks the user to enter the number of books 
    that he or she has purchased this month and displays the number of 
    points awarded.

    /* Author by Appiah Kumah Miracle

*/
#include <iostream>
using namespace std;

int main(){
    // create variable
    int bookPurchased;
    // prompt user to enter the number of books he or she have purchase.
    cout << "Enter the number of books you purchases within the month"<<endl;
    cin >> bookPurchased;
    // Testing and Displaying result.
    if(bookPurchased == 1){
        cout << "You have earn 5 points. Congratulation!!!"<<endl;
    }
    else if (bookPurchased == 2)
    {
        cout << "You have earn 15 points. Congratulation!!!"<<endl;
    }
    else if (bookPurchased == 3)
    {
        cout << "You have earn 30 points. Congratulation!!!"<<endl;
    }
    else if (bookPurchased >= 4)
    {
        cout << "You have earn 60 points. Congratulation!!!"<<endl;
    }
    else{
        cout << "Oh!! you earn 0 point. Try to purchase book next time."<<endl;
    }
    return 0;
}