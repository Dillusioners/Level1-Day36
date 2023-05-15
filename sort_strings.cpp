# include <iostream> 
 # include <vector> 
 # include <algorithm> 
  
 // printing a vector 
 // vec -> the vector to be printed 
 // sep -> the gap between two printed elements in vector 
 void printVector(std::vector<std::string> &vec, std::string sep){ 
         // iterating through the vector and printing all members 
         for(auto i : vec){ 
                 std::cout << i << sep;         
         }         
 } 
  
 // execution starts from here 
 int main(int argc, char** argv){ 
         // variable declaration here 
         std::vector<std::string> list; 
         std::string input; 
         int count; 
          
         // asking for total strings to sort 
         std::cout << "How many strings to sort?: "; 
         std::cin >> count; 
         std::cout << std::endl; 
          
         // looping for the given count 
         for(int i = 1; i <= count; i++){ 
                 // asking user for the string and storing it in vector 
                 std::cout << "Enter string no." << i << ": ";         
                 std::cin >> input; 
                 list.push_back(input); 
         } 
          
         // printing list before it is sorted 
         std::cout << "\nList before sorting:\n"; 
         printVector(list, " "); 
          
         // sorting the list and printing all the members 
         std::cout << "\n\nList after sorting:\n"; 
         std::sort(list.begin(), list.end());         
         printVector(list, " "); 
         return 0; 
 }
