void DownloadHandlerFileWithCrcCheck___ctor(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        const MethodInfo *method)
{
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  v6 = isDecrypt;
  UnityEngine_Networking_DownloadHandlerScript___ctor((UnityEngine_Networking_DownloadHandlerScript_o *)this, 0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.path, (int32_t)path, v7, v8, v9, v10, v11, v12);
  this->fields.fileStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.fileStream, 0, v13, v14, v15, v16, v17, v18);
  this->fields._error_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._error_k__BackingField, 0, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = v6;
  this->fields.cryptoStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cryptoStream, 0, v25, v26, v27, v28, v29, v30);
  this->fields.outputStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.outputStream, 0, v31, v32, v33, v34, v35, v36);
  this->fields.key = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.key, 0, v37, v38, v39, v40, v41, v42);
}


void DownloadHandlerFileWithCrcCheck___ctor_41515848(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        System_Byte_array *buffer,
        System_String_o *key,
        const MethodInfo *method)
{
  bool v7; // w22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  v7 = isDecrypt;
  UnityEngine_Networking_DownloadHandlerScript___ctor_74636828(
    (UnityEngine_Networking_DownloadHandlerScript_o *)this,
    buffer,
    0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.path, (int32_t)path, v10, v11, v12, v13, v14, v15);
  this->fields.fileStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.fileStream, 0, v16, v17, v18, v19, v20, v21);
  this->fields._error_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._error_k__BackingField, 0, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = v7;
  this->fields.cryptoStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cryptoStream, 0, v28, v29, v30, v31, v32, v33);
  this->fields.outputStream = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.outputStream, 0, v34, v35, v36, v37, v38, v39);
  this->fields.key = key;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.key, (int32_t)key, v40, v41, v42, v43, v44, v45);
}


void DownloadHandlerFileWithCrcCheck__CloseStream(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  GrandQuestFolderBoardItem_o *p_fileStream; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_IO_Stream_o *v18; // x0
  GrandQuestFolderBoardItem_o *p_outputStream; // x19
  struct System_IO_MemoryStream_o *outputStream; // t1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  p_fileStream = (GrandQuestFolderBoardItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_1C9403C(p_fileStream, 0, v5, v6, v7, v8, v9, v10);
  }
  cryptoStream = this->fields.cryptoStream;
  if ( cryptoStream )
  {
    System_Security_Cryptography_CryptoStream__Clear(cryptoStream, 0);
    this->fields.cryptoStream = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cryptoStream, 0, v12, v13, v14, v15, v16, v17);
  }
  outputStream = this->fields.outputStream;
  p_outputStream = (GrandQuestFolderBoardItem_o *)&this->fields.outputStream;
  v18 = (System_IO_Stream_o *)outputStream;
  if ( outputStream )
  {
    System_IO_Stream__Dispose(v18, 0);
    p_outputStream->klass = 0;
    sub_1C9403C(p_outputStream, 0, v21, v22, v23, v24, v25, v26);
  }
}


