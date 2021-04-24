#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc == 3)
  {
    // проверка на поданный сигнал, если сигнал равен SIGUSR1 или SIGUSR2, то отправляем
    if ((strcmp(argv[2], "SIGUSR1") == 0) || (strcmp(argv[2], "SIGUSR2") == 0))
    {
      // получаем pid
      int pid = atoi(argv[1]);
      int sig;
      // определяем код сигнала
      if ((strcmp(argv[2], "SIGUSR1") == 0))
      {
        sig = 10;
      }
      else
      {
        sig = 12;
      }
      // отправляем сигнал
      kill(pid, sig);
      printf("Signal sended.\n");
    }
    // иначе ошибка
    else
    {
      printf("Argumets error.\n");
    }
  }
  // если аргументов больше 3
  else if (argc > 3)
  {
    printf("Too many arguments supplied.\n");
  }
  // если аргументов меньше 3
  else
  {
    printf("Argumets error.\n");
  }
}
