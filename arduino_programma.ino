int v2lg=8;
int v2lo=7;
int v2lr=6;
int v1lg=4;
int v1lo=3;
int v1lr=2;
int v3lg=12;
int v3lo=11;
int v3lr=10;
void setup(){
  // put your setup code here, to run once:
pinMode (8,OUTPUT);
pinMode (7,OUTPUT);
pinMode (6,OUTPUT);
pinMode (2,OUTPUT);
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
pinMode (10,OUTPUT);
pinMode (11,OUTPUT);
pinMode (12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (v1lg,HIGH);
digitalWrite (v2lg,HIGH);
digitalWrite (v3lg,HIGH);
delay (3000);
digitalWrite (v1lg,LOW);
digitalWrite (v2lg,LOW);
digitalWrite (v3lg,LOW);
digitalWrite (v1lo,HIGH);
digitalWrite (v2lo,HIGH);
digitalWrite (v3lo,HIGH);
delay (500);
digitalWrite (v1lo,LOW);
digitalWrite (v2lo,LOW);
digitalWrite (v3lo,LOW);
digitalWrite (v1lr,HIGH);
digitalWrite (v2lr,HIGH);
digitalWrite (v3lr,HIGH);
delay (3000);
digitalWrite (v1lr,LOW);
digitalWrite (v2lr,LOW);
digitalWrite (v3lr,LOW);
}
