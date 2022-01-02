#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class MinStack {
 public:
  MinStack() = default;

  void push(int val) {
    values_.push_back(val);
    if (minimums_.empty() || val <= minimums_.back()) {
      minimums_.push_back(val);
    }
  }

  void pop() {
    int val = values_.back();
    values_.pop_back();
    if (minimums_.back() == val) {
      minimums_.pop_back();
    }
  }

  int top() {
    return values_.back();
  }

  int getMin() {
    return minimums_.back();
  }

 private:
  vector<int> values_;
  vector<int> minimums_;
};

void TestMinStack() {
  MinStack stack;
  stack.push(1);
  assert(1 == stack.top());
  assert(1 == stack.getMin());
  stack.push(2);
  assert(2 == stack.top());
  assert(1 == stack.getMin());
  stack.push(-1);
  assert(-1 == stack.top());
  assert(-1 == stack.getMin());
  stack.push(-2);
  assert(-2 == stack.top());
  assert(-2 == stack.getMin());
  stack.push(5);
  assert(5 == stack.top());
  assert(-2 == stack.getMin());
  stack.pop();
  assert(-2 == stack.top());
  assert(-2 == stack.getMin());
  stack.pop();
  assert(-1 == stack.top());
  assert(-1 == stack.getMin());
  stack.pop();
  assert(2 == stack.top());
  assert(1 == stack.getMin());
}

int main() {
  TestMinStack();
  std::cout << "Ok!" << std::endl;
  return 0;
}
