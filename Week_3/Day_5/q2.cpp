// recent call if valid hai to rhn do if valid call nhi h to remove from call
// jntk sari unvlid reove na ho jaye 

class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {}

    int ping(int t) {

        q.push(t);

        while (!q.empty() && (q.front() < (t - 3000)) ) {
            q.pop();
        }
        return q.size();
    }
};
