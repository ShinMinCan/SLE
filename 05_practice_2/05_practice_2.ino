#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initalize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  toggle = toggle_state(toggle); // toggle = 0
  digitalWrite(PIN_LED, toggle); // LED 킴
  delay(1000); // 1초 기달리기
  
  for(int i = 0; i < 10; ++i) { // 0.1초 씩 10번
    toggle = toggle_state(toggle); // toggle = 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
    digitalWrite(PIN_LED, toggle)  // LED 끔, 킴, 끔, 킴, 끔, 킴, 끔, 킴, 끔 ,킴
    delay(100);
  }
  toggle = toggle_state(toggle); // toggle = 1
  digitalWrite(PIN_LED, toggle); // LED 끔
  
  while(1){

  }
}


int toggle_state(int toggle) {
  toggle = !toggle;
  return toggle;
}
