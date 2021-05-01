#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//Base
//Transport: 
class LandTransport {
protected:
    unsigned short int model, mileage;
    LandTransport() {}
    LandTransport(int model, int mileage) {}
    virtual ~LandTransport() {}

    virtual void Ride() = 0;

public:
    virtual void Stop() {}
    void getTransportInfo() {}
};

//1 Level Inheritence
class Wheel : public virtual LandTransport {
    double radius;
public:
    Wheel() : LandTransport() {}
    Wheel(double radius, int model, int mileage) : LandTransport(model, mileage) {}
    virtual ~Wheel() {}
    virtual void Ride() override {}
    void getWheelRadius() {}
    virtual void Stop() override {}
};

class Track : public virtual LandTransport {
    double length;
public:
    Track() : LandTransport() {}
    Track(double length, int model, int mileage) : LandTransport(model, mileage) {}
    virtual ~Track() {}
    virtual void Ride() override {}
    void getTrackLength() {}
    virtual void Stop() override {}
};

class Ski : public virtual LandTransport {
    double length;
public:
    Ski() : LandTransport() {}
    Ski(double length, int model, int mileage) : LandTransport(model, mileage) {}
    virtual ~Ski() {}
    virtual void Ride() override {}
    void getSkiLength() {}
    virtual void Stop() override {}
};

//2 Level Inheritence
class Snowmobile : public Track, public Ski {
    double size;
public:
    Snowmobile() : Track(), Ski() {}
    Snowmobile(double size, double trackLength, double skiLength, int model, int mileage) : Track(trackLength, model, mileage), Ski(skiLength, model, mileage), LandTransport(model, mileage) {}
    ~Snowmobile() {}
    virtual void Ride() override {}
    void getSize() {}
    virtual void Stop() override final {}
};

class Tank : public Wheel, public Track {
    double armorWidth;
public:
    Tank() : Track(), Wheel() {}
    Tank(double armorWidth, double trackLength, double wheelRadius, int model, int mileage) : Track(trackLength, model, mileage), Wheel(wheelRadius, model, mileage), LandTransport(model, mileage) {}
    ~Tank() {}
    virtual void Ride() override {}
    void getArmorWidth() {}
    virtual void Stop() override final {}
};