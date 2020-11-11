
DINAMICA MOLECULAR(rama del discret element metod)
Son metodos computacionales utiles para modelar sistemas fisicos que
seinterpretan,en la teoria, como particulas bajo leyes clasicas. Hay paquetes
de software LAMMPS-Openspurce, gratis y de codigo editable; GROMMACS.

-DISCRET ELEMEENT METOD: se remifica en si las particulas son rigidas o suaves.

RIGIDAS
    las diferencia escencial esta en que en la simulacion de una colision, las
    colisiones son mas fugaces, casi instantaneas en las particulas rigidas. Las
    rigidas son simulaciones eficientes porque se concetra en las leyes de
    conservacion para la evoluvion del sistema.
    (coeficiente de retirucion, indeterminacion de coulomb)

SOLF
    estas modelas pariculas en las que el tiempo de contacto entre particulas
    es mas duradero. Por eso se deben calcular las interacciones entre las
    particulas. Por son mas lentas y son mas detalladas.


PROCESO:
1-condiciones iniciales
2- Se calculan los contactos
3-Se calculan las fuerzas
4-Ecuaciones de movimiento
5-Cambio del sistema(t+dt)
6-Print(bis)

ALGORITMOS
-Verlet
-Euler
-Leap-Frog
-Velocidad-Velvet
-Predictor-Corrector
-algritmos de rotacion-Angulos de euler y Cuaternarios

