#ifndef TRAFFIC_H
#define TRAFFIC_H

#include <iostream>
#include <vector>
using namespace std;

class TrafficSignal {
public:
    int id;
    int greenTime;
    int redTime;

    TrafficSignal(int i, int g, int r);

    void display();
};

class TrafficSystem {
private:
    vector<TrafficSignal> signals;

public:
    void addSignal(int id, int g, int r);
    void showSignals();
    void simulate();
};

#endif
