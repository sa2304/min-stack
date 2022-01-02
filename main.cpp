#include <cassert>
#include <iostream>

using namespace std;

class MinStack {
 public:
  MinStack() {

  }

  void push(int val) {
    // FIXME
  }

  void pop() {
    // FIXME
  }

  int top() {
    // FIXME
    return 0;
  }

  int getMin() {
    // FIXME
    return 0;
  }
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
  assert(-2 == stack.getMin());
  stack.pop();
  assert(2 == stack.top());
  assert(1 == stack.getMin());
}

int main() {
  TestMinStack();
  std::cout << "Ok!" << std::endl;
  return 0;
}
