#ifndef ZZ_CODE_BUFFER_H_
#define ZZ_CODE_BUFFER_H_

#include "stdcxx/LiteMutableBuffer.h"

class CodeBufferBase : public LiteMutableBuffer {

public:
  CodeBufferBase() : LiteMutableBuffer() {
  }

  CodeBufferBase(int size) : LiteMutableBuffer(size) {
  }

public:
  void Emit8(uint8_t data);

  void Emit16(uint16_t data);

  void Emit32(uint32_t data);

  void Emit64(uint64_t data);

  void EmitBuffer(void *buffer, int len);

  void EmitObject(LiteObject *object);

#if 0 // Template Advanced won't enable even in userspace
  template <typename T> T Load(int offset);

  template <typename T> void Store(int offset, T value);

  template <typename T> void Emit(T value);
#endif
};

#endif
