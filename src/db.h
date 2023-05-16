#ifndef _DB_H_INCLUDED_
#define _DB_H_INCLUDED_ 1

#include <tchar.h>

typedef struct _CONTACTROW
{
	TCHAR *szFirstName;
	TCHAR *szLastName;
	TCHAR *szEmail;
} CONTACTROW, *LPCONTACTROW;

int db_init(void);

#endif  /* !defined(_DB_H_INCLUDED_) */