#include <ESP8266WiFi.h>
#include <ESPAsyncWebServer.h>

const char* ssid = "NSUT-Campus";     
const char* password = ""; 

AsyncWebServer server(80);

const char htmlPage[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>BMW Page</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #222;
            color: white;
            text-align: center;
            margin: 0;
            padding: 0;
        }
        .container {
            max-width: 1200px;
            margin: auto;
            padding: 20px;
        }
        header {
            background: #001f3f;
            color: white;
            padding: 15px;
            font-size: 20px;
            display: flex;
            justify-content: space-around;
            align-items: center;
        }
        nav a {
            color: white;
            text-decoration: none;
            margin: 0 15px;
        }
        .bento-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 20px;
            padding: 20px;
        }
        .card {
            background: #fff;
            border-radius: 10px;
            padding: 15px;
            box-shadow: 0px 0px 15px #0078FF;
            color: black;
        }
        .card img {
            width: 100%;
            border-radius: 10px;
        }
        .slider {
            display: flex;
            overflow-x: auto;
            scroll-snap-type: x mandatory;
            gap: 10px;
            padding: 10px;
        }
        .slider img {
            width: 300px;
            height: 200px;
            object-fit: cover;
            border-radius: 10px;
            scroll-snap-align: start;
        }
    </style>
</head>
<body>
    <header>
        <nav>
            <a href="#">Home</a>
            <a href="#models">Models</a>
            <a href="#sales">Sales</a>
            <a href="#contact">Contact</a>
        </nav>
    </header>
    <div class="container">
        <h1>Welcome to the BMW Page!</h1>
        <p>The Ultimate Driving Machine</p>
        
        <h2 id="models">BMW Models</h2>
        <div class="bento-grid">
            <div class="card">
                <img src="http://example.com/bmw_m3.jpg" alt="BMW M3">
                <p><b>BMW M3</b> - A high-performance sports sedan with a racing pedigree.</p>
            </div>
            <div class="card">
                <img src="http://example.com/bmw_i4.jpg" alt="BMW i4">
                <p><b>BMW i4</b> - BMW's cutting-edge electric sports sedan.</p>
            </div>
            <div class="card">
                <img src="http://example.com/bmw_8series.jpg" alt="BMW 8 Series">
                <p><b>BMW 8 Series</b> - A luxurious grand tourer with stunning design.</p>
            </div>
        </div>
        
        <h2>BMW Slideshow</h2>
        <div class="slider">
            <img src="http://example.com/bmw_m5.jpg" alt="BMW M5">
            <img src="http://example.com/bmw_x7.jpg" alt="BMW X7">
            <img src="http://example.com/bmw_z4.jpg" alt="BMW Z4">
        </div>

        <h2 id="sales">Sales & Offers</h2>
        <p>Check out the latest BMW deals and financing options on our official site.</p>

        <h2 id="contact">Contact Us</h2>
        <p>For more information, visit <a href="http://www.bmw.com">BMW Official Website</a> or contact your local dealer.</p>
    </div>
</body>
</html>
)rawliteral";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi!");
  Serial.println("Local IP: " + WiFi.localIP().toString());
  Serial.println("MAC Address: " + WiFi.macAddress());

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/html", htmlPage);
  });

  server.begin();
}

void loop() {
  // Nothing needed in loop
}
