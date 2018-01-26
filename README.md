

 Isla Chira - Instalación Sonora Open Source - Venice Biennale Architecture 2016

video : https://vimeo.com/168011390

Isla Chira es el nombre de la Instalación Sonora Open Source creada por La Jauría y es posible gracias al trabajo en conjunto con A Company (A-01) quienes después de organizar el primer pabellón nacional de Costa Rica en la Bienal de Venecia del 2014, ahora presentan su propio trabajo en la exposición del Centro Cultural Europeo titulado ''Tiempo-Espacio-Existencia'', la cual es organizado por el Global Arts Affairs (GAA) Foundation como evento colateral de la Bienal de Venecia desde el sábado 28 de mayo hasta el domingo 27 de noviembre del 2016 en el Palazzo Mora en Venecia, Italia. 

Isla Chira es la segunda Isla habitada más grande de Costa Rica. Está ubicada entre Puntarenas y el Golfo de Nicoya (Mar pacífico); cuenta con 3,000 hectáreas y viven aproximadamente 3000 personas. Su biodiversidad casi intacta de Bosque seco tropical contrasta con el corazón y periferia con un impresionante manglar. Sus habitantes viven de la pesca artesanal,la agricultura, el turismo y las artesanías. 

La isla es el eje de la exposición de A-01, tanto las maquetas como la identidad visual y sonora de la instalación giran entorno a la dicotomía de sus necesidades y su realidad (orden y caos). Los módulos sonoros que creamos para la instalación rompen el espacio-tiempo ya que físicamente uno de los cuartos del Palazzo Mora será intervenido desde cada esquina de la habitación para monitorear el desplazamiento de quienes lo visiten. Una vez activado un sensor se escuchará un audio de 30 segundos, cada módulo es independiente y selecciona el audio aleatoriamente dentro de una lista de sonidos de chicharras, pericos, mar, risas de niños, etc. De esta manera lograremos reconstruir según la interacción espontánea de los visitantes el sonido orgánico de la Isla (contextualizando las maquetas y las necesidades directas que quienes podrían habitarlas).

Todos los Audios grabados para exposición han sido liberados en esta plataforma para libre descarga y uso:

A 01 Tierra = https://lajauria.bandcamp.com/album/a-01-tierra

 A 02 Agua = https://lajauria.bandcamp.com/album/a-02-agua



Temática de la exposición: Tiempo-Espacio-Existencia

La exposición se coloca en el contexto de la Bienal de este año, que es dirigida por el arquitecto chileno Alejandro Aravena bajo el título Reporting from the Front (Informando desde el frente).



"La exposición Tiempo-Espacio-Existencia presenta arquitectos de 6 continentes reunidos en una combinación extraordinaria. Muestra la evolución y los pensamientos de la arquitectura internacional actual, presentando arquitectos con diferentes antecedentes culturales y en diferentes etapas de sus carreras. Lo que tienen en común es su dedicación a la arquitectura en el sentido más amplio de su profesión [...]. Esta exposición tiene como objetivo ampliar nuestro conocimiento humano de nuestra propia existencia como seres humanos dentro de un espacio y tiempo determinados".


 Ficha técnica del montaje:

Desde el punto de vista sonoro, es una obra interactiva que se compone por cuatro módulos plugandplay (sensor/audio) los cuales: 

- Se deben ubicar en cada una de las esquinas del lugar a aproximadamente entre 1 metro y dos metros de altura (sugiriendo el mejor ángulo de interacción).

-Cada módulo se conectará a un monitor KRK Rokit 10-3 usando un cable XLR y a la toma eléctrica, utilizando un transformador de 110-220V a 5v DC.  

-La base del módulo permite un eje de rotación x,y,z y ajustar el áreas que se desea monitorear.

El paisaje sonoro creado por los módulos dependerá del desplazamiento de los visitantes dentro de los aproximados 16 metros cuadrados del cuarto, es importante tomar que cuenta que:  

-Cada sensor está configurado para cambiar un estado lógico (HIGH to LOW)  cuando un objeto interviene a partir de un metro noventa centímetros de distancia. 

