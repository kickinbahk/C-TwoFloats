//
//  main.c
//  TwoFloats
//
//  Created by Josiah Mory on 4/7/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  float firstNum;
  float secondNum;
  double combinedNums;
  
  firstNum = 3.14;
  secondNum = 82.25;
  
  combinedNums = firstNum + secondNum;
  
  printf("The combination of the numbers %f and %f is %f.\n", firstNum, secondNum, combinedNums);
  
  return 0;
}
