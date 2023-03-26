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
La función idfs realiza una búsqueda en profundidad iterativa sobre las posibles opciones de ordenamientos de pancakes. Esta función recibe un string pancakes como argumento. Primero se inicia la búsqueda con una profundidad máxima de 1 (es decir, se revisa el arreglo original). Si no se encuentra una solución, se aumenta la profundidad máxima en 1 y se vuelve a buscar. Este proceso se repite hasta que se encuentra una solución o se han revisado todas las posibles combinaciones. En cada iteración de la búsqueda, se utiliza una pila y un conjunto de visitados para realizar la exploración. La función utiliza la función esta_ordenada para verificar si se ha encontrado una solución y la función generar_sucesores para generar los sucesores de las posibles opciones.

--"int main()" Esta es la función principal del programa. Solicita al usuario el número de caracteres de la pila de pancakes, genera una configuración aleatoria de pancakes utilizando la función generar_caracteres_aleatorios y llama a la función idfs para llevar a cabo la búsqueda por amplitud.

