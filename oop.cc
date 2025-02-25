#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Horse class definition
class Horse {
private:
    int id;
    int position;
    string name;

public:
    Horse(int id, string name) : id(id), position(0), name(name) {}

    void move() {
        if (rand() % 2 == 1) {  // 50% chance to move forward
            position++;
        }
    }

    int getPosition() const {
        return position;
    }

    string getName() const {
        return name;
    }
};

// Race class definition
class Race {
private:
    vector<Horse> horses;
    int trackLength;

public:
    Race(int numHorses, int trackLength) : trackLength(trackLength) {
        for (int i = 1; i <= numHorses; i++) {
            horses.push_back(Horse(i, "Horse " + to_string(i)));
        }
    }

    void displayRace() {
        system("clear");  // Use "cls" for Windows
        for (const auto& horse : horses) {
            cout << horse.getName() << ": ";
            for (int i = 0; i < horse.getPosition(); i++) {
                cout << "-";
            }
            cout << "Horse" << endl;
        }
        cout << endl;
    }

    bool checkWinners() {
        for (const auto& horse : horses) {
            if (horse.getPosition() >= trackLength) {
                cout << horse.getName() << " wins!" << endl;
                return true;
            }
        }
        return false;
    }

    void startRace() {
        bool raceOver = false;
        while (!raceOver) {
            for (auto& horse : horses) {
                horse.move();
            }
            displayRace();
            raceOver = checkWinners();
            cin.get();  // Wait for Enter to proceed
        }
    }
};

// Main function
int main() {
    srand(time(0));  // Seed random generator

    const int numHorses = 5;
    const int trackLength = 10;

    Race race(numHorses, trackLength);
    race.startRace();

    return 0;
}
