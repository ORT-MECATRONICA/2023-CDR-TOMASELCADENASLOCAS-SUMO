String CNY(){

  String suelo;
  if(analogRead(CNY_70_IZQUIERDA) < umbral_izquierda){
    suelo = "IZQUIERDA";
    atras(100, 100);
    delay(500);
    derecha90(100, 100);
    delay(1000);
  }
  if(analogRead(CNY_70_DERECHA) < umbral_derecha){
    suelo = "DERECHA";
    delay(500);
    atras(100, 100);
    delay(1000);
    izquierda90(100, 100);
  }
  if(analogRead(CNY_70_DERECHA) < umbral_derecha && analogRead(CNY_70_IZQUIERDA) < umbral_izquierda){
    suelo = "AMBOS";
    atras(100, 100);
    delay(500);
    izquierda90(100, 100);
    delay(1000);
  }
  if(analogRead(CNY_70_DERECHA) > umbral_derecha && analogRead(CNY_70_IZQUIERDA) > umbral_izquierda){
    suelo = "NADA";
    
  }

  return suelo;
  
}
