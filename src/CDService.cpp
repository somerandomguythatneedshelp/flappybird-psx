#include "CDService.h"
#define SECTOR 2048

int CDService::didInitDs = 0;

void CDService::open() {
//	if(!CDService::didInitDs) {
//		CDService::didInitDs = 1;
//		DsInit();
//	}
}

void CDService::close() {
//	if(CDService::didInitDs) {
//		CDService::didInitDs = 0;
//		DsClose();
//	}
}

void CDService::read(unsigned char* file_path, u_long** file) {
//	unsigned char* file_path_raw;
//	int* sectors_size;
//	DslFILE* temp_file_info;
//	sectors_size = malloc3(sizeof(int));
//	temp_file_info = malloc3(sizeof(DslFILE));
//
//	// Exit if libDs isn't initialized
//	if(!didInitDs) {
//		printf("LIBDS not initialized, run cdOpen() first\n");
//		return;
//	}
//
//	// Get raw file path
//	file_path_raw = malloc3(4 + strlen(file_path));
//	strcpy(file_path_raw, "\\");
//	strcat(file_path_raw, file_path);
//	strcat(file_path_raw, ";1");
//	printf("Loading file from CD: %s\n", file_path_raw);
//
//	// Search for file on disc
//	DsSearchFile(temp_file_info, file_path_raw);
//
//	// Read the file if it was found
//	if(temp_file_info->size > 0) {
//		printf("...file found\n");
//		printf("...file size: %lu\n", temp_file_info->size);
//		*sectors_size = temp_file_info->size + (SECTOR % temp_file_info->size);
//		printf("...file buffer size needed: %d\n", *sectors_size);
//		printf("...sectors needed: %d\n", (*sectors_size + SECTOR - 1) / SECTOR);
//		*file = malloc3(*sectors_size + SECTOR);
//
//		DsRead(&temp_file_info->pos, (*sectors_size + SECTOR - 1) / SECTOR, *file, DslModeSpeed);
//		while(DsReadSync(NULL));
//		printf("...file loaded!\n");
//	} else {
//		printf("...file not found");
//	}
//
//	// Clean up
//	free3(file_path_raw);
//	free3(sectors_size);
//	free3(temp_file_info);
}