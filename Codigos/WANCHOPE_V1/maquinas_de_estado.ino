void maquinaPrincipal() {
  switch (estadoPrincipal) {
    case INIT:
      if(digitalRead(BOTON_DERECHA) == LOW){
        ultimaVista = DERECHA;
      }
      if(digitalRead(BOTON_IZQUIERDA) == LOW){
        ultimaVista = IZQUIERDA;
      }
      if(digitalRead(BOTON_ARRANQUE) == LOW){
        ultimaVista = ADELANTE;
        estadoPrincipal = TIEMPO_SEGURIDAD;
      }


      //codigo seleccion estrategia y start/stop
      break;

    case TIEMPO_SEGURIDAD:
      delay(5000);
      
      estadoPrincipal = ARRANQUE;

      break;

    case ARRANQUE:
      //CODIGO ARRANQUE SEGUN ESTRATEGIA
      if(ultimaVista == DERECHA){
        derecha(100, 100);
        estadoPrincipal = BUSQUEDA;
      }
      if(ultimaVista == IZQUIERDA){
        izquierda(100,100);
        estadoPrincipal = BUSQUEDA;
      }
      if(ultimaVista = ADELANTE){
        adelante(100, 100);
      }

      break;

    case BUSQUEDA:
      deteccionOponente();
      if (infrarrojo[IZQUIERDA] == LOW) {
        izquierda90(100, 100);
        
      }
      if (infrarrojo[IZQUIERDA_CENTRO] == LOW) {
        adelante(100, 100);
      }
      if (infrarrojo[IZQUIERDA_CENTRO] == LOW && infrarrojo[DERECHA_CENTRO] == LOW) {
        adelante(100, 100);
      }
      if (infrarrojo[DERECHA_CENTRO] == LOW) {
        adelante(100, 100);
      }
      if (infrarrojo[DERECHA] == LOW) {
        derecha90(100, 100);
      }
      CNY();

      
      break;
  }
}
