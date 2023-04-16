/* getline = ssize_t getline(char **restrict lineptr, size_t *restrict n, FILE
 * *restrict stream); */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t _getline(char **restrict lineptr, size_t *restrict n,
                 FILE *restrict stream) {
  /* docs if pointer was orginally null, we allocate memory */
  char *buffer = (char *)malloc(*n);
  memset(buffer, '\0', sizeof *buffer);
  if (*lineptr == NULL) {
    *lineptr = malloc(*n);
  }
  *buffer = '\0';
  **lineptr = '\0';
  assert(n != NULL && stream != NULL && n != 0 && buffer != NULL &&
         *lineptr != NULL);
  int c = 0, i = 0;
  while ((c = fgetc(stream)) != '\n') {
    if (c != EOF && i < *n) {
      buffer[i++] = c;
    } else {
      // keep haveing fucking issues with the heap and stack
      char *temp = buffer;
      /*      buffer = (char *)realloc(buffer, *n * 2);
       *n = *n * 2; */
      buffer = calloc(*n * 2, 1);
      assert(buffer != NULL);
      memset(buffer, '\0', sizeof *buffer);
      memcpy(buffer, temp, sizeof *temp);
      free(temp);
      buffer[i] = c;
    }
  }
  buffer[i] = '\0'; // maybe i was missing this?
  if (sizeof *lineptr < sizeof buffer)
    *lineptr = realloc(*lineptr, *n);

  assert(strncpy(*lineptr, buffer, *n) != NULL);
  free(buffer);
  return 0;
}

int main() {
  // getline is just too overdo
  char *foo = NULL;
  char *newfoo = malloc(12);
  size_t len = 12;
  printf("enter a line: ");
  _getline(&foo, &len, stdin);
  printf("Enter another line: ");
  _getline(&newfoo, &len, stdin);
  getline(&newfoo, &len, stderr);
  printf("your foo %s \n newfoo is is %s\n", foo, newfoo);
  free(newfoo);
  exit(0);
}
