void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Concurrent_ConcurrentQueue_T__o *v10; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FA563 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_1B640C8(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v3);
    sub_1B640C8(&SignedData_TypeInfo, v4);
    byte_49FA563 = 1;
  }
  v5 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B64314(
                                                               System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo,
                                                               v1,
                                                               v2);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v5,
    (const MethodInfo_30C24A8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1B64314(
                                                                System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo,
                                                                v8,
                                                                v9);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v10,
    (const MethodInfo_30C24A8 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int32_t)v10,
    v12,
    v13);
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
  System_Byte_array *Bytes_61991680; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Text_StringBuilder_o *v21; // x19
  _QWORD **appended; // x0
  __int64 v23; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v26; // w24
  __int64 v27; // x26
  __int64 v28; // x8
  __int64 v29; // x26
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  signed int v32; // w9
  char v33; // w29
  uint8_t v34; // w20
  uint16_t v35; // w0
  __int64 v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t v39; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v40; // x19
  __int64 v41; // x0
  System_String_o *v42; // x21
  SignedData_c *v43; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v46; // w0
  int v47; // w25
  const MethodInfo *v48; // x2
  System_String_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x0
  const MethodInfo *v57; // x3
  System_String_o *v58; // x22
  System_String_o *v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v63; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v66; // w25
  const MethodInfo *v67; // x2
  System_String_o *v68; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  const MethodInfo *v75; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v80; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v82; // x9
  int32_t *p_offset; // x10
  __int64 v84; // x0
  System_Guid_o v86; // [xsp+8h] [xbp-78h] BYREF
  int64_t v87; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v88; // 0:x0.16
  System_Guid_o v89; // 0:x0.16

  if ( (byte_49FA561 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method);
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v2);
    sub_1B640C8(&System_Convert_TypeInfo, v3);
    sub_1B640C8(&System_Security_Cryptography_CryptoConfig_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_1B640C8(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_1B640C8(&SignedData_TypeInfo, v9);
    sub_1B640C8(&SignedData_SignedPackData_TypeInfo, v10);
    sub_1B640C8(&SignedValue_TypeInfo, v11);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_11918/*"SHA256"*/, v13);
    sub_1B640C8(&StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_1B640C8(&StringLiteral_1611/*"</D></RSAKeyValue>"*/, v15);
    byte_49FA561 = 1;
  }
  v86 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v17 = SignedValue_TypeInfo;
  v87 = UserId;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v17 = SignedValue_TypeInfo;
  }
  Bytes_61991680 = System_BitConverter__GetBytes_61991680(v17->static_fields->exist, 0LL);
  v21 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v19, v20);
  System_Text_StringBuilder___ctor(v21, 0LL);
  if ( !v21
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_60536548(
                                v21,
                                (System_String_o *)StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_66:
    sub_1B64324(appended);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        goto LABEL_65;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v27 = io->m_Items[v26 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v28 = *appended[23];
      if ( !v28 )
        goto LABEL_66;
      if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 24) )
        goto LABEL_65;
      v29 = *(_QWORD *)(v28 + 8 * v27 + 32);
      if ( !v29 )
        goto LABEL_66;
      v30 = *(_QWORD *)(v29 + 24);
      if ( (int)v30 >= 1 )
        break;
LABEL_25:
      max_length = io->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_26;
    }
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      if ( !Bytes_61991680 )
        goto LABEL_66;
      v32 = Bytes_61991680->max_length;
      if ( (int)v31 % v32 >= (unsigned int)v32 )
        break;
      v33 = *(_BYTE *)(v29 + 32 + v31);
      v34 = Bytes_61991680->m_Items[(int)v31 % v32 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v35 = System_Convert__ToChar_62005256(v34 ^ v33, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_60538876(v21, v35, 0LL);
      LODWORD(v30) = *(_DWORD *)(v29 + 24);
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_25;
    }
LABEL_65:
    sub_1B6432C(appended, v23);
  }
