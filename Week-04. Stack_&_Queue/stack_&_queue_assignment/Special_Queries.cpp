#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    cin.ignore();

    queue<string> q_line;

    while (q--) {
        string cmd;
        getline(cin, cmd);

        //* adding a person to the queue
        if (cmd[0] == '0') {
            string name;
            for (int i = 2; i < cmd.size(); ++i)
            {
                name += cmd[i];
            }
            q_line.push(name);
        }
        //* removing the person at the front of the queue
        else if (cmd[0] == '1') {
            if (!q_line.empty()) {
                cout << q_line.front() << endl;
                q_line.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}