void __fastcall SignedData___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentQueue_T__o *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Concurrent_ConcurrentQueue_T__o *v8; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDA4F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
    sub_1C21E38(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
    sub_1C21E38(&SignedData_TypeInfo);
    byte_4BDA4F8 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C22084(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v1,
    (const MethodInfo_3248154 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)SignedData_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C22084(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v8,
    (const MethodInfo_3248154 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v8;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int64_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  SignedValue_c *v4; // x0
  System_Byte_array *Bytes_63732096; // x21
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x0
  const MethodInfo *v44; // x3
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v55; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v58; // w25
  const MethodInfo *v59; // x2
  System_String_o *v60; // x22
  __int64 v61; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v79; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v81; // x9
  int32_t *p_offset; // x10
  __int64 v83; // x0
  System_Guid_o v85; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v87; // 0:x0.16
  System_Guid_o v88; // 0:x0.16

  if ( (byte_4BDA4F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_CryptoConfig_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    sub_1C21E38(&SignedData_TypeInfo);
    sub_1C21E38(&SignedData_SignedPackData_TypeInfo);
    sub_1C21E38(&SignedValue_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_12192/*"SHA256"*/);
    sub_1C21E38(&StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/);
    sub_1C21E38(&StringLiteral_1611/*"</D></RSAKeyValue>"*/);
    byte_4BDA4F6 = 1;
  }
  v85 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  Bytes_63732096 = System_BitConverter__GetBytes_63732096(v4->static_fields->exist, 0LL);
  v6 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  if ( !v6
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_62276628(v6, (System_String_o *)StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/, 0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_70:
    sub_1C22094(appended, v8);
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
      v12 = io->m_Items[v11 + 1];
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
    v16 = 0LL;
    while ( v16 < (unsigned int)v15 )
    {
      if ( !Bytes_63732096 )
        goto LABEL_70;
      v17 = Bytes_63732096->max_length;
      if ( (int)v16 % v17 >= (unsigned int)v17 )
        break;
      v18 = *(_BYTE *)(v14 + 32 + v16);
      v19 = Bytes_63732096->m_Items[(int)v16 % v17 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v20 = System_Convert__ToChar_63745672(v19 ^ v18, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_62278956(v6, v20, 0LL);
      LODWORD(v15) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1C2209C(appended, v8);
  }
LABEL_30:
  System_Text_StringBuilder__Append_62276628(v6, (System_String_o *)StringLiteral_1611/*"</D></RSAKeyValue>"*/, 0LL);
  v21 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
          v6,
          v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v6, 0LL) >= 1 )
  {
    v22 = 0;
    do
      System_Text_StringBuilder__set_Chars(v6, v22++, 0x61u, 0LL);
    while ( v22 < System_Text_StringBuilder__get_Length(v6, 0LL) );
  }
  v23 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1C22084(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v23, 0LL);
  if ( !v23 )
    sub_1C22094(v24, v25);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v23->klass->vtable._11_FromXmlString.method)(
    v23,
    v21,
    v23->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v26 = System_Security_Cryptography_CryptoConfig__MapNameToOID_62589748((System_String_o *)StringLiteral_12192/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v26, 0LL);
  v28 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v28 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v28->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1C22094(0LL, v27);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_3248724 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v58 = maxCount - Count;
      do
      {
        v85 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v88.fields._a = &v85;
        *(_QWORD *)&v88.fields._d = 0LL;
        v60 = System_Guid__ToString(v88, v59);
        v61 = sub_1C22084(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v61, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v60, 0LL);
        if ( !v61 )
          sub_1C22094(v62, v62);
        *(_QWORD *)(v61 + 16) = v62;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 16), (int64_t)v62, v63, v64, v65, v66, v67, v68);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v23, v26, v60, v69);
        v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v61 + 24) = v71;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 24), (int64_t)v71, v72, v73, v74, v75, v76, v77);
        v79 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v79 )
          sub_1C22094(0LL, v78);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v79,
          (Il2CppObject *)v61,
          (const MethodInfo_3249324 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v58;
      }
      while ( v58 );
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
      sub_1C22094(0LL, v27);
    v31 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_3248724 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v31 < maxCount )
    {
      v32 = maxCount - v31;
      do
      {
        v85 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v87.fields._a = &v85;
        *(_QWORD *)&v87.fields._d = 0LL;
        v34 = System_Guid__ToString(v87, v33);
        v35 = sub_1C22084(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v35, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v34, 0LL);
        if ( !v35 )
          sub_1C22094(v36, v36);
        *(_QWORD *)(v35 + 16) = v36;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)v36, v37, v38, v39, v40, v41, v42);
        v43 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
        v45 = System_String__Concat_63115476(v43, v34, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v46 = SignedData__MakeSignedData(v23, v26, v45, v44);
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v46, 0LL);
        *(_QWORD *)(v35 + 24) = v47;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)v47, v48, v49, v50, v51, v52, v53);
        v55 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v55 )
          sub_1C22094(0LL, v54);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v55,
          (Il2CppObject *)v35,
          (const MethodInfo_3249324 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v32;
      }
      while ( v32 );
    }
  }
  klass = v23->klass;
  v81 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      p_offset += 4;
      if ( !v81 )
        goto LABEL_66;
    }
    v83 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_66:
    v83 = sub_1C73E18(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v83)(
    v23,
    *(_QWORD *)(v83 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  SignedData_c *v4; // x8
  int64_t userIdNumber; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v7; // x0

  if ( (byte_4BDA4F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&SignedData_TypeInfo);
    byte_4BDA4F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    v7 = static_fields[1];
    if ( v7 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v7,
               (Il2CppObject **)outData,
               (const MethodInfo_32495C0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1C22094(v7, method);
  }
  v7 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v7,
           (Il2CppObject **)outData,
           (const MethodInfo_32495C0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4BDA4F7 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&StringLiteral_9609/*"No Algorithm"*/);
    byte_4BDA4F7 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9609/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C22094(0LL, v9);
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1C22094(v10, v10);
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

  if ( (byte_4BDA4F4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    sub_1C21E38(&SignedData_TypeInfo);
    sub_1C21E38(&System_Threading_Tasks_Task_TypeInfo);
    sub_1C21E38(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__);
    sub_1C21E38(&SignedData___c__DisplayClass5_0_TypeInfo);
    byte_4BDA4F4 = 1;
  }
  v3 = sub_1C22084(SignedData___c__DisplayClass5_0_TypeInfo);
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
    sub_1C22094(SIGNED_PACK_QUEUE, v5);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_3248724 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v3 + 16) )
    return 0LL;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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

  if ( (byte_4BDA4F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
    sub_1C21E38(&SignedData_TypeInfo);
    byte_4BDA4F5 = 1;
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
      sub_1C22094(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_32495C0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4BDA4F9 & 1) == 0 )
  {
    sub_1C21E38(&SignedData_TypeInfo);
    byte_4BDA4F9 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}