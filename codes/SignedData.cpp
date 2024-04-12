void __fastcall SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42B0CF7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_B52984(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_B52984(&SignedData_TypeInfo);
    byte_42B0CF7 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)sub_B52A54(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData____ctor(
    v1,
    (const MethodInfo_23D42EC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = (BattleServantConfConponent_o *)SignedData_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  SignedValue_c *v2; // x8
  int32_t exist; // w20
  System_Byte_array *Bytes_40259308; // x21
  System_Text_StringBuilder_o *v5; // x20
  _QWORD **appended; // x0
  __int64 v7; // x1
  struct System_Int32_array *io; // x22
  int max_length; // w8
  unsigned int v10; // w23
  __int64 v11; // x25
  __int64 v12; // x8
  __int64 v13; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  signed int v16; // w9
  char v17; // w28
  uint8_t v18; // w19
  uint16_t v19; // w0
  __int64 v20; // x21
  int32_t v21; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  __int64 v26; // x1
  SignedData_c *v27; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  __int64 v29; // x3
  int32_t i; // w22
  const MethodInfo *v31; // x2
  System_String_o *v32; // x24
  __int64 v33; // x23
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x3
  System_String_o *v42; // x0
  System_String_o *SignedData; // x24
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v52; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  unsigned __int64 v54; // x10
  int32_t *p_offset; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  System_Guid_o v59; // [xsp+18h] [xbp-68h] BYREF
  int64_t UserId; // [xsp+28h] [xbp-58h] BYREF
  System_Guid_o v61; // 0:x0.16

  if ( (byte_42B0CF5 & 1) == 0 )
  {
    sub_B52984(&System_BitConverter_TypeInfo);
    sub_B52984(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_B52984(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&System_Guid_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_B52984(&SignedData_TypeInfo);
    sub_B52984(&SignedData_SignedPackData_TypeInfo);
    sub_B52984(&SignedValue_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_12167/*"SHA256"*/);
    sub_B52984(&StringLiteral_1355/*"<RSAKeyValue><Modulus>"*/);
    sub_B52984(&StringLiteral_1308/*"</D></RSAKeyValue>"*/);
    byte_42B0CF5 = 1;
  }
  UserId = 0LL;
  v59 = (System_Guid_o)0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v2 = SignedValue_TypeInfo;
  if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v2 = SignedValue_TypeInfo;
  }
  exist = v2->static_fields->exist;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_40259308 = System_BitConverter__GetBytes_40259308(exist, 0LL);
  v5 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  if ( !v5
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_42994048(v5, (System_String_o *)StringLiteral_1355/*"<RSAKeyValue><Modulus>"*/, 0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_67:
    sub_B52A5C(appended, v7);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_66;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v11 = io->m_Items[v10 + 1];
      if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v12 = *appended[23];
      if ( !v12 )
        goto LABEL_67;
      if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_66;
      v13 = *(_QWORD *)(v12 + 8 * v11 + 32);
      if ( !v13 )
        goto LABEL_67;
      v14 = *(_QWORD *)(v13 + 24);
      if ( (int)v14 >= 1 )
        break;
LABEL_32:
      max_length = io->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_33;
    }
    v15 = 0LL;
    while ( v15 < (unsigned int)v14 )
    {
      if ( !Bytes_40259308 )
        goto LABEL_67;
      v16 = Bytes_40259308->max_length;
      if ( (int)v15 % v16 >= (unsigned int)v16 )
        break;
      v17 = *(_BYTE *)(v13 + 32 + v15);
      v18 = Bytes_40259308->m_Items[(int)v15 % v16 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v19 = System_Convert__ToChar_42681648(v18 ^ v17, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_42997292(v5, v19, 0LL);
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_32;
    }
LABEL_66:
    v57 = sub_B52A88(appended);
    sub_B52A28(v57, 0LL);
  }
LABEL_33:
  System_Text_StringBuilder__Append_42994048(v5, (System_String_o *)StringLiteral_1308/*"</D></RSAKeyValue>"*/, 0LL);
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
  v22 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_B52A54(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v22, 0LL);
  if ( !v22 )
    sub_B52A5C(v23, v24);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v22->klass->vtable._11_FromXmlString.method)(
    v22,
    v20,
    v22->klass->vtable._12_ToXmlString.methodPtr);
  v25 = System_Security_Cryptography_CryptoConfig__MapNameToOID_42736188((System_String_o *)StringLiteral_12167/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v25, 0LL);
  v27 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v27 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v27->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
    sub_B52A5C(0LL, v26);
  for ( i = System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
              SIGNED_PACK_QUEUE,
              (const MethodInfo_23D491C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
        i < maxCount;
        ++i )
  {
    if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
    v59 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v61.fields._a = &v59;
    *(_QWORD *)&v61.fields._d = 0LL;
    v32 = System_Guid__ToString(v61, v31);
    v33 = sub_B52A54(SignedData_SignedPackData_TypeInfo);
    SignedData_SignedPackData___ctor((SignedData_SignedPackData_o *)v33, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v34 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v32, 0LL);
    if ( !v33 )
      sub_B52A5C(v34, v34);
    *(_QWORD *)(v33 + 16) = v34;
    sub_B52920((BattleServantConfConponent_o *)(v33 + 16), v34, v35, v36, v37, v38, v39, v40);
    if ( (UserId & 0x8000000000000000LL) == 0 )
    {
      v42 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v32 = System_String__Concat_44568316(v42, v32, 0LL);
    }
    if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData = SignedData__MakeSignedData(v22, v25, v32, v41);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v44 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
    *(_QWORD *)(v33 + 24) = v44;
    sub_B52920((BattleServantConfConponent_o *)(v33 + 24), v44, v45, v46, v47, v48, v49, v50);
    v52 = SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
    if ( !v52 )
      sub_B52A5C(0LL, v51);
    System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___Enqueue(
      v52,
      (SignedData_SignedPackData_o *)v33,
      (const MethodInfo_23D55AC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
  }
  klass = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      p_offset += 4;
      if ( v54 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_63;
    }
    v56 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_63:
    v56 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v56)(
    v22,
    *(_QWORD *)(v56 + 8));
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

  if ( (byte_42B0CF6 & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&StringLiteral_9525/*"No Algorithm"*/);
    byte_42B0CF6 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9525/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B52A5C(0LL, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !signProvider )
    sub_B52A5C(v10, v10);
  v11 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v10,
          (Il2CppObject *)hashAlgorithm,
          0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String(v11, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  SignedData___c__DisplayClass3_0_o *v3; // x19
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  __int64 v5; // x1
  SignedData_c *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_42B0CF3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_B52984(&SignedData_TypeInfo);
    sub_B52984(&System_Threading_Tasks_Task_TypeInfo);
    sub_B52984(&Method_SignedData___c__DisplayClass3_0__RefillSigningData_b__0__);
    sub_B52984(&SignedData___c__DisplayClass3_0_TypeInfo);
    byte_42B0CF3 = 1;
  }
  v3 = (SignedData___c__DisplayClass3_0_o *)sub_B52A54(SignedData___c__DisplayClass3_0_TypeInfo);
  SignedData___c__DisplayClass3_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  v3->fields.maxCount = maxCount;
  v6 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v6 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v6->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_14:
    sub_B52A5C(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_23D491C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= v3->fields.maxCount )
    return 0LL;
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v3, Method_SignedData___c__DisplayClass3_0__RefillSigningData_b__0__, 0LL);
  if ( (BYTE3(System_Threading_Tasks_Task_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  }
  return System_Threading_Tasks_Task__Run(v7, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  SignedData_c *v3; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  SignedData_SignedPackData_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B0CF4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_B52984(&SignedData_TypeInfo);
    byte_42B0CF4 = 1;
  }
  result = 0LL;
  do
  {
    v3 = SignedData_TypeInfo;
    if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v3 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = v3->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_B52A5C(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_23D5868 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  return SignedData__RefillSigningData(maxCount, method);
}


void __fastcall SignedData_SignedPackData___ctor(SignedData_SignedPackData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData___c__DisplayClass3_0___ctor(
        SignedData___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData___c__DisplayClass3_0___RefillSigningData_b__0(
        SignedData___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int32_t maxCount; // w19

  if ( (byte_42AD3C2 & 1) == 0 )
  {
    sub_B52984(&SignedData_TypeInfo);
    byte_42AD3C2 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, 0LL);
}