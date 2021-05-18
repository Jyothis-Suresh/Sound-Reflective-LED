int soundPin = A0;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(soundPin,INPUT);

}

void loop() {
  long sum = 0;
  for(int i=0;i<100;i++)
  {
    sum += analogRead(soundPin);
  }
  sum = sum/100;

  if (sum>=49) digitalWrite(LED1,HIGH); else digitalWrite(LED1,LOW);
  if (sum>=52) digitalWrite(LED2,HIGH); else digitalWrite(LED2,LOW);
  if (sum>=53) digitalWrite(LED3,HIGH); else digitalWrite(LED3,LOW);
  if (sum>=54) digitalWrite(LED4,HIGH); else digitalWrite(LED4,LOW);
  if (sum>=55) digitalWrite(LED5,HIGH); else digitalWrite(LED5,LOW);
  if (sum>=56) digitalWrite(LED6,HIGH); else digitalWrite(LED6,LOW);
  delay(10);
  Serial.println(sum);
}
