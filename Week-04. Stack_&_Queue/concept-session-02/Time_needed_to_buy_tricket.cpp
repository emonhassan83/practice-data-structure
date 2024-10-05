//* https://leetcode.com/problems/time-needed-to-buy-tickets/description/

/* 
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int time = 0;

        int n = tickets.size();
        for (int i = 0; i < n; i++) {
            q.push(tickets[i]);
        } // copy tickets in queue

        while (true) {
            q.front()--;
            time++;

            // loop break condition
            if(k==0 && q.front()==0)
                break;

            // track to target index(k) people
            if (k == 0)
                k = q.size() - 1;
            else
                k--;
            // push queue when queue value is not zero
            if (q.front() != 0)
                q.push(q.front());

            q.pop();
        }
        return time;
    }
};
 */