-Al posicionar los 4 módulos en diagonal se creará una isla virtual en el cuarto donde ningún sensor leerá la posición del visitante, únicamente la periferia de esta "Isla" será monitoreada. Sin embargo, el dispositivo Ultrasónico HC-SR04 tiene un rango de 0 a 400 cm, esta distancia puede ser modificada en la programación del Attiny.(ver más información) 

-Cada salida de audio ha sido masterizada para generar 4 canales estables que se fusionan en una experiencia sonora por lo que todos los monitores deberían ser ajustados al mismo volumen, sin embargo, cada canal puede ser manipulado individualmente.

-Los monitores de audio deben proyectar el sonido hacia el centro del cuarto y deben suspenderse desde cada esquina a una altura entre metro cincuenta a 2 metros sin interferir a los sensores.

Cómo hacer el módulo sensor/audio?

Siguiendo estos pasos se podrá replicar el circuito, programar el Attiny así como descargar los archivos de corte para la caja. 

materiales
Para la realización de cada módulo se necesita: 

1 Sensor ultrasónico HC-SR04 
1 Adafruit FX sound Board
1 Attiny85
1 Tarjeta perforada / PCB
1 Socket de 8 pines. 
1 Conector hembra 4 pines
4 Conectores hembra 1 pin
2 Conectores hembra 2 pines 
8 Conectores macho 
1 Conector XLR macho
1 Conector DC (barrel-power-jack)
Varios cables Awg 22
1 Arduino UNO 
1 Arduino software (IDE 1.5)


Herramientas: 

1 Computadora (Arduino software/programar Attiny)
1 Protoboard / 6 jumper wires / 1 Condensador 10nF o un programador AVR 
1 Cable USB.
1 Cortadora de Cable. 
1 Peladora de Cable.
1 Cautín. 
Estaño.

Antes de la programación del Attiny:
Fuente: High-Low Tech

Un  Attiny   85  ó  45  es  una gran   opción     para    correr programas     de        arduino sencillos,   es    pequeño     y relativamente fácil de utilizar, sin  embargo,  tiene  algunas limitaciones      cuando      se compara con un ATmega328P
que usa  el Arduino UNO ya que cuenta con pocos pines y su memoria flash de 4KB/8KB no permite programas muy largos.

Su Memoria RAM interna es de 256/512 bytes mucho más limitado que la del arduino UNO (2KB) por lo que no puede almacenar muchos datos y su problema principal es que no tienen puerto serial o Puerto I2C (Librería Wire) esto hace que la comunicación entre ellos no sea tan flexible ya que por medio de las librerías SoftwareSerial y TinyWire se puede habilitar esta función aunque no es muy robusta aun.

Antes del conectar el Attiny al módulo es necesario programarlo, para ello vamos a necesitar un arduino UNO o algún programador (ISP) o Hardware para cargar el programa, algunos ejemplos pueden ser:

- Tiny AVR Programmer 
- AVRISP mkll 
- USBtinyISP 

Para la creación de este módulo hemos utilizado el IDE 1.5 y garantizamos que funciona perfectamente. Para programar el Attiny85 ud necesitará descargar e instalar la carpeta llamada ide-1.0.x.zip 

DESCARGAR

Una vez que descomprima la carpeta, se va a encontrar un folder llamado "attiny-ide.1.0.x" el cual contiene el folder "attiny". Busque el Sketchbook Arduino (Usted puede encontrarlo desde el las opciones de preferencias en el Software de arduino) y cree un sub-folder con el nombre "hardware" en Sketchbook si no existe aún. 

Copie el folder "attiny" (no el "attiny-1.0.x") dentro de "hardware". Al final usted encontrará una estructura similar a esta : Documentos > Arduino > Hardware > attiny. Ud deberá encontrar en esta última carpeta un archivo llamado "Boards.txt" y otro llamada "variants". 

Cierre el programa de arduino y cuando ud lo vuelva a abrir será posible ver la lista entera de Attinys desde Tools, Boards. 

Menú de attinys para programar desde arduino



