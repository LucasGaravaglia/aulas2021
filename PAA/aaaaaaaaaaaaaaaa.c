
func(vet,i,n)
  if n == i:
    return vet[n]
  t1 = func(vet,i,n-1)
  t2 = func(vet,i+1,n)
  if t1 > t2
    if t1 > soma(vet,i,n)
      return t1
    else 
      return soma(vet,i,n)
  else
    if t2 > soma(vet,i,n)
        return t2
      else 
        return soma(vet,i,n)
