# Juegos-de-los-Pancakes-aplicando-busqueda-en-profundidad-Iterativa
Juego de los pancakes (pancake sorting) aplicando busqueda en profundidad iterativa

Hecho por Marcos Zacarias, ITC-TM, Universidad Autonoma de Baja California Sur

Pequeña explicacion de las funciones:

--"void voltear(string& pancakes, int k)" 
Esta función recibe una cadena de caracteres, en este caso, los pancakes, y un entero k, y voltea los primeros k caracteres de la cadena. Se utiliza para simular la acción de voltear un número determinado de pancakes en una pila.

--"bool esta_ordenada(string pancakes)" 
Esta función recibe una cadena de caracteres pancakes y devuelve true si la cadena está ordenada de forma ascendente, es decir, si cada caracter es mayor o igual al caracter que le precede en la cadena. Se llama para verificar si el parametro que recibe esta ordenado.

--"vector generar_sucesores(string pancakes)" 
Esta función recibe una cadena de caracteres pancakes y devuelve un vector de cadenas de caracteres, son las posibles opciones de voltear distintos numeros de pancakes del arreglo. Se usa para generas sucesores de la cadena actual que recibe y los agrega a la cola de busqueda.

--"string generar_caracteres_aleatorios(int n)" 
Esta función recibe un entero n y devuelve una cadena de caracteres de longitud n, se usa para generar caracteres aleatorios, asi ahorrando estar pidiendo al usuario que se ingrese caracter por caracter.

--"idfs(string pancakes)"
Toma una cadena pancakes, un entero depth que representa la profundidad actual de la búsqueda, y una referencia a un entero count que lleva la cuenta del número de nodos visitados durante la búsqueda. La función primero verifica si pancakes está ordenada; si lo está, devuelve true. Si depth es mayor que la longitud de la cadena pancakes, devuelve false. Si no, genera todos los sucesores de pancakes y realiza una búsqueda en profundidad recursiva para cada sucesor. Si alguno de estos sucesores devuelve true, la función devuelve true. Si ninguno de ellos devuelve true, la función devuelve false.

--"int main()" Esta es la función principal del programa. Pide al usuario que ingrese la longitud de la cadena de pancakes, genera una cadena aleatoria de caracteres que representan los pancakes, e imprime esta cadena. Luego, realiza la búsqueda en profundidad iterativa para esta cadena de pancakes, comenzando con una profundidad de 1 y aumentando hasta la longitud de la cadena de pancakes si no se encuentra una solución. Si se encuentra una solución, imprime la solución y el número de nodos visitados. Si no se encuentra una solución, imprime un mensaje indicando que no se encontró una solución y el número de nodos visitados.

