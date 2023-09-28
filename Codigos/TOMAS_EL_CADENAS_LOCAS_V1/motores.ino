void adelante(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, HIGH);
  digitalWrite(M1_AT, LOW);
  digitalWrite(M2_AD, HIGH);
  digitalWrite(M2_AT, LOW);

}
void parar(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, HIGH);
  digitalWrite(M1_AT, HIGH);
  digitalWrite(M2_AD, HIGH);
  digitalWrite(M2_AT, HIGH);

}

void izquierda(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, HIGH);
  digitalWrite(M1_AT, LOW);
  digitalWrite(M2_AD, HIGH);
  digitalWrite(M2_AT, HIGH);

}

void izquierda90(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, HIGH);
  digitalWrite(M1_AT, LOW);
  digitalWrite(M2_AD, LOW);
  digitalWrite(M2_AT, HIGH);

}

void derecha90(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, LOW);
  digitalWrite(M1_AT, HIGH);
  digitalWrite(M2_AD, HIGH);
  digitalWrite(M2_AT, LOW);

}

void derecha(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, HIGH);
  digitalWrite(M1_AT, HIGH);
  digitalWrite(M2_AD, HIGH);
  digitalWrite(M2_AT, LOW);

}

void atras(int pwmDerecha, int pwmIzquierda) {

  analogWrite(M1_PWM, map(pwmDerecha, 0, 100, 0, 255));
  analogWrite(M2_PWM, map(pwmIzquierda, 0, 100, 0, 255));

  digitalWrite(M1_AD, LOW);
  digitalWrite(M1_AT, HIGH);
  digitalWrite(M2_AD, LOW);
  digitalWrite(M2_AT, HIGH);

}

void secuencia() {
  adelante(100, 100);
  Serial.println("adelante");

  delay(1000);

  izquierda(100, 100);
  Serial.println("izquierda");

  delay(1000);

  derecha(100, 100);
  Serial.println("derecha");

  delay(1000);

  atras(100, 100);
  Serial.println("atras");

  delay(1000);

  izquierda90(100, 100);
  Serial.println("izquierda 90");

  delay(1000);

  derecha90(100, 100);
  Serial.println("derecha 90");

  delay(1000);
}
