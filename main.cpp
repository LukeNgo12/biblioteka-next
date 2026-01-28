#include <iostream>
#include <string>
#include <random>
#include <chrono>

std::string generatePhoneNumber() {
    // Use the <random> library for better randomness than rand()
    // Use the current time to seed the random number generator
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    // Define a distribution for digits 0-9
    std::uniform_int_distribution<> distrib(0, 9);

    std::string phoneNumber = "";
    const int PHONE_LENGTH = 10; // e.g., a 10-digit US phone number

    for (int i = 0; i < PHONE_LENGTH; ++i) {
        // Convert the random digit to a character and append to the string
        phoneNumber += std::to_string(distrib(gen));
    }
    return phoneNumber;
}

int main() {
    std::string generatedPhone = generatePhoneNumber();
    std::cout << "Generated phone number: " << generatedPhone << std::endl;
    return 0;
}
