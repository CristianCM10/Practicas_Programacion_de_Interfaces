const int buttonPin = 7;
const int buzzerPin = 11;

int frecuencias[] = {262, 294, 330, 349, 392, 440, 494};
int indice = 0;
bool lastState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

//void loop() {
//  int buttonState = digitalRead(buttonPin);

 // if(buttonState == HIGH) {
  //  tone(buzzerPin, frecuencias[indice]);
   // delay(500);
   // indice = (indice + 1) % 7;
 // } else {
  //  noTone(buzzerPin);
 // } 
//}

void loop(){
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastState == LOW) {
    tone(buzzerPin, frecuencias[indice]);
    indice = (indice + 1 ) % 7;
  } else if (buttonState == LOW) {
    noTone(buzzerPin);
    lastState = buttonState;
  }
}

