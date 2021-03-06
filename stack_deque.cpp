//two_stack_make_a_dequ
//
//
class CQueue {
     stack<int> stack1,stack2;
public:
    CQueue() {
         //把栈都初始化为空 ——为什么？  而且c++把栈置空要用下面这种全部pop的方法吗？
        while(!stack1.empty())   {stack1.pop();  }
        while(!stack2.empty())   {stack2.pop();  }
    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if(stack2.empty())
             return -1;
        int deletenum = stack2.top();
        stack2.pop();
        return deletenum;
    }

};
//over
/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
