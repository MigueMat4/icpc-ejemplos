# Guía para resolución de problemas del ICPC
El Concurso Internacional de Programación Colegiata, o ICPC por sus siglas en inglés (International Collegiate Programming Contest), es una competencia anual de programación y algoritmia entre universidades de todo el mundo.

No hay un lenguaje de programación único que se recomiende para la competencia ICPC, ya que la elección del lenguaje depende de varios factores. Sin embargo, a pesar de no haber una recomendación única, algunos de los lenguajes de programación más populares en las competencias de ICPC son:
- C++
- Java
- Python

En este repositorio encontrarás una guía sobre lo que debes realizar durante las competencias ICPC.

## Entorno
Cada equipo dispondrá de una estación de trabajo, que será compartida entre los miembros del equipo. Ten en cuenta que esta es la configuración tradicional del ICPC. La configuración, a nivel de software, de cada estación de trabajo generalmente es la siguiente:

- Sistema Operativo:
    * Ubuntu 22.04.1 LTS Linux (64-bit)
- Escritorio:
    * GNOME
- Editores:
    * vi/vim
    * gvim
    * emacs
    * gedit
    * geany
    * kate
- Lenguajes:
    - Java (Openjdk version 17.0.5  2022-10-18)
    - C (gcc 11.3.0 (Ubuntu 11.3.0-1ubuntu1~22.04))
    - C++ (g++ 11.3.0 (Ubuntu 11.3.0-1ubuntu1~22.04))
    - Python 3 (PyPy 7.3.10 with GCC 11.3.0 providing python 3.9.15)
    - Kotlin (Version 1.7.21)

## Ejemplo de problema a solucionar
Todo problema del ICPC está identificado por una letra, un título, una descripción, instrucciones sobre las entradas y la salida esperada, y ejemplos de datos de entrada y salida.

En este repositorio encontrarás archivos de entrada (archivos .in) dentro de la carpeta input, los cuales se pueden utilizar más adelante para hacer las pruebas necesarias antes del envío de las soluciones realizadas.

Para este repositorio asumamos que el problema a resolver es la suma de dos números enteros, por ende, los datos de entrada serán dos números enteros.

Para este ejemplo se contemplarán tres formas en las que recibiremos los datos de entrada.

1. **Datos de entrada separados por saltos de línea**
Para este caso los archivos datos_suma1.in y datos_suma2.in tendrán los datos separados por un salto de línea, por ejemplo el primer archivo:
```
3
2

```
2. **Datos de entrada separados por espacios en blanco**
Para este caso hay otros dos ejemplos. El primero corresponde al archivo datos_suma3.in que incluye como entrada dos números enteros ingresados en una sola línea separados por espacios en blanco:
```
3 2

```

El otro ejemplo corresponde a un caso hipotético donde no conocemos la cantidad de números enteros que se ingresarán, pero sí podemos asegurar que estarán en una sola línea y estarán separados por espacios en blanco. El ejemplo se encuentra en datos_suma4.in:
```
5 5 1 1

```

## Compilación antes de enviar
Durante el concurso, los equipos idealmente deberían testarse antes de enviárselo a los jueces. Para ello, deben compilar los archivos de código fuente tal y como lo harán los jueces. Para ello se deben ejecutar los siguientes comandos en la terminal de Ubuntu:

* C++:
`g++ -x c++ -g -O2 -static archivo.cpp`
*Nota: El archivo compilado se llamará a.out*
* Java:
`javac -encoding UTF-8 -sourcepath . -d . archivo.java`
* Python:
`pypy3 -m py_compile archivo.py`
*Nota: La compilación de archivos Python no es siempre necesaria, simplemente se puede ejecutar el código fuente directamente*

## Probar las soluciones con archivos de entrada (.in) de ejemplo
Cuando se dispone de los archivos compilados, se pueden enviar archivos de entrada (.in) utilizando el redireccionamiento de entrada `<` en la terminal de Ubuntu:

* C++:
`$ ./nombre_archivo_compilado < entrada.in`
* Python:
`$ python archivo.py < entrada.in`

### Utilizando los archivos del repositorio
Como ejemplo puedes utilizar este repositorio. En tu terminal de Ubuntu dirígete a la carpeta donde esté el lenguaje que deseas utilizar.

#### C++
En esta carpeta encontrarás cinco archivos de C++, de los cuales cuatro se pueden utilizar para resolver el problema de ejemplo de este repositorio, así como utilizar los archivos de entrada. Para ello, utiliza la siguiente tabla:
| Código fuente  | Archivo compilado | Archivo de entrada |
| ------------- | ------------- | ------------- |
| suma.cpp  | a.out  | datos_suma.in o datos_suma2.in |
| suma2.cpp  | a.out  | datos_suma.in o datos_suma2.in  |
| suma3.cpp  | a.out  | datos_suma3.in  |
| suma4.cpp  | a.out  | datos_suma4.in  |

Por lo tanto, para realizar las pruebas con los archivos de este repositorio se debe ejecutar:
`$ ./a.out < ../datos_suma.in`

#### Python
En esta carpeta encontrarás cuatro archivos de Python, de los cuales todos se pueden utilizar para resolver el problema de ejemplo de este repositorio, así como utilizar los archivos de entrada. Para ello, utiliza la siguiente tabla:
| Código fuente  | Archivo de entrada |
| ------------- | ------------- |
| suma.py  | datos_suma.in o datos_suma2.in |
| suma2.py  | datos_suma.in o datos_suma2.in  |
| suma3.py  | datos_suma3.in  |
| suma4.py  | datos_suma4.in  |

Por lo tanto, para realizar las pruebas con los archivos de este repositorio se debe ejecutar:
`$ python suma.py < ../datos_suma.in`

Si las pruebas realizadas resultaron con éxito, corresponde enviar las soluciones a la plataforma para ser evaluadas.

## Posibles resultados de la plataforma
Un envío puede tener los siguientes resultados (es posible que no todos estén disponibles según la configuración del sistema):
* CORRECT
El envío pasó todas las pruebas: ¡Resolviste el problema! Los envíos correctos no incurren tiempo de penalización.
* COMPILER-ERROR
Hubo un error al compilar tu programa. En la página de detalles del envío puedes inspeccionar el error exacto (esta opción puede estar deshabilitada). Ten en cuenta que cuando la compilación tarda más de 30 segundos se cancela y esto cuenta como un error de compilación. Los errores de compilación no incurren en tiempo de penalización.
* TIMELIMIT
Tu programa tardó más que el tiempo máximo permitido para el problema. Esto podría indicar que tu programa se bloquea en un bucle o que tu solución no es suficientemente eficiente.
* RUN-ERROR
Hubo un error durante la ejecución de tu programa. Esto puede tener muchas causas diferentes como división por cero, direccionamiento incorrecto de la memoria (por ejemplo, indexando matrices fuera de límites), intentar usar más memoria que el límite permitido, leer o escribir en archivos, etc. También verifique que tu programa finalice con el código de salida 0.
* WRONG-ANSWER
El resultado de tu programa fue incorrecto. Esto puede suceder simplemente porque tu La solución no es correcta, pero recuerda que tu salida debe cumplir exactamente con las especificaciones solicitadas.
* TOO LATE
Enviaste la solución después de que terminó el concurso. El envío se almacena, pero no será procesado.