#include <Arduino.h>

#define VOLTAGE         5
#define RESOLUTION      1023
#define OUTPUT          255
#define SIGNAL          A0
#define ACTUATOR        11
#define SAMPLING_TIME   500

float Yk_1=0, Xk_1=0;

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  float Xk=(float)((analogRead(SIGNAL)*VOLTAGE)/RESOLUTION);
  float Yk=0.0388*Xk_1+0.9612*Yk_1;
  int Yk_PWM = (int)Yk*(OUTPUT/VOLTAGE);
  analogWrite(ACTUATOR, Yk_PWM);
  Xk_1 = Xk;
  Yk_1 = Yk;
  delay(SAMPLING_TIME);
}