int digital_root(int n) {
  int i =0;
  if(n<10){
    return n;
  }
  else{
    while(n>0){
      i+=(n%10);
      n/=10;
    }
    return digital_root(i);
  }
}
]\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
int digital_root(int n) {
  return ((n-1)%9)+1;
}