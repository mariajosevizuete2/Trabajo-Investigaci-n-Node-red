#  NODE-RED PARA EL DISEÑO DE DASHBOARD

****PROBLEMA:****

<p>¿Cuáles son los principales componentes que facilitan el diseño de Dashboard,su definición y parámetros de configuración?</p>

****OBJETIVO GENERAL:****

<p>Identificar y describir de manera general los parámetros de configuración de los principales componentes disponibles en Node-Red para el diseño de Dashboard a través del análisis de información para su comprensión y posterior implementación.</p>

****OBJETIVOS ESPECÍFICOS:****
 
 <p><li>Identificar estudios recientes que contengan información acerca de Node-Red, para de esta forma conocer el objeto a investigar y las distintas aplicaciones en las que se encuentran que pude tener en diversos campos.</li></p>
<p><li>Comprender la funcionalidad y parámetros de configuración para el diseño de Dashboard.</li></p>
<p><li>Desarrollar un ejemplo básico en el que se evidencie la implementación de  audio out, template, notification, chart, gauge, form dropdown.</li></p>

****ESTADO DEL ARTE****

***DESARROLLO DE PANELES DE CONTROL PARA REDES IOT BASADOS EN NODE-RED***

<p>Salvador García Jiménez</p>

<p>En el presente estudio se plantea como objetivo  principal generar dentro de un entorno IoT (Internet of Things), el envío de contenido multimedia en directo. Para lo cual se ha planteado el uso de interfaz  de una Raspberry Pi y un módulo de cámara a la cual está conectada. Así bien el mecanismo usado para la transmisión del contenido es DASH (Dynamic Adaptive Streaming over HTTP),el cual  permite obtener  fragmentos de vídeo que facilitan la reproducción del mismo tomando en cuenta que la velocidad de reproducción dependerá de la red que se use en el momento.La cámara envia los fragmentos de video a una web. Todo este proceso se une a través  de  la herramienta Node-RED,la cual permite diseñar flujos de datos que ayudan a modificar el video a reproducir ,en adición esta cuenta con la opción a realizar un Dashboard para así interactuar con los flujos de datos que se crean.El trabajo a su vez plantea que al momento de elegir una herramienta para trabajar en IoT se debe escoger Node-Red ya que ofrece varias ventajas entre las que destacan su sencillez,facilidad de uso ,interfaz gráfica intuitiva ,disponibilidad de una comunidad de usuarios y soporte.La interfaz gráfica facilitan la comprensión del flujo de los datos ,que mediante hilos conectan diversos nodos que tienen distintos usos y aplicaciones,además, permite al usuario descargar una serie de nodos adicionales ,los cuales provienen de la antes mencionada comunidad de usuarios mismos que aportan de manera abierta sus trabajos.Esta  aplicación basada en Node.js, escrita en JavaScript y que dispone de un modelo de entradas y salidas para crear aplicaciones  permite unir dispositivos hardware, APIs y servicios online de maneras muy interesantes. Es así que al  estar basada en Node.js genera el beneficio de ser una aplicación que consume pocos recursos y por tanto pueda utilizarse en dispositivos de la gama más baja de coste como una Raspberry Pi o servicios cloud.Por otra parte,el Dashboard de Node-RED se distribuye en una especie de rejilla, cada elemento grupo tiene un tamaño, por defecto se le asigna un ancho de 6 unidades, cada una se compone de 48 píxeles. En cada grupo existen widgets, los cuales también poseen la propiedad de la anchura, por defecto será automática y ocupará la anchura del elemento. Existen diversos nodos que ofrecen una gran utilidad a la hora de combinar una interfaz gráfica de visualización de resultados con la interacción entre el usuario y el flujo de datos diseñado. Existen desde formularios, botones y listas desplegables hasta templates donde programar un fragmento de lenguaje web.Tras todo lo anterior, el vídeo se representa en un Dashboard compuesto por un flujo de datos, que a su vez se compone de distintos nodos en la plataforma Node-RED.</p>

<p>Fecha: Valencia, 3 de diciembre de 2018</p>

<p>Al igual que en este estudio al momento de diseñar Dashboard en node-red se pudo constatar sus ventajas ,ya que enfocándonos  en la interfaz gráfica que ofrece este ,se logró  comprender de manera clara cómo fluyen los datos,cuya transmisión se lleva a cabo mediante una especie de cajas llamadas nodos conectadas por hilos, las cuales pueden generar distintos usos .Además ,se incluye dentro del estudio como de la investigación que realizamos los principales widgets del Dashboard que permiten configurarlos a beneficio del usuario.</p>


***SISTEMA DE MONITOREO DE CALIDAD DEL AIRE BASADO EN MQTT USANDO NODE MCU Y NODE-RED***

<p>Somphop Chanthakit,Choopan Rattanapoka</p>
<p>Colegio de Tecnología Industrial, Universidad de Tecnología del Rey Mongkut.</p> 
<p>Bangkok del Norte, Bangkok, Tailandia.</p>

