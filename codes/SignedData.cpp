void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42154CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_B0D8A4(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v3);
    sub_B0D8A4(&SignedData_TypeInfo, v4);
    byte_42154CC = 1;
  }
  v5 = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)sub_B0D974(
                                                                                       System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo,
                                                                                       v1,
                                                                                       v2);
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData____ctor(
    v5,
    (const MethodInfo_265BBE8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = (BattleServantConfConponent_o *)SignedData_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  SignedValue_c *v16; // x0
  int32_t exist; // w20
  System_Byte_array *Bytes_39043880; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Text_StringBuilder_o *v21; // x20
  _QWORD **appended; // x0
  struct System_Int32_array *io; // x19
  int max_length; // w8
  unsigned int v25; // w23
  __int64 v26; // x25
  __int64 v27; // x8
  __int64 v28; // x25
  __int64 v29; // x8
  unsigned __int64 v30; // x26
  signed int v31; // w9
  char v32; // w28
  uint8_t v33; // w22
  uint16_t v34; // w0
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v39; // x20
  __int64 v40; // x0
  System_String_o *v41; // x21
  SignedData_c *v42; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  int32_t i; // w22
  const MethodInfo *v45; // x2
  System_String_o *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x23
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x3
  System_String_o *SignedData; // x0
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v66; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 v70; // x0
  __int64 v71; // x0
  System_Guid_o v73; // [xsp+10h] [xbp-60h] BYREF
  System_Guid_o v74; // 0:x0.16

  if ( (byte_42154CA & 1) == 0 )
  {
    sub_B0D8A4(&System_BitConverter_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, v2);
    sub_B0D8A4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3);
    sub_B0D8A4(&System_Convert_TypeInfo, v4);
    sub_B0D8A4(&System_Guid_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_B0D8A4(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_B0D8A4(&SignedData_TypeInfo, v9);
    sub_B0D8A4(&SignedData_SignedPackData_TypeInfo, v10);
    sub_B0D8A4(&SignedValue_TypeInfo, v11);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_12116/*"SHA256"*/, v13);
    sub_B0D8A4(&StringLiteral_1347/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_B0D8A4(&StringLiteral_1300/*"</D></RSAKeyValue>"*/, v15);
    byte_42154CA = 1;
  }
  v73 = (System_Guid_o)0LL;
  v16 = SignedValue_TypeInfo;
  if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v16 = SignedValue_TypeInfo;
  }
  exist = v16->static_fields->exist;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_39043880 = System_BitConverter__GetBytes_39043880(exist, 0LL);
  v21 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v19, v20);
  System_Text_StringBuilder___ctor(v21, 0LL);
  if ( !v21
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_42155400(
                                v21,
                                (System_String_o *)StringLiteral_1347/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_59:
    sub_B0D97C(appended);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        goto LABEL_58;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v26 = io->m_Items[v25 + 1];
      if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v27 = *appended[23];
      if ( !v27 )
        goto LABEL_59;
      if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_58;
      v28 = *(_QWORD *)(v27 + 8 * v26 + 32);
      if ( !v28 )
        goto LABEL_59;
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
      if ( !Bytes_39043880 )
        goto LABEL_59;
      v31 = Bytes_39043880->max_length;
      if ( (int)v30 % v31 >= (unsigned int)v31 )
        break;
      v32 = *(_BYTE *)(v28 + 32 + v30);
      v33 = Bytes_39043880->m_Items[(int)v30 % v31 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v34 = System_Convert__ToChar_41913016(v33 ^ v32, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_42158644(v21, v34, 0LL);
      LODWORD(v29) = *(_DWORD *)(v28 + 24);
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_29;
    }
LABEL_58:
    v71 = sub_B0D9A8(appended);
    sub_B0D948(v71, 0LL);
  }
LABEL_30:
  System_Text_StringBuilder__Append_42155400(v21, (System_String_o *)StringLiteral_1300/*"</D></RSAKeyValue>"*/, 0LL);
  v35 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
          v21,
          v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v21, 0LL) >= 1 )
  {
    v38 = 0;
    do
      System_Text_StringBuilder__set_Chars(v21, v38++, 0x61u, 0LL);
    while ( v38 < System_Text_StringBuilder__get_Length(v21, 0LL) );
  }
  v39 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_B0D974(
                                                                     System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,
                                                                     v36,
                                                                     v37);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v39, 0LL);
  if ( !v39 )
    sub_B0D97C(v40);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v39->klass->vtable._11_FromXmlString.method)(
    v39,
    v35,
    v39->klass->vtable._12_ToXmlString.methodPtr);
  v41 = System_Security_Cryptography_CryptoConfig__MapNameToOID_41967556((System_String_o *)StringLiteral_12116/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v41, 0LL);
  v42 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v42 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v42->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
    sub_B0D97C(0LL);
  for ( i = System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
              SIGNED_PACK_QUEUE,
              (const MethodInfo_265C218 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
        i < maxCount;
        ++i )
  {
    if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
    v73 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v74.fields._a = &v73;
    *(_QWORD *)&v74.fields._d = 0LL;
    v46 = System_Guid__ToString(v74, v45);
    v49 = sub_B0D974(SignedData_SignedPackData_TypeInfo, v47, v48);
    SignedData_SignedPackData___ctor((SignedData_SignedPackData_o *)v49, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v50 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v46, 0LL);
    if ( !v49 )
      sub_B0D97C(v50);
    *(_QWORD *)(v49 + 16) = v50;
    sub_B0D840((BattleServantConfConponent_o *)(v49 + 16), v50, v51, v52, v53, v54, v55, v56);
    if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData = SignedData__MakeSignedData(v39, v41, v46, v57);
    v59 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
    *(_QWORD *)(v49 + 24) = v59;
    sub_B0D840((BattleServantConfConponent_o *)(v49 + 24), v59, v60, v61, v62, v63, v64, v65);
    v66 = SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
    if ( !v66 )
      sub_B0D97C(0LL);
    System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___Enqueue(
      v66,
      (SignedData_SignedPackData_o *)v49,
      (const MethodInfo_265CEA8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
  }
  klass = v39->klass;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v68;
      p_offset += 4;
      if ( v68 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_55:
    v70 = sub_AA67A0(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v70)(
    v39,
    *(_QWORD *)(v70 + 8));
}


System_String_o *__fastcall SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v10; // x0
  System_Byte_array *v11; // x19

  if ( (byte_42154CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, hashAlgorithm);
    sub_B0D8A4(&StringLiteral_9491/*"No Algorithm"*/, v7);
    byte_42154CB = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9491/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B0D97C(0LL);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !signProvider )
    sub_B0D97C(v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SignedData___c__DisplayClass3_0_o *v9; // x19
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  SignedData_c *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20

  if ( (byte_42154C9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v4);
    sub_B0D8A4(&SignedData_TypeInfo, v5);
    sub_B0D8A4(&System_Threading_Tasks_Task_TypeInfo, v6);
    sub_B0D8A4(&Method_SignedData___c__DisplayClass3_0__RefillSigningData_b__0__, v7);
    sub_B0D8A4(&SignedData___c__DisplayClass3_0_TypeInfo, v8);
    byte_42154C9 = 1;
  }
  v9 = (SignedData___c__DisplayClass3_0_o *)sub_B0D974(SignedData___c__DisplayClass3_0_TypeInfo, method, v2);
  SignedData___c__DisplayClass3_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v9->fields.maxCount = maxCount;
  v11 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v11 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v11->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_14:
    sub_B0D97C(SIGNED_PACK_QUEUE);
  if ( System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_265C218 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= v9->fields.maxCount )
    return 0LL;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v9, Method_SignedData___c__DisplayClass3_0__RefillSigningData_b__0__, 0LL);
  if ( (BYTE3(System_Threading_Tasks_Task_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  }
  return System_Threading_Tasks_Task__Run(v14, 0LL);
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

  if ( (byte_42122A7 & 1) == 0 )
  {
    sub_B0D8A4(&SignedData_TypeInfo, method);
    byte_42122A7 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, 0LL);
}