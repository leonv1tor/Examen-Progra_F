# Examen-Progra_F
1.                                 EL PROBLEMA

En nuestra empresa, se nos ha solicitado desarrollar un modelo de base de datos simple para gestionar eventos asociados a fechas específicas. El objetivo principal es crear un sistema que permita agregar, eliminar, buscar e imprimir eventos de manera eficiente. Este proyecto responde a la necesidad de tener una herramienta interna que optimice la organización de eventos sin depender de soluciones externas que podrían no ajustarse completamente a nuestras necesidades específicas.


2.                                 EXPLICACIÓN DE BASES DE DATOS EXISTENTES Y JUSTIFICACIÓN DEL NUEVO DESARROLLO

Comparativa de Bases de Datos Existentes
Para justificar la implementación de una nueva base de datos, es necesario primero revisar las opciones disponibles en el mercado y compararlas en términos de funcionalidad, rendimiento y adecuación a nuestras necesidades específicas.
Bases de Datos Relacionales

1.	MySQL:
        Ventajas: Amplio soporte, alto rendimiento en lectura, buena integración con diversas plataformas.
        Desventajas: Puede ser excesivo para aplicaciones pequeñas, requiere configuración compleja.

2.	PostgreSQL:
        Ventajas: Soporte avanzado para tipos de datos complejos, robustez y confiabilidad.
        Desventajas: Similar a MySQL, puede ser excesivo para tareas simples.
        Bases de Datos NoSQL

1.	MongoDB:
        Ventajas: Flexibilidad en el esquema, alto rendimiento en escritura.
        Desventajas: Menos eficiente en consultas complejas que las bases de datos relacionales.

2.	Redis:
        Ventajas: Extremadamente rápido para operaciones de lectura y escritura.
        Desventajas: No está diseñado para almacenamiento a largo plazo, más adecuado para almacenamiento en caché.

Justificación del Nuevo Desarrollo

Después de analizar las bases de datos existentes, concluimos que ninguna de ellas se adapta perfectamente a nuestra necesidad de una base de datos simple y eficiente para manejar pares de fecha-evento con un formato específico y requerimientos de operación definidos. Implementar una solución propia en C++ nos permitirá:

            Mantener un control total sobre el diseño y funcionamiento de la base de datos.
            Optimizar la solución para las operaciones específicas que necesitamos.
            Evitar la sobrecarga de funcionalidad innecesaria que presentan las soluciones comerciales.


3.                                 ESTRUCTURA DEL REPOSITORIO

//FALTA ACLARAR ESTRUCTURACION DEL REPOSTORIO 


4.                                 DESCRIPCION DE LAS FUNCIONES Y ESTRUCTURAS

Estructura de Datos
La base de datos está implementada utilizando un mapa (std::map) donde la clave es la fecha (string) y el valor es un conjunto de eventos (std::set).

Funciones Principales:

1.	Agregar evento (Add Fecha Evento):
        Descripción: Añade un evento a una fecha específica. Si el evento ya existe para esa fecha, no lo añade de nuevo.
        Prototipo: void AddEvent(const std::string& date, const std::string& event);

2.	Eliminar evento (Del Fecha Evento):
        Descripción: Elimina un evento específico de una fecha. Informa si el evento fue eliminado o no encontrado.
        Prototipo: void DeleteEvent(const std::string& date, const std::string& event);
3.	Eliminar todos los eventos de una fecha específica (Del Fecha):

        Descripción: Elimina todos los eventos asociados a una fecha dada.
        Prototipo: void DeleteDate(const std::string& date);

4.	Buscar eventos en una fecha específica (Find Fecha):
        Descripción: Encuentra e imprime todos los eventos de una fecha específica.
        Prototipo: void FindEvents(const std::string& date);

5.	Imprimir todos los eventos de todas las fechas (Print):
        Descripción: Imprime todos los eventos almacenados, ordenados por fecha y luego por evento.
        Prototipo: void PrintAllEvents();

Manejo de Errores
•	Formato de Fecha Incorrecto: void CheckDateFormat(const std::string& date);
•	Mes Inválido: void CheckMonthValidity(int month);
•	Día Inválido: void CheckDayValidity(int day);


5.                                 DIAGRAMA DE FLUJO O PSEUDOCODIGO 

            Sección en construcción.
            Explicación del Diagrama
            Explicación pendiente.
6.                                 CREDITOS

Leonel Joe Jaldin Gutierrez (LEONCITHOR)


7.                                 HERRAMIENTAS UTILIZADAS

    Lenguaje de Programación: C++
    Compilador: g++
    Editor de Código: Visual Studio Code
    Sistema de Control de Versiones: Git
    Generación de Diagramas: draw.io
    Pruebas Unitarias: Google Test
    Documentación: Markdown
    Asistencia Técnica: ChatGPT (OpenAI)
