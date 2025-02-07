//=====[#include guards - begin]===============================================

#ifndef _SD_CARD_H_
#define _SD_CARD_H_

//=====[Declaration of public defines]=========================================

#define SD_CARD_FILENAME_MAX_LENGTH 32

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

bool sdCardInit();
bool sdCardWriteFile( const char* fileName, const char* writeBuffer );
bool sdCardListFiles( char* fileNamesBuffer, int fileNamesBufferSize );
bool sdCardReadFile( const char* fileName, char * readBuffer, int readBufferSize );


//=====[#include guards - end]=================================================

#endif // _SD_CARD_H_
