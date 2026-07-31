void SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Concurrent_ConcurrentQueue_T__o *v8; // x19
  struct SignedData_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59363E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_21FFC50(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_21FFC50(&SignedData_TypeInfo);
    byte_59363E9 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_21FFEBC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_3EC59F4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SignedData_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_21FFEBC(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v8,
    (const MethodInfo_3EC59F4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager_c *v3; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  SignedValue_c *v5; // x0
  int v6; // w9
  System_Byte_array *Bytes_76438444; // x21
  System_Text_StringBuilder_o *v8; // x20
  _QWORD **appended; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v14; // w25
  __int64 v15; // x26
  __int64 v16; // x8
  __int64 v17; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  signed int v20; // w9
  char v21; // w29
  uint8_t v22; // w19
  uint16_t v23; // w0
  __int64 v24; // x21
  int32_t v25; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  SignedData_c *v34; // x0
  int v35; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v37; // w0
  int v38; // w24
  const MethodInfo *v39; // x2
  System_String_o *v40; // x21
  __int64 v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Security_Cryptography_RSACryptoServiceProvider_o *v51; // x22
  System_String_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x3
  System_String_o *v56; // x21
  System_String_o *v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v66; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v69; // w24
  const MethodInfo *v70; // x2
  System_String_o *v71; // x21
  __int64 v72; // x19
  __int64 v73; // x1
  __int64 v74; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  __int64 v83; // x2
  const MethodInfo *v84; // x3
  System_Security_Cryptography_RSACryptoServiceProvider_o *v85; // x22
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v95; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_o *v96; // x20
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v98; // x9
  int32_t *p_offset; // x10
  __int64 v100; // x0
  System_Guid_o v102; // [xsp+20h] [xbp-80h] BYREF
  System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider; // [xsp+30h] [xbp-70h]
  int64_t userIdNumber; // [xsp+38h] [xbp-68h] BYREF
  System_Guid_o v105; // 0:x0.16
  System_Guid_o v106; // 0:x0.16

  if ( (byte_59363E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_21FFC50(&SignedData_TypeInfo);
    sub_21FFC50(&SignedData_SignedPackData_TypeInfo);
    sub_21FFC50(&SignedValue_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_12521/*"SHA256"*/);
    sub_21FFC50(&StringLiteral_1637/*"<RSAKeyValue><Modulus>"*/);
    sub_21FFC50(&StringLiteral_1583/*"</D></RSAKeyValue>"*/);
    byte_59363E7 = 1;
  }
  signProvider = 0;
  userIdNumber = 0;
  *(_QWORD *)&v102.fields._a = 0;
  *(_QWORD *)&v102.fields._d = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v3 = NetworkManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = SignedValue_TypeInfo;
  v6 = *(&SignedValue_TypeInfo->_2.cctor_finished + 1);
  userIdNumber = static_fields->userIdNumber;
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo, method, v2);
    v5 = SignedValue_TypeInfo;
  }
  Bytes_76438444 = System_BitConverter__GetBytes_76438444(v5->static_fields->exist, 0);
  v8 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v8, 0);
  if ( !v8
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_75521760(v8, (System_String_o *)StringLiteral_1637/*"<RSAKeyValue><Modulus>"*/, 0),
        (io = SignedValue_TypeInfo->static_fields->io) == 0) )
  {
LABEL_70:
    sub_21FFECC(appended, v10);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v15 = io->m_Items[v14];
      if ( !*(&SignedValue_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo, v10, v11);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v16 = *appended[23];
      if ( !v16 )
        goto LABEL_70;
      if ( (unsigned int)v15 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_69;
      v17 = *(_QWORD *)(v16 + 8 * v15 + 32);
      if ( !v17 )
        goto LABEL_70;
      v18 = *(_QWORD *)(v17 + 24);
      if ( (int)v18 >= 1 )
        break;
LABEL_29:
      max_length = io->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_30;
    }
    v19 = 0;
    while ( v19 < (unsigned int)v18 )
    {
      if ( !Bytes_76438444 )
        goto LABEL_70;
      v20 = Bytes_76438444->max_length;
      if ( (int)v19 % v20 >= (unsigned int)v20 )
        break;
      v21 = *(_BYTE *)(v17 + 32 + v19);
      v22 = Bytes_76438444->m_Items[(int)v19 % v20];
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10, v11);
      v23 = System_Convert__ToChar_76450432(v22 ^ v21, 0);
      appended = (_QWORD **)System_Text_StringBuilder__Append_75524092(v8, v23, 0);
      LODWORD(v18) = *(_DWORD *)(v17 + 24);
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_29;
    }
LABEL_69:
    sub_21FFED4(appended);
  }
