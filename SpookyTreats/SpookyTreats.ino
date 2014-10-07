int leftEye  = 11;
int rightEye = 10;
int buzzer   = 9;
int sensor   = 0;

void setup() {                
  pinMode(leftEye, OUTPUT);   
  pinMode(rightEye, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int dist = analogRead(sensor);
  Serial.println(dist);
  if(dist > 250) {
    tone(buzzer, 2600);
    for(int i = 0; i < 10; ++i) {
      digitalWrite(leftEye, HIGH);
      digitalWrite(rightEye, HIGH);
      delay(100);               
      digitalWrite(leftEye, LOW);
      digitalWrite(rightEye, LOW);
      delay(100);
    }
  }
  noTone(buzzer);
  delay(1000);
}
