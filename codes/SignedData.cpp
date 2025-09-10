void SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2511F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_1C2D490(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_1C2D490(&SignedData_TypeInfo);
    byte_4C2511F = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C2D6DC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_33756C0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C2D6DC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_33756C0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST, (int32_t)v4, v6, v7);
}


void SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  SignedValue_c *v4; // x0
  System_Byte_array *Bytes_64507856; // x21
  System_Text_StringBuilder_o *v6; // x19
  _QWORD **appended; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v12; // w24
  __int64 v13; // x26
  __int64 v14; // x8
  __int64 v15; // x26
  __int64 v16; // x8
  unsigned __int64 v17; // x27
  signed int v18; // w9
  char v19; // w29
  uint8_t v20; // w20
  uint16_t v21; // w0
  __int64 v22; // x21
  int32_t v23; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  __int64 v28; // x1
  SignedData_c *v29; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v32; // w0
  int v33; // w25
  const MethodInfo *v34; // x2
  System_String_o *v35; // x22
  __int64 v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_String_o *v40; // x0
  const MethodInfo *v41; // x3
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v48; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v51; // w25
  const MethodInfo *v52; // x2
  System_String_o *v53; // x22
  __int64 v54; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v64; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 v68; // x0
  System_Guid_o v70; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v72; // 0:x0.16
  System_Guid_o v73; // 0:x0.16

  if ( (byte_4C2511D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_1C2D490(&SignedData_TypeInfo);
    sub_1C2D490(&SignedData_SignedPackData_TypeInfo);
    sub_1C2D490(&SignedValue_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_12025/*"SHA256"*/);
    sub_1C2D490(&StringLiteral_1557/*"<RSAKeyValue><Modulus>"*/);
    sub_1C2D490(&StringLiteral_1507/*"</D></RSAKeyValue>"*/);
    byte_4C2511D = 1;
  }
  *(_QWORD *)&v70.fields._a = 0;
  *(_QWORD *)&v70.fields._d = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  v4 = SignedValue_TypeInfo;
  userIdNumber = static_fields->userIdNumber;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v4 = SignedValue_TypeInfo;
  }
  Bytes_64507856 = System_BitConverter__GetBytes_64507856(v4->static_fields->exist, 0);
  v6 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  if ( !v6
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_63542928(v6, (System_String_o *)StringLiteral_1557/*"<RSAKeyValue><Modulus>"*/, 0),
        (io = SignedValue_TypeInfo->static_fields->io) == 0) )
  {
LABEL_70:
    sub_1C2D6EC(appended, v8);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v13 = io->m_Items[v12];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v14 = *appended[23];
      if ( !v14 )
        goto LABEL_70;
      if ( (unsigned int)v13 >= *(_DWORD *)(v14 + 24) )
        goto LABEL_69;
      v15 = *(_QWORD *)(v14 + 8 * v13 + 32);
      if ( !v15 )
        goto LABEL_70;
      v16 = *(_QWORD *)(v15 + 24);
      if ( (int)v16 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_30;
    }
    v17 = 0;
    while ( v17 < (unsigned int)v16 )
    {
      if ( !Bytes_64507856 )
        goto LABEL_70;
      v18 = Bytes_64507856->max_length;
      if ( (int)v17 % v18 >= (unsigned int)v18 )
        break;
      v19 = *(_BYTE *)(v15 + 32 + v17);
      v20 = Bytes_64507856->m_Items[(int)v17 % v18];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToChar_64521252(v20 ^ v19, 0);
      appended = (_QWORD **)System_Text_StringBuilder__Append_63545256(v6, v21, 0);
      LODWORD(v16) = *(_DWORD *)(v15 + 24);
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1C2D6F4(appended, v8, v9);
  }
LABEL_30:
  System_Text_StringBuilder__Append_63542928(v6, (System_String_o *)StringLiteral_1507/*"</D></RSAKeyValue>"*/, 0);
  v22 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
          v6,
          v6->klass->vtable._3_ToString.method);
  if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
  {
    v23 = 0;
    do
      System_Text_StringBuilder__set_Chars(v6, v23++, 0x61u, 0);
    while ( v23 < System_Text_StringBuilder__get_Length(v6, 0) );
  }
  v24 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1C2D6DC(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v24, 0);
  if ( !v24 )
    sub_1C2D6EC(v25, v26);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, const MethodInfo *))v24->klass->vtable._8_FromXmlString.methodPtr)(
    v24,
    v22,
    v24->klass->vtable._8_FromXmlString.method);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v27 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_12025/*"SHA256"*/, 0);
  System_String__IsNullOrEmpty(v27, 0);
  v29 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( userIdNumber < 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v29 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v29->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1C2D6EC(0, v28);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_3375C90 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v51 = maxCount - Count;
      do
      {
        v70 = System_Guid__NewGuid(0);
        *(_QWORD *)&v73.fields._a = &v70;
        *(_QWORD *)&v73.fields._d = 0;
        v53 = System_Guid__ToString(v73, v52);
        v54 = sub_1C2D6DC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v54, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v53, 0);
        if ( !v54 )
          sub_1C2D6EC(v55, v55);
        *(_QWORD *)(v54 + 16) = v55;
        sub_1C2D434((CGThumbnailListItem_o *)(v54 + 16), (int32_t)v55, v56, v57);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v24, v27, v53, v58);
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0);
        *(_QWORD *)(v54 + 24) = v60;
        sub_1C2D434((CGThumbnailListItem_o *)(v54 + 24), (int32_t)v60, v61, v62);
        v64 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v64 )
          sub_1C2D6EC(0, v63);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v64,
          (Il2CppObject *)v54,
          (const MethodInfo_3376890 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v51;
      }
      while ( v51 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v29 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v29->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1C2D6EC(0, v28);
    v32 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_3375C90 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v32 < maxCount )
    {
      v33 = maxCount - v32;
      do
      {
        v70 = System_Guid__NewGuid(0);
        *(_QWORD *)&v72.fields._a = &v70;
        *(_QWORD *)&v72.fields._d = 0;
        v35 = System_Guid__ToString(v72, v34);
        v36 = sub_1C2D6DC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v36, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v35, 0);
        if ( !v36 )
          sub_1C2D6EC(v37, v37);
        *(_QWORD *)(v36 + 16) = v37;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v37, v38, v39);
        v40 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        v42 = System_String__Concat_63457864(v40, v35, 0);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v43 = SignedData__MakeSignedData(v24, v27, v42, v41);
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v43, 0);
        *(_QWORD *)(v36 + 24) = v44;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 24), (int32_t)v44, v45, v46);
        v48 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v48 )
          sub_1C2D6EC(0, v47);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v48,
          (Il2CppObject *)v36,
          (const MethodInfo_3376890 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v33;
      }
      while ( v33 );
    }
  }
  klass = v24->klass;
  v66 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      p_offset += 4;
      if ( !v66 )
        goto LABEL_66;
    }
    v68 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_66:
    v68 = sub_1C7DCA8(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v68)(
    v24,
    *(_QWORD *)(v68 + 8));
}


