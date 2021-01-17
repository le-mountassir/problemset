int digital_root(int n) {
  int i =0;
  if(n==0){
    return 0;
  }
  else if(n>0 && n<10){
    return n;
  }
  else if(n>=10){
    while(n>0){
      i+=(n%10);
      n/=10;
    }
    return digital_root(i);
  }
}