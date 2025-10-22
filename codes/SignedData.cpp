void SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C54B7C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_1C3E564(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_1C3E564(&SignedData_TypeInfo);
    byte_4C54B7C = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C3E7B0(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_33A0880 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C3E7B0(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_33A0880 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST, (int32_t)v4, v6, v7);
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
  System_Byte_array *Bytes_64685716; // x21
  System_Text_StringBuilder_o *v6; // x19
  _QWORD **appended; // x0
  __int64 v8; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v11; // w24
  __int64 v12; // x26
  __int64 v13; // x8
  __int64 v14; // x26
  __int64 v15; // x8
  unsigned __int64 v16; // x27
  signed int v17; // w9
  char v18; // w29
  uint8_t v19; // w20
  uint16_t v20; // w0
  __int64 v21; // x21
  int32_t v22; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  __int64 v27; // x1
  SignedData_c *v28; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v31; // w0
  int v32; // w25
  const MethodInfo *v33; // x2
  System_String_o *v34; // x22
  __int64 v35; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v47; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v50; // w25
  const MethodInfo *v51; // x2
  System_String_o *v52; // x22
  __int64 v53; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v63; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v65; // x9
  int32_t *p_offset; // x10
  __int64 v67; // x0
  System_Guid_o v69; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v71; // 0:x0.16
  System_Guid_o v72; // 0:x0.16

  if ( (byte_4C54B7A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_1C3E564(&SignedData_TypeInfo);
    sub_1C3E564(&SignedData_SignedPackData_TypeInfo);
    sub_1C3E564(&SignedValue_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_12034/*"SHA256"*/);
    sub_1C3E564(&StringLiteral_1557/*"<RSAKeyValue><Modulus>"*/);
    sub_1C3E564(&StringLiteral_1507/*"</D></RSAKeyValue>"*/);
    byte_4C54B7A = 1;
  }
  *(_QWORD *)&v69.fields._a = 0;
  *(_QWORD *)&v69.fields._d = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
  Bytes_64685716 = System_BitConverter__GetBytes_64685716(v4->static_fields->exist, 0);
  v6 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  if ( !v6
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_63721532(v6, (System_String_o *)StringLiteral_1557/*"<RSAKeyValue><Modulus>"*/, 0),
        (io = SignedValue_TypeInfo->static_fields->io) == 0) )
  {
LABEL_70:
    sub_1C3E7C0(appended, v8);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v12 = io->m_Items[v11];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v13 = *appended[23];
      if ( !v13 )
        goto LABEL_70;
      if ( (unsigned int)v12 >= *(_DWORD *)(v13 + 24) )
        goto LABEL_69;
      v14 = *(_QWORD *)(v13 + 8 * v12 + 32);
      if ( !v14 )
        goto LABEL_70;
      v15 = *(_QWORD *)(v14 + 24);
      if ( (int)v15 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_30;
    }
    v16 = 0;
    while ( v16 < (unsigned int)v15 )
    {
      if ( !Bytes_64685716 )
        goto LABEL_70;
      v17 = Bytes_64685716->max_length;
      if ( (int)v16 % v17 >= (unsigned int)v17 )
        break;
      v18 = *(_BYTE *)(v14 + 32 + v16);
      v19 = Bytes_64685716->m_Items[(int)v16 % v17];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v20 = System_Convert__ToChar_64699112(v19 ^ v18, 0);
      appended = (_QWORD **)System_Text_StringBuilder__Append_63723860(v6, v20, 0);
      LODWORD(v15) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1C3E7C8(appended, v8);
  }
LABEL_30:
  System_Text_StringBuilder__Append_63721532(v6, (System_String_o *)StringLiteral_1507/*"</D></RSAKeyValue>"*/, 0);
  v21 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
          v6,
          v6->klass->vtable._3_ToString.method);
  if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
  {
    v22 = 0;
    do
      System_Text_StringBuilder__set_Chars(v6, v22++, 0x61u, 0);
    while ( v22 < System_Text_StringBuilder__get_Length(v6, 0) );
  }
  v23 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1C3E7B0(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v23, 0);
  if ( !v23 )
    sub_1C3E7C0(v24, v25);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, const MethodInfo *))v23->klass->vtable._8_FromXmlString.methodPtr)(
    v23,
    v21,
    v23->klass->vtable._8_FromXmlString.method);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v26 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_12034/*"SHA256"*/, 0);
  System_String__IsNullOrEmpty(v26, 0);
  v28 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( userIdNumber < 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v28 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v28->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1C3E7C0(0, v27);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_33A0E50 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v50 = maxCount - Count;
      do
      {
        v69 = System_Guid__NewGuid(0);
        *(_QWORD *)&v72.fields._a = &v69;
        *(_QWORD *)&v72.fields._d = 0;
        v52 = System_Guid__ToString(v72, v51);
        v53 = sub_1C3E7B0(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v53, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v52, 0);
        if ( !v53 )
          sub_1C3E7C0(v54, v54);
        *(_QWORD *)(v53 + 16) = v54;
        sub_1C3E508((CGThumbnailListItem_o *)(v53 + 16), (int32_t)v54, v55, v56);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v23, v26, v52, v57);
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0);
        *(_QWORD *)(v53 + 24) = v59;
        sub_1C3E508((CGThumbnailListItem_o *)(v53 + 24), (int32_t)v59, v60, v61);
        v63 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v63 )
          sub_1C3E7C0(0, v62);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v63,
          (Il2CppObject *)v53,
          (const MethodInfo_33A1A50 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v50;
      }
      while ( v50 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v28 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v28->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1C3E7C0(0, v27);
    v31 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_33A0E50 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v31 < maxCount )
    {
      v32 = maxCount - v31;
      do
      {
        v69 = System_Guid__NewGuid(0);
        *(_QWORD *)&v71.fields._a = &v69;
        *(_QWORD *)&v71.fields._d = 0;
        v34 = System_Guid__ToString(v71, v33);
        v35 = sub_1C3E7B0(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v35, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v34, 0);
        if ( !v35 )
          sub_1C3E7C0(v36, v36);
        *(_QWORD *)(v35 + 16) = v36;
        sub_1C3E508((CGThumbnailListItem_o *)(v35 + 16), (int32_t)v36, v37, v38);
        v39 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        v41 = System_String__Concat_63636468(v39, v34, 0);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v42 = SignedData__MakeSignedData(v23, v26, v41, v40);
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v42, 0);
        *(_QWORD *)(v35 + 24) = v43;
        sub_1C3E508((CGThumbnailListItem_o *)(v35 + 24), (int32_t)v43, v44, v45);
        v47 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v47 )
          sub_1C3E7C0(0, v46);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v47,
          (Il2CppObject *)v35,
          (const MethodInfo_33A1A50 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v32;
      }
      while ( v32 );
    }
  }
  klass = v23->klass;
  v65 = *(unsigned __int16 *)&v23->klass->_2.rank;
  if ( *(_WORD *)&v23->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      p_offset += 4;
      if ( !v65 )
        goto LABEL_66;
    }
    v67 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_66:
    v67 = sub_1C8ED7C(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v67)(
    v23,
    *(_QWORD *)(v67 + 8));
}


