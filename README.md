
# Push_swap_42 

### Recomendaciones generales:

- No se te ocurra intentar sacar todos los casos posibles para cuatro números distintos...
en serio... es una pérdida de tiempo.

- Cuando hagas la función que recoloca tres números no lo gestiones usando int.
Para el futuro, es mejor que lo gestiones todo usando listas. Te lo agradecerás.
De la misma manera, para comprobar que el número que te dan está entre el int max y el int min,
puedes tratarlos como long. De esta forma, si el input que te dan está fuera de los límites,
podrás comprobarlo.

- Cuanto antes crees una función que te muestre todos los nodos de la lista, antes podrás
comprobar que todo está bien.

- Existen varios algoritmos "De moda" para este proyecto: Radix y Chunks. (Yo usé Radix)

- Antes de crear los movimientos, es recomendable saber qué algoritmo vas a usar.
De esta forma, evitarás crear funciones para movimientos que luego no necesites y te darás cuenta
de que has trabajado para nada. Igualmente, todo lo que programes te da experiencia para el futuro.
¡No te agobies! Nunca el tiempo se pierde, solo es un recodo más de nuestra ilusión... O eso decía la canción...

- Cuando gestiones los movimientos, intenta que todos reciban las listas de la misma forma.
No es que sea absolutamente necesario, pero cuantos menos problemas y trampas te pongas a ti mismo/a,
mejor.


### En primer lugar vamos a explicar los movimientos:

sa (swap A): Cambia la posición del primer número del stack A por el segundo número.

sb (swap B): Cambia la posición del primer número del stack B por el segundo número.

ss : sa y sb a la vez.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/0a2325d4-a5c5-406a-a303-714c929a5d18)

ra (reverse A): Pone el primer número del stack A en la última posición.

rb (reverse B): Pone el primer número del stack B en la última posición.

rr : ra y rb a la vez.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/79ad55b6-9673-4621-a308-50539fd70736)

rra (reverse reverse A) : Pone el último número del stack A en la primera posición.

rrb (reverse reverse A) : Pone el último número del stack A en la primera posición.

rrr : rra y rrb al mismo tiempo. 

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/8fc35ae1-c7fc-4abc-876b-3f1ca1726026)

pa : Pone la primera posción del stack B en el stack A.

pb : Pone la primera posción del stack A en el stack B.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/be071589-20b4-45d6-a281-7abd81d46fc6)


### En segundo lugar vamos a hablar de la estrategia elegida: 

Hay 4 casos que comprueba la hoja de corrección:  con 3, 5, 100 y 500 números.
(Si buscas el 100%, la diferencia entre 100 y 500 puede ser significativa. En mi caso, ha sido indiferente)

- Caso con 3 números: -

  Yo he elegido tipificar todos los casos posibles. No son tantos casos en este proyecto. Sería el archivo ft_argo_lite.c
