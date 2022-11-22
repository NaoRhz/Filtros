#include <Arduino.h>

#define VOLTAGE         5
#define RESOLUTION      1023
#define OUTPUT          255
#define SIGNAL          A0
#define ACTUATOR        11
#define SAMPLING_TIME   500
#define N_TERMS         2

float Yk_n[N_TERMS]={0,0}, Xk_n[N_TERMS]={0,0};

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  float Xk=(float)((analogRead(SIGNAL)*VOLTAGE)/RESOLUTION);
  float Yk=0.01815*Xk_n[0]-0.01804*Xk_n[1]+1.92*Yk_n[0]+0.9216*Yk_n[1];
  int Yk_PWM = (int)Yk*(OUTPUT/VOLTAGE);
  analogWrite(ACTUATOR, Yk_PWM);
  Xk_n[1] = Xk_n[0];
  Xk_n[0] = Xk;
  Yk_n[1] = Xk_n[0];
  Yk_n[0] = Xk;
  delay(SAMPLING_TIME);
}