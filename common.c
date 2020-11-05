int strlen2(char *s) {
  char *d = s;
  while(*(s++) != '\0');
  return s-d-1;
}

/* longueur d'un nombre */
int ilen(int i){
  int n = 1;
  while ((i/=10)!=0)
    n++;
  return n;
}

char *strcpy2(char *s, char *d){
  do {
    *(d++) = *s;
  } while (*(s++) != '\0');
}

char *memset2(char *str, int c, int n){
  int i = 0;
  for (i; i<=n; i++){
    str[i] = c;
  }
  return str;
}

char *nonoalnum(char *s) {
  char *d = s;
  do {
    if (!((*s > 'a' && *s < 'z') ||
	  (*s > 'A' && *s < 'Z')))
      *s = ' ';
  } while (*(++s)!='\0');
  return d;
}

char *codage3(char *s){
  const int s2len = strlen2(s);
  const int s2size = sizeof(char)*(s2len+1);
  const int tsize = 2*s2size;
  int i = 0, j = 0;
  char *t = malloc(tsize), *d = t;
  char *s2 = malloc(s2size), *s2d = s2;
  strcpy2(s,s2);
  codage1(s2);
  for (i=0; i<=s2size-1; i++){
     t[j]=s[i];
     t[j+1]=s2[i];
     j+=2;
  }
  t[j+1]='\0';
  free(s2d);
  return d;
}


char *codage2(char *s) {
  const int tsize = sizeof(char)*ilen(CHAR_MAX)*strlen2(s)+1;
  char *t = malloc(tsize), *d = t;
  memset2(t,'\0',tsize);
  do {
    sprintf(t, "%d", *s);
    t+=strlen2(t);
  } while (*(++s) != '\0');
  return d;
}

/* rot 5 */
char *codage1(char *s) {
  char *d = s;
  do {
    *s += 5;
  } while(*(++s)!='\0');
  return d;
}
