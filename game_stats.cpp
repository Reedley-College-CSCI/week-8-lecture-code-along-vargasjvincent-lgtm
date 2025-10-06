//Vincent Vargas
// Oct 6 2025
#include <iostream>
using namespace std;

void showDrive();
int main() {
    const int SIZE = 10;
    cout << "Detroit Lions at Baltimore Ravens" << endl;
    cout << "Sept 29, 2025 Game Statistics" << endl;

    int yards[SIZE] = { 67, 98, 60, 94, 35, 25, 45, 50, 30, 40 };
    cout << "First drive yards: " << yards[0] << endl;
    cout << "Epic second drive: " << yards[1] << " yards" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Drive " << i + 1 << ": " << yards[i] << " yards" << endl;
    } 
    showDrive();
    showDrive();
    // display memory usage of array

    cout << "Array memory: #" << sizeof(yards) << " bytes" << endl;
    cout << "All yards: ";
    for (int val : yards) {
        cout << val << " ";
    }
    cout << endl;
    double total = 0;
    for (int val : yards) {
        total += val;
    }
    cout << "Total yards: " << total << endl;
    cout << "Average yards: " << total / SIZE << endl;

    // Find longest drive in yards
    int maxYards = yards[0];
    for (int i = 1; i < SIZE; i++) {
        if (yards[1] > maxYards)
            maxYards = yards[i];
    }
    cout << "Longest drive: " << maxYards << " yards" << endl;

    int plays[SIZE] = { 11, 18, 10, 12, 5, 4, 6, 7, 5, 6 };
    for (int i = 0; i < SIZE; i++) {
        cout << "Drive " << i + 1 << ": " << plays[i] << " plays, "
            << yards[i] << " yards" << endl;
    }

   

    return 0; 
}

void showDrive()
{
    static int driveNum = 1; // Persists across function calls
    cout << "Showing drive " << driveNum << endl;
    driveNum++;
}