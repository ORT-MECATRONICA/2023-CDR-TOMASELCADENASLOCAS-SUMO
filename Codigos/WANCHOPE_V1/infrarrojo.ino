void pruebas() {
  deteccionOponente();
  if (infrarrojo[DERECHA] == LOW) {
    Serial.write("DERECHA");
  }

  if (infrarrojo[DERECHA_CENTRO] == LOW) {

    Serial.write("DERECHA_CENTRO");
  }

  if (infrarrojo[IZQUIERDA_CENTRO] == LOW) {

    Serial.write("IZQUIERDA_CENTRO");
  }

  if (infrarrojo[IZQUIERDA] == LOW) {

    Serial.write("IZQUIERDA");
  }

}

void deteccionOponente() {

  infrarrojo[DERECHA] = digitalRead(IR_DERECHA);
  infrarrojo[DERECHA_CENTRO] = digitalRead(IR_DERECHA_CENTRO);
  infrarrojo[IZQUIERDA_CENTRO] = digitalRead(IR_IZQUIERDA_CENTRO);
  infrarrojo[IZQUIERDA] = digitalRead(IR_IZQUIERDA);

}
