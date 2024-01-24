#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string playerName;
    int playerID;

public:
    void inputData() {
        std::cout << "Enter player name: ";
        std::getline(std::cin, playerName);

        std::cout << "Enter player ID: ";
        std::cin >> playerID;
        std::cin.ignore();
    }

    void displayData() const {
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Player ID: " << playerID << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;

        std::cout << "Enter average runs: ";
        std::cin >> averageRuns;

        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {

    }

    void displayBatsmanData() const {
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputData();

    batsman.inputBatsmanData();

    batsman.displayData();

    batsman.displayBatsmanData();

    return 0;
}

