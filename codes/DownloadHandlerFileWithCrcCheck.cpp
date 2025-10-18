void DownloadHandlerFileWithCrcCheck___ctor(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        const MethodInfo *method)
{
  bool v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v6 = isDecrypt;
  UnityEngine_Networking_DownloadHandlerScript___ctor((UnityEngine_Networking_DownloadHandlerScript_o *)this, 0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v7, v8);
  this->fields.fileStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fileStream, 0, v9, v10);
  this->fields._error_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._error_k__BackingField, 0, v11, v12);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = v6;
  this->fields.cryptoStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v13, v14);
  this->fields.outputStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.outputStream, 0, v15, v16);
  this->fields.key = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.key, 0, v17, v18);
}


void DownloadHandlerFileWithCrcCheck___ctor_40763424(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        System_Byte_array *buffer,
        System_String_o *key,
        const MethodInfo *method)
{
  bool v7; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v7 = isDecrypt;
  UnityEngine_Networking_DownloadHandlerScript___ctor_73777040(
    (UnityEngine_Networking_DownloadHandlerScript_o *)this,
    buffer,
    0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v10, v11);
  this->fields.fileStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fileStream, 0, v12, v13);
  this->fields._error_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._error_k__BackingField, 0, v14, v15);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = v7;
  this->fields.cryptoStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v16, v17);
  this->fields.outputStream = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.outputStream, 0, v18, v19);
  this->fields.key = key;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.key, (int32_t)key, v20, v21);
}


void DownloadHandlerFileWithCrcCheck__CloseStream(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  CGThumbnailListItem_o *p_fileStream; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_IO_Stream_o *v10; // x0
  CGThumbnailListItem_o *p_outputStream; // x19
  struct System_IO_MemoryStream_o *outputStream; // t1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  p_fileStream = (CGThumbnailListItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_1C36FFC(p_fileStream, 0, v5, v6);
  }
  cryptoStream = this->fields.cryptoStream;
  if ( cryptoStream )
  {
    System_Security_Cryptography_CryptoStream__Clear(cryptoStream, 0);
    this->fields.cryptoStream = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v8, v9);
  }
  outputStream = this->fields.outputStream;
  p_outputStream = (CGThumbnailListItem_o *)&this->fields.outputStream;
  v10 = (System_IO_Stream_o *)outputStream;
  if ( outputStream )
  {
    System_IO_Stream__Dispose(v10, 0);
    p_outputStream->klass = 0;
    sub_1C36FFC(p_outputStream, 0, v13, v14);
  }
}


void DownloadHandlerFileWithCrcCheck__CompleteContent(
        DownloadHandlerFileWithCrcCheck_o *this,
        const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  CGThumbnailListItem_o *p_fileStream; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x21
  struct System_IO_MemoryStream_o *outputStream; // x0
  __int64 v10; // x20
  struct System_IO_MemoryStream_o *v11; // x0
  struct System_Byte_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_IO_Stream_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x10
  int v22; // w11
  struct System_Byte_array *decryptData; // x13
  unsigned int max_length; // w16
  uint8_t v25; // w12
  struct System_Byte_array *v26; // x13

  p_fileStream = (CGThumbnailListItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_1C36FFC(p_fileStream, 0, v5, v6);
  }
  if ( this->fields.isDecrypt )
  {
    p_cryptoStream = &this->fields.cryptoStream;
    cryptoStream = this->fields.cryptoStream;
    if ( cryptoStream )
    {
      System_Security_Cryptography_CryptoStream__FlushFinalBlock(cryptoStream, 0);
      outputStream = this->fields.outputStream;
      if ( outputStream )
      {
        v10 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))outputStream->klass->vtable._11_get_Length.methodPtr)(
                outputStream,
                outputStream->klass->vtable._11_get_Length.method);
        v11 = this->fields.outputStream;
        if ( !v11 )
          sub_1C372B4(0);
        v12 = (struct System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))v11->klass->vtable._37_GetBuffer.methodPtr)(
                                            v11,
                                            v11->klass->vtable._37_GetBuffer.method);
        this->fields.decryptData = v12;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.decryptData, (int32_t)v12, v13, v14);
      }
      else
      {
        v10 = 0;
      }
      if ( !*p_cryptoStream )
        sub_1C372B4(0);
      System_Security_Cryptography_CryptoStream__Clear(*p_cryptoStream, 0);
      *p_cryptoStream = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v15, v16);
    }
    else
    {
      v10 = 0;
    }
    v17 = (System_IO_Stream_o *)this->fields.outputStream;
    if ( v17 )
    {
      System_IO_Stream__Dispose(v17, 0);
      this->fields.outputStream = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.outputStream, 0, v18, v19);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.key, 0);
    if ( v10 >= 1 && IsNullOrEmpty )
    {
      v21 = 0;
      do
      {
        v22 = v21 + 1;
        if ( v10 <= (int)v21 + 1 )
          break;
        decryptData = this->fields.decryptData;
        if ( !decryptData )
          sub_1C372B4(IsNullOrEmpty);
        max_length = decryptData->max_length;
        if ( (unsigned int)v21 >= max_length )
          sub_1C372BC(IsNullOrEmpty);
        v25 = decryptData->m_Items[v21];
        if ( (int)v21 + 1 >= max_length )
          sub_1C372BC(IsNullOrEmpty);
        decryptData->m_Items[v21] = decryptData->m_Items[v22] ^ 0xD2;
        v26 = this->fields.decryptData;
        if ( !v26 )
          sub_1C372B4(IsNullOrEmpty);
        if ( (unsigned int)(v21 + 1) >= LODWORD(v26->max_length) )
          sub_1C372BC(IsNullOrEmpty);
        v21 = (int)v21 + 2;
        v26->m_Items[v22] = v25 ^ 0xCE;
      }
      while ( v10 > (int)v21 );
    }
  }
  UnityEngine_Networking_DownloadHandler__CompleteContent((UnityEngine_Networking_DownloadHandler_o *)this, 0);
}


