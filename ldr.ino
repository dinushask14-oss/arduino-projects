int ldrpin=A0;
int thershold=600;
int lightvalue=0;


void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  lightvalue=analogRead(ldrpin);
  Serial.println(lightvalue);
  if(lightvalue<thershold){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(200);
  
  // put your main code here, to run repeatedly:

}
