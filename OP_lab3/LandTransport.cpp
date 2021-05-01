#include "LandTransport.h"
#include <string>
using namespace std;


LandTransport::LandTransport() {
    this->model = rand() % 10000;
    this->mileage = 0;
    #ifdef DEBUG
        cout << "LandTransport init constructor ..." << endl;
    #endif // DEBUG
}
LandTransport::LandTransport(int model, int mileage) {
    this->model = model;
    this->mileage = mileage;
#ifdef DEBUG
    cout << "LandTransport constructor..." << endl;
#endif // DEBUG
}

LandTransport::~LandTransport() {
#ifdef DEBUG
    cout << "LandTransport destructor..." << endl;
#endif // DEBUG
}

void LandTransport::getTransportInfo() {
    cout << "Model is: " << model << endl;
    cout << "Mileage is: " << mileage << endl;
}

void LandTransport::Stop() {
    cout << "Transport stopped" << endl;
}

Wheel::Wheel() : LandTransport() {
    Wheel::radius = 0;
}

Wheel::Wheel(double radius, int model, int mileage) : LandTransport(model, mileage) {
    Wheel::radius = radius;

#ifdef DEBUG
    cout << "Wheel constructor..." << endl;
#endif // DEBUG
}

Wheel::~Wheel() {
#ifdef DEBUG
    cout << "Wheel destructor..." << endl;;
#endif // DEBUG
}

void Wheel::Ride() {
    cout << "Transport with Wheels is riding..." << endl;
}

void Wheel::getWheelRadius() {
    cout << "Wheel radius is: " << Wheel::radius << endl;
}

void Wheel:: Stop() {
    cout << "Wheel stopped..." << endl;
}

Track::Track() : LandTransport() {
    Track::length = 0;
}

Track::Track(double length, int model, int mileage) : LandTransport(model, mileage) {
    Track::length = length;

#ifdef DEBUG
    cout << "Track constructor..." << endl;
#endif // DEBUG
}

Track::~Track() {
#ifdef DEBUG
    cout << "Track destructor..." << endl;;
#endif // DEBUG
}

void Track::Ride() {
    cout << "Transport with Tracks is riding..." << endl;
}

void Track::getTrackLength() {
    cout << "Track length is: " << length << endl;
}

void Track::Stop() {
    cout << "Track stopped..." << endl;
}

//
Ski::Ski() : LandTransport() {
    this->length = 0;
}

Ski::Ski(double length, int model, int mileage) : LandTransport(model, mileage) {
    this->length = length;

#ifdef DEBUG
    cout << "Ski constructor..." << endl;
#endif // DEBUG
}

Ski::~Ski() {
#ifdef DEBUG
    cout << "Ski destructor..." << endl;;
#endif // DEBUG
}

void Ski::Ride() {
    cout << "Transport with Skies is riding..." << endl;
}

void Ski::getSkiLength() {
    cout << "Ski length is: " << length << endl;
}

void Ski::Stop() {
    cout << "Ski stopped..." << endl;
}

Snowmobile::Snowmobile() : Track(), Ski() {
    this->size = 0;
}

Snowmobile::Snowmobile(double size, double trackLength, double skiLength, int model, int mileage) : Track(trackLength, model, mileage), Ski(skiLength, model, mileage), LandTransport(model, mileage) {
    this->size = size;
#ifdef DEBUG
    cout << "Snowmobile constructor..." << endl;
#endif // DEBUG
}

Snowmobile::~Snowmobile() {
#ifdef DEBUG
    cout << "Ski destructor..." << endl;
#endif // DEBUG
}

void Snowmobile::Ride() {
    cout << "Snowmobile is riding..." << endl;
}
void Snowmobile::getSize() {
    cout << "Snowmobile size is: " << size << endl;
}
void Snowmobile::Stop(){
    cout << "Snowmobile stopped..." << endl;
}

Tank::Tank() : Track(), Wheel() {
    this->armorWidth = 0;
}
Tank::Tank(double armorWidth, double trackLength, double wheelRadius, int model, int mileage) : Track(trackLength, model, mileage), Wheel(wheelRadius, model, mileage), LandTransport(model, mileage) {
    this->armorWidth = armorWidth;
#ifdef DEBUG
    cout << "Tank constructor..." << endl;
#endif // DEBUG
}
Tank::~Tank() {
#ifdef DEBUG
    cout << "Tank destructor..." << endl;
#endif // DEBUG
}
void Tank::Ride() {
    cout << "Tank is riding..." << endl;
}
void Tank::getArmorWidth() {
    cout << "Tank armorWidth is: " << armorWidth << endl;
}
void Tank::Stop(){
    cout << "Tank stopped..." << endl;
}