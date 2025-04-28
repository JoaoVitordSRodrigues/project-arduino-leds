// left(l) 
// middle(m)
// right(r)

// Mapeamento dos leds

// l4(tx -> 1)   m2(d4 -> 2)   r4(3v3 -> sempre energizado ao ligar)
// l3(rx -> 3)                r3(d2 -> 4)
// l2(d8 -> 15)   m1(d5 -> 14)   r2(sd3 -> 10)
// l1(d7 -> 13)                 r1(d0-> 16)
// l0(d6 -> 12)   m0(d1 -> 5)   r0(3v3 -> sempre energizado ao ligar)

// Led's da esquerda
int led_l0 = 12;
int led_l1 = 13;
int led_l2 = 15;
int led_l3 = 3;
int led_l4 = 1;


// Led's do meio
int led_m0 = 5;
int led_m1 = 14;
int led_m2 = 2;


// Led's da direita
int led_r1 = 16;
int led_r2 = 10;
int led_r3 = 4;


void setup() {
 Serial.begin(9600);  
  pinMode(led_l4, OUTPUT);
  pinMode(led_l3, OUTPUT);
  pinMode(led_l2, OUTPUT);
  pinMode(led_l1, OUTPUT);
  pinMode(led_l0, OUTPUT);

  pinMode(led_m2, OUTPUT);
  pinMode(led_m1, OUTPUT);
  pinMode(led_m0, OUTPUT);

  pinMode(led_r3, OUTPUT);
  pinMode(led_r2, OUTPUT);
  pinMode(led_r1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  mostrarNum0();delay(1000);
  mostrarNum1();delay(1000);
  mostrarNum2();delay(1000);
  mostrarNum3();delay(1000);
  mostrarNum4();delay(1000);
  mostrarNum5();delay(1000);
  mostrarNum6();delay(1000);
  mostrarNum7();delay(1000);
  mostrarNum8();delay(1000);
  mostrarNum9();delay(1000);



}

void mostrarNum0() {
  int leds[] = {led_l4, led_l3, led_l2, led_l1, led_l0, led_m2, led_m0, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum1() {
  int leds[] = {led_r1, led_r2, led_r3};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum2() {
  int leds[] = {led_l4, led_l2, led_l1, led_l0, led_m2, led_m1, led_m0, led_r3, led_r2};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum3() {
  int leds[] = {led_l4, led_l2, led_l0, led_m2, led_m0, led_m1, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum4() {
  int leds[] = {led_l4, led_l3, led_l2, led_m1, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum5() {
  int leds[] = {led_l4, led_l3, led_l2, led_l0, led_m2, led_m1, led_m0, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum6() {
  int leds[] = {led_l4, led_l3, led_l2, led_l1, led_l0, led_m2, led_m1, led_m0, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum7() {
  int leds[] = {led_l4, led_m2, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum8() {
  int leds[] = {led_l4, led_l3, led_l2, led_l1, led_l0, led_m2, led_m1, led_m0, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

void mostrarNum9() {
  int leds[] = {led_l4, led_l3, led_l2, led_m1, led_m2, led_r3, led_r2, led_r1};
  int numLeds = sizeof(leds) / sizeof(leds[0]);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}


// void mostrarNum0(){
//   digitalWrite(led_l4, HIGH);
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l2, HIGH);
//   digitalWrite(led_l1, HIGH);
//   digitalWrite(led_l0, HIGH);
//   digitalWrite(led_m2, HIGH);

//   digitalWrite(led_m0, HIGH);
//   digitalWrite(led_r3, HIGH);
//   digitalWrite(led_r2, HIGH);
//   digitalWrite(led_r1, HIGH);
//   delay(2000);


//   digitalWrite(led_l4, LOW);
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l2, LOW);
//   digitalWrite(led_l1, LOW);
//   digitalWrite(led_l0, LOW);
//   digitalWrite(led_m2, LOW);

//   digitalWrite(led_m0, LOW);
//   digitalWrite(led_r3, LOW);
//   digitalWrite(led_r2, LOW);
//   digitalWrite(led_r1, LOW);
//   delay(2000);
// }



// void mostrarNum1(){
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
  
// }


// void mostrarNum2(){
//   digitalWrite(led_l0, HIGH); 
//   digitalWrite(led_l1, HIGH); 
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m0, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH);  
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l1, LOW); 
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m0, LOW);
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW);  
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
  
// }

// void mostrarNum3(){
//   digitalWrite(led_l0, HIGH); 
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m0, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m0, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
// }

// void mostrarNum4(){
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m1, HIGH);   
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);
  
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m1, LOW);   
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
// }

// void mostrarNum5(){
//   digitalWrite(led_l0, HIGH); 
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m0, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   delay(2000);

//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m0, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   delay(2000);
  
// }


// void mostrarNum6(){
//   digitalWrite(led_l0, HIGH); 
//   digitalWrite(led_l1, HIGH);
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m0, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   delay(2000);

//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l1, LOW);
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m0, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   delay(2000);

  
// }

// void mostrarNum7(){
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
  
// }


// void mostrarNum8(){
//   digitalWrite(led_l0, HIGH); 
//   digitalWrite(led_l1, HIGH);
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m0, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l1, LOW);
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m0, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
  
// }


// void mostrarNum9(){
//   digitalWrite(led_l2, HIGH); 
//   digitalWrite(led_l3, HIGH);
//   digitalWrite(led_l4, HIGH); 
//   digitalWrite(led_m1, HIGH); 
//   digitalWrite(led_m2, HIGH); 
//   digitalWrite(led_r1, HIGH); 
//   digitalWrite(led_r2, HIGH); 
//   digitalWrite(led_r3, HIGH); 
//   delay(2000);

//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
//   delay(2000);
  
// }

// void deligarTodosLeds(){
//   digitalWrite(led_l0, LOW); 
//   digitalWrite(led_l1, LOW);
//   digitalWrite(led_l2, LOW); 
//   digitalWrite(led_l3, LOW);
//   digitalWrite(led_l4, LOW); 

//   digitalWrite(led_m0, LOW); 
//   digitalWrite(led_m1, LOW); 
//   digitalWrite(led_m2, LOW); 
  
//   digitalWrite(led_r1, LOW); 
//   digitalWrite(led_r2, LOW); 
//   digitalWrite(led_r3, LOW); 
// }