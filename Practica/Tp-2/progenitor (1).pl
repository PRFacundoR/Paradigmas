padre(xd,abraham).
padre(abraham, herb).
padre(abraham, homer).
padre(clancy, marge).
padre(clancy, patty).
padre(clancy, selma).
padre(homer, bart).
padre(homer, lisa).
padre(homer, maggie).
madre(mona, herb).
madre(mona, homer).
madre(jackie, marge).
madre(jackie, patty).
madre(jackie, selma).
madre(marge, bart).
madre(marge, lisa).
madre(marge, maggie).
madre(selma, ling).



femenino(mona).
femenino(jackie).
femenino(selma).
femenino(patty).
femenino(marge).
femenino(lisa).
femenino(maggie).
femenino(ling).

masculino(abraham).
masculino(clancy).
masculino(herb).
masculino(homer).
masculino(bart).
masculino(xd).


progenitor(X,Y):- padre(X,Y); madre(X,Y).

padreDe(X, Y) :- progenitor(X,Y), masculino(X).%anda

madreDe(X,Y):- progenitor(X,Y), femenino(X).%anda

hijo(X,Y):- progenitor(Y,X), masculino(X).%anda

hija(X,Y):- progenitor(Y,X), femenino(X).%anda

abuelo(X,Y):- (padreDe(Z, Y); madreDe(Z, Y)), padreDe(X, Z), masculino(X).%anda

abuela(X,Y):- (padreDe(Z, Y); madreDe(Z, Y)), madreDe(X, Z), femenino(X).%anda


hermanos(X,Y):- (hijo(X,Z); hija(X,Z)),(hijo(Y,Z); hija(Y,Z)), X\=Y.%anda

primo(X,Y):- (hijo(X,Z); hija(X,Z)), hermanos(Z,W), (padreDe(W,Y); madreDe(W,Y)), masculino(X). %anda

prima(X,Y):- (hijo(X,Z); hija(X,Z)), hermanos(Z,W), (padreDe(W,Y); madreDe(W,Y)), femenino(X).%anda

tio(X,Y):- hermanos(X,Z), (hijo(Y,Z);hija(Y,Z)), masculino(X).%anda

tia(X,Y):- hermanos(X,Z), (hijo(Y,Z);hija(Y,Z)), femenino(X). %anda

bisabueloDe(X,Y):- (hijo(Y,Z);hija(Y,Z)), (abuelo(X,Z); abuela(X,Z)), masculino(X). %luegover



cursa(calculo, juan).
cursa(calculo, pedro).
cursa(calculo, maria).
cursa(algebra, juan).
cursa(algebra, patricia).
cursa(estadistica, lucas).
cursa(elementos, pedro).
cursa(elementos, luisa).
cursa(elementos,ana).

materia(elementos).
materia(algebra).
materia(estadistica).
materia(calculo).

alumno(juan).
alumno(pedro).
alumno(maria).
alumno(patricia).
alumno(lucas).
alumno(luisa).
alumno(ana).

alumnoregular(X):- alumno(X), cursa(Y,X), cursa(Z,X), Y\=Z.

companiero(X,Y):- alumno(X), alumno(Y), cursa(Z,X), cursa(Z,Y).

materias(X,Y):- materia(X), alumno(Y), cursa(X,Y).

alumnonoregular(X):-alumno(X), \+alumnoregular(X).





% Base de Conocimiento ALMACEN DON MANOLO

producto(lacteo, leche).
producto(lacteo, manteca).
producto(lacteo, crema).
producto(lacteo, yogurt).
producto(fiambre, queso).
producto(fiambre, jamonCrudo).
producto(fiambre, jamonCocido).
producto(fiambre, salame).
producto(panaderia, pan).
producto(panaderia, factura).
producto(panaderia, tortilla).
producto(panaderia, galleta).
producto(bebida, agua).
producto(bebida, gaseosa).
producto(bebida, jugo).
producto(bebida, soda).
producto(golosina, chocolate).
producto(golosina, caramelo).
producto(golosina, mantecol).
producto(golosina, bombones).
producto(golosina, nugaton).

