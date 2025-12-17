*Este proyecto ha sido creado como parte de la trayectoria de school42 por jacinto_abad.*

## ft_Libft

## Descripción

**ft_Libft** es el primer proyecto de la school42 y consiste en la creación de una librería propia en lenguaje C.  
El objetivo principal es comprender el funcionamiento interno de muchas funciones estándar de la libc, escribiendolas desde cero con tu propia logica y construir una base sólida que será reutilizada en proyectos futuros de 42Malaga.

Esta librería contiene funciones para:
- Manipulación de memoria.
- Manejo de cadenas.
- Conversión de tipos.
- Escritura en descriptores de archivo(file descriptor).
- Gestión de listas enlazadas.

El proyecto es para aprender y reforzar conceptos basicos y claves como la gestión de memoria dinámica, punteros, estructuras y buenas prácticas en C.

---

## Instrucciones

### Requisitos
- Sistema Unix / Linux / macOS.
- Compilador 'cc' o 'gcc'.
- 'make'.

### Compilación

##Uso

- incluir la cabecer #include "ft_libft.h"

## Makefile

En este proyecto, para la creación de la librería se ha utilizado Makefile para su compilación, con los siguientes comandos.

make           # Compila la librería
make clean     # Elimina los archivos objeto
make fclean    # Elimina los archivos objeto y la librería
make re        # Recompila todo desde cero

## 📚 Contenido de la Librería ("libft.a")

Este proyecto está dividido en dos partes principales, replicando y añadiendo funcionalidades esenciales para la programación en C y futuros proyectos en 42Malaga.

### Parte 1 – Funciones de Libft ('ft_*')

Reimplementamos funciones estándar de la librería C (libc), todas con el prefijo 'ft_' y manteniendo el mismo prototipo y comportamiento que las originales(siempre con tu logica).

#### Clasificación de Caracteres

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint

#### Cadenas y Memoria

* ft_strlen
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_strlcpy
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_strdup

#### Conversión

* ft_atoi
* ft_itoa

#### Manipulación de Memoria

* ft_memchr
* ft_memcmp
* ft_calloc

#### Cambio de Mayúsculas/Minúsculas
* ft_toupper
* ft_tolower

---

### Parte 2 – Funciones Adicionales

Implementamos funciones que nos vendra bien para futuros proyectos en 42Malaga, que no están incluidas en la librería estándar (libc) que ofrecen una implementación distinta y útil para el desarrollo.

#### Manipulación Avanzada de Cadenas
* ft_substr   # Extrae una subcadena de caracteres.
* ft_strjoin  # Concatena dos cadenas en una nueva.
* ft_strtrim  # Elimina caracteres específicos del inicio y fin de una cadena.
* ft_split    # Divide una cadena en un array de subcadenas usando un delimitador.
* ft_itoa     # Convierte un número entero a su representación en cadena de caracteres.
* ft_strmapi  # Aplica una función a cada carácter de una cadena creando una nueva.
* ft_striteri # Aplica una función a cada carácter de una cadena, permitiendo su modificación *in-place*.

#### Escritura en File Descriptors
* ft_putchar_fd  # Escribe un carácter en un descriptor de archivo.
* ft_putstr_fd   # Escribe una cadena en un descriptor de archivo.
* ft_putendl_fd  # Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
* ft_putnbr_fd   # Escribe un número entero en un descriptor de archivo.

---

### Parte 3 – Listas Enlazadas (Bonus)

Implementamos una estructura de lista enlazada simple (t_list) y funciones esenciales para su manipulación. Esta parte es considerada la sección *bonus* del proyecto.

#### Estructura del Nodo ('t_list')

Se utiliza la siguiente estructura para definir cada nodo de la lista:

typedef struct s_list
{
    void            *content; # Los datos contenidos en el nodo (permite cualquier tipo).
    struct s_list   *next;    # La dirección del siguiente nodo (NULL si es el último).
} t_list

#### Funciones de Manipulación

Estas funciones permiten crear, recorrer, modificar y liberar listas enlazadas de forma segura.

* ft_lstnew  # Crea y devuelve un nuevo nodo con el contenido inicializado.
* ft_lstadd_front  # Añade un nodo al principio de la lista.
* ft_lstsize   # Cuenta y devuelve el número de nodos de la lista.
* ft_lstlast   # Devuelve el último nodo de la lista.
* ft_lstadd_back  # Añade un nodo al final de la lista.
* ft_lstdelone   # Libera la memoria de un nodo y su contenido, sin liberar el siguiente.
* ft_lstclear   # Elimina y libera todos los nodos de la lista a partir del dado, dejando el puntero inicial en 'NULL'.
* ft_lstiter   # Itera la lista y aplica una función a todo el contenido de cada nodo.
* ft_lstmap   # Itera la lista y aplica una función para crear una nueva lista resultante.

## Estado del proyecto

Proyecto finalizado y validado conforme a las normas de 42.  
La librería será ampliada y reutilizada en futuros proyectos del cursus.

---

## Conclusión

Este proyecto ha sido clave para comprender el funcionamiento interno de la libc,
mejorar la gestión de memoria en C y sentar las bases para futuros proyectos más complejos.
Libft será reutilizada y mejorada a lo largo del cursus de 42.
