int x = 0, gled = 13, bled = 11, rled = 9; // variable x=0, yellow led is connected to pin 13

void setup() {
  Serial.begin(9600); // set communication speed to 9600 band (9600 bits per second)
  pinMode(gled, OUTPUT); // set the led to output
  pinMode(rled, OUTPUT); // Set rled to output
  pinMode(bled, OUTPUT); // set bled to output
}

void loop() {
  x = analogRead(A0); // read the analog value from A0 and store it in variable called x
  Serial.println(x); // display the value in x on the computer screen

  if (x > 228 && x < 251) { // if x is greater than 228 and less than 251
    digitalWrite(gled, HIGH); // turn on yellow led
    delay(500); // wait for 500 milliseconds before continuing
  } else {
    digitalWrite(gled, LOW); // otherwise, turn off yellow led
    delay(1000); // wait for one second before continuing
  }

  if (x < 251) { // if x is less than 251
    digitalWrite(rled, HIGH); // turn on red led
    delay(500); // wait for 500 milliseconds before continuing
  } else {
    digitalWrite(rled, LOW); // otherwise, turn off red led
    delay(500); // wait for 500 milliseconds before continuing
  }

  if (x > 228) { // if x is greater than 228
    digitalWrite(bled, HIGH); // turn on blue led
    delay(500); // wait for 500 milliseconds before continuing
  } else {
    digitalWrite(bled, LOW); // otherwise, turn off blue led
    delay(500); // wait for 500 milliseconds before continuing
  }
} 
