class MyQueue {
public:
  stack<int> s, h;
  MyQueue() {

  }

  void push(int x) {
    s.push(x);
  }

  int pop() {
    int sSize=s.size();
    for(int i=0; i<sSize-1; i++){
      h.push(s.top());
      s.pop();
    }
    int temp = s.top();
    s.pop();
    int hSize = h.size();
    for(int i=0; i<hSize; i++){
      s.push(h.top());
      h.pop();
    }
    
    return temp;
  }

  int peek() {
    int sSize=s.size();
      for(int i=0; i<sSize-1; i++){
      h.push(s.top());
      s.pop();
    }
    int temp = s.top();
    
    int hSize = h.size();
    for(int i=0; i<hSize; i++){
      s.push(h.top());
      h.pop();
    }
    
    return temp;
  }

  bool empty() {
    return s.empty();
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */