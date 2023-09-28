int CNY(){
  int suelo;
  
  if(analogRead(CNY_70_IZQUIERDA) < umbral_izquierda){
    suelo = IZQUIERDA;
    
  }
  if(analogRead(CNY_70_DERECHA) < umbral_derecha){
    suelo = DERECHA;
    
  }
  if(analogRead(CNY_70_DERECHA) < umbral_derecha && analogRead(CNY_70_DERECHA) < umbral_izquierda){
    suelo = AMBOS;
    
  }
  if(analogRead(CNY_70_DERECHA) > umbral_derecha && analogRead(CNY_70_DERECHA) > umbral_izquierda){
    suelo = NADA;
    
  }
  
}
