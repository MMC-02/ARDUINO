boolean X2,X3,Y13;// ?? X2 ?? Y13 ??  

void setup() {
              Serial.begin(9600);   
              pinMode (2,INPUT_PULLUP); 
              pinMode (3,INPUT_PULLUP); 
              pinMode (13,OUTPUT);
             
}

void loop() {
  // put your main code here, to run repeatedly:
  X2=!digitalRead (2);
   X3=!digitalRead (3);
  Serial.println(X2);
  Serial.println(X3);
  Y13 = X3 && X2;
 digitalWrite(13,Y13) ;
}