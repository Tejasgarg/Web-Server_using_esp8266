# Web-Server

This project is a webpage hosted on an ESP8266 WiFi module, serving as a standalone web server. The webpage is designed to be lightweight, featuring a modern layout with sliders, a navigation menu, and sections highlighting BMW models, sales, and contact information.

Technologies Used:
* ESP8266 WiFi Module – Acts as an independent web server.
* ESPAsyncWebServer Library – Efficiently handles HTTP requests.
* Embedded HTML, CSS, JavaScript – The webpage is stored in flash memory (PROGMEM).
* HTTP Image Loading – The HTTP protocol fetches Images from online sources.
* Arduino IDE – Used for coding and deploying the firmware.

Key Features:
* Embedded Webpage: The entire website is stored in the ESP8266's flash memory.
* Image Fetching via HTTP: Instead of storing images locally, they are loaded dynamically from external sources.
* Modern UI/UX: A clean and responsive design using CSS grids and sliders.
* Standalone Operation: No need for an external web server; runs directly on ESP8266.

This project demonstrates how an ESP8266 can host a fully functional webpage, making it ideal for IoT dashboards, smart home applications, and embedded web solutions.

Demonstration:

The code: 

<img src="https://github.com/user-attachments/assets/6b88ec88-e750-4351-99bd-709efeaa4387" width="700">
<br>

Uploading: 

<img src="https://github.com/user-attachments/assets/b900deb2-f311-4e87-a14c-87d7a8d66a74" width="700">
<br>

Connecting to Wifi:

<img src="https://github.com/user-attachments/assets/96ec67f6-7ffd-4c57-9c68-3e0494241136" width="700">
<br>

MAC address:

<img src="https://github.com/user-attachments/assets/ad283fa2-84e5-4571-855e-146db7512af4" width="700">
<br>

Static DHCP(for MAC to IP address reservation):

<img src="https://github.com/user-attachments/assets/9f008c27-e875-4561-b1a2-80d793dd1fdd" width="700">
<br>

Port Forwarding(Using Local Router):

<img src="https://github.com/user-attachments/assets/d2db0196-4f5b-4294-a121-e3dca9e4c2c2" width="700">


