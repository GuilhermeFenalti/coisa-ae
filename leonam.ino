/*
 * Ultrasonic Simple
 * Prints the distance read by an ultrasonic sensor in
 * centimeters. They are supported to four pins ultrasound
 * sensors (liek HC-SC04) and three pins (like PING)))
 * and Seeed Studio sensors).
 *
 * The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
 *   three pins), attached to digital pins as follows:
 * ---------------------    --------------------
 * | HC-SC04 | Arduino |    | 3 pins | Arduino |
 * ---------------------    --------------------
 * |   Vcc   |   5V    |    |   Vcc  |   5V    |
 * |   Trig  |   12    | OR |   SIG  |   13    |
 * |   Echo  |   13    |    |   Gnd  |   GND   |
 * |   Gnd   |   GND   |    --------------------
 * ---------------------
 * Note: You do not obligatorily need to use the pins defined above
 * 
 * By default, the distance returned by the read()
 * method is in centimeters. To get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.read(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 03 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 11 Jun 2018
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(12, 11);
Ultrasonic ultrasonic1(9, 8);
Ultrasonic ultrasonic2(6, 5);
Ultrasonic ultrasonic3(3, 2);
Ultrasonic ultrasonic4(31, 33);
Ultrasonic ultrasonic5(26, 24);
Ultrasonic ultrasonic6(32, 34);

int distance;
int distance1;
int distance2;
int distance3;
int distance4;
int distance5;
int distance6;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  distance1 = ultrasonic1.read();
  distance2 = ultrasonic2.read();
  distance3 = ultrasonic3.read();
  distance4 = ultrasonic4.read();
  distance5 = ultrasonic5.read();
  distance6 = ultrasonic6.read();

  Serial.print("Distance in CM: ");
  Serial.println(distance);
    Serial.print("Distance in CM: ");
  Serial.println(distance1);
      Serial.print("Distance in CM: ");
  Serial.println(distance2);
      Serial.print("Distance in CM: ");
  Serial.println(distance3);
      Serial.print("Distance in CM: ");
  Serial.println(distance4);
      Serial.print("Distance in CM: ");
  Serial.println(distance5);
      Serial.print("Distance in CM: ");
  Serial.println(distance6);
  Serial.println("Distance in CM ");
  
  /*
 * Ultrasonic Simple
 * Prints the distance read by an ultrasonic sensor in
 * centimeters. They are supported to four pins ultrasound
 * sensors (liek HC-SC04) and three pins (like PING)))
 * and Seeed Studio sensors).
 *
 * The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
 *   three pins), attached to digital pins as follows:
 * ---------------------    --------------------
 * | HC-SC04 | Arduino |    | 3 pins | Arduino |
 * ---------------------    --------------------
 * |   Vcc   |   5V    |    |   Vcc  |   5V    |
 * |   Trig  |   12    | OR |   SIG  |   13    |
 * |   Echo  |   13    |    |   Gnd  |   GND   |
 * |   Gnd   |   GND   |    --------------------
 * ---------------------
 * Note: You do not obligatorily need to use the pins defined above
 * 
 * By default, the distance returned by the read()
 * method is in centimeters. To get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.read(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 03 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 11 Jun 2018
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(12, 11);
Ultrasonic ultrasonic1(9, 8);
Ultrasonic ultrasonic2(6, 5);
Ultrasonic ultrasonic3(3, 2);
Ultrasonic ultrasonic4(31, 33);
Ultrasonic ultrasonic5(26, 24);
Ultrasonic ultrasonic6(32, 34);

int distance;
int distance1;
int distance2;
int distance3;
int distance4;
int distance5;
int distance6;


  Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT); 
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  distance1 = ultrasonic1.read();
  distance2 = ultrasonic2.read();
  distance3 = ultrasonic3.read();
  distance4 = ultrasonic4.read();
  distance5 = ultrasonic5.read();
  distance6 = ultrasonic6.read();

  Serial.print("Distance in CM: ");
  Serial.println(distance);
  
  if ( distance < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
  
    Serial.print("Distance in CM: ");
  Serial.println(distance1);
  
    if ( distance1 < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
      Serial.print("Distance in CM: ");
  Serial.println(distance2);
  
    if ( distance2 < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
      Serial.print("Distance in CM: ");
  Serial.println(distance3);
    if ( distance < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
      Serial.print("Distance in CM: ");
  Serial.println(distance4);
    if ( distance < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
      Serial.print("Distance in CM: ");
  Serial.println(distance5);
    if ( distance < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
      Serial.print("Distance in CM: ");
  Serial.println(distance6);
    if ( distance < 50){
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  } else {
      digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  }
  Serial.println("Distance in CM ");


}
