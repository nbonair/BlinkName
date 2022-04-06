const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	pinMode(MY_LED, OUTPUT);
}

void dot(){
    digitalWrite(MY_LED, HIGH);
    delay(100);
    digitalWrite(MY_LED, LOW);
    delay(500);
}

void dash()
{
    digitalWrite(MY_LED, HIGH);
    delay(1000);
    digitalWrite(MY_LED, LOW);
    delay(500);
}

// The loop() method is called frequently.
void loop() {

  //b
  delay(1000);
  dash(); dot(); dot(); dot();
  
  //a 
  delay(1000);
  dot(); dash();
  
  //c
  delay(1000);
  dash(); dot(); dash(); dot();
  
  //h
  delay(1000);
  dot(); dot(); dot(); dot();
  // Then we'll turn it off...

  // Wait 1 second...
  delay(3s);
}

