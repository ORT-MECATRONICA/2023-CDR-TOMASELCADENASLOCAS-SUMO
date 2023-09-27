//BLUETOOTH
#include <SoftwareSerial.h>   // Incluimos la librería  SoftwareSerial  
SoftwareSerial BT(A0, A1);   // Definimos los pines RX y TX del Arduino conectados al Bluetooth

char leerBluetooth;

//MOTORES
#define M1_PWM  5
#define M2_PWM  10
#define M1_AD   8
#define M1_AT   6
#define M2_AD   7
#define M2_AT   9

//INFRARROJO
#define IR_DERECHA          13
#define IR_DERECHA_CENTRO   4
#define IR_IZQUIERDA_CENTRO 2
#define IR_IZQUIERDA        3
#define IR_ARRIBA           12

#define LED                 11

bool infrarrojo[5] = {
  true,
  true,
  true,
  true,
  true
};
#define DERECHA          0
#define DERECHA_CENTRO   1
#define IZQUIERDA_CENTRO 2
#define IZQUIERDA        3
#define ARRIBA           4

//CNY70
#define CNY_70_IZQUIERDA  A5
#define CNY_70_DERECHA    A4

int umbral_izquierda = 322;
int umbral_derecha = 470;

//TIMER
unsigned long contador = 0;
unsigned long milisAnteriores = 0;
unsigned long miliseconds = 0;

//MAQUINA PRINCIPAL
int estadoPrincipal = 0;

#define INIT                   0
#define TIEMPO_SEGURIDAD       1
#define ARRANQUE               2
#define BUSQUEDA               3

int ultimaVista;
String estrategia;

void setup() {

  BT.begin(9600);       // Inicializamos el puerto serie BT (Para Modo AT 2)

  pinMode(M1_AD, OUTPUT);
  pinMode(M1_AT, OUTPUT);
  pinMode(M2_AD, OUTPUT);
  pinMode(M2_AT, OUTPUT);

  pinMode(IR_DERECHA, INPUT);
  pinMode(IR_DERECHA_CENTRO, INPUT);
  pinMode(IR_IZQUIERDA_CENTRO, INPUT);
  pinMode(IR_IZQUIERDA, INPUT);
  pinMode(IR_ARRIBA, INPUT);
  
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //digitalWrite(LED, HIGH);
  
  //contadorTiempo();
  //adelante(100, 100);
  //Serial.println(contador);
  maquinaPrincipal();
  //adelante(100, 100);
  //secuencia(); 
}