bool SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  SignedData_c *v4; // x8
  int64_t userIdNumber; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x0

  if ( (byte_4C54B77 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&SignedData_TypeInfo);
    byte_4C54B77 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
               (const MethodInfo_33A1CEC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1C3E7C0(v7, method);
  }
  v7 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v7,
           (Il2CppObject **)outData,
           (const MethodInfo_33A1CEC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4C54B7B & 1) == 0 )
  {
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&StringLiteral_9443/*"No Algorithm"*/);
    byte_4C54B7B = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0) )
    return (System_String_o *)StringLiteral_9443/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C3E7C0(0, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !signProvider )
    sub_1C3E7C0(v10, v10);
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

  if ( (byte_4C54B78 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C3E564(&SignedData_TypeInfo);
    sub_1C3E564(&System_Threading_Tasks_Task_TypeInfo);
    sub_1C3E564(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_1C3E564(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_4C54B78 = 1;
  }
  v3 = sub_1C3E7B0(SignedData___c__DisplayClass5_0_TypeInfo);
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
    sub_1C3E7C0(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_33A0E50 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0;
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C54B79 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C3E564(&SignedData_TypeInfo);
    byte_4C54B79 = 1;
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
      sub_1C3E7C0(0, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_33A1CEC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4C54B7D & 1) == 0 )
  {
    sub_1C3E564(&SignedData_TypeInfo);
    byte_4C54B7D = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}