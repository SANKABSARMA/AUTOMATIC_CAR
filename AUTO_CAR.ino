int motorLpin1=3;
int motorLpin2=5;
int motorRpin1=6;
int motorRpin2=9;
int ledPin13=13;


void setup() {
  Serial.begin(9600);
  Serial.flush();
  pinMode(motorLpin1,OUTPUT);
  pinMode(motorLpin2,OUTPUT);
  pinMode(motorRpin1,OUTPUT);
  pinMode(motorRpin2,OUTPUT);

}

   void loop() {

   int input;
   while(Serial.available()){
   input = Serial.read();
   delay(10);
   Serial.println(" ");
   Serial.write(input);

   digitalWrite(ledPin13,HIGH);
   delay(100);
   digitalWrite(ledPin13,LOW);
   delay(900);
   //MOVE FORWARD
   if(input==49){
   analogWrite(motorLpin1,255);
   analogWrite(motorLpin2,0);
   
   


   analogWrite(motorRpin1,0);
   analogWrite(motorRpin2,190);

   
    }
      //MOVE BACKWARD
    if(input==50){
    analogWrite(motorLpin1,0);
    analogWrite(motorLpin2,255);
   


    analogWrite(motorRpin1,190);
    analogWrite(motorRpin2,0);

    }
   //STOP
   if(input==51){
   digitalWrite(motorLpin1,LOW);
   digitalWrite(motorLpin2,LOW);
   


   digitalWrite(motorRpin1,LOW);
   digitalWrite(motorRpin2,LOW);

    }
   //TURN RIGHT
   if(input==52){
   analogWrite(motorLpin1,255);
   analogWrite(motorLpin2,0);
   

   analogWrite(motorRpin1,0);
   analogWrite(motorRpin2,0);

    }

   //TURN LEFT
   if(input==53){
   analogWrite(motorLpin1,0);
   analogWrite(motorLpin2,0);


   analogWrite(motorRpin1,0);
   analogWrite(motorRpin2,255);

    }

    
  }
}
