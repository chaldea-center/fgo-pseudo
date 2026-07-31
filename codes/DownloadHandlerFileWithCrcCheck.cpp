void DownloadHandlerFileWithCrcCheck___ctor(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  UnityEngine_Networking_DownloadHandlerScript___ctor((UnityEngine_Networking_DownloadHandlerScript_o *)this, 0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.path, (int32_t)path, v7, v8, v9, v10, v11, v12);
  this->fields.fileStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fileStream, 0, v13, v14, v15, v16, v17, v18);
  this->fields._error_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._error_k__BackingField, 0, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = isDecrypt;
  this->fields.cryptoStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cryptoStream, 0, v25, v26, v27, v28, v29, v30);
  this->fields.outputStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.outputStream, 0, v31, v32, v33, v34, v35, v36);
  this->fields.key = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.key, 0, v37, v38, v39, v40, v41, v42);
}


void DownloadHandlerFileWithCrcCheck___ctor_47697736(
        DownloadHandlerFileWithCrcCheck_o *this,
        System_String_o *path,
        bool isDecrypt,
        System_Byte_array *buffer,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  UnityEngine_Networking_DownloadHandlerScript___ctor_86521592(
    (UnityEngine_Networking_DownloadHandlerScript_o *)this,
    buffer,
    0);
  this->fields.crc = 0;
  this->fields.path = path;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.path, (int32_t)path, v10, v11, v12, v13, v14, v15);
  this->fields.fileStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fileStream, 0, v16, v17, v18, v19, v20, v21);
  this->fields._error_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._error_k__BackingField, 0, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&this->fields.nowDataLength = 0;
  this->fields.isDecrypt = isDecrypt;
  this->fields.cryptoStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cryptoStream, 0, v28, v29, v30, v31, v32, v33);
  this->fields.outputStream = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.outputStream, 0, v34, v35, v36, v37, v38, v39);
  this->fields.key = key;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.key, (int32_t)key, v40, v41, v42, v43, v44, v45);
}


void DownloadHandlerFileWithCrcCheck__CloseStream(DownloadHandlerFileWithCrcCheck_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  MissionNaviTransitionBoardItem_o *p_fileStream; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_IO_Stream_o *v18; // x0
  MissionNaviTransitionBoardItem_o *p_outputStream; // x19
  struct System_IO_MemoryStream_o *outputStream; // t1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  p_fileStream = (MissionNaviTransitionBoardItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_21FFBF4(p_fileStream, 0, v5, v6, v7, v8, v9, v10);
  }
  cryptoStream = this->fields.cryptoStream;
  if ( cryptoStream )
  {
    System_Security_Cryptography_CryptoStream__Clear(cryptoStream, 0);
    this->fields.cryptoStream = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cryptoStream, 0, v12, v13, v14, v15, v16, v17);
  }
  outputStream = this->fields.outputStream;
  p_outputStream = (MissionNaviTransitionBoardItem_o *)&this->fields.outputStream;
  v18 = (System_IO_Stream_o *)outputStream;
  if ( outputStream )
  {
    System_IO_Stream__Dispose(v18, 0);
    p_outputStream->klass = 0;
    sub_21FFBF4(p_outputStream, 0, v21, v22, v23, v24, v25, v26);
  }
}


