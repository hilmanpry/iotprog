#define RED_LED_PIN D12     // Pin untuk LED merah
#define BLUE_LED_PIN D13    // Pin untuk LED biru
#define RED_BUTTON_PIN D3   // Pin untuk tombol merah
#define BLUE_BUTTON_PIN D2  // Pin untuk tombol biru

bool redLedState = LOW;    // Status LED merah
bool blueLedState = LOW;   // Status LED biru

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);      // Mengatur pin LED merah sebagai output
  pinMode(BLUE_LED_PIN, OUTPUT);     // Mengatur pin LED biru sebagai output
  pinMode(RED_BUTTON_PIN, INPUT_PULLUP);   // Mengatur pin tombol merah sebagai input dengan resistor pull-up
  pinMode(BLUE_BUTTON_PIN, INPUT_PULLUP);  // Mengatur pin tombol biru sebagai input dengan resistor pull-up
}

void loop() {
  // Membaca status tombol merah
  int redButtonState = digitalRead(RED_BUTTON_PIN);
  // Membaca status tombol biru
  int blueButtonState = digitalRead(BLUE_BUTTON_PIN);

  // Jika tombol merah ditekan (LOW)
  if (redButtonState == LOW) {   
    redLedState = !redLedState; // Toggle status LED merah
    digitalWrite(RED_LED_PIN, redLedState); // Atur LED merah sesuai status
    delay(200); // Delay untuk menghindari debounce
  }

  // Jika tombol biru ditekan (LOW)
  if (blueButtonState == LOW) {  
    blueLedState = !blueLedState; // Toggle status LED biru
    digitalWrite(BLUE_LED_PIN, blueLedState); // Atur LED biru sesuai status
    delay(200); // Delay untuk menghindari debounce
  }

  delay(50); // Delay tambahan untuk stabilitas
}
