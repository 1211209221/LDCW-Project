#include <iostream>
#include <string>
using namespace std;

// Function to run the eco-quiz
int runQuiz() {
    int score = 0;
    char answer;

    cout << "===========================" << endl;
    cout << "     ECO-AWARENESS QUIZ    " << endl;
    cout << "===========================" << endl;

    // Q1
    cout << "\n1. What is one common source of renewable energy used in smart cities?" << endl;
    cout << "a) Coal" << endl;
    cout << "b) Solar" << endl;
    cout << "c) Natural Gas" << endl;
    cout << "d) Diesel" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (tolower(answer) == 'b') score++;

    // Q2
    cout << "\n2. Which best describes a smart grid?" << endl;
    cout << "a) Power line for gaming" << endl;
    cout << "b) Digital energy meter only" << endl;
    cout << "c) Electricity network with digital management" << endl;
    cout << "d) Fuel-based control center" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (tolower(answer) == 'c') score++;

    // Clear newline from previous input
    cin.ignore();

    // Q3
    cout << "\n3. What is the primary benefit of green buildings?" << endl;
    cout << "a) Cheaper labor" << endl;
    cout << "b) Energy efficiency" << endl;
    cout << "c) Bigger rooms" << endl;
    cout << "d) Better TV reception" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (tolower(answer) == 'b') score++;

    // Q4
    cout << "\n5. How do green rooftops and vertical gardens benefit smart cities?" << endl;
    cout << "a) Increase internet speed" << endl;
    cout << "b) Attract birds only" << endl;
    cout << "c) Reduce heat and improve air quality" << endl;
    cout << "d) Lower property taxes" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (tolower(answer) == 'c') score++;

    // Q5
    cout << "\n5. Which transport option reduces carbon emissions the most?" << endl;
    cout << "a) Electric scooters" << endl;
    cout << "b) Gasoline cars" << endl;
    cout << "c) Motorcycles" << endl;
    cout << "d) Airplanes" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (tolower(answer) == 'a') score++;

    return score;
}

// Function for Smart Living Calculator
void smartLivingCalculator() {
    float electricity_kwh, public_transport, smart_devices, water_liters, plastic_saved;

    cout << "\n===============================" << endl;
    cout << "   SMART LIVING CALCULATOR     " << endl;
    cout << "===============================\n";

    cout << "Enter your average monthly electricity usage in kWh: ";
    cin >> electricity_kwh;
    float co2_emissions = electricity_kwh * 0.42; // 0.42 kg CO2 per kWh

    cout << "How many times do you use public transport in a week? ";
    cin >> public_transport;
    float car_saving = public_transport * 2.5; // 2.5 kg CO2 saved per trip

    cout << "How many smart devices do you use at home (e.g., bulbs, thermostat)? ";
    cin >> smart_devices;
    float energy_saving = smart_devices * 1.5; // 1.5 kWh saved/device/month

    cout << "How many liters of water do you use daily? ";
    cin >> water_liters;

    cout << "How many plastic items (bottles, bags) do you avoid weekly? ";
    cin >> plastic_saved;
    float waste_reduced = plastic_saved * 0.1; // 0.1 kg landfill per item

    // Display summary
    cout << "\n------ YOUR ECO SUMMARY ------" << endl;
    cout << "Estimated CO2 from electricity: " << co2_emissions << " kg/month" << endl;
    cout << "CO2 saved using public transport: " << car_saving << " kg/week" << endl;
    cout << "Energy saved with smart devices: " << energy_saving << " kWh/month" << endl;
    cout << "Daily water usage: " << water_liters << " liters/day" << endl;
    cout << "Plastic waste avoided: " << waste_reduced << " kg/week" << endl;
    cout << "------------------------------" << endl;
}

int main() {
    cout << "===========================================" << endl;
    cout << "   Welcome to Green City, Smart Living App " << endl;
    cout << "===========================================\n";

    int quizScore = runQuiz();
    cout << "\nYou scored " << quizScore << " out of 5 in the Eco-Awareness Quiz.\n";

    smartLivingCalculator();

    cout << "\nThank you for using the Smart Living Program!" << endl;

    return 0;
}