// positive sp value has been detected, the output may be wrong!
void DownloadHandlerFileWithCrcCheck__Finalize(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  DownloadHandlerFileWithCrcCheck__CloseStream(this, method);
  UnityEngine_Networking_DownloadHandler__Finalize((UnityEngine_Networking_DownloadHandler_o *)this, 0);
}


System_Byte_array *DownloadHandlerFileWithCrcCheck__GetData(
        DownloadHandlerFileWithCrcCheck_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isDecrypt )
    return this->fields.decryptData;
  else
    return 0;
}


float DownloadHandlerFileWithCrcCheck__GetProgress(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  int32_t contentSize; // w8

  contentSize = this->fields.contentSize;
  if ( contentSize < 1 )
    return 0.0;
  else
    return (float)this->fields.nowDataLength / (float)contentSize;
}


void DownloadHandlerFileWithCrcCheck__ReceiveContentLength(
        DownloadHandlerFileWithCrcCheck_o *this,
        int32_t contentLength,
        const MethodInfo *method)
{
  this->fields.contentSize = contentLength;
  UnityEngine_Networking_DownloadHandler__ReceiveContentLength(
    (UnityEngine_Networking_DownloadHandler_o *)this,
    contentLength,
    0);
}


void DownloadHandlerFileWithCrcCheck__ReceiveContentLengthHeader(
        DownloadHandlerFileWithCrcCheck_o *this,
        uint64_t contentLength,
        const MethodInfo *method)
{
  this->fields.contentSize = contentLength;
  UnityEngine_Networking_DownloadHandler__ReceiveContentLengthHeader(
    (UnityEngine_Networking_DownloadHandler_o *)this,
    contentLength,
    0);
}


bool DownloadHandlerFileWithCrcCheck__ReceiveData(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_Byte_array *data,
        int32_t dataLength,
        const MethodInfo *method)
{
  struct System_IO_FileStream_o *fileStream; // x0
  struct System_IO_FileStream_o **p_fileStream; // x22
  System_String_o *path; // x24
  System_IO_FileStream_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  struct System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x22
  int32_t contentSize; // w24
  System_IO_MemoryStream_o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_IO_Stream_o *outputStream; // x23
  System_String_o *key; // x24
  System_Security_Cryptography_CryptoStream_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  uint32_t crc; // w22
  uint32_t v25; // w0
  int32_t nowDataLength; // w8
  bool result; // w0

  if ( (byte_4C4223D & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Crc32_TypeInfo);
    sub_1C37058(&System_IO_FileStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    byte_4C4223D = 1;
  }
  p_fileStream = &this->fields.fileStream;
  fileStream = this->fields.fileStream;
  if ( !fileStream )
  {
    path = this->fields.path;
    v10 = (System_IO_FileStream_o *)sub_1C372A4(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_64480128(v10, path, 2, 2, 0);
    *p_fileStream = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fileStream, (int32_t)v10, v11, v12);
    fileStream = *p_fileStream;
    if ( !*p_fileStream )
      sub_1C372B4(0);
  }
  ((void (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))fileStream->klass->vtable._34_Write.methodPtr)(
    fileStream,
    data,
    0,
    (unsigned int)dataLength,
    fileStream->klass->vtable._34_Write.method);
  if ( !*p_fileStream )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct System_IO_FileStream_o *, const MethodInfo *))(*p_fileStream)->klass->vtable._20_Flush.methodPtr)(
    *p_fileStream,
    (*p_fileStream)->klass->vtable._20_Flush.method);
  if ( this->fields.isDecrypt )
  {
    p_cryptoStream = &this->fields.cryptoStream;
    cryptoStream = this->fields.cryptoStream;
    if ( !cryptoStream )
    {
      contentSize = this->fields.contentSize;
      v16 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor_64383756(v16, contentSize, 0);
      this->fields.outputStream = v16;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.outputStream, (int32_t)v16, v17, v18);
      outputStream = (System_IO_Stream_o *)this->fields.outputStream;
      key = this->fields.key;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v21 = CatAndMouseGame__MouseGame4Stream_41237128(outputStream, key, 0);
      *p_cryptoStream = v21;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, (int32_t)v21, v22, v23);
      cryptoStream = *p_cryptoStream;
      if ( !*p_cryptoStream )
        sub_1C372B4(0);
    }
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))cryptoStream->klass->vtable._34_Write.methodPtr)(
      cryptoStream,
      data,
      0,
      (unsigned int)dataLength,
      cryptoStream->klass->vtable._34_Write.method);
    if ( !*p_cryptoStream )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))(*p_cryptoStream)->klass->vtable._20_Flush.methodPtr)(
      *p_cryptoStream,
      (*p_cryptoStream)->klass->vtable._20_Flush.method);
  }
  crc = this->fields.crc;
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v25 = Crc32__Compute_41246160(data, dataLength, crc, 0);
  nowDataLength = this->fields.nowDataLength;
  this->fields.crc = v25;
  result = 1;
  this->fields.nowDataLength = nowDataLength + dataLength;
  return result;
}


uint32_t DownloadHandlerFileWithCrcCheck__get_Crc(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  return this->fields.crc;
}


System_Exception_o *DownloadHandlerFileWithCrcCheck__get_error(
        DownloadHandlerFileWithCrcCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._error_k__BackingField;
}


void DownloadHandlerFileWithCrcCheck__set_error(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_Exception_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._error_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._error_k__BackingField, (int32_t)value, (int32_t)method, v3);
}