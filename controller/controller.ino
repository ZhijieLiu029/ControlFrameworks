/*
 * This is an example for students.
 * This project shows how to run control programs at a specific frequency.
 * The globel variable TC is the program cycle. 
 * Because the millis() will overflow after about 50 days,so the program should
 * be ran less than 50 days.
 * 
 */
#include "plant.h"
 

#define TC 200             //控制程序运行周期(ms)
//#define LED 13             //Led pin number


/* timer variables */
//unsigned long t_now;     //当前时刻
unsigned long t_start;     //开始时刻

/* globle variables */
bool led_stat;
void setup() {

  // initialize communication if nessary
  Serial.begin(115200);
  
  
  // initialize actuator
  /* 
   *  After initialization, make sure every actuator is in an safe state.
   *  
   */
  pinMode(LED_BUILTIN, OUTPUT);
  
  // initialize sensors
  
  
  // other initialization
  led_stat = true;
  
}

void loop() {
  
  t_start = millis();
  // update sensor


  // control calculate
 


  // control output
  Serial.println("Hello world!");
  Serial.println(millis(),DEC);
  if (led_stat){
    digitalWrite(LED_BUILTIN,HIGH); 
    
  }else{
    digitalWrite(LED_BUILTIN,LOW);
    
  }
  led_stat = !led_stat;
  

  // just for time control
  while(millis()-t_start<TC){
    }
  
}
