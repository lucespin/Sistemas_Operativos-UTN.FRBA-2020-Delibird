#include "conexion.h"

int conexionBroker()
{
	t_config* config = config_create("/home/utnso/workspace/tp-2020-1c-5rona/Game-Boy/Game-Boy.config");
	char* ip_broker = config_get_string_value(config,"IP_BROKER​");
	char* puerto_broker = config_get_string_value(config,"PUERTO_BROKER");
	uint32_t socket = crear_conexion(ip_broker, puerto_broker);
	config_destroy(config);
	return socket;
}

int conexionTeam()
{
	t_config* config = config_create("/home/utnso/workspace/tp-2020-1c-5rona/Game-Boy/Game-Boy.config");
	char* ip_team = config_get_string_value(config,"IP_TEAM");
	char* puerto_team = config_get_string_value(config,"PUERTO_TEAM​");
	config_destroy(config);
	int socket = crear_conexion(ip_team, puerto_team);
	return socket;
}

int conexionGameCard()
{
	t_config* config = config_create("/home/utnso/workspace/tp-2020-1c-5rona/Game-Boy/Game-Boy.config");
	//char* ip_game_card = config_get_string_value(config,"IP_GAMECARD");
	char* ip_game_card = &"127.0.0.3";
	//char* puerto_game_card = config_get_string_value(config,"PUERTO_GAMECARD");
	char* puerto_game_card = &"5001";
	int socket = crear_conexion(ip_game_card, puerto_game_card);
	config_destroy(config);
	return socket;
}
