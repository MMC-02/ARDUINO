





//????



boolean X2,X3,Y12,Y13,R0 ;



void setup() {
       Serial.begin(9600);
       pinMode(2,INPUT_PULLUP);
       
       pinMode(3,INPUT_PULLUP);
       pinMode(13,OUTPUT);
        pinMode(12,OUTPUT);

}

void loop() {
             X2 = !digitalRead(2);
             X3 = !digitalRead(3);
             
             //Serial.println(X2);
             //Serial.println(X3);
               Serial.println(R0);
          
          
          R0=(X2||R0) && (!X3);
          Y12=!R0;
          Y13=R0;
          digitalWrite(13,Y13);
          digitalWrite(12,Y12);
   
   
   
   