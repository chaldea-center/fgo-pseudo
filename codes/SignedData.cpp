void SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C40DDF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_1C37058(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C40DDF = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C372A4(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_338E9C8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C372A4(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_338E9C8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST, (int32_t)v4, v6, v7);
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
  System_Byte_array *Bytes_64610904; // x21
  System_Text_StringBuilder_o *v6; // x19
  _QWORD **appended; // x0
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v10; // w24
  __int64 v11; // x26
  __int64 v12; // x8
  __int64 v13; // x26
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  signed int v16; // w9
  char v17; // w29
  uint8_t v18; // w20
  uint16_t v19; // w0
  __int64 v20; // x21
  int32_t v21; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v22; // x19
  __int64 v23; // x0
  System_String_o *v24; // x21
  SignedData_c *v25; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v28; // w0
  int v29; // w25
  const MethodInfo *v30; // x2
  System_String_o *v31; // x22
  __int64 v32; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *v38; // x22
  System_String_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v43; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v46; // w25
  const MethodInfo *v47; // x2
  System_String_o *v48; // x22
  __int64 v49; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v58; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v60; // x9
  int32_t *p_offset; // x10
  __int64 v62; // x0
  System_Guid_o v64; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v66; // 0:x0.16
  System_Guid_o v67; // 0:x0.16

  if ( (byte_4C40DDD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    sub_1C37058(&SignedData_SignedPackData_TypeInfo);
    sub_1C37058(&SignedValue_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_12032/*"SHA256"*/);
    sub_1C37058(&StringLiteral_1558/*"<RSAKeyValue><Modulus>"*/);
    sub_1C37058(&StringLiteral_1508/*"</D></RSAKeyValue>"*/);
    byte_4C40DDD = 1;
  }
  *(_QWORD *)&v64.fields._a = 0;
  *(_QWORD *)&v64.fields._d = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  Bytes_64610904 = System_BitConverter__GetBytes_64610904(v4->static_fields->exist, 0);
  v6 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  if ( !v6
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_63646720(v6, (System_String_o *)StringLiteral_1558/*"<RSAKeyValue><Modulus>"*/, 0),
        (io = SignedValue_TypeInfo->static_fields->io) == 0) )
  {
LABEL_70:
    sub_1C372B4(appended);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v11 = io->m_Items[v10];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v12 = *appended[23];
      if ( !v12 )
        goto LABEL_70;
      if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_69;
      v13 = *(_QWORD *)(v12 + 8 * v11 + 32);
      if ( !v13 )
        goto LABEL_70;
      v14 = *(_QWORD *)(v13 + 24);
      if ( (int)v14 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_30;
    }
    v15 = 0;
    while ( v15 < (unsigned int)v14 )
    {
      if ( !Bytes_64610904 )
        goto LABEL_70;
      v16 = Bytes_64610904->max_length;
      if ( (int)v15 % v16 >= (unsigned int)v16 )
        break;
      v17 = *(_BYTE *)(v13 + 32 + v15);
      v18 = Bytes_64610904->m_Items[(int)v15 % v16];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v19 = System_Convert__ToChar_64624300(v18 ^ v17, 0);
      appended = (_QWORD **)System_Text_StringBuilder__Append_63649048(v6, v19, 0);
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1C372BC(appended);
  }
LABEL_30:
  System_Text_StringBuilder__Append_63646720(v6, (System_String_o *)StringLiteral_1508/*"</D></RSAKeyValue>"*/, 0);
  v20 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
          v6,
          v6->klass->vtable._3_ToString.method);
  if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
  {
    v21 = 0;
    do
      System_Text_StringBuilder__set_Chars(v6, v21++, 0x61u, 0);
    while ( v21 < System_Text_StringBuilder__get_Length(v6, 0) );
  }
  v22 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v22, 0);
  if ( !v22 )
    sub_1C372B4(v23);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, const MethodInfo *))v22->klass->vtable._8_FromXmlString.methodPtr)(
    v22,
    v20,
    v22->klass->vtable._8_FromXmlString.method);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v24 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_12032/*"SHA256"*/, 0);
  System_String__IsNullOrEmpty(v24, 0);
  v25 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( userIdNumber < 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v25 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v25->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1C372B4(0);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_338EF98 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v46 = maxCount - Count;
      do
      {
        v64 = System_Guid__NewGuid(0);
        *(_QWORD *)&v67.fields._a = &v64;
        *(_QWORD *)&v67.fields._d = 0;
        v48 = System_Guid__ToString(v67, v47);
        v49 = sub_1C372A4(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v48, 0);
        if ( !v49 )
          sub_1C372B4(v50);
        *(_QWORD *)(v49 + 16) = v50;
        sub_1C36FFC((CGThumbnailListItem_o *)(v49 + 16), (int32_t)v50, v51, v52);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v22, v24, v48, v53);
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0);
        *(_QWORD *)(v49 + 24) = v55;
        sub_1C36FFC((CGThumbnailListItem_o *)(v49 + 24), (int32_t)v55, v56, v57);
        v58 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v58 )
          sub_1C372B4(0);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v58,
          (Il2CppObject *)v49,
          (const MethodInfo_338FB98 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v46;
      }
      while ( v46 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v25 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v25->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1C372B4(0);
    v28 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_338EF98 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v28 < maxCount )
    {
      v29 = maxCount - v28;
      do
      {
        v64 = System_Guid__NewGuid(0);
        *(_QWORD *)&v66.fields._a = &v64;
        *(_QWORD *)&v66.fields._d = 0;
        v31 = System_Guid__ToString(v66, v30);
        v32 = sub_1C372A4(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v32, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v31, 0);
        if ( !v32 )
          sub_1C372B4(v33);
        *(_QWORD *)(v32 + 16) = v33;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 16), (int32_t)v33, v34, v35);
        v36 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        v38 = System_String__Concat_63561656(v36, v31, 0);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v39 = SignedData__MakeSignedData(v22, v24, v38, v37);
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v39, 0);
        *(_QWORD *)(v32 + 24) = v40;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 24), (int32_t)v40, v41, v42);
        v43 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v43 )
          sub_1C372B4(0);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v43,
          (Il2CppObject *)v32,
          (const MethodInfo_338FB98 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v29;
      }
      while ( v29 );
    }
  }
  klass = v22->klass;
  v60 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      p_offset += 4;
      if ( !v60 )
        goto LABEL_66;
    }
    v62 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_66:
    v62 = sub_1C87870(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v62)(
    v22,
    *(_QWORD *)(v62 + 8));
}


