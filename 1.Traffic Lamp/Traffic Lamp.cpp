//c++ code

// https://www.tinkercad.com/things/4Tcc1AACeup-cool-rottis/editel?sharecode=XAuuMHHcIUDe9jsYH_6qHg0yg4j2kOiB7MsABdmHzhk

int redled = 2; 
int yellowled = 3; 
int greenled = 4; 
void setup() {
 
pinMode(redled, OUTPUT); 
pinMode(yellowled, OUTPUT); 
pinMode(greenled, OUTPUT); 
 
}
 
void loop() {
 
digitalWrite(redled, HIGH); 
delay(5000); 
digitalWrite(redled, LOW); 
digitalWrite(yellowled, HIGH); 
delay(3000); 
digitalWrite(yellowled, LOW); 
digitalWrite(greenled, HIGH); 
delay(3000); 
digitalWrite(greenled, LOW); 
 
}
