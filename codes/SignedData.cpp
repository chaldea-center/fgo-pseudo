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

  if ( (byte_4AFFEEC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_1BC3008(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v2);
    sub_1BC3008(&SignedData_TypeInfo, v3);
    byte_4AFFEEC = 1;
  }
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1BC3254(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_329C998 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)SignedData_TypeInfo->static_fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1BC3254(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v7,
    (const MethodInfo_329C998 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST, (int32_t)v7, v9, v10);
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
  System_Byte_array *Bytes_63396496; // x21
  System_Text_StringBuilder_o *v20; // x19
  _QWORD **appended; // x0
  __int64 v22; // x1
  __int64 v23; // x2
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
  int32_t v37; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x21
  __int64 v42; // x1
  SignedData_c *v43; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v46; // w0
  int v47; // w25
  const MethodInfo *v48; // x2
  System_String_o *v49; // x22
  __int64 v50; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_String_o *v54; // x0
  const MethodInfo *v55; // x3
  System_String_o *v56; // x22
  System_String_o *v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v62; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v65; // w25
  const MethodInfo *v66; // x2
  System_String_o *v67; // x22
  __int64 v68; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v78; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 v82; // x0
  System_Guid_o v84; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v86; // 0:x0.16
  System_Guid_o v87; // 0:x0.16

  if ( (byte_4AFFEEA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method);
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v2);
    sub_1BC3008(&System_Convert_TypeInfo, v3);
    sub_1BC3008(&System_Security_Cryptography_CryptoConfig_TypeInfo, v4);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_1BC3008(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_1BC3008(&SignedData_TypeInfo, v9);
    sub_1BC3008(&SignedData_SignedPackData_TypeInfo, v10);
    sub_1BC3008(&SignedValue_TypeInfo, v11);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_11915/*"SHA256"*/, v13);
    sub_1BC3008(&StringLiteral_1547/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_1BC3008(&StringLiteral_1498/*"</D></RSAKeyValue>"*/, v15);
    byte_4AFFEEA = 1;
  }
  v84 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFC1F1 = 1;
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
  Bytes_63396496 = System_BitConverter__GetBytes_63396496(v18->static_fields->exist, 0LL);
  v20 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v20, 0LL);
  if ( !v20
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_62432592(
                                v20,
                                (System_String_o *)StringLiteral_1547/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_70:
    sub_1BC3264(appended, v22);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v27 = io->m_Items[v26 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v28 = *appended[23];
      if ( !v28 )
        goto LABEL_70;
      if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 24) )
        goto LABEL_69;
      v29 = *(_QWORD *)(v28 + 8 * v27 + 32);
      if ( !v29 )
        goto LABEL_70;
      v30 = *(_QWORD *)(v29 + 24);
      if ( (int)v30 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_30;
    }
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      if ( !Bytes_63396496 )
        goto LABEL_70;
      v32 = Bytes_63396496->max_length;
      if ( (int)v31 % v32 >= (unsigned int)v32 )
        break;
      v33 = *(_BYTE *)(v29 + 32 + v31);
      v34 = Bytes_63396496->m_Items[(int)v31 % v32 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v35 = System_Convert__ToChar_63409892(v34 ^ v33, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_62434920(v20, v35, 0LL);
      LODWORD(v30) = *(_DWORD *)(v29 + 24);
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1BC326C(appended, v22, v23);
  }
LABEL_30:
  System_Text_StringBuilder__Append_62432592(v20, (System_String_o *)StringLiteral_1498/*"</D></RSAKeyValue>"*/, 0LL);
  v36 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
          v20,
          v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v20, 0LL) >= 1 )
  {
    v37 = 0;
    do
      System_Text_StringBuilder__set_Chars(v20, v37++, 0x61u, 0LL);
    while ( v37 < System_Text_StringBuilder__get_Length(v20, 0LL) );
  }
  v38 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1BC3254(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v38, 0LL);
  if ( !v38 )
    sub_1BC3264(v39, v40);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v38->klass->vtable._8_FromXmlString.method)(
    v38,
    v36,
    v38->klass->vtable._9_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v41 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_11915/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v41, 0LL);
  v43 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v43 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v43->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1BC3264(0LL, v42);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_329CF68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v65 = maxCount - Count;
      do
      {
        v84 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v87.fields._a = &v84;
        *(_QWORD *)&v87.fields._d = 0LL;
        v67 = System_Guid__ToString(v87, v66);
        v68 = sub_1BC3254(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v68, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v67, 0LL);
        if ( !v68 )
          sub_1BC3264(v69, v69);
        *(_QWORD *)(v68 + 16) = v69;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 16), (int32_t)v69, v70, v71);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v38, v41, v67, v72);
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v68 + 24) = v74;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 24), (int32_t)v74, v75, v76);
        v78 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v78 )
          sub_1BC3264(0LL, v77);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v78,
          (Il2CppObject *)v68,
          (const MethodInfo_329DB68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v65;
      }
      while ( v65 );
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
      sub_1BC3264(0LL, v42);
    v46 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_329CF68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v46 < maxCount )
    {
      v47 = maxCount - v46;
      do
      {
        v84 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v86.fields._a = &v84;
        *(_QWORD *)&v86.fields._d = 0LL;
        v49 = System_Guid__ToString(v86, v48);
        v50 = sub_1BC3254(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v50, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v49, 0LL);
        if ( !v50 )
          sub_1BC3264(v51, v51);
        *(_QWORD *)(v50 + 16) = v51;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 16), (int32_t)v51, v52, v53);
        v54 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
        v56 = System_String__Concat_62348648(v54, v49, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v57 = SignedData__MakeSignedData(v38, v41, v56, v55);
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v57, 0LL);
        *(_QWORD *)(v50 + 24) = v58;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 24), (int32_t)v58, v59, v60);
        v62 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v62 )
          sub_1BC3264(0LL, v61);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v62,
          (Il2CppObject *)v50,
          (const MethodInfo_329DB68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v47;
      }
      while ( v47 );
    }
  }
  klass = v38->klass;
  v80 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      p_offset += 4;
      if ( !v80 )
        goto LABEL_66;
    }
    v82 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_66:
    v82 = sub_1C13570(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v82)(
    v38,
    *(_QWORD *)(v82 + 8));
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

  if ( (byte_4AFFEE7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&SignedData_TypeInfo, v4);
    byte_4AFFEE7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFC1F1 = 1;
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
               (const MethodInfo_329DE04 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1BC3264(v9, method);
  }
  v9 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v9,
           (Il2CppObject **)outData,
           (const MethodInfo_329DE04 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4AFFEEB & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, hashAlgorithm);
    sub_1BC3008(&StringLiteral_9357/*"No Algorithm"*/, v7);
    byte_4AFFEEB = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9357/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BC3264(0LL, v10);
  v11 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1BC3264(v11, v11);
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

  if ( (byte_4AFFEE8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3);
    sub_1BC3008(&SignedData_TypeInfo, v4);
    sub_1BC3008(&System_Threading_Tasks_Task_TypeInfo, v5);
    sub_1BC3008(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v6);
    sub_1BC3008(&SignedData___c__DisplayClass5_0_TypeInfo, v7);
    byte_4AFFEE8 = 1;
  }
  v8 = sub_1BC3254(SignedData___c__DisplayClass5_0_TypeInfo);
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
    sub_1BC3264(SIGNED_PACK_QUEUE, v10);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_329CF68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v8 + 16) )
    return 0LL;
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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

  if ( (byte_4AFFEE9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1BC3008(&SignedData_TypeInfo, v3);
    byte_4AFFEE9 = 1;
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
      sub_1BC3264(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_329DE04 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4AFFEED & 1) == 0 )
  {
    sub_1BC3008(&SignedData_TypeInfo, method);
    byte_4AFFEED = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}