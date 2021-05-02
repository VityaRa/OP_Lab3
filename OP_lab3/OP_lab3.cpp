#include "LandTransport.h"
#include <iostream>


int main()
{
    srand(time(NULL));
    
    //SnowMobile:
    const double SM_size = 15.4, SM_trackLength = 4.5, SM_skiLength = 5.2;
    const int SM_model = 42, SM_mileage = 2454;

    //Tank
    const double T_armorWidth = 40.5, T_trackLength = 10.3, T_wheelRadius = 524.2;
    const int T_model = 4242, T_mileage = 63136;

    Tank tankExample(T_armorWidth, T_trackLength, T_wheelRadius, T_model, T_mileage);
    tankExample.getTransportInfo();
    tankExample.getWheelRadius();
    tankExample.getTrackLength();
    tankExample.getArmorWidth();
    tankExample.Ride();
    tankExample.Stop();
    std::cout << "---------------------------------------------------" << std::endl;

    Snowmobile snowMobileExample(SM_size, SM_trackLength, SM_skiLength, SM_model, SM_mileage);
    snowMobileExample.getTransportInfo();
    snowMobileExample.getSkiLength();
    snowMobileExample.getTrackLength();
    snowMobileExample.getSize();
    snowMobileExample.Ride();
    snowMobileExample.Stop();
    std::cout << "---------------------------------------------------" << std::endl;


}
