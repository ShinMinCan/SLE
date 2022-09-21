#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initalize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  toggle = 1;
  digitalWrite(PIN_LED, toggle); //turn off LED.
}

void loop() {
  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(1000); //wait for 1,000 milliseconds 
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  delay(100);

  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(100);  
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  delay(100);
  Serial.println("1");

  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(100);
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  delay(100);
  Serial.println("2");

  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(100);
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  delay(100);
  Serial.println("3");

  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(100);
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  delay(100);
  Serial.println("4");

  toggle = toggle_state(toggle); //toggle : 0
  digitalWrite(PIN_LED, toggle); //LED on
  delay(100);
  toggle = toggle_state(toggle); //toggle : 1
  digitalWrite(PIN_LED, toggle); //LED off
  Serial.println("5");
  
  
  while(1){

  }
}


int toggle_state(int toggle) {
  toggle = !toggle;
  return toggle;
}
