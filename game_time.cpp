#include <iostream>

using namespace std;

int main() {
	const int LEVEL_1_MINUTES = 78;
	const int LEVEL_2_MINUTES = 144;

	int level_1_hours = LEVEL_1_MINUTES / 60;
	int level_1_remaining_minutes = LEVEL_1_MINUTES % 60;

	int level_2_hours = LEVEL_2_MINUTES / 60;
	int level_2_remaining_minutes = LEVEL_2_MINUTES % 60;

	int difference_minutes = LEVEL_2_MINUTES - LEVEL_1_MINUTES;
	int difference_hours = difference_minutes / 60;
	int difference_remaining_minutes = difference_minutes % 60;

	cout << "Level 1 time: " << level_1_hours << " hours and " << level_1_remaining_minutes << " minutes\n";
	cout << "Level 2 time: " << level_2_hours << " hours and " << level_2_remaining_minutes << " minutes\n";
	cout << "Level 2 took longer by: " << difference_hours << " hours and " << difference_remaining_minutes << " minutes\n";

	return 0;
}
