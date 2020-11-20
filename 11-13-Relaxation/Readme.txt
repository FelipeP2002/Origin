METODO DE RELAGACION

Para una forma de particular de ecuaciones diferenciales conocida como
la ecuacion de la Lapalace y Poisson

            Uxx + Uyy = -4*pi*p(x).

Aproximando mediante expanciones de Taylor, solo en el caos de esta
ecuacion obtenemos la siguiente aproximacion

         pi*p(x)*(dx²)  +  ( Ud + Uu + Ur + Ul )/4 = U
                    //haciendo una particion regular dx=dy numericamente


En palabras liricas, el valor del U es igual al promedio de los valores
de sus vecinitos. En la practica modelamos la particion del dominio
como una matriz que se barre aproximando los valores de U con los
valores vecinos.


NOTACION

-U=valor actual en U(x,y)
-Ux=derivada parcial de U respecto a x
-Uu(up)=U(x,y+dy), Ur(right)=U(x+dx,y)
-Ud(down)=U(x,y-dy), Ul(left)=U(x-dx,y)