LABEL_30:
  System_Text_StringBuilder__Append_75521760(v8, (System_String_o *)StringLiteral_1583/*"</D></RSAKeyValue>"*/, 0);
  v24 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
          v8,
          v8->klass->vtable._3_ToString.method);
  if ( System_Text_StringBuilder__get_Length(v8, 0) >= 1 )
  {
    v25 = 0;
    do
      System_Text_StringBuilder__set_Chars(v8, v25++, 0x61u, 0);
    while ( v25 < System_Text_StringBuilder__get_Length(v8, 0) );
  }
  v26 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_21FFEBC(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v26, 0);
  signProvider = v26;
  if ( !v26 )
    sub_21FFECC(v27, v28);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, const MethodInfo *))v26->klass->vtable._8_FromXmlString.methodPtr)(
    v26,
    v24,
    v26->klass->vtable._8_FromXmlString.method);
  if ( !*(&System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo, v29, v30);
  v31 = System_Security_Cryptography_CryptoConfig__MapNameToOID((System_String_o *)StringLiteral_12521/*"SHA256"*/, 0);
  System_String__IsNullOrEmpty(v31, 0);
  v34 = SignedData_TypeInfo;
  v35 = *(&SignedData_TypeInfo->_2.cctor_finished + 1);
  if ( userIdNumber < 0 )
  {
    if ( !v35 )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v32, v33);
      v34 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v34->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_21FFECC(0, v32);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_3EC5FA4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    v69 = maxCount - Count;
    if ( maxCount > Count )
    {
      do
      {
        v102 = System_Guid__NewGuid(0);
        *(_QWORD *)&v106.fields._a = &v102;
        *(_QWORD *)&v106.fields._d = 0;
        v71 = System_Guid__ToString(v106, v70);
        v72 = sub_21FFEBC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v72, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v73, v74);
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v71, 0);
        if ( !v72 )
          sub_21FFECC(v75, v75);
        *(_QWORD *)(v72 + 16) = v75;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 16), (int32_t)v75, v76, v77, v78, v79, v80, v81);
        v85 = signProvider;
        if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v82, v83);
        SignedData = SignedData__MakeSignedData(v85, v31, v71, v84);
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0);
        *(_QWORD *)(v72 + 24) = v87;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 24), (int32_t)v87, v88, v89, v90, v91, v92, v93);
        v95 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v95 )
          sub_21FFECC(0, v94);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v95,
          (Il2CppObject *)v72,
          (const MethodInfo_3EC6B5C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v69;
      }
      while ( v69 );
    }
  }
  else
  {
    if ( !v35 )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v32, v33);
      v34 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v34->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_21FFECC(0, v32);
    v37 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_3EC5FA4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    v38 = maxCount - v37;
    if ( maxCount > v37 )
    {
      do
      {
        v102 = System_Guid__NewGuid(0);
        *(_QWORD *)&v105.fields._a = &v102;
        *(_QWORD *)&v105.fields._d = 0;
        v40 = System_Guid__ToString(v105, v39);
        v41 = sub_21FFEBC(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v41, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v42, v43);
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v40, 0);
        if ( !v41 )
          sub_21FFECC(v44, v44);
        *(_QWORD *)(v41 + 16) = v44;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 16), (int32_t)v44, v45, v46, v47, v48, v49, v50);
        v51 = signProvider;
        v52 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        v56 = System_String__Concat_75438412(v52, v40, 0);
        if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v53, v54);
        v57 = SignedData__MakeSignedData(v51, v31, v56, v55);
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v57, 0);
        *(_QWORD *)(v41 + 24) = v58;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 24), (int32_t)v58, v59, v60, v61, v62, v63, v64);
        v66 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v66 )
          sub_21FFECC(0, v65);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v66,
          (Il2CppObject *)v41,
          (const MethodInfo_3EC6B5C *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v38;
      }
      while ( v38 );
    }
  }
  v96 = signProvider;
  if ( signProvider )
  {
    klass = signProvider->klass;
    v98 = *(unsigned __int16 *)&signProvider->klass->_2.rank;
    if ( *(_WORD *)&signProvider->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v98;
        p_offset += 4;
        if ( !v98 )
          goto LABEL_65;
      }
      v100 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_65:
      v100 = sub_2237E2C(signProvider, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v100)(
      v96,
      *(_QWORD *)(v100 + 8));
  }
}


