# include <iostream>

// for shorter syntax
# define coords std::pair<int, int> 

// function to reduce syntax for input
inline std::string input(std::string msg){
	std::string inp; // to store the input
	
	// asking user for the input
	std::cout << msg;
	std::cin >> inp;
	
	// returning the input
	return inp;
}

// execution starts from here
int main(int argc, char** argv){
	// two points on a graph
	coords a, b;
	
	// asking user for the point details
	a.first = std::stoi(input("Enter the x-coordinate of first point: ")); 
	a.second = std::stoi(input("Enter the y-coordinate of first point: "));
	b.first = std::stoi(input("Enter the x-coordinate of second point: "));
	b.second = std::stoi(input("Enter the y-coordinate of second point: "));
	
	// calculating distance and printing it
	std::cout << "\nThe distance between the two points is " << sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
	return 0;
}
