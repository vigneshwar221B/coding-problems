class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        
    }
    
    int pop() {
        for(int i=0; i<q.size()-1; i++){
          q.push(q.front());
          q.pop();
        }
      int temp = q.front();
      q.pop();
      return temp;
    }
    
    int top() {
         for(int i=0; i<q.size()-1; i++){
          q.push(q.front());
          q.pop();
        }
      int temp = q.front();
      q.pop();
      q.push(temp);
      return temp;
    }
    
    bool empty() {
        return q.empty();
    }
};