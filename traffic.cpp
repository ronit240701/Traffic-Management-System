#include "traffic.h"

// Constructor
TrafficSignal::TrafficSignal(int i, int g, int r) {
    id = i;
    greenTime = g;
    redTime = r;
}

// Display signal info
void TrafficSignal::display() {
    cout << "Signal ID: " << id 
         << " | Green: " << greenTime 
         << " sec | Red: " << redTime << " sec" << endl;
}

// Add new signal
void TrafficSystem::addSignal(int id, int g, int r) {
    signals.push_back(TrafficSignal(id, g, r));
}

// Show all signals
void TrafficSystem::showSignals() {
    cout << "\n--- Traffic Signals ---\n";
    for (auto &s : signals) {
        s.display();
    }
}

// Simulation logic
void TrafficSystem::simulate() {
    cout << "\n--- Simulation Start ---\n";
    
    for (auto &s : signals) {
        cout << "\nSignal " << s.id << " is GREEN for " << s.greenTime << " seconds\n";
        cout << "Signal " << s.id << " is RED for " << s.redTime << " seconds\n";
    }

    cout << "\n--- Simulation End ---\n";
}
