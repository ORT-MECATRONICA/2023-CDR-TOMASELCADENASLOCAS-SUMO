//MOTORES
#define M2_PWM  5
#define M1_PWM  10
#define M2_AD   8
#define M2_AT   6
#define M1_AD   9
#define M1_AT   7

//INFRARROJO
#define IR_IZQUIERDA_CENTRO         4
#define IR_DERECHA_CENTRO   13
#define IR_IZQUIERDA         2
#define IR_DERECHA       3

#define BOTON_IZQUIERDA    A1
#define BOTON_DERECHA      11
#define BOTON_ARRANQUE     A0

bool infrarrojo[4] = {
  true,
  true,
  true,
  true,
};
#define DERECHA          0
#define DERECHA_CENTRO   1
#define IZQUIERDA_CENTRO 2
#define IZQUIERDA        3


//CNY70
#define CNY_70_IZQUIERDA  A5
#define CNY_70_DERECHA    A4
#define AMBOS             4
#define NADA              5
#define ADELANTE          6

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


  pinMode(M1_AD, OUTPUT);
  pinMode(M1_AT, OUTPUT);
  pinMode(M2_AD, OUTPUT);
  pinMode(M2_AT, OUTPUT);

  pinMode(IR_DERECHA, INPUT);
  pinMode(IR_DERECHA_CENTRO, INPUT);
  pinMode(IR_IZQUIERDA_CENTRO, INPUT);
  pinMode(IR_IZQUIERDA, INPUT);

  pinMode(BOTON_IZQUIERDA, INPUT_PULLUP);
  pinMode(BOTON_DERECHA, INPUT_PULLUP);
  pinMode(BOTON_ARRANQUE, INPUT_PULLUP);


  Serial.begin(9600);
}

void loop() {
  //digitalWrite(LED, HIGH);

  //contadorTiempo();
  //adelante(100, 100);
  //Serial.println(contador);
  maquinaPrincipal();
  //pruebas();

  //adelante(100, 100);
  //Serial.println(digitalRead(IR_DERECHA_CENTRO));
  //secuencia();

  

}
