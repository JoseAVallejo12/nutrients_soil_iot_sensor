# Propuesta de Envío y Almacenamiento de Datos IoT

## Descripción General
Se propone un dispositivo IoT portátil basado en ESP32 para la recolección de parámetros del
suelo tales como humedad, temperatura, pH, conductividad eléctrica (EC)(sensor NPK) ademas
datos ambientales tales como humedad y temperatura(sensor DHT22). Ademas dispositivo
incorporá una pantalla táctil ILI9341 para visualizar datos y controlar la interfaz, eliminando así
la necesidad de un teclado físico y reduciendo el tamaño total del equipo demas incorpora un
sensor DHT.

## Beneficios del Diseño
- Interfaz Compacta y Moderna: Pantalla táctil para mejor interacción.
- Modularidad y Mantenimiento: Código limpio y fácilmente ampliable.
- Confiabilidad en Campo: Guarda datos localmente cuando no hay red.
- Conectividad Global: Envío de datos a servidores para análisis remoto.


## Método de Envío y Almacenamiento de Datos
El sistema usará un enfoque dual:
1. Almacenamiento Local: Los datos serán guardados automáticamente en una tarjeta
microSD conectada al ESP32 en formato CSV o JSON.
2. Transmisión Remota: Cuando haya conexión Wi-Fi, los datos se enviarán a un servidor
remoto MQTT (como AWS IoT Core o HiveMQ) para análisis y visualización externa.

## Flujo de Trabajo
1. El usuario interactúa con la pantalla táctil para iniciar una medición.
2. El ESP32 recolecta datos de los sensores conectados.
3. La pantalla ILI9341 muestra los datos de forma gráfica o tabular.
4. Los datos son almacenados en la microSD.
5. El usuario podrá atravez de pantalla configurar los datos de conexion del dispositivo.
6. Si hay conexión Wi-Fi disponible, los datos se publican a través de MQTT.