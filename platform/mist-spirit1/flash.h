/*
 * Copyright (c) 2013, Thingsquare, www.thingsquare.com.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COMPANY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COMPANY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef __FLASH_H__
#define __FLASH_H__
/*---------------------------------------------------------------------------*/
#define FLASH_START           ((uint32_t)0x08000000ul)
#define FLASH_SIZE            ((uint32_t)0x00020000ul)
#define FLASH_END             (FLASH_START + FLASH_SIZE)
#define FLASH_PAGE_SIZE       ((uint32_t)256ul)
#define FLASH_MIN_WRITE       ((uint32_t)2ul)
#define FLASH_MIN_ERASE       FLASH_PAGE_SIZE
/*---------------------------------------------------------------------------*/

/* erase a page in flash based on an address anywhere in that page */
void flash_clear(unsigned long addr);

/* write a 16-bit word to flash. */
void flash_write(unsigned long addr, uint16_t data);

/* read a 16-bit word from flash */
uint16_t flash_read(unsigned long addr);

/* empty legacy API function */
void flash_setup(void);

/* empty legacy API function */
void flash_done(void);

/*---------------------------------------------------------------------------*/
#endif /* __FLASH_H__ */
