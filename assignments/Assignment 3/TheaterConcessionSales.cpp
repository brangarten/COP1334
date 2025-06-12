#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // THE PROBLEM
    /*
    Movie theaters often make more money on food and drink sales than they do on ticket sales.
    One particular theater charges $10 for tickets to evening shows and just $3 for kiddie matinees.
    They have discovered that the average evening patron spends $6.50 on concessions and the average
    matinee patron spends $8.50 on concessions.

    Write a program that computes and displays what percent of evening show income and what percent of matinee show income
    comes from ticket sales and what percent comes from concession stand purchases.
    */

    //Ticket sale income from matinee & evening showings
    //Concession sale from matinee & evening

    // Variables for ticket prices & attendees
    int matineeTicket = 3,
        eveningTicket = 10,
        matineeAttendees,
        eveningAttendees;

    // Variables to store Concession price
    float matineeAvgConcession = 8.50,
          eveningAvgConcession = 6.50;

    // Extract user input into attendees var
    cout << "How many people attended during the matinee showings? \n> ";
    cin >> matineeAttendees;

    cout << endl << "How many people attended during the evening showings? \n> ";
    cin >> eveningAttendees;

    // Find the % income by first finding the percentage of people who attended multiplied by the ticket price
    // Then add it to the original ticket price
    cout << endl << "Matinee Ticket Income: %" << matineeTicket + (matineeTicket * (matineeAttendees / 100.0));
    cout << endl << "Evening Ticket Income: %" << eveningTicket + (eveningTicket * (eveningAttendees / 100.0));

    cout << endl;

    // Same applies to over here
    cout << endl << "Matinee Concession Income: %" << matineeAvgConcession + (matineeAvgConcession * (matineeAttendees / 100.0));
    cout << endl << "Evening Concession Income: %" << eveningAvgConcession + (eveningAvgConcession * (eveningAttendees / 100.0));

    cout << endl;

    return 0;
}
