#include <iostream>
#include <cmath>

class Drug {
public:
    Drug(std::string name, std::string farmacologicalGroup, int activeSubstance, int numberOfPills, int dayDosage) {
        this->name = name;
        this->farmacologicalGroup = farmacologicalGroup;
        this->activeSubstance = activeSubstance;
        this->numberOfPills = numberOfPills;
        this->dayDosage = dayDosage;
    }

    void init(std::string name, std::string farmacologicalGroup, int activeSubstance, int numberOfPills, int dayDosage) {
        this->name = name;
        this->farmacologicalGroup = farmacologicalGroup;
        this->activeSubstance = activeSubstance;
        this->numberOfPills = numberOfPills;
        this->dayDosage = dayDosage;
    }

    void printInfo() {
        std::cout << "Information about " << name << ":" << std::endl
        << "Farmacological group: " << farmacologicalGroup << std::endl
        << "Active substance per 1 pill in (mg): " << activeSubstance << std::endl
        << "Number of pills per 1 package: " << numberOfPills << std::endl
        << "Day dosage: " << dayDosage << std::endl;
    }

    void changeDayDosage(int newDayDosage) {
        dayDosage = newDayDosage;
    }

    int numberOfPackages(int days) {
        double a;
        a = ceil((double)(dayDosage*days) / numberOfPills);
        return a;
    }

private:
    std::string name;
    std::string farmacologicalGroup;
    int activeSubstance; // per 1 pill (mg)
    int numberOfPills; // per 1 package
    int dayDosage;
};


int main() {
    Drug anaferon1("Anaferon", "From headache", 25, 10, 2);
    // anaferon1.init("Anaferon", "From headache", 25, 10, 2);

    anaferon1.printInfo();
    std::cout << std::endl << "Packages to buy for 6 days: "<< anaferon1.numberOfPackages(6)
    << std::endl << std::endl << std::endl;

    anaferon1.changeDayDosage(4);

    anaferon1.printInfo();
    std::cout << std::endl << "Packages to buy for 6 days: "<< anaferon1.numberOfPackages(6) << std::endl;


    return 0;
}