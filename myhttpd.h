
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <syslog.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <fcntl.h>
#include <netdb.h>
#include <dirent.h>
#include <time.h>

#include <sys/stat.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>

#define _GNU_SOURCE
#include <getopt.h>

#define SERVER_NAME "myhttpd/1.0.0"
#define VERSION "1.0.0"

#define BUFFER_SIZE             8192
#define REQUEST_MAX_SIZE        10240

#define IS_DEBUG                0
#define IS_DAEMON               0
#define IS_BROWSER              0
#define IS_LOG                  0
#define DEFAULT_HTTP_PORT       80
#define DEFAULT_MAX_CLIENT      100
#define DEFAULT_DOCUMENT_ROOT   "./"
#define DEFAULT_DIRECTORY_INDEX "index.html"
#define DEFAULT_LOG_PATH        "/tmp/tmhttpd.log"

struct st_request_info {
    char *method;
    char *pathinfo;
    char *query;
    char *protocal;
    char *path;
    char *file;
    char *physical_path;
};
