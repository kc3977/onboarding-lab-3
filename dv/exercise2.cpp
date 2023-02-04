#include <VExercise2.h>

int main() {
  VExercise2 model;
  bool wrong = false;
  model.init = 0b0000000000000000; // initial settings
  model.reset = 1;
  model.eval();
  model.clk = 1;
  model.eval();
  model.clk = 0;
  model.eval();
  if (model.out != 0b1111111111111111) wrong = true; // check if changed to all ones
  model.reset = 0;
  model.eval();
  model.clk = 1;
  model.eval();
  model.clk = 0;
  model.eval();
  if (model.out != (0b1111111111111110 | (1 ^ 1 ^ 1 ^ 1))) wrong = true; // check if changed properly
  model.clk = 1;
  model.eval();
  model.clk = 0;
  model.eval();
  if (model.out != (0b1111111111111110 | (1 ^ 1 ^ 1 ^ 1))<<1 | (1 ^ 1 ^ 1 ^ (1 ^ 1 ^ 1 ^ 1)) ) wrong = true;
  // looks ugly but check if changed properly again
  if (wrong) return 1;
}
