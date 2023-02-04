#include <VExercise1.h>

int main() {
  VExercise1 model;
  bool wrong = false;
  for (model.op = 0; model.op < 4; model.op ++){
    for (model.a = 0; model.a < 256; model.a ++){
      for (model.b = 0; model.b < 256; model.b ++){
        if(model.op == 0) {
          if((model.a ^ model.b) != model.out) wrong = true;}
        if(model.op == 1) {
          if((model.a << model.b) != model.out) wrong = true;}
        if(model.op == 2) {
          if((model.a % model.b) != model.out) wrong = true;}
        if(model.op == 0) {
          if((~(model.a & model.b)) != model.out) wrong = true;}
      }
    }
  }
  if (wrong)
    return 1;
}
