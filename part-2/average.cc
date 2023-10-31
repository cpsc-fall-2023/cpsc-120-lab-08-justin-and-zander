// Justin Heinlein
// justinheinlein4@csu.fullerton.edu
// @justinheinlein4
// Partners: @imor128, @Zandercbrooks

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int args = static_cast<int>(arguments.size());
  if (args == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum_of_arguments{0};
  bool first = true;
  for (const std::string& arg : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum_of_arguments += stod(arg);
  }
  double average{0};
  average = sum_of_arguments / (args - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
