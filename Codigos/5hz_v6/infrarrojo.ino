void pruebas(){
  deteccionOponente();
  if(infrarrojo[DERECHA] == LOW){
    BT.write("DERECHA");
    Serial.write("DERECHA");
  }
  
  if(infrarrojo[DERECHA_CENTRO] == LOW){
    BT.write("DERECHA_CENTRO");
    Serial.write("DERECHA_CENTRO");
  }

  if(infrarrojo[IZQUIERDA_CENTRO] == LOW){
    BT.write("IZQUIERDA_CENTRO");
    Serial.write("IZQUIERDA_CENTRO");
  }

  if(infrarrojo[IZQUIERDA] == LOW){
    BT.write("IZQUIERDA");
    Serial.write("IZQUIERDA");
  }

  if(infrarrojo[ARRIBA] == LOW){
    BT.write("ARRIBA");
    Serial.write("ARRIBA");
  }
}

void deteccionOponente(){
  
  infrarrojo[DERECHA] = digitalRead(IR_DERECHA);
  infrarrojo[DERECHA_CENTRO] = digitalRead(IR_DERECHA_CENTRO);
  infrarrojo[IZQUIERDA_CENTRO] = digitalRead(IR_IZQUIERDA_CENTRO);
  infrarrojo[IZQUIERDA] = digitalRead(IR_IZQUIERDA);
  infrarrojo[ARRIBA] = digitalRead(IR_ARRIBA);
  
}