bool SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  SignedData_c *v4; // x8
  int64_t userIdNumber; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x0

  if ( (byte_4C2511A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&SignedData_TypeInfo);
    byte_4C2511A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v4 = SignedData_TypeInfo;
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v4 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v4->static_fields;
  if ( userIdNumber < 0 )
  {
    v7 = static_fields[1];
    if ( v7 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v7,
               (Il2CppObject **)outData,
               (const MethodInfo_3376B2C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1C2D6EC(v7, method);
  }
  v7 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v7,
           (Il2CppObject **)outData,
           (const MethodInfo_3376B2C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x0
  System_Byte_array *v11; // x19

  if ( (byte_4C2511E & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&StringLiteral_9436/*"No Algorithm"*/);
    byte_4C2511E = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0) )
    return (System_String_o *)StringLiteral_9436/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C2D6EC(0, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !signProvider )
    sub_1C2D6EC(v10, v10);
  v11 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v10,
          (Il2CppObject *)hashAlgorithm,
          0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v11, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  __int64 v5; // x1
  SignedData_c *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C2511B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C2D490(&SignedData_TypeInfo);
    sub_1C2D490(&System_Threading_Tasks_Task_TypeInfo);
    sub_1C2D490(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_1C2D490(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_4C2511B = 1;
  }
  v3 = sub_1C2D6DC(SignedData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_12;
  *(_DWORD *)(v3 + 16) = maxCount;
  v6 = SignedData_TypeInfo;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v6 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v6->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_1C2D6EC(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_3375C90 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v3, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  return System_Threading_Tasks_Task__Run(v7, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  SignedData_c *v3; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2511C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C2D490(&SignedData_TypeInfo);
    byte_4C2511C = 1;
  }
  result = 0;
  do
  {
    v3 = SignedData_TypeInfo;
    if ( !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v3 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v3->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1C2D6EC(0, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_3376B2C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  return SignedData__RefillSigningData(maxCount, method);
}


void SignedData_SignedPackData___ctor(SignedData_SignedPackData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SignedData___c__DisplayClass5_0___ctor(SignedData___c__DisplayClass5_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SignedData___c__DisplayClass5_0___RefillSigningData_b__0(
        SignedData___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  int32_t maxCount; // w19

  if ( (byte_4C25120 & 1) == 0 )
  {
    sub_1C2D490(&SignedData_TypeInfo);
    byte_4C25120 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}