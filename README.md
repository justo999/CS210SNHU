# CS210SNHU
Jusin Fanesi's CS 210 Repo.

This project simulates an investment calculator, allowing the user to input amounts for Initial Investment, Monthly Deposit, Annual interest, and Number of Years.
This allows the user to view their year-end balances + earned interest in two options, with or without monthly deposits.

InvestmentCalculator class (InvestmentCalculator.h) and InvestmentCalculator.cpp):

This class encapsulates the investment-related calculations and data.
It has private member variables for Initial Investment, Monthly Deposit, Annual Interest Rate, and Number of Years.
The class constructor initializes these member variables based on the input provided.
The calculateAndDisplayReport() method performs the calculations for year-end balances and earned interest under two scenarios: with and without monthly deposits.

Main Program (main.cpp):

The main program interacts with the user to gather input for Initial Investment, Monthly Deposit, Annual Interest Rate, and Number of Years.
It then creates an instance of the InvestmentCalculator class using the provided input.
The program then calls the calculateAndDisplayReport() method to calculate and display the investment report for both scenarios.
After displaying the report, the program prompts the user to press any key before exiting.

By simulating two scenarios (with and without monthly deposits), the program helps users understand the impact of consistent contributions on their investment growth.

Implementing the loop logic to calculate and display year-end balances and earned interest for multiple years was the hardest piece for me. It involved correctly updating the opening amount for each year based on the calculated closing balance from the previous year. I got through this by looking at previous work I did using loops as well as watching youtube videos. I think I handled the program well overall, but there are some areas I could have been better. I could have included proper input validation for my investment. Right now, my program assumes that the user will input valid numeric values, but they may not. It would also be better off if I separated the UI logic from the class. Using namespace std was a timesaver, but If I had to go back I would not use it. I would also modify the calculateAndDisplayReport() function by separating the display logic into a separate function. This would help maintain a clear separation between calculations and user output.

There are many skills from this project that are transferable to other projects or work I may do in the future. Those include Object-Oriented Programming, User Input Handling, Loop logic, calculations, organization of code, and User interface design. Im sure there are many other use cases I have not mentioned but those are a few that I felt stood out.
