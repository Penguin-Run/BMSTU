#include <iostream>
#include <vector>

// Повторить полиморфизм в C++

class Cabin {
public:
    Cabin(int number, const std::string &serviceClass, int capacity)
    :number(number),
    serviceClass(serviceClass),
    capacity(capacity) {

    }

    Cabin() = default;

    void print() {
        std::cout << "Number: " << number << std::endl
        << "Service class: " << serviceClass << std::endl
        << "Capacity: " << capacity << std::endl;
    }

    int getNumber() const {
        return number;
    }

    const std::string &getServiceClass() const {
        return serviceClass;
    }

    int getCapacity() const {
        return capacity;
    }

private:
    int number;
    std::string serviceClass;
    int capacity;
};

class PassengerDeck {
public:
    PassengerDeck(int cabinsNumber, Cabin cabins[]) {
        for (int i = 0; i < cabinsNumber; i++) {
            this->cabins.push_back(cabins[i]);
        }
    }

    void print() {
        for (int i = 0; i < cabins.size(); i++) {
            cabins[i].print();
            std::cout << std::endl;
        }
    }

    int capacity() {
        int deckCapacity = 0;
        for (int i = 0; i < cabins.size(); i++) {
            deckCapacity += cabins[i].getCapacity();
        }
        return deckCapacity;
    }

    int findCabin(const std::string &serviceClass, int capacity) {
        for (int i = 0; i < cabins.size(); i++) {
            if ((serviceClass == cabins[i].getServiceClass()) && (capacity == cabins[i].getCapacity())) {
                return cabins[i].getNumber();
            }
        }
        return -1;
    }

private:
    std::vector<Cabin> cabins;
};

#define NUMBER_OF_CABINS_FIRSTCLASS 2
#define NUMBER_OF_CABINS_SECONDCLASS 8
#define NUMBER_OF_ALL_CABINS (NUMBER_OF_CABINS_FIRSTCLASS + NUMBER_OF_CABINS_SECONDCLASS)


int main() {

    Cabin cabins[NUMBER_OF_ALL_CABINS + 1];
    for (int i = 0; i < NUMBER_OF_CABINS_FIRSTCLASS; i++) {
        Cabin cabin(i, "first", 2);
        cabins[i] = cabin;
    }

    for (int i = NUMBER_OF_CABINS_FIRSTCLASS; i < NUMBER_OF_ALL_CABINS; i++) {
        Cabin cabin(i, "second", 4);
        cabins[i] = cabin;
    }
    Cabin cabin1(NUMBER_OF_ALL_CABINS, "second", 7);
    cabins[NUMBER_OF_ALL_CABINS] = cabin1;

    PassengerDeck* passengerDeck = new PassengerDeck(NUMBER_OF_ALL_CABINS+1, cabins);
    passengerDeck->print();
    std::cout << "Passeneger deck capacity: " << passengerDeck->capacity() << std::endl;
    std::cout << "Cabin search result: "<< passengerDeck->findCabin("second", 7);

    return 0;
}