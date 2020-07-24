const int tp=9;
const int ep=10;
const int r=3;
const int buzz=4;
int duration;
int h;
int H;

void setup() {
  Serial.begin(9600);
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
  pinMode(r,OUTPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  digitalWrite(tp,LOW);
  delayMicroseconds(10);
  digitalWrite(tp,HIGH);
  delayMicroseconds(10);
  digitalWrite(tp,LOW);


  duration=pulseIn(ep,HIGH);

  h=duration*0.034*0.5;
  H=11.7-h;

  if(h<6){
    digitalWrite(r,HIGH);
    digitalWrite(buzz,HIGH);
  }

  else{
    digitalWrite(r,LOW);
    digitalWrite(buzz,LOW);
  }

  Serial.println("water level ---  ");
  Serial.println(H);

  delay(2000);   
  
}