Una vez que usted pueda ver la Lista de Attinys, proceda a quemar el sketch de ARDUINO como ISP ( menu > Ejemplos > ArduinioISP)  y monte el Siguiente circuito para cargar el programa al Attiny.





Pin 1 (reset)  a pin digital 10 

Pin 4 a GND 
Pin 5 (MOSI) a pin Digital 11 
Pin 6 (MISO) a pin Digital 12
Pin 7 (SCK) a pin Digital 13 
Pin 8 a VCC

1 Condensador de 10uF debe ser conectado al Reset del Arduino después de 

Por defecto el Attiny corre a 1 MHz pero se puede seleccionar 8 MHz para un procesamiento de computación más eficiente, para ello tiene que seleccionar la tarjeta y la velocidad a lo que desea trabajar en el attiny
attiny pin outs

una vez conectado todo se necesita seleccionar el Programador > ARDUINO as ISP y la tarjeta como Attiny85 (Internal 8 MHz) y quemar este Sketch. 


Código 

Para este ejercicio tomé el ejercicio de referencia para el sensor ultrasónico HC-SR04 y cambié el número de los pines del Attiny. Además después de observar la medición serial del sensor ultrasónico noté que el sensor tiene cierto ruido que da una medición superior 24 metros, para eliminar esto agregué dos condiciones IF que si la medición es menor a un metro noventa entonces o mayor a 2000 (cm) que la salida 0 cambie de estado lógico (HIGH to LOW). 

Troubleshooting:

Una vez configurado se puede hacer una prueba conectando una resistencia de 220 Ohms y un led en serie desde la Salida 0 (pin 5). 

Si se desea se puede conectar otro led a salida 1 (pin 6)para ver las mediciones superiores a 2000 centímetros.  

Download

Esquemático y montaje. 

VER FOTO 1

Tener en cuenta que:

HC-SR04:

pin 1 a VCC.
pin 2 TRIGGER a Attiny pin 7. 
pin 3 Echo a Attiny pin 2.
pin 4 a GND

Attiny85: 

PIN 1 n/a
PIN 2 a ECHO HC-SR04
PIN 3 n/a
PIN 4 a GND
PIN 5 a ADAFRUIT FX SOUND BOARD pin 1
PIN 6 n/a
PIN 7 a TRIGGER HC-SR04
PIN 8 a VCC 

Adafruit FX Sound Board:

Pin 1 a Attiny pin 5 
Vin a VCC 
GND a GND 
L/R a Audio Output XLR.


ADAFRUIT FX SOUND BOARD :

En esta fase, ya ensamblado se cargan los audios a la tarjeta de sonidos (Adafruit FX Sound Board) por medio de un cable USB a USB mini; Internamente cuenta con una memoria interna de 16 MB pero reproduce sonidos WAV u OGG a una velocidad de sampleo de 44,1Khz a 16 Bit. Puede reproducir hasta 15 minutos de audio en Stereo y 30 Minutos en Mono sin requerir de una memoria extra. Para configurarla simplemente se deben trasladar los audios de una carpeta a otra como si fuese una memoria flash drive USB.


La transferencia es un poco lenta y es necesario formatear previamente el dispositivo como FAT32. Cuenta con 11 disparadores, sin embargo,  en este módulo únicamente se está utilizando el número 1, el cual ha sido configurado en su modo aleatorio. Para hacer esto los audios deben de ser nombrados de la siguiente manera:




T01RAND0.ogg 
T01RAND1.ogg 
T01RAND2.ogg 
T01RAND3.ogg
T01RAND4.ogg 
T01RAND5.ogg 
T01RAND6.ogg 
T01RAND7.ogg
T01RAND8.ogg 
T01RAND9.ogg 






El Adafriut FX sound Board tiene 5 modos de disparo, así como otras maneras para ser controlado, ver PDF del Adafruit FX Sound Board




OUTPUT - XLR 

El shield de adafruit tiene incorporado un jack de 1/8, por lo que este paso no es necesario sin embargo se quiso extender desde unas de sus salidas etiquetadas como L o R hasta un conector XLR (male) por cuestiones prácticas y óptimas para la Instalación. 

Si usted desea usar un cable XLR tome en cuenta que:

