#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// Practice 13 · Part 2 — Jayden MB
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.

struct Question {
	string prompt;
	string answer;
	double points;
};

void printQuestion(const Question& q) {
	// TODO: print every field on one line, then "\n"
	cout << "Prompt: " << q.prompt << ", Answer: " << q.answer << ", Points: " << q.points << endl;
}

int main() {
	// TODO: make two records with braces, then print both with your helper
	const int NUM_QUESTIONS = 2;
	Question questions[NUM_QUESTIONS] = {
		{ "What is the capital of France?", "Paris", 10.0 },
		{ "What is 2 + 2?", "4", 5.0 }
	};

	for (int i = 0; i < NUM_QUESTIONS; i++) {
		printQuestion(questions[i]);
	}

	return 0;
}
