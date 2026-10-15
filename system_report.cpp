#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Generating Linux System Report..." << endl;

    system("echo '=== LINUX SYSTEM REPORT ===' > report.txt");
    system("echo '\n--- Date & Time ---' >> report.txt");
    system("date >> report.txt");

    system("echo '\n--- System Name ---' >> report.txt");
    system("hostname >> report.txt");

    system("echo '\n--- RAM Usage ---' >> report.txt");
    system("free -h >> report.txt");

    system("echo '\n--- Disk Space ---' >> report.txt");
    system("df -h / >> report.txt");

    cout << "Report successfully saved to report.txt!" << endl;
    return 0;
}
