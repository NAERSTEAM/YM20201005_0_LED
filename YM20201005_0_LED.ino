//OCT 5 2020 T.I. refactor the coding style 
//OCT 5 2020 T.I. created this file based on LAB_20200226_0


int leda = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(leda,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(leda,HIGH);
 delay(1000);
 digitalWrite(leda,LOW);
 delay(1000);
    
}
