#ifndef SRC_GAME_BOY_H_
#define SRC_GAME_BOY_H_

#include<stdio.h>
#include<commons/string.h>
#include<commons/log.h>
#include <fcntl.h>
#include<readline/readline.h>
#include <sys/stat.h>
#include <semaphore.h>
#include "../../OurLibraries/Sockets/sockets.c"
#include "../../OurLibraries/Sockets/mensajes.c"
#include "/home/utnso/workspace/tp-2020-1c-5rona/OurLibraries/UniversoPokemon/universo.c"
#include "/home/utnso/workspace/tp-2020-1c-5rona/Game-Boy/src/conexion.h"
//#include "/home/utnso/workspace/tp-2020-1c-5rona/Game-Boy/src/mensajes.h"

void validar_Argc(t_log* logger, int32_t arg);
void finalizar(t_log* logger, t_config* config, int32_t socket);

int32_t existe (char* nombre_pokemon);

#endif
