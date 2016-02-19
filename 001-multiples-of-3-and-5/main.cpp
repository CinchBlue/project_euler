#include <iostream>
#include <vector>
#include <string>
#include <exception>

int get_sum_of_mult35(int input) {

}

/*
 * ALGORITHM:
 *  - Get number argument.
 *  - Convert string -> int.
 *  - Run algorithm if positive input.
 */
int main(int argc, char** argv) {
  // Need to provide a number as the argument.
  if (argc < 2) {
    std::cerr << argv[0] << ": usage: [program_name] [number]\n";
  } else {
  // We have the correct number.
    std::string number_input(argv[1]);
    // Make sure we can convert it. Throws exception on fail.
    int number = 0;
    try {
      // Convert the number.
      number = std::stoi(number_input);
    } catch (std::exception& e) {
      // ERROR: Could not convert number. Return 1.
      std::cerr << "ERROR: " << e.what() << '\n';
      return 1;
    }
    // OK: string->int conversion success.


    if (number > 0) {
      // If positive number, do the algorithm.
      std::cout << get_sum_of_mult35 << '\n';
    } else {
      std::cerr << "ERROR: Parsed number argument is not positive.\n";
      return 2;
    }
    // OK: Algorithm done.

    return 0;
    // OK: Program done.
  } // END else of (argc < 2)
} // END main()