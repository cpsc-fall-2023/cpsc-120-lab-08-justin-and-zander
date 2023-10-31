// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if(arguments.size() < 0)
  {
    std::cout << "Error provide at least one argument";
    return -1;
  }
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum_of_arguments{0};
  for(int i = 1; i < arguments.size(); i++)
  {
    sum_of_arguments += stod(arguemts.at(i));
  } 
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{0};
  average = sum_of_arguments / (arguments.size() - 1);
  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << "\n";
  return 0;
}
