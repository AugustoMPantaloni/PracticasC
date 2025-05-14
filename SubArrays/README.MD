1.   Mostrar todos los subarrays
- Dado este array:
    int arr[] = {3, 5, 7};
- Mostrá todos los subarrays posibles por pantalla, uno por línea, como:
    3
    3 5
    3 5 7
    5
    5 7
    7
- Objetivo: dominar los for anidados y entender que un subarray está entre arr[start] y arr[end].

2.   Mostrar la suma de cada subarray
- Con el mismo array:
    int arr[] = {3, 5, 7};
- Mostrá la suma de cada subarray, como:
    Suma de [3] = 3
    Suma de [3, 5] = 8
    Suma de [3, 5, 7] = 15
    ...
- Objetivo: usar una variable suma para acumular dentro del subarray.

3.   Contar cuántos subarrays hay
- Dado cualquier array, contá cuántos subarrays posibles tiene.
- Pista: si el array tiene n elementos, ¿cuántos pares (start, end) posibles hay con start <= end?
- Objetivo: recorrer los subarrays pero sin imprimirlos, solo contar cuántos son.

4.   Mostrar solo los subarrays cuya suma es mayor a 10
- Con este array:
    int arr[] = {2, 4, 6, 8};
- Mostrá solo los subarrays cuya suma total sea mayor que 10, como:
    6 8
    4 6 8
    2 4 6 8
    ...
- Objetivo: aplicar lógica condicional (if) dentro del recorrido.





int arr[] = {3, 5, 7};

1era iteracion
    start = 0
    end = start (0)
    print = start (0)  

    Se imprime arr[0] = 3
    print ++
    print = 1
    print <= end no se cumple porque end 0, print 1.
    end ++
    end = 1

2 iteracion
    start = 0;
    end = 1; (no se reinicia porque end se va a seguir incremente hasta que se rompa la condicion end < n)
    print = 0; (Se reinicia porque se rompio la condicion print <= end)

    se imprime arr[0] = 3
    print ++
    print <= end se cumple porque end 1, print 1.
    print ++ 
    se imprime arr[1] = 5
    print ++
    print <= end no se cumple porque end 1, print 2
    end ++



