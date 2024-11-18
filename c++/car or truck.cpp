#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk = "", string mdl = "", int yr = 0)
        : make(mk), model(mdl), year(yr) {}
    void setMake(string mk) { make = mk; }
    void setModel(string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }
    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    virtual void displayInfo() = 0; 
};
class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(string mk, string mdl, int yr, int seatCap, string fuel)
        : Vehicle(mk, mdl, yr), seatingCapacity(seatCap), fuelType(fuel) {}
    void setSeatingCapacity(int seatCap) { seatingCapacity = seatCap; }
    void setFuelType(string fuel) { fuelType = fuel; }
    int getSeatingCapacity() const { return seatingCapacity; }
    string getFuelType() const { return fuelType; }
    void displayInfo() override {
        cout << "Car Info: " << make << " " << model << " (" << year << ")\n";
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;
public:
    Truck(string mk, string mdl, int yr, double payload, double towing)
        : Vehicle(mk, mdl, yr), payloadCapacity(payload), towingCapacity(towing) {}
    void setPayloadCapacity(double payload) { payloadCapacity = payload; }
    void setTowingCapacity(double towing) { towingCapacity = towing; }
    double getPayloadCapacity() const { return payloadCapacity; }
    double getTowingCapacity() const { return towingCapacity; }
    void displayInfo() override {
        cout << "Truck Info: " << make << " " << model << " (" << year << ")\n";
        cout << "Payload Capacity: " << payloadCapacity << " kg" << endl;
        cout << "Towing Capacity: " << towingCapacity << " kg" << endl;
    }
};
int main() {
    Car car("Toyota", "Camry", 2020, 5, "Petrol");
    car.displayInfo();
    Truck truck("Ford", "F-150", 2018, 1000, 3500);
    truck.displayInfo();
    return 0;
}

