// Pines de los LEDs
const int led = 13;       // Pin del LED principal

// Intervalo de encendido/apagado (en milisegundos)
const int interval = 500; // 500 ms = 0.5s

void setup() {
  pinMode(led, OUTPUT);  // Configurar el pin como salida
}

void loop() {
  digitalWrite(led, HIGH); // Encender LED
  delay(interval);          // Esperar
  digitalWrite(led, LOW);  // Apagar LED
  delay(interval);          // Esperar
}


const int ledIzq = 12;
const int ledDer = 13;
const int interval = 500;

void setup() {
  pinMode(ledIzq, OUTPUT);
  pinMode(ledDer, OUTPUT);
}

void loop() {
  // Intermitente izquierdo
  digitalWrite(ledIzq, HIGH);
  digitalWrite(ledDer, LOW);
  delay(interval);

  // Intermitente derecho
  digitalWrite(ledIzq, LOW);
  digitalWrite(ledDer, HIGH);
  delay(interval);
}
