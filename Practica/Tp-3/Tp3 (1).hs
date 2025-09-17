--funciones: 
--and, or, zip, agregar mas y que devuelve y como se usa




-- 1a La funcion misterio1 devuelve los valores de la funcion 3**n

funcionExponencial3 n
 | n == 0 = 1
 | n == 1 = 3
 | otherwise = 9 * funcionExponencial3 (n - 2)

-- 1b La funcion misterio2 devuelve la multiplicacion de los digitos de n
--anda
multiplicarDigitos 0 = 1
multiplicarDigitos n = (mod n 10) * multiplicarDigitos (div n 10)

--2a amda
--productoPorSumasSucesivas :: Int-> Int-> Int
productoPorSumasSucesivas 0 n = 0
productoPorSumasSucesivas n n1 = n1 + productoPorSumasSucesivas (n-1) n1 

--b anda
sumaDigitosPares n
    | n < 0 = 0
    | n < 10 = if (mod n 2)==0 then n else 0 
    |otherwise = if ((mod (mod n 10) 2) == 0 ) then (mod n 10 ) + sumaDigitosPares(div n 10) else sumaDigitosPares(div n 10)  


-- version de guards


--c anda
contarMenores xs 
    | null xs = 0
    | head xs < 10 =  1 + contarMenores (tail xs) 
    | otherwise = contarMenores(tail xs) 



--d anda
eliminarIgualesX xs x
    | null xs = []
    | head xs /= x = [head xs] ++ eliminarIgualesX(tail xs) x
    | otherwise = eliminarIgualesX(tail xs) x






--pattern matching

--c anda
contarMenores1 [] = 0
contarMenores1 (x:xs) = if (x < 10) then 1 + contarMenores1(xs) else contarMenores1(xs)


--d anda
eliminarIgualesX1 [] x1 = []
eliminarIgualesX1 (x:xs) x1 = if  x /= x1 then [x] ++ eliminarIgualesX1 xs x1  else eliminarIgualesX1 xs x1 







-- List Comprehension, crea una nueva lista


--c anda
contarMenores2 xs = length [z| z<- xs, z<10 ]


--d anda
eliminarIgualesX2 xs x = [z| z<- xs, z /= x]







--e anda
diferencia xs1 xs2 = [z| z<-xs1, not (elem z xs2) ]



--f anda
subLista1 xs n 
    | null xs =[]
    | n <= 0  =  [head xs] ++ subLista1 (tail xs) (n-1)
    | otherwise = subLista1 (tail xs) (n-1)
    

--g anda
f x= x+2
transformar _ []=[]
transformar f (x:xs)= f x : transformar f xs

--h anda
tablaDePares n = [z| z<- [0..n], (mod z  2)==0]


--i anda
paresOrdenados z = [(x,y)  |x<- [0..5],y<- [0..5], (mod y  2)==1,(mod x  2)==0, x+y < z]

--j andan todas
p xs
    |xs == 3 = True
    |xs /=3 = False


verificar1 p xs
    | null xs= True 
    | p(head xs) =  verificar1 p (tail xs) 
    | otherwise = False

verificar p []=True
verificar p (x:xs)= if p x then verificar1 p (tail xs)  else False


verificar2 p xs = and [p z| z<- xs]


--k anda todas          
f1 x y= x+y*y

combinarCon :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarCon f1 xs1 xs2= [ f1 x y | (x,y) <- zip xs1 xs2]

combinarCon1 :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarCon1 f1 [] []=[]
combinarCon1 f1 (x1:xs1) (x2:xs2)= [f1 x1 x2] ++ combinarCon1 f1 xs1 xs2


combinarCon2 :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarCon2 f1 xs1 xs2
    | null xs1 || null xs2= []
    | otherwise = [f1 (head xs1) (head xs2) ] ++ combinarCon2 f1 (tail xs1) (tail xs2) 
    




