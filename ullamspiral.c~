/*
 * ullamspiral.c
 * 
 * Copyright 2014 Ananth Narayan <ananthnarayan@ubuntu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include<stdio.h>
#define max 5
int a[6][6];
void func( int r, int c, int offset,int size)
{	int i,j;
	if(size==1)
	{	a[r][c]=36;
		return; 		
	
	}

	else if(size==2)
	{	a[r][c]=offset;
		a[r][c+1]=offset+1;
		a[r+1][c+1]=offset +2;
		a[r][c+1]=offset+2;
		return;

	}

	else
	{	int ctr=offset;
		for ( j=c;j<c+size;j++)
		{	a[r][j]=ctr;
			ctr++;	
		}
		
		for( i=r+1;i<r+size;i++)
		{	a[i][c+size-1]=ctr;
			ctr++;	
	
		}

		for( j=c+size-2;j>=c;j--)
		{	a[r+size-1][j]=ctr;
			ctr++;

		}

		for( i=r+size-2;i>r;i--)
		{	a[i][c]=ctr;
			ctr++;
		}

		func(r+1,c+1, ctr, size-2);
	}

}

int main(void)
{	func(0,0,1,6);
	int i,j;
	for( i=0;i<6;i++)
	{	
		
		for( j=0;j<6;j++)
		{	printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

