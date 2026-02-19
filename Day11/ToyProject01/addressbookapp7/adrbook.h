#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


#define MAX_CONTRACTS 100
#define INIT_CAPACITY 5
#define NAME_LEN 31
#define PHONE_LEN 21
#define EMAIL_LEN 65
#define ADDR_LEN 129
#define MEMO_LEN 129



typedef struct _contact {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char email[EMAIL_LEN];
	char address[ADDR_LEN];
	char memo[MEMO_LEN];
} Contact;

void read_line(char* buf, int size);
void add_contact();
void print_menu();
int read_menu();
void list_contacts();
void serch_name();
void update();
void del();
void save();
void load();
int contains_space(const char*);
int find_by_phone(const char*);
void sort_name();
int ab_init();
void ab_free();
int ab_ensure_capacity(int need);
