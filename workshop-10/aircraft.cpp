#include "aircraft.h"

aircraft::aircraft(string callsign,person thePilot,person theCoPilot){
}

person aircraft::getPilot() {
    return m_pilot;
}

void aircraft::setPilot(person pilot){
    m_pilot = pilot;
}

person aircraft::getCoPilot() {
    return m_coPilot;
}

void aircraft::setCoPilot(person coPilot){
    m_coPilot = coPilot;
}