void DownloadHandlerFileWithCrcCheck__CompleteContent(
        DownloadHandlerFileWithCrcCheck_o *this,
        const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  GrandQuestFolderBoardItem_o *p_fileStream; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x21
  __int64 v13; // x1
  struct System_IO_MemoryStream_o *outputStream; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  struct System_IO_MemoryStream_o *v17; // x0
  struct System_Byte_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_IO_Stream_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v39; // x1
  __int64 v40; // x10
  int v41; // w11
  struct System_Byte_array *decryptData; // x13
  unsigned int max_length; // w16
  uint8_t v44; // w12
  struct System_Byte_array *v45; // x13

  p_fileStream = (GrandQuestFolderBoardItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_1C9403C(p_fileStream, 0, v5, v6, v7, v8, v9, v10);
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
        v16 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))outputStream->klass->vtable._11_get_Length.methodPtr)(
                outputStream,
                outputStream->klass->vtable._11_get_Length.method);
        v17 = this->fields.outputStream;
        if ( !v17 )
          sub_1C942F0(0, v15);
        v18 = (struct System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))v17->klass->vtable._37_GetBuffer.methodPtr)(
                                            v17,
                                            v17->klass->vtable._37_GetBuffer.method);
        this->fields.decryptData = v18;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.decryptData,
          (int32_t)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      else
      {
        v16 = 0;
      }
      if ( !*p_cryptoStream )
        sub_1C942F0(0, v13);
      System_Security_Cryptography_CryptoStream__Clear(*p_cryptoStream, 0);
      *p_cryptoStream = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cryptoStream, 0, v25, v26, v27, v28, v29, v30);
    }
    else
    {
      v16 = 0;
    }
    v31 = (System_IO_Stream_o *)this->fields.outputStream;
    if ( v31 )
    {
      System_IO_Stream__Dispose(v31, 0);
      this->fields.outputStream = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.outputStream, 0, v32, v33, v34, v35, v36, v37);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.key, 0);
    if ( v16 >= 1 && IsNullOrEmpty )
    {
      v40 = 0;
      do
      {
        v41 = v40 + 1;
        if ( v16 <= (int)v40 + 1 )
          break;
        decryptData = this->fields.decryptData;
        if ( !decryptData )
          sub_1C942F0(IsNullOrEmpty, v39);
        max_length = decryptData->max_length;
        if ( (unsigned int)v40 >= max_length )
          sub_1C942F8(IsNullOrEmpty);
        v44 = decryptData->m_Items[v40];
        if ( (int)v40 + 1 >= max_length )
          sub_1C942F8(IsNullOrEmpty);
        decryptData->m_Items[v40] = decryptData->m_Items[v41] ^ 0xD2;
        v45 = this->fields.decryptData;
        if ( !v45 )
          sub_1C942F0(IsNullOrEmpty, v39);
        if ( (unsigned int)(v40 + 1) >= LODWORD(v45->max_length) )
          sub_1C942F8(IsNullOrEmpty);
        v40 = (int)v40 + 2;
        v45->m_Items[v41] = v44 ^ 0xCE;
      }
      while ( v16 > (int)v40 );
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  struct System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x22
  int32_t contentSize; // w24
  System_IO_MemoryStream_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_IO_Stream_o *outputStream; // x23
  System_String_o *key; // x24
  System_Security_Cryptography_CryptoStream_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x1
  uint32_t crc; // w22
  uint32_t v41; // w0
  int32_t nowDataLength; // w8
  bool result; // w0

  if ( (byte_4D2BAC8 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&System_IO_FileStream_TypeInfo);
    sub_1C94098(&System_IO_MemoryStream_TypeInfo);
    byte_4D2BAC8 = 1;
  }
  p_fileStream = &this->fields.fileStream;
  fileStream = this->fields.fileStream;
  if ( !fileStream )
  {
    path = this->fields.path;
    v10 = (System_IO_FileStream_o *)sub_1C942E4(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_65334224(v10, path, 2, 2, 0);
    *p_fileStream = v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.fileStream, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    fileStream = *p_fileStream;
    if ( !*p_fileStream )
      sub_1C942F0(0, v17);
  }
  ((void (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))fileStream->klass->vtable._34_Write.methodPtr)(
    fileStream,
    data,
    0,
    (unsigned int)dataLength,
    fileStream->klass->vtable._34_Write.method);
  if ( !*p_fileStream )
    sub_1C942F0(0, v18);
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
      v22 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor_65238292(v22, contentSize, 0);
      this->fields.outputStream = v22;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.outputStream, (int32_t)v22, v23, v24, v25, v26, v27, v28);
      outputStream = (System_IO_Stream_o *)this->fields.outputStream;
      key = this->fields.key;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v31 = CatAndMouseGame__MouseGame4Stream_41995124(outputStream, key, 0);
      *p_cryptoStream = v31;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cryptoStream, (int32_t)v31, v32, v33, v34, v35, v36, v37);
      cryptoStream = *p_cryptoStream;
      if ( !*p_cryptoStream )
        sub_1C942F0(0, v38);
    }
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))cryptoStream->klass->vtable._34_Write.methodPtr)(
      cryptoStream,
      data,
      0,
      (unsigned int)dataLength,
      cryptoStream->klass->vtable._34_Write.method);
    if ( !*p_cryptoStream )
      sub_1C942F0(0, v39);
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))(*p_cryptoStream)->klass->vtable._20_Flush.methodPtr)(
      *p_cryptoStream,
      (*p_cryptoStream)->klass->vtable._20_Flush.method);
  }
  crc = this->fields.crc;
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v41 = Crc32__Compute_42004428(data, dataLength, crc, 0);
  nowDataLength = this->fields.nowDataLength;
  this->fields.crc = v41;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._error_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._error_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}