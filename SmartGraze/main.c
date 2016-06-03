#include<stdlib.h>
#include<pthread.h>
#include<sys/socket.h>
#include<sys/types.h>       //pthread_t , pthread_attr_t and so on.
#include<stdio.h>
#include<netinet/in.h>      //structure sockaddr_in
#include<arpa/inet.h>       //Func : htonl; htons; ntohl; ntohs
#include<assert.h>          //Func :assert
#include<string.h>          //Func :memset
#include<unistd.h>          //Func :close,write,read
#include <mongoc.h>
#include "util.h"
#include "re_thread.h"
#include "alarm_thread.h"
#include "query_thread.h"
#include "queue.h"
static pthread_t tid_ping = 0; 
static pthread_t tid_alarm = 0; 
static pthread_t tid_query = 0; 
mongoc_client_t *mgclient;
queue_t g_qalarm;
int main(){
  //start(); 
  /* Start heartbeat thread */
  printf("strlen %d\n",strlen("中国人"));
  mongoc_init();
  initQueue(&g_qalarm); 
  mgclient = mongoc_client_new ("mongodb://172.16.0.7:27017/");
  int result;
  printf("222\n");
  result = pthread_create(&tid_ping, NULL, (void *)thread_re, NULL);
  if (result != 0) {
     printf("error");
  }
  //pthread_detach(tid_ping);  
  pthread_join(tid_ping,NULL); 
  /*result = pthread_create(&tid_alarm, NULL, (void *)thread_alarm, NULL);
  if (result != 0) {
     printf("error");
  }
  pthread_detach(tid_alarm);  
  result = pthread_create(&tid_query, NULL, (void *)thread_query, NULL);
  if (result != 0) {
     printf("error");
  }
  printf("d%\n",tid_query);
  pthread_join(tid_query,NULL);  */
	//pthread_detach(tid_ping);
  mongoc_client_destroy (mgclient);
  mongoc_cleanup ();
  return 0;
}

