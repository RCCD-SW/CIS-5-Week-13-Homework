#include <iostream>
#include <string>

// Project 3 — Your Name
// Track: quiz | contacts | converters
// CIS 5 Week 13

void printMenu() {
  std::cout << "1) Play  2) Quit\n";
}

int askScore() {
  // TODO: ask a question, return 1 or 0
  return 0;
}

int main() {
  int choice = 0;
  do {
    printMenu();
    std::cin >> choice;
    if (choice == 1) {
      std::cout << "Points: " << askScore() << "\n";
    } else if (choice != 2) {
      std::cout << "Not a choice.\n";
    }
  } while (choice != 2);
  return 0;
}