LABEL_26:
  System_Text_StringBuilder__Append_60536548(v21, (System_String_o *)StringLiteral_1611/*"</D></RSAKeyValue>"*/, 0LL);
  v36 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
          v21,
          v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v21, 0LL) >= 1 )
  {
    v39 = 0;
    do
      System_Text_StringBuilder__set_Chars(v21, v39++, 0x61u, 0LL);
    while ( v39 < System_Text_StringBuilder__get_Length(v21, 0LL) );
  }
  v40 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1B64314(
                                                                     System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,
                                                                     v37,
                                                                     v38);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v40, 0LL);
  if ( !v40 )
    sub_1B64324(v41);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v40->klass->vtable._11_FromXmlString.method)(
    v40,
    v36,
    v40->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v42 = System_Security_Cryptography_CryptoConfig__MapNameToOID_60849668((System_String_o *)StringLiteral_11918/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v42, 0LL);
  v43 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (v87 & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v43 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v43->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1B64324(0LL);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_30C2A78 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v66 = maxCount - Count;
      do
      {
        v86 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v89.fields._a = &v86;
        *(_QWORD *)&v89.fields._d = 0LL;
        v68 = System_Guid__ToString(v89, v67);
        v71 = sub_1B64314(SignedData_SignedPackData_TypeInfo, v69, v70);
        System_Object___ctor((Il2CppObject *)v71, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v68, 0LL);
        if ( !v71 )
          sub_1B64324(v72);
        *(_QWORD *)(v71 + 16) = v72;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 16), (int32_t)v72, v73, v74);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v40, v42, v68, v75);
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v71 + 24) = v77;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 24), (int32_t)v77, v78, v79);
        v80 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v80 )
          sub_1B64324(0LL);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v80,
          (Il2CppObject *)v71,
          (const MethodInfo_30C3678 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v66;
      }
      while ( v66 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v43 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v43->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1B64324(0LL);
    v46 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_30C2A78 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v46 < maxCount )
    {
      v47 = maxCount - v46;
      do
      {
        v86 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v88.fields._a = &v86;
        *(_QWORD *)&v88.fields._d = 0LL;
        v49 = System_Guid__ToString(v88, v48);
        v52 = sub_1B64314(SignedData_SignedPackData_TypeInfo, v50, v51);
        System_Object___ctor((Il2CppObject *)v52, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v49, 0LL);
        if ( !v52 )
          sub_1B64324(v53);
        *(_QWORD *)(v52 + 16) = v53;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 16), (int32_t)v53, v54, v55);
        v56 = System_Int64__ToString((int64_t)&v87, 0LL);
        v58 = System_String__Concat_61375396(v56, v49, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v59 = SignedData__MakeSignedData(v40, v42, v58, v57);
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v59, 0LL);
        *(_QWORD *)(v52 + 24) = v60;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 24), (int32_t)v60, v61, v62);
        v63 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v63 )
          sub_1B64324(0LL);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v63,
          (Il2CppObject *)v52,
          (const MethodInfo_30C3678 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v47;
      }
      while ( v47 );
    }
  }
  klass = v40->klass;
  v82 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      p_offset += 4;
      if ( !v82 )
        goto LABEL_62;
    }
    v84 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_62:
    v84 = sub_1BB60A8(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v84)(
    v40,
    *(_QWORD *)(v84 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x0
  SignedData_c *v6; // x8
  int64_t v7; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v9; // x0

  if ( (byte_49FA55E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&SignedData_TypeInfo, v4);
    byte_49FA55E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v6 = SignedData_TypeInfo;
  v7 = UserId;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v6 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v6->static_fields;
  if ( (v7 & 0x8000000000000000LL) != 0 )
  {
    v9 = static_fields[1];
    if ( v9 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v9,
               (Il2CppObject **)outData,
               (const MethodInfo_30C3914 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_11:
    sub_1B64324(v9);
  }
  v9 = *static_fields;
  if ( !*static_fields )
    goto LABEL_11;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v9,
           (Il2CppObject **)outData,
           (const MethodInfo_30C3914 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_49FA562 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, hashAlgorithm);
    sub_1B640C8(&StringLiteral_9372/*"No Algorithm"*/, v7);
    byte_49FA562 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9372/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B64324(0LL);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1B64324(v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  SignedData_c *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20

  if ( (byte_49FA55F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v4);
    sub_1B640C8(&SignedData_TypeInfo, v5);
    sub_1B640C8(&System_Threading_Tasks_Task_TypeInfo, v6);
    sub_1B640C8(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v7);
    sub_1B640C8(&SignedData___c__DisplayClass5_0_TypeInfo, v8);
    byte_49FA55F = 1;
  }
  v9 = sub_1B64314(SignedData___c__DisplayClass5_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_DWORD *)(v9 + 16) = maxCount;
  v11 = SignedData_TypeInfo;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v11 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v11->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_1B64324(SIGNED_PACK_QUEUE);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_30C2A78 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v9 + 16) )
    return 0LL;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v9, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0LL);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  return System_Threading_Tasks_Task__Run(v14, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x1
  SignedData_c *v4; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA560 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1B640C8(&SignedData_TypeInfo, v3);
    byte_49FA560 = 1;
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
      sub_1B64324(0LL);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_30C3914 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  return SignedData__RefillSigningData(maxCount, v6);
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

  if ( (byte_49FA564 & 1) == 0 )
  {
    sub_1B640C8(&SignedData_TypeInfo, method);
    byte_49FA564 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}