precio(leche, 77).
precio(manteca, 62).
precio(crema, 95).
precio(yogurt, 53).
precio(queso, 80).
precio(jamonCrudo, 170).
precio(jamonCocido, 100).
precio(salame, 85).
precio(pan, 80).
precio(factura, 20).
precio(tortilla, 10).
precio(galleta, 75).
precio(agua, 86).
precio(gaseosa, 130).
precio(jugo, 98).
precio(soda, 100).
precio(chocolate, 116).
precio(caramelo, 35).
precio(mantecol, 87).
precio(bombones, 140).
precio(nugaton, 51).


bedidasmayoraxprecio(X,Y):- precio(X,Z), producto(bebida,X), Z>Y.

montoapagar([], 0).

montoapagar([X|Xs], Total) :-precio(X, P),montoapagar(Xs, SumaResto), Total is P + SumaResto.

promosemanal(X,Y,Z):- producto(X1,X),producto(X2,Y), X1\=X2, precio(X,Y1),precio(Y,Y2), (Y1>=100 ; Y2>=100), ((Y1>Y2, Z is Y1 + Y*0.7) ;(Y2>Y1, Z is Y2 +Y1*0.7)).


% numero natural

numeroNDigitos(X):- X < 10, write(X).%escribir
numeroNDigitos(X):- X >= 10, X1 is X // 10, numeroNDigitos(X1), write('-'), Y is X mod 10, write(Y). 

sumaDeSusDigitos(X,Suma):- X < 10, Suma is X.
sumaDeSusDigitos(X,Suma):- X >= 10, X1 is X // 10, Y1 is X mod 10, sumaDeSusDigitos(X1,Suma1),Suma is Suma1 + Y1 .

numeroConDigitosPares(X):- X < 10 , X mod 2=:=0.
numeroConDigitosPares(X):- X >=10, X1 is X // 10, X2 is X mod 10, X2 mod 2=:=0, numeroConDigitosPares(X1).


digitoMayor(X,Y):- X<10, Y is X .
digitoMayor(X,Y):- X > 10, X1 is X // 10, X2 is X mod 10, digitoMayor(X1,Y2), ((Y2 > X2, Y is Y2) ; (Y2 < X2 ,Y is X2)) .  

%crearLista(N,[X]):- N=:=1,X is N.
%crearLista(N,[T|H]):- N > 1, T is N, N1 is N-1, crearLista(N1, H).

crearLista(1, [1]).
crearLista(N, L) :-
    N > 1,
    N1 is N - 1,
    crearLista(N1, L1),
    append(L1, [N], L).


cantidadDeElementosLista([],X):-X is 0.
cantidadDeElementosLista([_],X):-X is 0.
cantidadDeElementosLista([T|H],X):- cantidadDeElementosLista(H,X1), X is X1 + 1.  

ordenDeElementosLista([]):-true. %VACIA
ordenDeElementosLista([_]):-true. %UN SOLO ELEMENTO
ordenDeElementosLista([T,Y|H]):- T < Y ,ordenDeElementosLista([Y|H]) .  

contVecesQueAparece(X,[],N):- N is 0.
%contVecesQueAparece(X,[T],N):- (X=:=T, N is 1);(X\=T, N is 0).
contVecesQueAparece(X,[T|H],N):-contVecesQueAparece(X,H,N1), ((X=:=T, N is N1+1);(X\=T, N is N1+0)).



%=:= son iguales igual que ==
eliminarOcurrencia(X,[],[]).
eliminarOcurrencia(X, [T|H], Resultado) :-T==X,eliminarOcurrencia(X, H, Resultado).
eliminarOcurrencia(X,[T|H],[T|RestoR]):- T\=X,eliminarOcurrencia(X,H,RestoR).


% caso base: lista vacía
cambiarOcurrencia(_, [], [], _).

% cabeza = X → reemplazar por K
cambiarOcurrencia(X, [C|R], [K|Resto], K) :-
    C == X,                       % si la cabeza es X
    cambiarOcurrencia(X, R, Resto, K).

% cabeza ≠ X → conservar
cambiarOcurrencia(X, [C|R], [C|Resto], K) :-
    C \= X,                      % si la cabeza no es X
    cambiarOcurrencia(X, R, Resto, K).