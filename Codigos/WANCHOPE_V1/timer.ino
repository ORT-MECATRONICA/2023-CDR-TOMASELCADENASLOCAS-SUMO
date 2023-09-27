void contadorTiempo() {
  miliseconds = millis();

  if (miliseconds - milisAnteriores >= 10) {
    contador += 1; //cada 1 del contador son 10ms
    milisAnteriores = miliseconds;
  }
}
