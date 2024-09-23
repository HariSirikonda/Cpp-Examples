#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>

// Function to predict gender based on the given name
std::string predictGender(const std::string& name, const std::map<std::string, std::string>& data) {
    std::string lowercaseName = name;
    // Convert name to lowercase for case-insensitive matching
    std::transform(lowercaseName.begin(), lowercaseName.end(), lowercaseName.begin(), ::tolower);
    auto it = data.find(lowercaseName);
    if (it != data.end()) {
        return it->second; // Return the predicted gender
    } else {
        return "Unknown"; // Return "Unknown" if name not found in the dataset
    }
}

int main() {
    // Load the dataset of names and genders into a map
    std::ifstream file("names_dataset.txt");
    std::map<std::string, std::string> nameGenderMap;
    std::string name, gender;
    while (file >> name >> gender) {
        // Convert gender to lowercase for case-insensitive matching
        std::transform(gender.begin(), gender.end(), gender.begin(), ::tolower);
        nameGenderMap[name] = gender;
    }
    file.close();

    // Get input from the user
    std::cout << "Enter a name: ";
    std::string inputName;
    std::cin >> inputName;

    // Predict gender for the input name
    std::string predictedGender = predictGender(inputName, nameGenderMap);

    // Output the prediction
    if (predictedGender != "Unknown") {
        std::cout << "Predicted gender for " << inputName << " is: " << predictedGender << std::endl;
    } else {
        std::cout << "Gender prediction for " << inputName << " is unknown." << std::endl;
    }

    return 0;
}

