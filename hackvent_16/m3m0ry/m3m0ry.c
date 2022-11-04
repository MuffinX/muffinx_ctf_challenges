#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char wannabe_cookie[] = "***ing_elv_was_too_late";

void sys_gadget() {
    // gadget to jump to
    volatile int ret_sys = system("/bin/sh");
}

typedef struct {
  char x;
  char y;
  char z;
  char w;
} vec_4d;

void connect_4d_vec(volatile vec_4d *vec1, volatile vec_4d *vec2, volatile vec_4d *conn_vec) {
  conn_vec->x = vec2->x - vec1->x;
  conn_vec->y = vec2->y - vec1->y;
  conn_vec->z = vec2->z - vec1->z;
  conn_vec->w = vec2->w - vec1->w;

  if(strcmp(wannabe_cookie, "***ing_elv_was_too_late") != 0) {
    printf("nope!");
    exit(0);
  }
}

void bytes_to_hex(volatile char *byte_buf, volatile char *hex_buf, int bytes_num) {

  volatile int byte_buf_i = 0;

  for(byte_buf_i = 0; byte_buf_i < bytes_num; byte_buf_i++) {

    // 1 byte char to 2 hex chars
    volatile char *curr_byte = byte_buf+byte_buf_i;
    volatile int hex_chrs_i = 0;

    for(hex_chrs_i = (byte_buf_i*2); hex_chrs_i < ((byte_buf_i*2)+2); hex_chrs_i++) {

      volatile char *curr_hex = hex_buf+hex_chrs_i;

      if(hex_chrs_i % 2 == 0) {
        *curr_hex = (*curr_byte >> 4);
      }
      else {
        *curr_hex = (*curr_byte & 0x0F);
      }

      *curr_hex += ((*curr_hex > 9) * 0x08) + 0x30;
    }
  }

  if(strcmp(wannabe_cookie, "***ing_elv_was_too_late") != 0) {
    printf("nope!");
    exit(0);
  }
}


void hex_to_bytes(volatile char *hex_buf, volatile char *byte_buf, int bytes_num) {

  volatile int byte_buf_i = 0;

  for(byte_buf_i = 0; byte_buf_i < bytes_num; byte_buf_i++) {

    // 2 hex chars to 1 byte char
    volatile char *curr_byte = byte_buf+byte_buf_i;
    *curr_byte = 0;

    volatile int hex_chrs_i = 0;

    for(hex_chrs_i = (byte_buf_i*2); hex_chrs_i < ((byte_buf_i*2)+2); hex_chrs_i++) {

      volatile char *curr_hex = hex_buf+hex_chrs_i;
      volatile char temp_char[] = "";

      *temp_char = *curr_hex;

      *temp_char -= ((*curr_hex > 0x40) * 0x08) + 0x30;

      if(hex_chrs_i % 2 == 0 ) {
        *temp_char =  (*temp_char << 4);
      }

      *curr_byte += *temp_char;
    }
  }

  if(strcmp(wannabe_cookie, "***ing_elv_was_too_late") != 0) {
    printf("nope!");
    exit(0);
  }
}



void main() {

  printf("\n");
  printf("          << M3M0RY >>\n");
  printf("               ' \n");
  printf("              /=\\\\ \n");
  printf("             /===\\ \\ \n");
  printf("            /=====\\' \\ \n");
  printf("           /=======\\'' \\ \n");
  printf("          /=========\\ ' '\\ \n");
  printf("         /===========\\''   \\ \n");
  printf("        /=============\\ ' '  \\ \n");
  printf("       /===============\\   ''  \\ \n");
  printf("      /=================\\' ' ' ' \\ \n");
  printf("     /===================\\' ' '  ' \\ \n");
  printf("    /=====================\\' '   ' ' \\ \n");
  printf("   /=======================\\  '  '  / \n");
  printf("  /=========================\\   ' / \n");
  printf(" /===========================\\'  / \n");
  printf("/=============================\\/ \n");
  printf("\n       - by MuffinX - \n");
  printf("\n");
  printf("“Searching means having a goal, but finding means being free, being open, having no goal ...\nbecause in striving for your goal there are many things you do not see, which are directly in front of your eyes.”\n― Hermann Hesse, Siddhartha\n\n");
  printf("Welcome to the gift machine!\n");


  volatile vec_4d vec_space[5];

  volatile int number_of_gifts = 0;

  volatile int vec_i;
  for(vec_i = 0; vec_i < 10; vec_i++) {
    volatile vec_4d *curr_vec = &vec_space[vec_i];
    curr_vec->x = 0;
    curr_vec->y = 0;
    curr_vec->z = 0;
    curr_vec->w = 0;
  }

  printf("Give me some 4D hex vectors, so I can create your gifts.\n");
  char hex_input[1024];
  int scanf_result = scanf("%s", hex_input);


  number_of_gifts = ((strlen(hex_input) / 2) / 8);
  hex_to_bytes((char*)hex_input, (char*)vec_space, (strlen(hex_input) /2));

  volatile vec_4d conn_vec_space[5];
  char hex_output[1024];

  int vector_index;

  for(vector_index = 0; vector_index < number_of_gifts; vector_index += 2) {

    volatile vec_4d *vec1_p = &vec_space[vector_index];
    volatile vec_4d *vec2_p = &vec_space[vector_index+1];
    volatile vec_4d *conn_vec_p = &conn_vec_space[vector_index / 2];

    connect_4d_vec(vec1_p, vec2_p, conn_vec_p);
  }

  bytes_to_hex((char*)conn_vec_space, (char*)hex_output, (number_of_gifts * 4));

  printf("Here are your gifts (4d connection vectors): ");
  printf(hex_output);

  if(strcmp(wannabe_cookie, "***ing_elv_was_too_late") != 0) {
    printf("nope!");
    exit(0);
  }
}
