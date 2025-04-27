// left(l) 
// middle(m)
// right(r)

// Mapeamento dos leds

// l4   m2   r4(3v3 -> sempre energizado ao ligar)
// l3        r3
// l2   m1   r2
// l1        r1
// l0   m0   r0(3v3 -> sempre energizado ao ligar)

// Led's da esquerda
// int led_l0 = 16;
// int led_l1 = 16;
// int led_l2 = 16;
// int led_l3 = 16;
// int led_l4 = 16;


// Led's do meio
// int led_m0 = 16;
// int led_m1 = 16;
// int led_m2 = 16;


// Led's da direita
// int led_r1 = 16;
// int led_r2 = 16;
// int led_r3 = 10;


void setup() {
  // pinMode(led_l0, OUTPUT);
  // pinMode(led_l1, OUTPUT);
  // pinMode(led_l2, OUTPUT);
  // pinMode(led_l3, OUTPUT);
  // pinMode(led_l4, OUTPUT);

  // pinMode(led_m0, OUTPUT);
  // pinMode(led_m1, OUTPUT);
  // pinMode(led_m2, OUTPUT);

  // pinMode(led_r1, OUTPUT);
  // pinMode(led_r2, OUTPUT);
  // pinMode(led_r3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  mostrarNum0();
  delay(1000);
  deligarTodosLeds()

  mostrarNum1();
  delay(1000);
  deligarTodosLeds()

  mostrarNum2();
  delay(1000);
  deligarTodosLeds()

  mostrarNum3();
  delay(1000);
  deligarTodosLeds()

  mostrarNum4();
  delay(1000);
  deligarTodosLeds()

  mostrarNum5();
  delay(1000);
  deligarTodosLeds()

  mostrarNum6();
  delay(1000);
  deligarTodosLeds()

  mostrarNum7();
  delay(1000);
  deligarTodosLeds()

  mostrarNum8();
  delay(1000);
  deligarTodosLeds()

  

  mostrarNum9();
  delay(1000);
  deligarTodosLeds()

}


void mostrarNum0{
  digitalWrite(led_l0, HIGH); 
  digitalWrite(led_l1, HIGH); 
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH); 
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  // digitalWrite(led_m1, HIGH); delay(2000); digitalWrite(led_m1, LOW);
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}

void mostrarNum1{
  // digitalWrite(led_l0, HIGH); delay(2000); digitalWrite(led_l0, LOW);
  // digitalWrite(led_l1, HIGH); delay(2000); digitalWrite(led_l1, LOW);
  // digitalWrite(led_l2, HIGH); delay(2000); digitalWrite(led_l2, LOW);
  // digitalWrite(led_l3, HIGH); delay(2000); digitalWrite(led_l3, LOW);
  // digitalWrite(led_l4, HIGH); delay(2000); digitalWrite(led_l4, LOW);

  // digitalWrite(led_m0, HIGH); delay(2000); digitalWrite(led_m0, LOW);
  // digitalWrite(led_m1, HIGH); delay(2000); digitalWrite(led_m1, LOW);
  // digitalWrite(led_m2, HIGH); delay(2000); digitalWrite(led_m2, LOW);
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}


void mostrarNum2{
  digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH); delay(2000); digitalWrite(led_l1, LOW);
  digitalWrite(led_l2, HIGH); 
  // digitalWrite(led_l3, HIGH); delay(2000); digitalWrite(led_l3, LOW);
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  // digitalWrite(led_m1, HIGH); delay(2000); digitalWrite(led_m1, LOW);
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}

void mostrarNum3{
  digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH); delay(2000); digitalWrite(led_l1, LOW);
  digitalWrite(led_l2, HIGH); 
  // digitalWrite(led_l3, HIGH); delay(2000); digitalWrite(led_l3, LOW);
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}

void mostrarNum4{
  // digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH); delay(2000); digitalWrite(led_l1, LOW);
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  // digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  // digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}

void mostrarNum5{
  digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH); delay(2000); digitalWrite(led_l1, LOW);
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  // digitalWrite(led_r3, HIGH); 
  
}


void mostrarNum6{
  digitalWrite(led_l0, HIGH); 
  digitalWrite(led_l1, HIGH);
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  // digitalWrite(led_r3, HIGH); 
  
}

void mostrarNum7{
  // digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH);
  // digitalWrite(led_l2, HIGH); 
  // digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  // digitalWrite(led_m0, HIGH); 
  // digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}


void mostrarNum8{
  digitalWrite(led_l0, HIGH); 
  digitalWrite(led_l1, HIGH);
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}


void mostrarNum9{
  // digitalWrite(led_l0, HIGH); 
  // digitalWrite(led_l1, HIGH);
  digitalWrite(led_l2, HIGH); 
  digitalWrite(led_l3, HIGH);
  digitalWrite(led_l4, HIGH); 

  // digitalWrite(led_m0, HIGH); 
  digitalWrite(led_m1, HIGH); 
  digitalWrite(led_m2, HIGH); 
  
  digitalWrite(led_r1, HIGH); 
  digitalWrite(led_r2, HIGH); 
  digitalWrite(led_r3, HIGH); 
  
}

void deligarTodosLeds{
  digitalWrite(led_l0, LOW); 
  digitalWrite(led_l1, LOW);
  digitalWrite(led_l2, LOW); 
  digitalWrite(led_l3, LOW);
  digitalWrite(led_l4, LOW); 

  digitalWrite(led_m0, LOW); 
  digitalWrite(led_m1, LOW); 
  digitalWrite(led_m2, LOW); 
  
  digitalWrite(led_r1, LOW); 
  digitalWrite(led_r2, LOW); 
  digitalWrite(led_r3, LOW); 
}