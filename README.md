
# Push_swap_42 (README EN CONSTRUCCIÓN 35%)

### Recomendaciones generales:

- No se te ocurra intentar sacar todos los casos posibles para cuatro numeros distintos...
en serio... es un perdida de tiempo.

- Cuando hagas la función que recoloca tres numeros no lo gestiones usando int.
Para el futuro es mejor que lo gestiones todo usando listas. te lo agradeceras.
De la misma manera, para comprobar que el numero que te dan esta entre el int max y el int min,
puedes tratarlos como long, de esta forma, asi, si el input que te dan esta fuera de los limites,
podras comprobarlo.

- Cuanto antes crees una función que te muestre todos los nodos de la lista, antes podras 
comprobar que todo esta bien.

- Existen varios algoritmos "De moda" para este proyecto: Radix y Chunks. (Yo usé Radix)

- Antes de crear los movimientos es recomendable saber que algoritmo vas a usar.
De esta forma evitar crear funciones para movimientos que luego no necesites y te des cuenta
de que has trabajado para nada. Igualmente, todo lo que programes te da experiencia para un futuro.
No te agobies! Nunca el tiempo es perdido, solo un recodo mas, de nuestra ilusión... O eso decia la canción...

- Cuando gestiones los movimientos. Intenta que todos reciban las listas de la misma forma, 
No es que sea absolutamente necesario, pero cuanto menos problemas y trampas te pongas a ti mismo/a,
mejor.


### En primer lugar vamos a explicar los movimientos:

sa (swap A): Cambia la posición del primer numero del stack A por el segundo numero.

sb (swap B): Cambia la posición del primer numero del stack B por el segundo numero.

ss : sa y sb a la vez.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/0a2325d4-a5c5-406a-a303-714c929a5d18)

ra (reverse A): Pone el primer numero del stack A en la última posición.

rb (reverse B): Pone el primer numero del stack B en la última posición.

rr : ra y rb a la vez.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/79ad55b6-9673-4621-a308-50539fd70736)

rra (reverse reverse A) : Pone el último numero del stack A en la primera posición.

rrb (reverse reverse A) : Pone el último numero del stack A en la primera posición.

rrr : rra y rrb al mismo tiempo. 

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/8fc35ae1-c7fc-4abc-876b-3f1ca1726026)

pa : Pone la primera posción del stack B en el stack A.

pb : Pone la primera posción del stack A en el stack B.

![image](https://github.com/ducksdoor/Push_swap_42/assets/128644496/be071589-20b4-45d6-a281-7abd81d46fc6)


### En segundo lugar vamos a hablar de la estrategia elegida: 

Hay 4 casos principales que quiero cubrir: 
los casos con 3, 5, 100 y 500 números. 
(Si buscas el 100% la diferencia entre 100 y 500 puede ser significativa. en mi caso. ha sido indiferente)

- Caso con 3 números: -

  Yo he elegido tipificar todos los casos posibles, no son tantos casos. en este proyecto, seria el archivo ft_foo.c 
  (tambien intente hacerlo con 4 números... pero he renunciado a la mitad de la ejecución.
  Dejare esta función por algún lado por no haber perdido el tiempo de forma estrepitosa...)

- Caso con 4 y 5 números: -

  Aquí utilizaremos una combinación de algoritmos. Primero, aplicaremos el mismo algoritmo de ordenamiento de selección que en el caso de 3 números para ordenar los primeros 3 números. Luego, moveremos los dos números restantes a la Pila B y aplicaremos el algoritmo de ordenamiento de selección nuevamente para ordenar los 3 números de la Pila A que quedaron. Por último, volveremos a colocar los dos números de la Pila B en la Pila A en orden descendente.

- Caso con más números: -

  Para este caso. Yo he elegido usar el algoritmo Radix.


Cada algoritmo se optimiza para minimizar el número de acciones requeridas y asegurar que no excedamos el límite.
Dependiendo de la cantidad de algoritmos, seleccionamos el algoritmo adecuado para lograr la eficiencia deseada en la clasificación.
En mi proyecto, esta selección se hace en la función main, dentro del archivo ft_push_swap.c


### En segundo lugar vamos a explicar los archivos:

1 -> ft_push_swap.c

    se trata del main de la aplicación
    
2 -> ft_push_swap.h 

    Se trata de un archivo preparado para tipificar todas las funciones del programa.
    Ademas, facilita la ejecución de alguna función
    
3 -> ft_push_swap_utils.c / ft_list_utils.c / ft_list_utils_2.c

    En este archivo están las funciones útiles para este proyecto de la libft.
    Podria usar la libft. si. Pero me dio pereza...
    

4 ->ft_argo_lite.c ft_argo_lite_utils.c

    En este archivo están las funciones necesarias para ordenador todos los casos en los que 
    como mucho te ponen cinco numeros como argumento.

5 ->ft_argo_middle.c ft_argo_middle_utils.c
    Archivo que ordena de 6 numeros a infinitos numeros.

5 -> ft_moves_swap.c / ft_moves_down.c / ft_moves_up.c / ft_moves_change.c 
    En estos archivos se tipifican los movimientos que ira haciendo el argoritmo del proyecto.
    Como dato a tener en cuenta, en el código de mi proyecto uso un booleano para definir 
    como se ha entrado en las funciones, y por tanto, definir que es lo que se trendra que printear.

6 -> ft_showme.c

    Este archivo no se entrego en el proyecto, es la función que me deja comprobar que las cosas están funcionando bien.

7 -> ft_check.c

    Este archivo se encarga de revisar si todos los argumentos entregados al ejercicio son números.
    tambien comprueba que no existan números repetidos.
    Por último, comprueba que los numeros entregados esten dentro de los límites permitidos.

    En caso contrario lanzara un error.

### Extra: paginas y comandos utiles:

0   Como localizar leaks: Tendras que ponerte imaginativo para saber donde se esta creando el fallo, sin embargo, te dejo aqui la función correspondiente para comprobar
si tienes o no fugas de memoria.

void	leaks(void)
{
	system("leaks -q push_swap");
}

Para poder usarlo tendras que poner lo siguiente en la función main, justo despues de la iniciación de las variables.

    atexit(leaks);

Recuerda que es importante borrar esa función y linea antes de entregar el proyecto.

1   Esta pagina es un visualizador de movimientos en linea (no tendras que descargar nada).
Ademas te entrega ya los numeros aleatorios sin repeticiones y separaditos por un espacio realmente es muy util.

https://push-swap-visualizer.vercel.app/

Para poder usar esta pagina es bueno conocer/usar esta linea de comando  " > ~/Desktop/salida " 
Poniendolo detras de los numeros que le pasas al push swap, creara un archivo con todos los movimientos que ha realizado tu algoritmo. 
(En mi caso, ponia el archivo en el escritorio con el nombre de salida, de esta manera podia localizarlo facil para cargarlo en la pagina en concreto)