bool SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  SignedData_c *v4; // x8
  int64_t userIdNumber; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x0

  if ( (byte_4C40DDA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C40DDA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
               (const MethodInfo_338FE34 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1C372B4(v7);
  }
  v7 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v7,
           (Il2CppObject **)outData,
           (const MethodInfo_338FE34 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v9; // x0
  System_Byte_array *v10; // x19

  if ( (byte_4C40DDE & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&StringLiteral_9443/*"No Algorithm"*/);
    byte_4C40DDE = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0) )
    return (System_String_o *)StringLiteral_9443/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C372B4(0);
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                              UTF8,
                              idempotencyKey,
                              UTF8->klass->vtable._18_GetBytes.method);
  if ( !signProvider )
    sub_1C372B4(v9);
  v10 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v9,
          (Il2CppObject *)hashAlgorithm,
          0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v10, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  SignedData_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C40DDB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C37058(&SignedData_TypeInfo);
    sub_1C37058(&System_Threading_Tasks_Task_TypeInfo);
    sub_1C37058(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_1C37058(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_4C40DDB = 1;
  }
  v3 = sub_1C372A4(SignedData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_12;
  *(_DWORD *)(v3 + 16) = maxCount;
  v5 = SignedData_TypeInfo;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v5 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v5->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_1C372B4(SIGNED_PACK_QUEUE);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_338EF98 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v3, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  return System_Threading_Tasks_Task__Run(v6, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  SignedData_c *v3; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C40DDC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C40DDC = 1;
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
      sub_1C372B4(0);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_338FE34 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  return SignedData__RefillSigningData(maxCount, v5);
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

  if ( (byte_4C40DE0 & 1) == 0 )
  {
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C40DE0 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}