template <class P>
P valorAbsolutoDeUnNumero(P numero);

template <class P>
P valorAbsolutoDeUnNumero(P numero){
return (numero < 0)? -numero : numero;
}