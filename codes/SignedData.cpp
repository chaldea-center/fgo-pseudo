void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49B8DFE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_1B4CF90(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v2);
    sub_1B4CF90(&SignedData_TypeInfo, v3);
    byte_49B8DFE = 1;
  }
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B4D1DC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_318B2C4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B4D1DC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v7,
    (const MethodInfo_318B2C4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST, (int32_t)v7, v9, v10);
}


void __fastcall SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  NetworkManager_c *v16; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  SignedValue_c *v18; // x0
  System_Byte_array *Bytes_62128556; // x21
  System_Text_StringBuilder_o *v20; // x19
  _QWORD **appended; // x0
  __int64 v22; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v25; // w24
  __int64 v26; // x26
  __int64 v27; // x8
  __int64 v28; // x26
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  signed int v31; // w9
  char v32; // w29
  uint8_t v33; // w20
  uint16_t v34; // w0
  __int64 v35; // x21
  int32_t v36; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v37; // x19
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x21
  __int64 v41; // x1
  SignedData_c *v42; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v45; // w0
  int v46; // w25
  const MethodInfo *v47; // x2
  System_String_o *v48; // x22
  __int64 v49; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_o *v53; // x0
  const MethodInfo *v54; // x3
  System_String_o *v55; // x22
  System_String_o *v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v61; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v64; // w25
  const MethodInfo *v65; // x2
  System_String_o *v66; // x22
  __int64 v67; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v77; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v79; // x9
  int32_t *p_offset; // x10
  __int64 v81; // x0
  System_Guid_o v83; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v85; // 0:x0.16
  System_Guid_o v86; // 0:x0.16

  if ( (byte_49B8DFC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method);
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v2);
    sub_1B4CF90(&System_Convert_TypeInfo, v3);
    sub_1B4CF90(&System_Security_Cryptography_CryptoConfig_TypeInfo, v4);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_1B4CF90(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_1B4CF90(&SignedData_TypeInfo, v9);
    sub_1B4CF90(&SignedData_SignedPackData_TypeInfo, v10);
    sub_1B4CF90(&SignedValue_TypeInfo, v11);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_11758/*"SHA256"*/, v13);
    sub_1B4CF90(&StringLiteral_1570/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_1B4CF90(&StringLiteral_1521/*"</D></RSAKeyValue>"*/, v15);
    byte_49B8DFC = 1;
  }
  v83 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B57A5 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  v18 = SignedValue_TypeInfo;
  userIdNumber = static_fields->userIdNumber;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v18 = SignedValue_TypeInfo;
  }
  Bytes_62128556 = System_BitConverter__GetBytes_62128556(v18->static_fields->exist, 0LL);
  v20 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v20, 0LL);
  if ( !v20
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_61178652(
                                v20,
                                (System_String_o *)StringLiteral_1570/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_70:
    sub_1B4D1EC(appended, v22);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v26 = io->m_Items[v25 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v27 = *appended[23];
      if ( !v27 )
        goto LABEL_70;
      if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_69;
      v28 = *(_QWORD *)(v27 + 8 * v26 + 32);
      if ( !v28 )
        goto LABEL_70;
      v29 = *(_QWORD *)(v28 + 24);
      if ( (int)v29 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_30;
    }
    v30 = 0LL;
    while ( v30 < (unsigned int)v29 )
    {
      if ( !Bytes_62128556 )
        goto LABEL_70;
      v31 = Bytes_62128556->max_length;
      if ( (int)v30 % v31 >= (unsigned int)v31 )
        break;
      v32 = *(_BYTE *)(v28 + 32 + v30);
      v33 = Bytes_62128556->m_Items[(int)v30 % v31 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v34 = System_Convert__ToChar_62141952(v33 ^ v32, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_61180980(v20, v34, 0LL);
      LODWORD(v29) = *(_DWORD *)(v28 + 24);
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1B4D1F4(appended, v22);
  }
LABEL_30:
  System_Text_StringBuilder__Append_61178652(v20, (System_String_o *)StringLiteral_1521/*"</D></RSAKeyValue>"*/, 0LL);
  v35 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
          v20,
          v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v20, 0LL) >= 1 )
  {
    v36 = 0;
    do
      System_Text_StringBuilder__set_Chars(v20, v36++, 0x61u, 0LL);
    while ( v36 < System_Text_StringBuilder__get_Length(v20, 0LL) );
  }
  v37 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1B4D1DC(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v37, 0LL);
  if ( !v37 )
    sub_1B4D1EC(v38, v39);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v37->klass->vtable._8_FromXmlString.method)(
    v37,
    v35,
    v37->klass->vtable._9_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v40 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_11758/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v40, 0LL);
  v42 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v42 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v42->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1B4D1EC(0LL, v41);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_318B894 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v64 = maxCount - Count;
      do
      {
        v83 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v86.fields._a = &v83;
        *(_QWORD *)&v86.fields._d = 0LL;
        v66 = System_Guid__ToString(v86, v65);
        v67 = sub_1B4D1DC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v67, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v66, 0LL);
        if ( !v67 )
          sub_1B4D1EC(v68, v68);
        *(_QWORD *)(v67 + 16) = v68;
        sub_1B4CF34((CGThumbnailListItem_o *)(v67 + 16), (int32_t)v68, v69, v70);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v37, v40, v66, v71);
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v67 + 24) = v73;
        sub_1B4CF34((CGThumbnailListItem_o *)(v67 + 24), (int32_t)v73, v74, v75);
        v77 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v77 )
          sub_1B4D1EC(0LL, v76);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v77,
          (Il2CppObject *)v67,
          (const MethodInfo_318C494 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v64;
      }
      while ( v64 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v42 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v42->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1B4D1EC(0LL, v41);
    v45 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_318B894 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v45 < maxCount )
    {
      v46 = maxCount - v45;
      do
      {
        v83 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v85.fields._a = &v83;
        *(_QWORD *)&v85.fields._d = 0LL;
        v48 = System_Guid__ToString(v85, v47);
        v49 = sub_1B4D1DC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v48, 0LL);
        if ( !v49 )
          sub_1B4D1EC(v50, v50);
        *(_QWORD *)(v49 + 16) = v50;
        sub_1B4CF34((CGThumbnailListItem_o *)(v49 + 16), (int32_t)v50, v51, v52);
        v53 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
        v55 = System_String__Concat_61093468(v53, v48, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v56 = SignedData__MakeSignedData(v37, v40, v55, v54);
        v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v56, 0LL);
        *(_QWORD *)(v49 + 24) = v57;
        sub_1B4CF34((CGThumbnailListItem_o *)(v49 + 24), (int32_t)v57, v58, v59);
        v61 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v61 )
          sub_1B4D1EC(0LL, v60);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v61,
          (Il2CppObject *)v49,
          (const MethodInfo_318C494 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v46;
      }
      while ( v46 );
    }
  }
  klass = v37->klass;
  v79 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v79;
      p_offset += 4;
      if ( !v79 )
        goto LABEL_66;
    }
    v81 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_66:
    v81 = sub_1B9D724(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v81)(
    v37,
    *(_QWORD *)(v81 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  SignedData_c *v6; // x8
  int64_t userIdNumber; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v9; // x0

  if ( (byte_49B8DF9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&SignedData_TypeInfo, v4);
    byte_49B8DF9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B57A5 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  v6 = SignedData_TypeInfo;
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v6 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v6->static_fields;
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    v9 = static_fields[1];
    if ( v9 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v9,
               (Il2CppObject **)outData,
               (const MethodInfo_318C730 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1B4D1EC(v9, method);
  }
  v9 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v9,
           (Il2CppObject **)outData,
           (const MethodInfo_318C730 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *__fastcall SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Text_Encoding_o *UTF8; // x0
  __int64 v10; // x1
  System_Byte_array *v11; // x0
  System_Byte_array *v12; // x19

  if ( (byte_49B8DFD & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, hashAlgorithm);
    sub_1B4CF90(&StringLiteral_9238/*"No Algorithm"*/, v7);
    byte_49B8DFD = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9238/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B4D1EC(0LL, v10);
  v11 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1B4D1EC(v11, v11);
  v12 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v11,
          (Il2CppObject *)hashAlgorithm,
          0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v12, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  __int64 v10; // x1
  SignedData_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_49B8DFA & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3);
    sub_1B4CF90(&SignedData_TypeInfo, v4);
    sub_1B4CF90(&System_Threading_Tasks_Task_TypeInfo, v5);
    sub_1B4CF90(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v6);
    sub_1B4CF90(&SignedData___c__DisplayClass5_0_TypeInfo, v7);
    byte_49B8DFA = 1;
  }
  v8 = sub_1B4D1DC(SignedData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_12;
  *(_DWORD *)(v8 + 16) = maxCount;
  v11 = SignedData_TypeInfo;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v11 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v11->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_1B4D1EC(SIGNED_PACK_QUEUE, v10);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_318B894 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v8 + 16) )
    return 0LL;
  v12 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v8, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0LL);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  return System_Threading_Tasks_Task__Run(v12, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x1
  SignedData_c *v4; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B8DFB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B4CF90(&SignedData_TypeInfo, v3);
    byte_49B8DFB = 1;
  }
  result = 0LL;
  do
  {
    v4 = SignedData_TypeInfo;
    if ( !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v4 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v4->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1B4D1EC(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_318C730 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  return SignedData__RefillSigningData(maxCount, method);
}


void __fastcall SignedData_SignedPackData___ctor(SignedData_SignedPackData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData___c__DisplayClass5_0___ctor(
        SignedData___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData___c__DisplayClass5_0___RefillSigningData_b__0(
        SignedData___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  int32_t maxCount; // w19

  if ( (byte_49B8DFF & 1) == 0 )
  {
    sub_1B4CF90(&SignedData_TypeInfo, method);
    byte_49B8DFF = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}