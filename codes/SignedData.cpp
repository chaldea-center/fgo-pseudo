void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A6DF7F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_1B90010(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v2);
    sub_1B90010(&SignedData_TypeInfo, v3);
    byte_4A6DF7F = 1;
  }
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B9025C(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_311B27C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B9025C(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v7,
    (const MethodInfo_311B27C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v7;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int32_t)v7,
    v9,
    v10);
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
  int64_t UserId; // x0
  SignedValue_c *v17; // x8
  System_Byte_array *Bytes_62403384; // x21
  System_Text_StringBuilder_o *v19; // x19
  _QWORD **appended; // x0
  __int64 v21; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v24; // w24
  __int64 v25; // x26
  __int64 v26; // x8
  __int64 v27; // x26
  __int64 v28; // x8
  unsigned __int64 v29; // x27
  signed int v30; // w9
  char v31; // w29
  uint8_t v32; // w20
  uint16_t v33; // w0
  __int64 v34; // x21
  int32_t v35; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x21
  __int64 v40; // x1
  SignedData_c *v41; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v44; // w0
  int v45; // w25
  const MethodInfo *v46; // x2
  System_String_o *v47; // x22
  __int64 v48; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x0
  const MethodInfo *v53; // x3
  System_String_o *v54; // x22
  System_String_o *v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v60; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v63; // w25
  const MethodInfo *v64; // x2
  System_String_o *v65; // x22
  __int64 v66; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v76; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v78; // x9
  int32_t *p_offset; // x10
  __int64 v80; // x0
  System_Guid_o v82; // [xsp+8h] [xbp-78h] BYREF
  int64_t v83; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v84; // 0:x0.16
  System_Guid_o v85; // 0:x0.16

  if ( (byte_4A6DF7D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method);
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v2);
    sub_1B90010(&System_Convert_TypeInfo, v3);
    sub_1B90010(&System_Security_Cryptography_CryptoConfig_TypeInfo, v4);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_1B90010(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_1B90010(&SignedData_TypeInfo, v9);
    sub_1B90010(&SignedData_SignedPackData_TypeInfo, v10);
    sub_1B90010(&SignedValue_TypeInfo, v11);
    sub_1B90010(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B90010(&StringLiteral_11980/*"SHA256"*/, v13);
    sub_1B90010(&StringLiteral_1659/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_1B90010(&StringLiteral_1610/*"</D></RSAKeyValue>"*/, v15);
    byte_4A6DF7D = 1;
  }
  v82 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v17 = SignedValue_TypeInfo;
  v83 = UserId;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v17 = SignedValue_TypeInfo;
  }
  Bytes_62403384 = System_BitConverter__GetBytes_62403384(v17->static_fields->exist, 0LL);
  v19 = (System_Text_StringBuilder_o *)sub_1B9025C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  if ( !v19
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_60948988(
                                v19,
                                (System_String_o *)StringLiteral_1659/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_66:
    sub_1B9026C(appended, v21);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        goto LABEL_65;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v25 = io->m_Items[v24 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v26 = *appended[23];
      if ( !v26 )
        goto LABEL_66;
      if ( (unsigned int)v25 >= *(_DWORD *)(v26 + 24) )
        goto LABEL_65;
      v27 = *(_QWORD *)(v26 + 8 * v25 + 32);
      if ( !v27 )
        goto LABEL_66;
      v28 = *(_QWORD *)(v27 + 24);
      if ( (int)v28 >= 1 )
        break;
LABEL_25:
      max_length = io->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_26;
    }
    v29 = 0LL;
    while ( v29 < (unsigned int)v28 )
    {
      if ( !Bytes_62403384 )
        goto LABEL_66;
      v30 = Bytes_62403384->max_length;
      if ( (int)v29 % v30 >= (unsigned int)v30 )
        break;
      v31 = *(_BYTE *)(v27 + 32 + v29);
      v32 = Bytes_62403384->m_Items[(int)v29 % v30 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v33 = System_Convert__ToChar_62416960(v32 ^ v31, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_60951316(v19, v33, 0LL);
      LODWORD(v28) = *(_DWORD *)(v27 + 24);
      if ( (__int64)++v29 >= (int)v28 )
        goto LABEL_25;
    }
LABEL_65:
    sub_1B90274(appended, v21);
  }
LABEL_26:
  System_Text_StringBuilder__Append_60948988(v19, (System_String_o *)StringLiteral_1610/*"</D></RSAKeyValue>"*/, 0LL);
  v34 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v19->klass->vtable._3_ToString.method)(
          v19,
          v19->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v19, 0LL) >= 1 )
  {
    v35 = 0;
    do
      System_Text_StringBuilder__set_Chars(v19, v35++, 0x61u, 0LL);
    while ( v35 < System_Text_StringBuilder__get_Length(v19, 0LL) );
  }
  v36 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1B9025C(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v36, 0LL);
  if ( !v36 )
    sub_1B9026C(v37, v38);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v36->klass->vtable._11_FromXmlString.method)(
    v36,
    v34,
    v36->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v39 = System_Security_Cryptography_CryptoConfig__MapNameToOID_61262108((System_String_o *)StringLiteral_11980/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v39, 0LL);
  v41 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (v83 & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v41 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v41->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1B9026C(0LL, v40);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_311B84C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v63 = maxCount - Count;
      do
      {
        v82 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v85.fields._a = &v82;
        *(_QWORD *)&v85.fields._d = 0LL;
        v65 = System_Guid__ToString(v85, v64);
        v66 = sub_1B9025C(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v66, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v65, 0LL);
        if ( !v66 )
          sub_1B9026C(v67, v67);
        *(_QWORD *)(v66 + 16) = v67;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v66 + 16), (int32_t)v67, v68, v69);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v36, v39, v65, v70);
        v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v66 + 24) = v72;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v66 + 24), (int32_t)v72, v73, v74);
        v76 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v76 )
          sub_1B9026C(0LL, v75);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v76,
          (Il2CppObject *)v66,
          (const MethodInfo_311C44C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v63;
      }
      while ( v63 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v41 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v41->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1B9026C(0LL, v40);
    v44 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_311B84C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v44 < maxCount )
    {
      v45 = maxCount - v44;
      do
      {
        v82 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v84.fields._a = &v82;
        *(_QWORD *)&v84.fields._d = 0LL;
        v47 = System_Guid__ToString(v84, v46);
        v48 = sub_1B9025C(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v48, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v47, 0LL);
        if ( !v48 )
          sub_1B9026C(v49, v49);
        *(_QWORD *)(v48 + 16) = v49;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v48 + 16), (int32_t)v49, v50, v51);
        v52 = System_Int64__ToString((int64_t)&v83, 0LL);
        v54 = System_String__Concat_61787092(v52, v47, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v55 = SignedData__MakeSignedData(v36, v39, v54, v53);
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v55, 0LL);
        *(_QWORD *)(v48 + 24) = v56;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v48 + 24), (int32_t)v56, v57, v58);
        v60 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v60 )
          sub_1B9026C(0LL, v59);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v60,
          (Il2CppObject *)v48,
          (const MethodInfo_311C44C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v45;
      }
      while ( v45 );
    }
  }
  klass = v36->klass;
  v78 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      p_offset += 4;
      if ( !v78 )
        goto LABEL_62;
    }
    v80 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_62:
    v80 = sub_1BE1FF0(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v80)(
    v36,
    *(_QWORD *)(v80 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x0
  __int64 v6; // x1
  SignedData_c *v7; // x8
  int64_t v8; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v10; // x0

  if ( (byte_4A6DF7A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B90010(&NetworkManager_TypeInfo, v3);
    sub_1B90010(&SignedData_TypeInfo, v4);
    byte_4A6DF7A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v7 = SignedData_TypeInfo;
  v8 = UserId;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v7 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v7->static_fields;
  if ( (v8 & 0x8000000000000000LL) != 0 )
  {
    v10 = static_fields[1];
    if ( v10 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v10,
               (Il2CppObject **)outData,
               (const MethodInfo_311C6E8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_11:
    sub_1B9026C(v10, v6);
  }
  v10 = *static_fields;
  if ( !*static_fields )
    goto LABEL_11;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v10,
           (Il2CppObject **)outData,
           (const MethodInfo_311C6E8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4A6DF7E & 1) == 0 )
  {
    sub_1B90010(&System_Convert_TypeInfo, hashAlgorithm);
    sub_1B90010(&StringLiteral_9419/*"No Algorithm"*/, v7);
    byte_4A6DF7E = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9419/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B9026C(0LL, v10);
  v11 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1B9026C(v11, v11);
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

  if ( (byte_4A6DF7B & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3);
    sub_1B90010(&SignedData_TypeInfo, v4);
    sub_1B90010(&System_Threading_Tasks_Task_TypeInfo, v5);
    sub_1B90010(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v6);
    sub_1B90010(&SignedData___c__DisplayClass5_0_TypeInfo, v7);
    byte_4A6DF7B = 1;
  }
  v8 = sub_1B9025C(SignedData___c__DisplayClass5_0_TypeInfo);
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
    sub_1B9026C(SIGNED_PACK_QUEUE, v10);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_311B84C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v8 + 16) )
    return 0LL;
  v12 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  if ( (byte_4A6DF7C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B90010(&SignedData_TypeInfo, v3);
    byte_4A6DF7C = 1;
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
      sub_1B9026C(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_311C6E8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4A6DF80 & 1) == 0 )
  {
    sub_1B90010(&SignedData_TypeInfo, method);
    byte_4A6DF80 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}