(también intenté hacerlo con 4 números, pero he renunciado a la mitad de la ejecución.
Dejaré esta función por algún lado por no haber perdido el tiempo de forma estrepitosa...)
Igualmente, dejo una imagen de todos los movimientos posibles :

  ![image](https://miro.medium.com/v2/resize:fit:1400/format:webp/1*D0U1zQFQnkI4Q_Z0QPi69g.png)

- Caso con 4 y 5 números: -

  Aquí utilizaremos una combinación de algoritmos. Primero, aplicaremos el mismo algoritmo de ordenamiento de selección que en el caso de 3 números para ordenar los primeros 3 números. Luego, moveremos los dos números restantes a la Pila B y aplicaremos el algoritmo de ordenamiento de selección nuevamente para ordenar los 3 números de la Pila A que quedaron. Por último, volveremos a colocar los dos números de la Pila B en la Pila A en orden descendente.

- Caso con más números: -

  Para este caso, yo he elegido usar el algoritmo Radix. (Os dejo un ejemplo que he vuelto a encontrar por internet)
  

  ![LSD](https://github.com/ducksdoor/Push_swap_42/assets/128644496/79cd679d-da68-499c-bad4-377491e70eb8)

Esta foto es del algoritmo con números normales y no con binarios, sin embargo, si se hace ordenando en binario en vez de en números "normales", funcionaría de la misma manera.
En cada pasada se ordenan los números pasando de izquierda a derecha. Es decir, la primera pasada comprueba las unidades, la segunda las decenas, y así consecutivamente.

Si queremos buscar el 100%, la idea es usar un par de algoritmos. Cada algoritmo se usaría para minimizar el número de acciones usadas, dado que hay algoritmos más útiles para cada caso. Como idea, podemos dividir los casos de números infinitos para 100 números y para 500 (que casualmente es lo que pide el enunciado). En mi proyecto, esta selección se hace en la función main, dentro del archivo ft_push_swap.c.


### En segundo lugar vamos a explicar los archivos:

1 -> ft_push_swap.c

  se trata del main de la aplicación
    
2 -> ft_push_swap.h 

  Se trata de un archivo preparado para tipificar todas las funciones del programa. Además, facilita la ejecución de alguna función.
    
3 -> ft_push_swap_utils.c / ft_list_utils.c / ft_list_utils_2.c

  archivo están las funciones útiles para este proyecto de la libft. Podría usar la libft, sí. Pero me dio pereza...
    
4 ->ft_argo_lite.c ft_argo_utils.c

  En este archivo están las funciones necesarias para ordenar todos los casos en los que como mucho te ponen cinco números como argumento.

5 ->ft_argo_middle.c 

  Archivo que ordena de 6 numeros a infinitos numeros. los 

5 -> ft_moves.c
    
  En estos archivos se tipifican los movimientos que irá haciendo el algoritmo del proyecto. Como dato a tener en cuenta, en el código de mi proyecto uso un booleano para definir si se trata de una ejecución de solo un stack como (ra o rb) o de una ejecución de los dos stacks a la vez como (rs). (Es una pena, pero hay que admitir que no he usado rs en ningún momento durante la ejecución de este proyecto). De esta forma, la aplicación es capaz de mostrar en pantalla la opción adecuada.

6 -> ft_showme.c

  Este archivo no se entregó en el proyecto, es la función que me deja comprobar que las cosas están funcionando bien. Lo dejo por aquí por si a alguien le viene bien.

7 -> ft_stack_check.c

  Este archivo se encarga de revisar si todos los argumentos entregados al ejercicio son números. También comprueba que no existan números repetidos, que los números entregados no estén en orden (en caso de que estén en orden, el programa termina inmediatamente) y que los números entregados estén dentro de los números comprendidos como int. En caso de que detecte que algo no está bien, lanzará un mensaje "Error\n" (por la salida de errores) y finalizará el programa.

### En cuarto lugar os dejo los preparativos para nuestro algoritmo: (td)

- Crear un índice para nuestros nodos, de tal forma que el valor que introduzcamos más pequeño tenga el valor 0, mientras que el valor más grande tenga una posición en el índice más alta.

- Entender los Operadores Bitwise (>>, <<, &, |, ^). Como mínimo (>>, &):

El primero (>>) desplaza los bits hacia la derecha; el hueco que se queda libre a la izquierda se rellenaría con un 0.
Es decir, si hacemos "101 >>" quedaría "010". Si tenemos "10110100001 >>", conseguiríamos "01011010000".
El segundo (&) compara dos números como verdadero(1) o falso(0). Podemos decir que es parecido a operar con más y con menos. De tal manera que si tienes verdad y verdad (1 & 1), el resultado será verdad(1). Pero si hay un 0 en cualquiera de las dos comparativas, el resultado será 0 (0 & 0 = 0). Otro ejemplo sería: (1011001 & 0111101 = 0011001).
Para nuestro algoritmo, iremos comparando las posiciones relativas de nuestro número en binario con un "1", que oportunamente, en binario es "01".

- Saber cuantas veces se va a ejecutar el algoritmo, para ello comprobaremos cual es la posión del último 1 dentro de la reprentación binaria del numero más grande de tu lista, por ejemplo, si el número más grande de la lista es el 8 [1000] el último y uno del digito esta en la 4 posión, por tanto, el bucle tendrá que repetirse 4 veces.
  
### En quinto lugar vamos a hablar de Radix: (td)

  Es más facil entender como he implementado este algoritmo si vemos cual es la representación grafica de como son los números traducidos al binario.
  
![tabla-numeros-binarios](https://github.com/ducksdoor/Push_swap_42/assets/128644496/b832a774-b438-4370-b061-2ef15dadfbd8)

  
Nuestro algoritmo consistirá en un bucle que recorrerá cada nodo, encontrando su valor y convirtiéndolo en un número binario.

  Para ello usaremos la siguiente línea:
  if ((aux->inde >> i) & 1)
 Donde aux->inde es un número positivo que, al usar el operador >>, se "convertirá" en su representación binaria. Los bits se desplazarán tantas veces como se indique en la posición &, y luego se usará & para compararlo con un "1", que como mencionamos antes, es equivalente a 00000001.

Esta línea comparará en cada iteración el dígito del número binario que estamos asignando. Enviarémos a la última posición de stack_A (ra) todos los nodos en los que su número binario contenga un 1 en la posición que se está comprobando. Con un else, enviaremos al principio de stack_B (pb) todos los nodos que contengan un cero.

Terminado este ciclo, moveremos todos los nodos de stack_B al inicio de stack_A (pa). El objetivo es que esta ejecución se repita hasta que la lista quede ordenada.

Para poner un ejemplo simple de cómo funciona este algoritmo, en una lista de números desordenados del 1 al 10, moverá al stack_B los números: 0, 2, 4, 6, 8 y 10. En la segunda ejecución, moverá los números 0, 1, 4, 5, 8 y 9 (aunque en la representación binaria, se puedan añadir ceros a la derecha según sea necesario). En la tercera ejecución, moverá los números 0, 1, 2, 3, 8, 9, 10, y así sucesivamente. 
 

### Antes de acabar, vamos a hablar de las correcciones (td)

Puedes probar distintas cosas dentro de los argumentos que introduces en la función:

- Si no metes argumentos , solo metes un argumento o la lista de argumentos ya esta ordenada. La aplicación tendra que terminar sin mandar nada más.
- Tiene que dar mensaje "Error\n" siempre que:
  - Tengas un número repetido.
  - Tengas un caracter distinto a un número dentro de los argumentos.
  - Tengas mas de un simbolo de "-" o de "+" seguidos, o esten sin acompañar por numeros. 
  - tengas cosas raras dentro de los argumentos como 1-1 



### Extra: paginas y comandos utiles:

0   Como localizar leaks: Tendrás que usar la imaginación para saber dónde se está creando el fallo, sin embargo, te dejo aquí la función correspondiente para comprobar si tienes o no fugas de memoria.

void	leaks(void)
{
	system("leaks -q push_swap");
}

Para poder usarlo tendras que poner lo siguiente en la función main, justo después de la iniciación de las variables.

    atexit(leaks);

Recuerda que es importante borrar esa función y línea antes de entregar el proyecto.

1 Esta página es un visualizador de movimientos en línea (no tendrás que descargar nada). Además, te entrega ya los números aleatorios sin repeticiones y separaditos por un espacio; realmente es muy útil.

https://push-swap-visualizer.vercel.app/

Para poder usar esta página, es bueno conocer/usar esta línea de comando: > ~/Desktop/salida
Poniéndolo detrás de los números que le pasas al push swap, creará un archivo con todos los movimientos que ha realizado tu algoritmo.
(En mi caso, ponía el archivo en el escritorio con el nombre de "salida", de esta manera podía localizarlo fácilmente para cargarlo en la página en concreto).

2 Tester creado por otro estudiante de 42:

https://github.com/PepeSegura/push_swap_Tester

simplemente descarga el repositorio. copialo en la carpeta de tu proyecto. Dentro de ella ejecuta el comando make m