/******************************
   Ethan Willinger
   6/10/2020
   OutlierDetector.cpp
   This program provides a function that tests an array for an outlier, if the array doesn't have one it communicates 
   that with the user. NOTE program is designed to be provided with test arrays, function works but the user cannot add their own arrays
   (future coming soon maybe??)
********************************/

#include <vector>
#include <cstdlib>
#include <iostream>

int main() {


	system("PAUSE");
	return 0;

}
//Take in a vector and determine if it contains an outlier, if not communicate that with the user
int FindOutlier(std::vector<int> arr) {
	std::vector<int> odd;			//Odd and even array containers
	std::vector<int> even;

	//Determine if an int is even or odd and place it in the right vector, do this for each int in arr
	for (int x : arr) {
		if (x % 2 == 0) {
			even.push_back(x);
		}
		else {
			odd.push_back(x);
		}
	}

	int outlier;					//Outlier number

	if (odd.size() == 1) {
		outlier = odd.at(0);
	}
	else if (even.size() == 1) {
		outlier = even.at(0);
	}
	else {
		std::cout << "No outliers here!" << std::endl;
	}
	return outlier;

}

