int ledV = 4;
int ledA = 7;
int ledR= 8;
void setup() {
  // put your setup code here, to run once:
pinMode(ledV, OUTPUT);
pinMode(ledA, OUTPUT);
pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (ledV, HIGH);
delay(3000);
digitalWrite (ledV, LOW);
digitalWrite (ledA, HIGH);
delay(300);
digitalWrite (ledA, LOW);
delay(300);
digitalWrite (ledA, HIGH);
delay(300);
digitalWrite (ledA, LOW);
delay(300);
digitalWrite (ledA, HIGH);
delay(300);
digitalWrite (ledA, LOW);
delay(300);
digitalWrite (ledA, LOW);
digitalWrite (ledR, HIGH);
delay(2000);
digitalWrite (ledR, LOW);

}

