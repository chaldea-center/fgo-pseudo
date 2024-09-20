void __fastcall SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5927B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_1B885B0(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A5927B = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B887FC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_310C608 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B887FC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_310C608 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int32_t)v4,
    v6,
    v7);
}


void __fastcall SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  int64_t UserId; // x0
  SignedValue_c *v3; // x8
  System_Byte_array *Bytes_62323324; // x21
  System_Text_StringBuilder_o *v5; // x19
  _QWORD **appended; // x0
  __int64 v7; // x1
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
  __int64 v24; // x1
  System_String_o *v25; // x21
  __int64 v26; // x1
  SignedData_c *v27; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v30; // w0
  int v31; // w25
  const MethodInfo *v32; // x2
  System_String_o *v33; // x22
  __int64 v34; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  System_String_o *v40; // x22
  System_String_o *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v46; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v49; // w25
  const MethodInfo *v50; // x2
  System_String_o *v51; // x22
  __int64 v52; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v62; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 v66; // x0
  System_Guid_o v68; // [xsp+8h] [xbp-78h] BYREF
  int64_t v69; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v70; // 0:x0.16
  System_Guid_o v71; // 0:x0.16

  if ( (byte_4A59279 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    sub_1B885B0(&SignedData_SignedPackData_TypeInfo);
    sub_1B885B0(&SignedValue_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_11973/*"SHA256"*/);
    sub_1B885B0(&StringLiteral_1658/*"<RSAKeyValue><Modulus>"*/);
    sub_1B885B0(&StringLiteral_1609/*"</D></RSAKeyValue>"*/);
    byte_4A59279 = 1;
  }
  v68 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v3 = SignedValue_TypeInfo;
  v69 = UserId;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v3 = SignedValue_TypeInfo;
  }
  Bytes_62323324 = System_BitConverter__GetBytes_62323324(v3->static_fields->exist, 0LL);
  v5 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  if ( !v5
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_60868928(v5, (System_String_o *)StringLiteral_1658/*"<RSAKeyValue><Modulus>"*/, 0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_66:
    sub_1B8880C(appended, v7);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_65;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v11 = io->m_Items[v10 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v12 = *appended[23];
      if ( !v12 )
        goto LABEL_66;
      if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_65;
      v13 = *(_QWORD *)(v12 + 8 * v11 + 32);
      if ( !v13 )
        goto LABEL_66;
      v14 = *(_QWORD *)(v13 + 24);
      if ( (int)v14 >= 1 )
        break;
LABEL_25:
      max_length = io->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_26;
    }
    v15 = 0LL;
    while ( v15 < (unsigned int)v14 )
    {
      if ( !Bytes_62323324 )
        goto LABEL_66;
      v16 = Bytes_62323324->max_length;
      if ( (int)v15 % v16 >= (unsigned int)v16 )
        break;
      v17 = *(_BYTE *)(v13 + 32 + v15);
      v18 = Bytes_62323324->m_Items[(int)v15 % v16 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v19 = System_Convert__ToChar_62336900(v18 ^ v17, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_60871256(v5, v19, 0LL);
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_25;
    }
LABEL_65:
    sub_1B88814(appended, v7);
  }
LABEL_26:
  System_Text_StringBuilder__Append_60868928(v5, (System_String_o *)StringLiteral_1609/*"</D></RSAKeyValue>"*/, 0LL);
  v20 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
          v5,
          v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v5, 0LL) >= 1 )
  {
    v21 = 0;
    do
      System_Text_StringBuilder__set_Chars(v5, v21++, 0x61u, 0LL);
    while ( v21 < System_Text_StringBuilder__get_Length(v5, 0LL) );
  }
  v22 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1B887FC(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v22, 0LL);
  if ( !v22 )
    sub_1B8880C(v23, v24);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v22->klass->vtable._11_FromXmlString.method)(
    v22,
    v20,
    v22->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v25 = System_Security_Cryptography_CryptoConfig__MapNameToOID_61182048((System_String_o *)StringLiteral_11973/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v25, 0LL);
  v27 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (v69 & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v27 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v27->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1B8880C(0LL, v26);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_310CBD8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v49 = maxCount - Count;
      do
      {
        v68 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v71.fields._a = &v68;
        *(_QWORD *)&v71.fields._d = 0LL;
        v51 = System_Guid__ToString(v71, v50);
        v52 = sub_1B887FC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v52, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v51, 0LL);
        if ( !v52 )
          sub_1B8880C(v53, v53);
        *(_QWORD *)(v52 + 16) = v53;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 16), (int32_t)v53, v54, v55);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v22, v25, v51, v56);
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v52 + 24) = v58;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 24), (int32_t)v58, v59, v60);
        v62 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v62 )
          sub_1B8880C(0LL, v61);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v62,
          (Il2CppObject *)v52,
          (const MethodInfo_310D7D8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v49;
      }
      while ( v49 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v27 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v27->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1B8880C(0LL, v26);
    v30 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_310CBD8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v30 < maxCount )
    {
      v31 = maxCount - v30;
      do
      {
        v68 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v70.fields._a = &v68;
        *(_QWORD *)&v70.fields._d = 0LL;
        v33 = System_Guid__ToString(v70, v32);
        v34 = sub_1B887FC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v34, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v33, 0LL);
        if ( !v34 )
          sub_1B8880C(v35, v35);
        *(_QWORD *)(v34 + 16) = v35;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)v35, v36, v37);
        v38 = System_Int64__ToString((int64_t)&v69, 0LL);
        v40 = System_String__Concat_61707032(v38, v33, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v41 = SignedData__MakeSignedData(v22, v25, v40, v39);
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v41, 0LL);
        *(_QWORD *)(v34 + 24) = v42;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 24), (int32_t)v42, v43, v44);
        v46 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v46 )
          sub_1B8880C(0LL, v45);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v46,
          (Il2CppObject *)v34,
          (const MethodInfo_310D7D8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v31;
      }
      while ( v31 );
    }
  }
  klass = v22->klass;
  v64 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      p_offset += 4;
      if ( !v64 )
        goto LABEL_62;
    }
    v66 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_62:
    v66 = sub_1BDA590(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v66)(
    v22,
    *(_QWORD *)(v66 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  int64_t UserId; // x0
  __int64 v4; // x1
  SignedData_c *v5; // x8
  int64_t v6; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v8; // x0

  if ( (byte_4A59276 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A59276 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v5 = SignedData_TypeInfo;
  v6 = UserId;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v5 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v5->static_fields;
  if ( (v6 & 0x8000000000000000LL) != 0 )
  {
    v8 = static_fields[1];
    if ( v8 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v8,
               (Il2CppObject **)outData,
               (const MethodInfo_310DA74 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_11:
    sub_1B8880C(v8, v4);
  }
  v8 = *static_fields;
  if ( !*static_fields )
    goto LABEL_11;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v8,
           (Il2CppObject **)outData,
           (const MethodInfo_310DA74 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *__fastcall SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x0
  System_Byte_array *v11; // x19

  if ( (byte_4A5927A & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&StringLiteral_9415/*"No Algorithm"*/);
    byte_4A5927A = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9415/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B8880C(0LL, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1B8880C(v10, v10);
  v11 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v10,
          (Il2CppObject *)hashAlgorithm,
          0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v11, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  __int64 v5; // x1
  SignedData_c *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A59277 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1B885B0(&SignedData_TypeInfo);
    sub_1B885B0(&System_Threading_Tasks_Task_TypeInfo);
    sub_1B885B0(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_1B885B0(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_4A59277 = 1;
  }
  v3 = sub_1B887FC(SignedData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
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
    sub_1B8880C(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_310CBD8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0LL;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v3, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0LL);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  return System_Threading_Tasks_Task__Run(v7, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  SignedData_c *v3; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A59278 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A59278 = 1;
  }
  result = 0LL;
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
      sub_1B8880C(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_310DA74 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4A5927C & 1) == 0 )
  {
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A5927C = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}