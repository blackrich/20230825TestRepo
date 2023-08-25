int ledPin1 = 12; // LED 1 핀
int ledPin2 = 13; // LED 2 핀

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600); // 시리얼 통신 속도 설정
}

void loop() {


  Serial.println("this is aduino");

  if (Serial.available()) {
    char command = Serial.read(); // 시리얼로부터 명령을 읽음
    switch(command){
      case 'a': 
        digitalWrite(ledPin1, HIGH); // LED 1 켜기
        Serial.println("LED1 ON");
        break;
      case 'b': 
        digitalWrite(ledPin1, LOW); // LED 1 끄기
        Serial.println("LED1 OFF");
        break;
      case 'A': 
        digitalWrite(ledPin2, HIGH); // LED 2 켜기
        Serial.println("LED2 ON");
        break;
      case 'B': 
        digitalWrite(ledPin2, LOW); // LED 2 끄기
        Serial.println("LED2 OFF");
        break;
        
    }
  }
}