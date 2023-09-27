void maquinaPrincipal() {
  switch (estadoPrincipal) {
    case INIT:
      if (BT.available()) {
        leerBluetooth = BT.read();

        if (leerBluetooth == '1') {
          estrategia = "izquierda15";
          BT.write("izquierda 15");
        }

        if (leerBluetooth == '2') {
          estrategia = "derecha15";
          BT.write("derecha 15");
        }

        if (leerBluetooth == '3') {
          estrategia = "izquierda45";
          BT.write("izquierda 45");
        }

        if (leerBluetooth == '4') {
          estrategia = "derecha45";
          BT.write("derecha 45");
        }

        if (leerBluetooth == '5') {
          estrategia = "izquierda90";
          BT.write("izquierda 90");
        }

        if (leerBluetooth == '6') {
          estrategia = "derecha90";
          BT.write("derecha 90");
        }

        if (leerBluetooth == '7') {
          estrategia = "izquierda135";
          BT.write("izquierda 135");
        }

        if (leerBluetooth == '8') {
          estrategia = "derecha135";
          BT.write("derecha 135");
        }

        if (leerBluetooth == '9') {
          estrategia = "180";
          BT.write("180");
        }

        if (leerBluetooth == 'a')
        {

          BT.write ("Arrancando");
          Serial.println("Arrancando");
          digitalWrite(LED, HIGH);
          estadoPrincipal = TIEMPO_SEGURIDAD;
        }

        if (leerBluetooth == 'b')
        {
          BT.write ("Frenando");
          Serial.println("Frenando");
          estadoPrincipal = INIT;
        }
      }


      //codigo seleccion estrategia y start/stop
      break;

    case TIEMPO_SEGURIDAD:
      delay(5000);
      digitalWrite(LED, LOW);
      estadoPrincipal = ARRANQUE;

      break;

    case ARRANQUE:
      //CODIGO ARRANQUE SEGUN ESTRATEGIA
      if (estrategia == "izquierda15")
      {
        izquierda(100, 100);
        delay(500);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "derecha15")
      {
        derecha(100, 100);
        delay(500);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "izquierda45")
      {
        izquierda(100, 100);
        delay(600);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "derecha45")
      {
        derecha(100, 100);
        delay(600);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "izquierda90")
      {
        izquierda90(100, 100);
        delay(850);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "derecha90")
      {
        derecha90(100, 100);
        delay(850);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "izquierda135")
      {
        izquierda90(100, 100);
        delay(1200);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "derecha135")
      {
        derecha90(100, 100);
        delay(1200);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      if (estrategia == "180")
      {
        izquierda90(100, 100);
        delay(1500);
        adelante(100, 100);
        estadoPrincipal = BUSQUEDA;
      }

      break;

    case BUSQUEDA:
      deteccionOponente();
      if (infrarrojo[IZQUIERDA] == LOW) {
        izquierda90(100, 100);
      }
      if (infrarrojo[IZQUIERDA_CENTRO] == LOW) {
        adelante(80, 100);
      }
      if (infrarrojo[IZQUIERDA_CENTRO] == LOW && infrarrojo[DERECHA_CENTRO] == LOW) {
        adelante(100, 100);
      }
      if (infrarrojo[DERECHA_CENTRO] == LOW) {
        adelante(100, 80);
      }
      if (infrarrojo[DERECHA] == LOW) {
        derecha90(100, 100);
      }
      CNY();

      if (BT.available()) {
        if (BT.read() == 'b') {
          adelante(0, 0);
          estadoPrincipal = INIT;
        }
      }
      break;
  }
}