bool SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager_c *v4; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  SignedData_c *v6; // x0
  int64_t userIdNumber; // x9
  int v8; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0

  if ( (byte_59363E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&SignedData_TypeInfo);
    byte_59363E4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v4 = NetworkManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = SignedData_TypeInfo;
  userIdNumber = static_fields->userIdNumber;
  v8 = *(&SignedData_TypeInfo->_2.cctor_finished + 1);
  if ( (userIdNumber & 0x8000000000000000LL) == 0 )
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method, v2);
      v6 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v6->static_fields->SIGNED_PACK_QUEUE;
    if ( SIGNED_PACK_QUEUE )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               SIGNED_PACK_QUEUE,
               (Il2CppObject **)outData,
               (const MethodInfo_3EC6DFC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_17:
    sub_21FFECC(SIGNED_PACK_QUEUE, method);
  }
  if ( !v8 )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method, v2);
    v6 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v6->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
  if ( !SIGNED_PACK_QUEUE )
    goto LABEL_17;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           SIGNED_PACK_QUEUE,
           (Il2CppObject **)outData,
           (const MethodInfo_3EC6DFC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Byte_array *v13; // x19

  if ( (byte_59363E8 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&StringLiteral_9819/*"No Algorithm"*/);
    byte_59363E8 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0) )
    return (System_String_o *)StringLiteral_9819/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_21FFECC(0, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !signProvider )
    sub_21FFECC(v10, v10);
  v13 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v10,
          (Il2CppObject *)hashAlgorithm,
          0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v11, v12);
  return System_Convert__ToBase64String(v13, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  SignedData_c *v7; // x0
  System_Action_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_59363E5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_21FFC50(&SignedData_TypeInfo);
    sub_21FFC50(&System_Threading_Tasks_Task_TypeInfo);
    sub_21FFC50(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_21FFC50(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_59363E5 = 1;
  }
  v3 = sub_21FFEBC(SignedData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_12;
  *(_DWORD *)(v3 + 16) = maxCount;
  v7 = SignedData_TypeInfo;
  if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v5, v6);
    v7 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v7->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_21FFECC(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_3EC5FA4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0;
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v3, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0);
  if ( !*(&System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo, v9, v10);
  return System_Threading_Tasks_Task__Run(v8, 0);
}


System_Threading_Tasks_Task_o *SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x2
  SignedData_c *v4; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59363E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_21FFC50(&SignedData_TypeInfo);
    byte_59363E6 = 1;
  }
  result = 0;
  do
  {
    v4 = SignedData_TypeInfo;
    if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method, v2);
      v4 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v4->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_21FFECC(0, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_3EC6DFC *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method, v2);
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
  __int64 v2; // x2
  int32_t maxCount; // w19

  if ( (byte_59363EA & 1) == 0 )
  {
    sub_21FFC50(&SignedData_TypeInfo);
    byte_59363EA = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method, v2);
  SignedData__CreateSignedPackData(maxCount, method);
}