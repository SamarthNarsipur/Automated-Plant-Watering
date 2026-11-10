const int SOIL_SENSOR_PIN = A0;  
const int PUMP_GATE_PIN = 3;     
const int DRY_THRESHOLD = 300;   

void setup() {
  pinMode(PUMP_GATE_PIN, OUTPUT);    
  digitalWrite(PUMP_GATE_PIN, LOW);  
}

void loop() {
  int moistureLevel = analogRead(SOIL_SENSOR_PIN); 
  
  if (moistureLevel < DRY_THRESHOLD) {
    digitalWrite(PUMP_GATE_PIN, HIGH);   
    delay(4000);                         
    digitalWrite(PUMP_GATE_PIN, LOW);   
  }
  delay(60000);  
}
