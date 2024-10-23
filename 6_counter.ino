const int buttonIncreasePin = D2; // Pin untuk tombol tambah (D2)
const int buttonDecreasePin = D3; // Pin untuk tombol kurang (D3)

int counterValue = 0; // Inisialisasi nilai counter

void setup() {
  pinMode(buttonIncreasePin, INPUT_PULLUP); // Tombol tambah dengan internal pull-up
  pinMode(buttonDecreasePin, INPUT_PULLUP); // Tombol kurang dengan internal pull-up
  Serial.begin(115200); // Mulai komunikasi serial dengan baud rate 115200
  Serial.print("Counter awal: "); // Menampilkan nilai awal counter
  Serial.println(counterValue);
}

void loop() {
  // Baca status tombol tambah
  if (digitalRead(buttonIncreasePin) == LOW) {
    if (counterValue < 10) { // Cek apakah nilai counter < 10
      counterValue++; // Tambah nilai counter
      Serial.print("Counter: "); // Kirim nilai counter ke Serial Monitor
      Serial.println(counterValue);
    }
    delay(300); // Jeda untuk debouncing
  }

  // Baca status tombol kurang
  if (digitalRead(buttonDecreasePin) == LOW) {
    if (counterValue > 0) { // Cek apakah nilai counter > 0
      counterValue--; // Kurangi nilai counter
      Serial.print("Counter: "); // Kirim nilai counter ke Serial Monitor
      Serial.println(counterValue);
    }
    delay(300); // Jeda untuk debouncing
  }
}
