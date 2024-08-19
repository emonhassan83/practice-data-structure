#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> addresses;
    string address;
    
    //* take input the addresses until "end"
    while (cin >> address && address != "end") {
        addresses.push_back(address);
    }
    
    int q;
    cin >> q;
    cin.ignore();
    
    auto current = addresses.begin();
    
    for (int i = 0; i < q; ++i) {
        string command;
        getline(cin, command);
        
        //* process the command
        if (command.find("visit") == 0) {
            string visit_address = "";
            for (auto j = 6; j < command.size(); ++j) {
                visit_address += command[j];
            }

            auto it = find(addresses.begin(), addresses.end(), visit_address);
            if (it != addresses.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (current != addresses.end() && next(current) != addresses.end()) {
                ++current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != addresses.begin()) {
                --current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    
    return 0;
}