<p>El documento se enfoca en la implementación de un  sistema de monitoreo de calidad del aire basado en MQTT. Este  dispositivo que mide la calidad del aire  no es más que  un hardware basado en ESP8266 NodeMCU que se conecta con varios sensores los cuales a su vez miden la  temperatura, humedad, concentración de monóxido de carbono y gas de ozono .En este caso se hace uso de  Node-RED como un suscriptor que se suscribe para recibir  los datos enviados  desde el  MQTT Broker. Se opta por este tipo de herramienta ya que se señala que node-Red es una herramienta de desarrollo que se centra  en el  flujo de los datos y la cual  a su vez fue desarrollada originalmente por IBM para el cableado de dispositivos de hardware, API y servicios en línea como parte de Internet de las cosas, genera y pone a disposición del usuario un editor de flujo basado en navegador, que puede ser usado para crear funciones de JavaScript.Además cuenta con la ventaja de que las aplicaciones  que se hayan realizado anteriormente se pueden guardar o compartir para su reutilización.Por tanto con Node-RED, se realiza fácilmente un flujo para administrar y manejar los datos recibidos. Node-RED cuenta con un panel de control de calidad del aire,al sula se le envía los datos, que es una aplicación web receptiva usada para mostrar datos en la interfaz de usuario de indicadores, texto y gráficos. Incluso cuando el valor de algunos datos excede el rango configurado, Node-RED enviará un mensaje de alarma a través de LINE Notify para notificar a los usuarios.</p>

</p>Para este estudio el panel de control de calidad del aire ,muestra tres tipos de interfaz de usuario desde datos de cada sensor (indicador, texto y gráfico). Finalmente como se menciona anteriormente el tablero es una aplicación web receptiva, por lo que puede ser mostrada  perfectamente en un teléfono móvil o en la web.</p>

<p>Fecha de la conferencia: 11-13 de julio de 2018</p>
<p>Fecha añadida a IEEE Xplore : 08 de noviembre de 2018</p>
 
<p>En el caso de nuestro trabajo al igual que en la investigación se pude visualizar que la interfaz gráfica que nos ofrece node-red constituye un entorno agradable para que el usuario desarrolle su trabajo,además, una vez más se evidencia la clara ventaja de sencillez al momento de entender cómo fluyen los datos  ,en el caso del estudio se usado los widgets disponibles en dashboard como el texto, indicador y gráfico ;mismos que hemos utilizado en los programas en adición con otros como la salida de audio como en el caso del velocímetro o aquel que  guarda claves en una base de datos.</p>

****MARCO TEÓRICO****

***¿Qué es un dashboard en Node-Red?***

<p>El diseño del dashboard debe considerarse como una cuadrícula. Cada elemento del grupo tiene un ancho: de forma predeterminada, 6 ‘unidades’ (una unidad tiene 48 píxeles de ancho de forma predeterminada con un espacio de 6 píxeles).</p>
<p>Cada widget del grupo también tiene un ancho: de forma predeterminada, ‘auto’, lo que significa que ocupará el ancho del grupo en el que se encuentra, pero puede establecerlo en un número fijo de unidades.</p>
<p>El algoritmo de diseño del tablero siempre trata de colocar elementos tan altos y a la izquierda como sea posible dentro de su contenedor; esto se aplica a cómo se posicionan los grupos en la página, así como a cómo se colocan los widgets en un grupo.</p>
<p>Dado un grupo con un ancho de 6, si agrega seis widgets, cada uno con un ancho de 2, se colocarán en dos filas, tres widgets en cada uno.</p>
<p>Si agrega dos grupos de ancho 6, siempre que la ventana de su navegador sea lo suficientemente ancha, se sentarán uno al lado del otro. Si encoge el navegador, en algún momento el segundo grupo cambiará para estar debajo del primero, en una columna.</p>
<p>Es posible utilizar múltiples grupos si es posible, en lugar de un gran grupo, para que la página pueda cambiar de tamaño dinámicamente en pantallas más pequeñas</p>

***Nodos principales del dashboard*** 
<p>Es importante mencionar que en varios de los nodos van a existir los parámetros:</p>
<p><li>Group/ grupo: Aquí se va a contener el nodo dentro del dashboard, si se va a implementar distintos nodos para un mismo objetivo, lo mejor sería colocarlos en el mismo grupo.</li></p>
<p><li>Label/ Etiqueta: Se asigna el nombre que va a tener cada uno de los nodos al ser mostrados.</li></p>
<p><li>Tooltip/ Información sobre herramientas: Se escribe una indicación al usuario, esta aparecerá al acercar el cursor al componente.</li></p>
**********imagen*******
<p><li>Name: Se sitúa el nombre que se va a visualizar solo en la terminal.</li></p>
