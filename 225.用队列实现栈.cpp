/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

#include <queue>
#include <algorithm>
using namespace std;
// @lc code=start
class MyStack {
    queue<int> queue1;
    queue<int> queue2;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        queue2.push(x);
        while(!queue1.empty()){
            queue2.push(queue1.front());
            queue1.pop();
        }
        swap(queue1,queue2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int r = queue1.front();
        queue1.pop();
        return r;
    }
    
    /** Get the top element. */
    int top() {
        return queue1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return queue1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

