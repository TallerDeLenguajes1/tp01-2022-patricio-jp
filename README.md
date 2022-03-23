# tp12022

## Acerca del archivo **_.gitignore_**
El archivo _.gitignore_ contiene reglas para git que le indica archivos que deben ser ignorados dentro del repositorio. Dichos ficheros no serán añadidos a los commits, por lo tanto no se tendrá un registro del historial de los cambios en estos archivos.

Es conveniente incluirlo para no darle seguimiento a archivos ya compilados, dependencias del proyecto, archivos de registro (logs), etc.

El momento ideal para crear el archivo .gitignore es al iniciar el proyecto, aunque puede ser creado y modificado a lo largo del tiempo que dure el proyecto.

Para configurar el archivo se debe escribir una regla por fila, colocando el nombre del fichero que debe ser excluido y/o patrones de ficheros para ser excluidos.

    ```
    # Para ignorar todos los archivos .exe del proyecto
    *.exe
    
    # Un archivo en particular
    ignorado.txt
    
    # También es posible ignorar dentro de carpetas
    carpeta/ignorado.txt
    ```

## Ejercicio 2 de tp1_1
En los apartados f), g) y h) se obtienen el mismo resultado puesto que un puntero tiene como contenido la dirección de memoria a la cual está apuntando, que es lo mismo que acceder a la dirección de memoria de la variable usando el operador _&_.