void DownloadHandlerFileWithCrcCheck__CompleteContent(
        DownloadHandlerFileWithCrcCheck_o *this,
        const MethodInfo *method)
{
  System_IO_Stream_o *fileStream; // x0
  MissionNaviTransitionBoardItem_o *p_fileStream; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x21
  __int64 v13; // x1
  struct System_IO_MemoryStream_o *outputStream; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  struct System_IO_MemoryStream_o *v17; // x0
  struct System_Byte_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_IO_Stream_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v39; // x1
  __int64 v40; // x11
  unsigned int v41; // w10
  signed int v42; // w13
  struct System_Byte_array *decryptData; // x14
  unsigned int max_length; // w15
  char *v45; // x11
  char *v46; // x15
  char v47; // w14
  struct System_Byte_array *v48; // x11
  char *v49; // x13

  p_fileStream = (MissionNaviTransitionBoardItem_o *)&this->fields.fileStream;
  fileStream = (System_IO_Stream_o *)this->fields.fileStream;
  if ( fileStream )
  {
    System_IO_Stream__Dispose(fileStream, 0);
    p_fileStream->klass = 0;
    sub_21FFBF4(p_fileStream, 0, v5, v6, v7, v8, v9, v10);
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
          sub_21FFECC(0, v15);
        v18 = (struct System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))v17->klass->vtable._37_GetBuffer.methodPtr)(
                                            v17,
                                            v17->klass->vtable._37_GetBuffer.method);
        this->fields.decryptData = v18;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.decryptData,
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
        sub_21FFECC(0, v13);
      System_Security_Cryptography_CryptoStream__Clear(*p_cryptoStream, 0);
      *p_cryptoStream = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cryptoStream, 0, v25, v26, v27, v28, v29, v30);
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
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.outputStream, 0, v32, v33, v34, v35, v36, v37);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.key, 0);
    if ( v16 >= 1 && IsNullOrEmpty )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v42 = v41 + 1;
        if ( v16 <= (int)(v41 + 1) )
          break;
        decryptData = this->fields.decryptData;
        if ( !decryptData )
          sub_21FFECC(IsNullOrEmpty, v39);
        max_length = decryptData->max_length;
        if ( v41 >= max_length )
          sub_21FFED4(IsNullOrEmpty);
        if ( v41 + 1 >= max_length )
          sub_21FFED4(IsNullOrEmpty);
        v45 = (char *)decryptData + v40;
        v46 = (char *)decryptData + v42;
        v47 = v45[32];
        v45[32] = v46[32] ^ 0xD2;
        v48 = this->fields.decryptData;
        if ( !v48 )
          sub_21FFECC(IsNullOrEmpty, v39);
        if ( v41 + 1 >= LODWORD(v48->max_length) )
          sub_21FFED4(IsNullOrEmpty);
        v49 = (char *)v48 + v42;
        v40 = (int)(v41 + 2);
        v41 += 2;
        v49[32] = v47 ^ 0xCE;
      }
      while ( v16 > v40 );
    }
  }
  UnityEngine_Networking_DownloadHandler__CompleteContent((UnityEngine_Networking_DownloadHandler_o *)this, 0);
}


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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Security_Cryptography_CryptoStream_o *cryptoStream; // x0
  struct System_Security_Cryptography_CryptoStream_o **p_cryptoStream; // x22
  int32_t contentSize; // w24
  System_IO_MemoryStream_o *v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  System_IO_Stream_o *outputStream; // x23
  System_String_o *key; // x24
  System_Security_Cryptography_CryptoStream_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x1
  uint32_t crc; // w22
  uint32_t v45; // w0
  int32_t nowDataLength; // w8
  bool result; // w0

  if ( (byte_59378D7 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&System_IO_FileStream_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    byte_59378D7 = 1;
  }
  p_fileStream = &this->fields.fileStream;
  fileStream = this->fields.fileStream;
  if ( !fileStream )
  {
    path = this->fields.path;
    v10 = (System_IO_FileStream_o *)sub_21FFEBC(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_76747540(v10, path, 2, 2, 0);
    *p_fileStream = v10;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fileStream,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    fileStream = *p_fileStream;
    if ( !*p_fileStream )
      sub_21FFECC(0, v17);
  }
  ((void (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))fileStream->klass->vtable._34_Write.methodPtr)(
    fileStream,
    data,
    0,
    (unsigned int)dataLength,
    fileStream->klass->vtable._34_Write.method);
  if ( !*p_fileStream )
    sub_21FFECC(0, v18);
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
      v24 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor_76662848(v24, contentSize, 0);
      this->fields.outputStream = v24;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.outputStream,
        (int32_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      outputStream = (System_IO_Stream_o *)this->fields.outputStream;
      key = this->fields.key;
      if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v31, v32);
      v35 = CatAndMouseGame__MouseGame4Stream_48173276(outputStream, key, 0);
      *p_cryptoStream = v35;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cryptoStream,
        (int32_t)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      cryptoStream = *p_cryptoStream;
      if ( !*p_cryptoStream )
        sub_21FFECC(0, v42);
    }
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))cryptoStream->klass->vtable._34_Write.methodPtr)(
      cryptoStream,
      data,
      0,
      (unsigned int)dataLength,
      cryptoStream->klass->vtable._34_Write.method);
    if ( !*p_cryptoStream )
      sub_21FFECC(0, v43);
    ((void (__fastcall *)(struct System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))(*p_cryptoStream)->klass->vtable._20_Flush.methodPtr)(
      *p_cryptoStream,
      (*p_cryptoStream)->klass->vtable._20_Flush.method);
  }
  crc = this->fields.crc;
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v19, v20);
  v45 = Crc32__Compute_48182652(data, dataLength, crc, 0);
  nowDataLength = this->fields.nowDataLength;
  this->fields.crc = v45;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._error_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._error_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}