# Week 3 Lab: Verification

Exercise 2:
  Make Note:
    My approach was to test the logical shifts/changes, based on some hardcoded values.
    Not the best strategy for comprehensive testing, but it works for eveluating logical soundness of the design.
    In a real scenario I would probably write a comprehensive test to cover all states,
    but a simple added RNG to the currently hardcoded values will improve the test's efectivenss.
    
Exercise 4:
  Make Note:
    Comprehensively testing a dont care should cycle through all possible values of alpha, beta, and gamma,
    while cs was set to 1, to ensure that the out stayed at 0 regardless of sel value.
    My test picked values that could not result in a 0 out for any state other that 0th,
    which is not a valid test for sel = 0, but on the other hand, it's the same for cs = 0 anyway, so...
