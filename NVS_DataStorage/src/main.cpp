#include <Preferences.h>


char* server_cert = nullptr;
uint32_t server_cert_len;

void loadCertData() {
    Preferences prefs;
    prefs.begin("cert_data", false);

    server_cert_len = prefs.getBytesLength("server_cert");
    if (server_cert_len > 0) {
        server_cert = new char[server_cert_len + 1];
        prefs.getBytes("server_cert", server_cert, server_cert_len);
        server_cert[server_cert_len] = '\0';
    } else {
        Serial.println("No server certificate found in NVS");
    }

    prefs.end();
}

void setup() {
    Serial.begin(115200);

    // Connect to WiFi

    // Load server certificate and private key from NVS
    loadCertData();

    // Print the server certificate
    if (server_cert != nullptr) {
        Serial.println("Server Certificate:");
        Serial.println(server_cert);
    }
}

void loop() {

}