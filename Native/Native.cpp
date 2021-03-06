// Native.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

int sum(int* ptr, size_t length)
{
	int sum = 0;
	//for (size_t index = 0; index < length; index++)
	//	sum += ptr[index];
	return sum;
}

void* stream_new(size_t size)
{
	return new Stream(size);
}

void stream_delete(void* ptr)
{
	delete ptr;
}

size_t stream_getsize(void* ptr)
{
	auto stream = static_cast<Stream*>(ptr);
	return stream->GetSize();
}

size_t stream_getposition(void* ptr)
{
	auto stream = static_cast<Stream*>(ptr);
	return stream->GetPosition();
}

size_t stream_read(void* ptr, int* buffer, size_t size)
{
	auto stream = static_cast<Stream*>(ptr);
	return stream->Read(buffer, size);
}

void stream_reset(void* ptr)
{
	auto stream = static_cast<Stream*>(ptr);
	return stream->Reset();
}


