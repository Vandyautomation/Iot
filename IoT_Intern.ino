const int analogPin = A1;  // Pin yang digunakan untuk membaca tegangan

void setup() {
  Serial.begin(9600);  // Mulai komunikasi serial
}

void loop() {
  int sensor = analogRead(analogPin);  // Baca nilai analog dari pin A1
  float voltage = 5 * (sensor / 1023.0);  // Konversi nilai analog ke tegangan (0-5V)
  
  // Konversi tegangan dari 0-5V ke 3.2-4.2V
  float convertedVoltage = (voltage / 5.0) * (4.2 - 3.2) + 3.2;
  
  // Hitung persentase dari 3.2V hingga 4.2V
  float percent = ((convertedVoltage - 3.2) / (4.2 - 3.2)) * 100;

  Serial.print("Input Voltage: ");
  Serial.print(voltage);
  Serial.print(" V, ");
  Serial.print("Converted Voltage: ");
  Serial.print(convertedVoltage);
  Serial.print(" V, ");
  Serial.print("Persentase: ");
  Serial.print(percent);
  Serial.println(" %");

  delay(1000);  // Tunggu 1 detik sebelum membaca nilai lagi
}