- GND se conecta a los pines 3, 1, y al chasis del conector XLR.
- L o R se conecta al Pin 2 del conector XLR.


Alimentación Eléctrica. 

Utilicé un Conector DC Barrel Power Jack hembra y macho más un cargador de celular 110-120 a 5v DC para ensamblar todo dentro de la caja y proteger el circuito interno, no obstante, este circuito puede funcionar con 3 baterías AA perfectamente pero requeriría de mantenimiento algo que también evitamos.

Troubleshooting:

El Módulo creado por la Jauría está pensado desde el armar/desarmar es por ello que todo se ha montado con conectores macho/hembra para lograr un troubleshooting eficiente si llega a fallar; esto puede ser omitido, sin embargo, ha sido uno de los requisitos imprescindibles de esta Instalación. Recomendamos mantener este formato y solo en un caso de emergencia soldar todo directamente. 

1. Cuando el módulo se conecta a la electricidad el Adafruit shield debería encender su Luz Verde.  

2. Cuando el sensor HC-SR04 detecta algún objeto en un rango de un metro noventa la salida del pin 5 del Attiny debería cambiar (HIGH a LOW) esto puede verificarse utilizando una resistencia de 220 ohms y un led a tierra.

3. Al activarse el sensor ultrasónico y cambiar el estado a LOW el adafruit FX sound board debería ejecutar el audio. Un led Rojo indicará que está en MODO reproduciendo Audio. 

4. Si la luz Roja y verde están encendidas pero no reproduce audio, cambiar cable XLR y verificar que el monitor esté funcionando, Si el error sigue, se puede utilizar unos audífonos y escuchar desde la tarjeta misma y no desde la conección hecha por nosotros. 

5. Si todo está bien, conecte el shield de Adafruit a la computadora, borre toda la información de la memoria Flash en formato (FAT32) y vuelva a cargar los audios, Si el problema persiste Instale una nueva imágen del Firmware, Aprenda cómo hacer eso siguiendo este link. 

Hacer/armar las Cajas? 

1 - Utilice esta guía para corte laser. 

2 - En este caso se está utilizando un acrílico reutilizado el cual viene de televisor de pantalla plasma. Ver tutorial de como recuperar este material.

3 - Utilice una jeringa con aguja para agregar el cemento acrílico.

4 - La Base, es un porta celular de automóvil, de varios que investigamos notamos que varios utilizan la misma forma de montaje, sin embargo, en los archivos de corte se pueden modificar libremente para personalizar el cómo sujetarlo.

 

    ISLA CHIRA  / INSTALACIÓN SONORA OPEN SOURCE / LA JAURÍA  

A-01 en colaboración con Bill Price y la Universidad Prairie View de Houston, EEUU. Video mapping de Metamind (Abraham Soria with Vanesa Mata Mata and Fernando Vargas); paisaje sonoro de La Jauría  (Joan  Villaperros);   fotografía   y   película  de  Simon  Bolivar  y  Natalia  Chaverri.  Otros colaboradores  al  proyecto  (en  orden  alfabético):  ACTUAR (Asociación Costarricense de Turismo Rural Comunitario),  ADATA  (Asociación de Damas Trabajando para el Ambiente), ADI (Asociación para el Desarrollo Integral),  ARS  Arquitectos  e  Ingenieros,  Asociación  Semillas (Soren  Pessoa, Valeria Romero Sánchez),  Paula Echeverría Cárdenas,  CEMEX,  CINNO (Centro  de  Investigación para la Innovación en la Universidad Veritas),  Consost, Dinadeco (Dirección Nacional de Desarrollo de la Comunidad), Ethical Foresty, Fab Lab Costa Rica,  Holcim Chair  for Sustainable Construction, Hotel Presidente, Maderotec,  Ministerio de  Salud, Ministerio de Trabajo y Seguridad Social, Plugin & Fina Estampa Films, Reciclarte, Startrash,  Tin  Jo, UNED (Universidad Estatal a Distancia), UNDP (United Nations Development Programme), Universidad Latina, Universidad Nacional - UNA / ECMAR (Grettel Ulate), y WWH.




