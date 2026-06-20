class Solution {
public:

// largest ranctanlge in histogram 
// intution - find nse and pse
// width = nse - pse -1
// area = height*woidth

    vector<int> prevSmaller(vector<int>& heights){

        int n=heights.size();

        vector<int> prev(n);

        stack<int> st;

        for(int i=0;i<n;i++){

            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();

            if(st.empty())
                prev[i]=-1;
            else
                prev[i]=st.top();

            st.push(i);
        }

        return prev;
    }

    vector<int> nextSmaller(vector<int>& heights){

        int n=heights.size();

        vector<int> next(n);

        stack<int> st;

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();

            if(st.empty())
                next[i]=n;
            else
                next[i]=st.top();

            st.push(i);
        }

        return next;
    }

    int largestRectangleArea(vector<int>& heights) {

        vector<int> prev = prevSmaller(heights);
        vector<int> next = nextSmaller(heights);

        int ans = 0;

        for(int i=0;i<heights.size();i++){

            int width = next[i]-prev[i]-1;

            int area = width*heights[i];

            ans=max(ans,area);
        }

        return ans;
    }
};