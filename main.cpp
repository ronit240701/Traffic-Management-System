#include "traffic.h"

int main() {
    TrafficSystem system;
    int choice;

    while (true) {
        cout << "\n===== Traffic Management System =====\n";
        cout << "1. Add Traffic Signal\n";
        cout << "2. Show Signals\n";
        cout << "3. Run Simulation\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, g, r;
            cout << "Enter Signal ID: ";
            cin >> id;
            cout << "Enter Green Time: ";
            cin >> g;
            cout << "Enter Red Time: ";
            cin >> r;

            system.addSignal(id, g, r);
        }
        else if (choice == 2) {
            system.showSignals();
        }
        else if (choice == 3) {
            system.simulate();
        }
        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
