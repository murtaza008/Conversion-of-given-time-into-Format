#include <iostream>

using namespace std;

int main()
{
   int giventime;  // Declare a variable to store the given time in seconds
   int hours;      // Declare a variable to store the hours component of the time
   int minutes;    // Declare a variable to store the minutes component of the time
   int seconds;    // Declare a variable to store the seconds component of the time

   cout << "Enter the time in seconds : " ; // Prompt the user to enter the time in seconds
   cin >> giventime;  // Read the input time from the user

   if (giventime >= 0)  // Check if the given time is non-negative
   {
       hours = giventime / 3600;  // Calculate the hours component
       giventime = giventime - (hours * 3600);  // Update the remaining time
       minutes = giventime / 60;  // Calculate the minutes component
       seconds = giventime - (minutes * 60);  // Calculate the seconds component

       // Display the converted time in hours:minutes:seconds format
       cout << "Your given time in seconds when expressed as hours:minutes:seconds is " << hours << ":" << minutes << ":" << seconds;
   }

   else  // if the given time is negative
   {
       cout << "Invalid Input" << endl;  // Display an error message for negative input
   }

   return 0;  // Return 0 to indicate successful program execution
}
