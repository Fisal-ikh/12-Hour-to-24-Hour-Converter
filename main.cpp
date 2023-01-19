//Fisal Ikhmayes
//project one cs-210
//01/22/23

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
	int hour;
	int min;
	int sec;
	int hour2;
	int min2;
	int sec2;
	int choice;
	int amPm; // input for am and pm
	string amPmOut; // output for ampm
	bool loop = true;
	bool loop2 = true;


	while (loop == true) { // keeps iritating until user exits program
		for (unsigned int i = 0; i < 4; ++i){ // keeps taking input until user enters all parameters
				std::cout << std::string(29, '*') << std::endl; // multiplys * x many times
				std::cout << "* 1 - To enter hour.        *" << std::endl;
				std::cout << "* 2 - To enter minute.      *" << std::endl;
				std::cout << "* 3 - To enter second.      *" << std::endl;
				std::cout << "* 4 - 1 for AM : 2 for PM.  *" << std::endl;
				std::cout << "* 5 - Exit program.         *" << std::endl;
				std::cout << std::string(29, '*') << std::endl;

				std::cin >> choice;
				while (choice > 5 || choice <= 0){
					std::cout << "Invalid input, enter number between 1 to 5." << std::endl;
					std::cin >> choice;
					}

				if (choice == 1){
					std::cout << "Enter hours.";
					std::cin >> hour;
					while (hour > 12 || hour <= 0) { // input validation for hour and negative numbers
						std::cout << "Invalid Input, hour must be less than 12 and positive number." << std::endl;
						std::cin >> hour;
					}
					std::cout << hour << " hours entered." << std::endl;
				}
				else if (choice == 2) {
					std::cout << "Enter Minutes.";
					std::cin >> min;
					while (min > 60 || min <= 0) { //input validation for min and negative number
						std::cout << "Invalid Input, Minutes must be 60 or less and positive number." << std::endl;
						std::cin >> min;
					}
					std::cout << min << " Minutes entered." << std::endl;
				}
				else if (choice == 3) {
					std::cout << "Enter Seconds.";
					std::cin >> sec;
					while (sec > 60 || sec <= 0) { //input validation for min and negative number
						std::cout << "Invalid Input, Seconds must be 60 or less and positive number." << std::endl;
						std::cin >> sec;
					}
					std::cout << sec << " Seconds entered." << std::endl;
				}
				else if (choice == 4) { // checks if its am or Pm
					std::cout << "1 for AM : 2 for PM.";
					std::cin >> amPm;
					while (amPm > 2 || amPm < 1){ // input Validation
						std::cout << "Invalid Input, Input must be either 1 or 2." << std::endl;
						std::cin >> amPm;
					}
					if (amPm == 1){ // assigns am
						amPmOut = "AM" ;
						std::cout << amPmOut << " Entered." << std::endl;
					}
					else if (amPm == 2){ // assigns pm
						amPmOut = "PM";
						std::cout << amPmOut << " Entered." << std::endl;
					}
				}
				else if (choice == 5){// exits the program
					std::cout << "Program exited." << std::endl;
					loop = false;
					return 0;
				}


				}
while (loop == true || loop2 == true){
	std::cout << std::string(23, '*') << std::endl; // outputs * x many times
	std::cout << "*   12 Hour Clock     *" << std::endl; // outputs times
	std::cout << "*   " <<setw(2)<<setfill('0') << hour << ":" <<setw(2)<<setfill('0') << min << ":" << setw(2)<<setfill('0') << sec << " " << amPmOut << "        *" << std::endl;
	std::cout << std::string(23, '*') << std::endl;
	if (amPm == 1) {
		std::cout << std::string(23, '*') << std::endl;// outputs * x many times
		std::cout << "*   24 Hour Clock     *" << std::endl; //converts to 24 hr time
		std::cout << "*   " << setw(2)<<setfill('0') << hour << ":" << setw(2)<<setfill('0') << min << ":" << setw(2)<<setfill('0') << sec << "           *" << std::endl;
		std::cout << std::string(23, '*') << std::endl; // outputs * x many times
	}
	else if (amPm == 2) { // this checks to see if the time is pm so we convert it to 24 by adding 12
		std::cout << std::string(23, '*') << std::endl; // outputs * x many times
		std::cout << "*   24 Hour Clock     *" << std::endl; //converts to 24 hr time
		std::cout << "*   " << setw(2)<<setfill('0') << (hour + 12) << ":" << setw(2)<<setfill('0') << min << ":" << setw(2)<<setfill('0')<<sec << "          *" << std::endl;
		std::cout << std::string(23, '*') << std::endl; // outputs * x many times
	}


	std::cout << "Would you like to exit the program? 1 for yes : 2 for no." << std::endl;

	std::cin >> choice;//takes input
	while (choice > 2 || choice <= 0){ // input validation
		std::cout << "Invalid Input, Enter 1 or 2 only." << std::endl;
		std::cin >> choice;
	}
	if (choice == 1) { // if user wants to exit the program exits, else itll keep going
		std::cout << "Program exited";
		loop = false;
		return 0;
	}
	else if (choice == 2) {
		loop = false;
	}
		while (loop2 == true) { // keeps iritating until user exits program
			for (unsigned int i = 0; i < 3; ++i){ // keeps taking input until user enters all parameters
						std::cout << std::string(27, '*') << std::endl; // multiplys * x many times
						std::cout << "* 1 - To add hour.        *" << std::endl;
						std::cout << "* 2 - To add minute.      *" << std::endl;
						std::cout << "* 3 - To add second.      *" << std::endl;
						std::cout << "* 4 - Exit program.       *" << std::endl;
						std::cout << std::string(27, '*') << std::endl;

						std::cin >> choice;
						while (choice > 4 || choice <= 0){
							std::cout << "Invalid input, enter number between 1 to 4." << std::endl;
							std::cin >> choice;
						}

						if (choice == 1){
							std::cout << "Enter hours.";
							std::cin >> hour2;
							while (hour2 > 12 || hour2 <= 0) { // input validation for hour and negative numbers
								std::cout << "Invalid Input, hour must be less than 12 and positive number." << std::endl;
								std::cin >> hour2;
							}
							hour = hour + hour2;
							std::cout << hour2 << " hours added." << std::endl;
						}
						else if (choice == 2) {
							std::cout << "Enter Minutes.";
							std::cin >> min2;
							while (min2 > 60 || min2 <= 0) { //input validation for min and negative number
								std::cout << "Invalid Input, Minutes must be 60 or less and positive number." << std::endl;
								std::cin >> min2;
							}
							min = min + min2;
							std::cout << min2 << " Minutes added." << std::endl;
						}
						else if (choice == 3) {
							std::cout << "Enter Seconds.";
							std::cin >> sec2;
							while (sec2 > 60 || sec2 <= 0) { //input validation for min and negative number
								std::cout << "Invalid Input, Seconds must be 60 or less and positive number." << std::endl;
								std::cin >> sec2;
							}
							sec = sec + sec2;
							std::cout << sec2 << " Seconds added." << std::endl;
							loop2 = false;
						}


						else if (choice == 4){// exits the program
							std::cout << "Program exited." << std::endl;
							loop = false;
							return 0;
						}
	}
			std::cout << std::string(23, '*') << std::endl; // outputs * x many times
			std::cout << "*   12 Hour Clock     *" << std::endl; // outputs times
			std::cout << "*   " << setw(2)<<setfill('0') << hour << ":" << setw(2)<<setfill('0')<< min << ":" << setw(2)<<setfill('0')<<sec << " " << amPmOut << "        *" << std::endl;
			std::cout << std::string(23, '*') << std::endl;
			if (amPm == 1) {
				std::cout << std::string(23, '*') << std::endl;// outputs * x many times
				std::cout << "*   24 Hour Clock     *" << std::endl; //converts to 24 hr time
				std::cout << "*   " << setw(2)<<setfill('0') << hour << ":" << setw(2)<<setfill('0')<< min << ":" << setw(2)<<setfill('0')<<sec << "           *" << std::endl;
				std::cout << std::string(23, '*') << std::endl; // outputs * x many times
			}
			else if (amPm == 2) { // this checks to see if the time is pm so we convert it to 24 by adding 12
				std::cout << std::string(23, '*') << std::endl; // outputs * x many times
				std::cout << "*   24 Hour Clock     *" << std::endl; //converts to 24 hr time
				std::cout << "*   " << setw(2)<<setfill('0') << (hour + 12) << ":" << setw(2)<<setfill('0') << min << ":" << setw(2)<<setfill('0') << sec << "          *" << std::endl; // setw and set fill output the zero before single digit numbers
				std::cout << std::string(23, '*') << std::endl; // outputs * x many times
			}


			std::cout << "Would you like to exit the program? 1 for yes : 2 for no." << std::endl;

			std::cin >> choice;//takes input
			while (choice > 2 || choice <= 0){ // input validation
				std::cout << "Invalid Input, Enter 1 or 2 only." << std::endl;
				std::cin >> choice;
			}
			if (choice == 1) { // if user wants to exit the program exits, else itll keep going
				std::cout << "Program exited";
				loop = false;
				return 0;
			}
			else if (choice == 2) {
				loop = false;
				loop2 = true;
			}
	}
	}
	}
	}

