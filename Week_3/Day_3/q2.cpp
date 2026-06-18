class MinStack {
public:
    stack<int> st;
    int minVal;

    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        }
        else if (val >= minVal) {
            st.push(val);
        }
        else {
            int prevMin = minVal;
            int newVal = 2 * val - prevMin;

            st.push(newVal);
            minVal = val;
        }
    }

    void pop() {
        if (st.top() >= minVal) {
            st.pop();
        }
        else {
            int newVal = st.top();
            st.pop();

            int prevMin = 2 * minVal - newVal;
            minVal = prevMin;
        }
    }

    int top() {
        if (st.top() >= minVal)
            return st.top();

        return minVal;
    }

    int getMin() {
        return minVal;
    }
};