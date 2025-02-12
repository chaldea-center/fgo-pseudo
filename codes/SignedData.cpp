void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Concurrent_ConcurrentQueue_T__o *v11; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC5A69 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1);
    sub_1C1ABD4(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v2);
    sub_1C1ABD4(&SignedData_TypeInfo, v3);
    byte_4BC5A69 = 1;
  }
  v4 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C1AE20(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v4,
    (const MethodInfo_3234A04 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)SignedData_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1C1AE20(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v11,
    (const MethodInfo_3234A04 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v11;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_Byte_array *Bytes_63656988; // x21
  System_Text_StringBuilder_o *v20; // x19
  _QWORD **appended; // x0
  __int64 v22; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v25; // w24
  __int64 v26; // x26
  __int64 v27; // x8
  __int64 v28; // x26
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  signed int v31; // w9
  char v32; // w29
  uint8_t v33; // w20
  uint16_t v34; // w0
  __int64 v35; // x21
  int32_t v36; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v37; // x19
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x21
  __int64 v41; // x1
  SignedData_c *v42; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v45; // w0
  int v46; // w25
  const MethodInfo *v47; // x2
  System_String_o *v48; // x22
  __int64 v49; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o *v57; // x0
  const MethodInfo *v58; // x3
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v69; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v72; // w25
  const MethodInfo *v73; // x2
  System_String_o *v74; // x22
  __int64 v75; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  const MethodInfo *v83; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v93; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v95; // x9
  int32_t *p_offset; // x10
  __int64 v97; // x0
  System_Guid_o v99; // [xsp+8h] [xbp-78h] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v101; // 0:x0.16
  System_Guid_o v102; // 0:x0.16

  if ( (byte_4BC5A67 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method);
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v2);
    sub_1C1ABD4(&System_Convert_TypeInfo, v3);
    sub_1C1ABD4(&System_Security_Cryptography_CryptoConfig_TypeInfo, v4);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7);
    sub_1C1ABD4(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v8);
    sub_1C1ABD4(&SignedData_TypeInfo, v9);
    sub_1C1ABD4(&SignedData_SignedPackData_TypeInfo, v10);
    sub_1C1ABD4(&SignedValue_TypeInfo, v11);
    sub_1C1ABD4(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_12182/*"SHA256"*/, v13);
    sub_1C1ABD4(&StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/, v14);
    sub_1C1ABD4(&StringLiteral_1611/*"</D></RSAKeyValue>"*/, v15);
    byte_4BC5A67 = 1;
  }
  v99 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC2585 = 1;
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
  Bytes_63656988 = System_BitConverter__GetBytes_63656988(v18->static_fields->exist, 0LL);
  v20 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v20, 0LL);
  if ( !v20
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_62201520(
                                v20,
                                (System_String_o *)StringLiteral_1660/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_70:
    sub_1C1AE30(appended, v22);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        goto LABEL_69;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v26 = io->m_Items[v25 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v27 = *appended[23];
      if ( !v27 )
        goto LABEL_70;
      if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_69;
      v28 = *(_QWORD *)(v27 + 8 * v26 + 32);
      if ( !v28 )
        goto LABEL_70;
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
      if ( !Bytes_63656988 )
        goto LABEL_70;
      v31 = Bytes_63656988->max_length;
      if ( (int)v30 % v31 >= (unsigned int)v31 )
        break;
      v32 = *(_BYTE *)(v28 + 32 + v30);
      v33 = Bytes_63656988->m_Items[(int)v30 % v31 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v34 = System_Convert__ToChar_63670564(v33 ^ v32, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_62203848(v20, v34, 0LL);
      LODWORD(v29) = *(_DWORD *)(v28 + 24);
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_29;
    }
LABEL_69:
    sub_1C1AE38(appended, v22);
  }
LABEL_30:
  System_Text_StringBuilder__Append_62201520(v20, (System_String_o *)StringLiteral_1611/*"</D></RSAKeyValue>"*/, 0LL);
  v35 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
          v20,
          v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v20, 0LL) >= 1 )
  {
    v36 = 0;
    do
      System_Text_StringBuilder__set_Chars(v20, v36++, 0x61u, 0LL);
    while ( v36 < System_Text_StringBuilder__get_Length(v20, 0LL) );
  }
  v37 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1C1AE20(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v37, 0LL);
  if ( !v37 )
    sub_1C1AE30(v38, v39);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v37->klass->vtable._11_FromXmlString.method)(
    v37,
    v35,
    v37->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo);
  v40 = System_Security_Cryptography_CryptoConfig__MapNameToOID_62514640((System_String_o *)StringLiteral_12182/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v40, 0LL);
  v42 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (userIdNumber & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v42 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v42->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1C1AE30(0LL, v41);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_3234FD4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v72 = maxCount - Count;
      do
      {
        v99 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v102.fields._a = &v99;
        *(_QWORD *)&v102.fields._d = 0LL;
        v74 = System_Guid__ToString(v102, v73);
        v75 = sub_1C1AE20(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v75, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v74, 0LL);
        if ( !v75 )
          sub_1C1AE30(v76, v76);
        *(_QWORD *)(v75 + 16) = v76;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 16), (int64_t)v76, v77, v78, v79, v80, v81, v82);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        SignedData = SignedData__MakeSignedData(v37, v40, v74, v83);
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v75 + 24) = v85;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 24), (int64_t)v85, v86, v87, v88, v89, v90, v91);
        v93 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v93 )
          sub_1C1AE30(0LL, v92);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v93,
          (Il2CppObject *)v75,
          (const MethodInfo_3235BD4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v72;
      }
      while ( v72 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v42 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v42->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1C1AE30(0LL, v41);
    v45 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_3234FD4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v45 < maxCount )
    {
      v46 = maxCount - v45;
      do
      {
        v99 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v101.fields._a = &v99;
        *(_QWORD *)&v101.fields._d = 0LL;
        v48 = System_Guid__ToString(v101, v47);
        v49 = sub_1C1AE20(SignedData_SignedPackData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v48, 0LL);
        if ( !v49 )
          sub_1C1AE30(v50, v50);
        *(_QWORD *)(v49 + 16) = v50;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)v50, v51, v52, v53, v54, v55, v56);
        v57 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
        v59 = System_String__Concat_63040368(v57, v48, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
        v60 = SignedData__MakeSignedData(v37, v40, v59, v58);
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v60, 0LL);
        *(_QWORD *)(v49 + 24) = v61;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)v61, v62, v63, v64, v65, v66, v67);
        v69 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v69 )
          sub_1C1AE30(0LL, v68);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v69,
          (Il2CppObject *)v49,
          (const MethodInfo_3235BD4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v46;
      }
      while ( v46 );
    }
  }
  klass = v37->klass;
  v95 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v95;
      p_offset += 4;
      if ( !v95 )
        goto LABEL_66;
    }
    v97 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_66:
    v97 = sub_1C6CBB4(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v97)(
    v37,
    *(_QWORD *)(v97 + 8));
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

  if ( (byte_4BC5A64 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&SignedData_TypeInfo, v4);
    byte_4BC5A64 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC2585 = 1;
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
               (const MethodInfo_3235E70 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_15:
    sub_1C1AE30(v9, method);
  }
  v9 = *static_fields;
  if ( !*static_fields )
    goto LABEL_15;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v9,
           (Il2CppObject **)outData,
           (const MethodInfo_3235E70 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4BC5A68 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Convert_TypeInfo, hashAlgorithm);
    sub_1C1ABD4(&StringLiteral_9599/*"No Algorithm"*/, v7);
    byte_4BC5A68 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9599/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C1AE30(0LL, v10);
  v11 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1C1AE30(v11, v11);
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

  if ( (byte_4BC5A65 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3);
    sub_1C1ABD4(&SignedData_TypeInfo, v4);
    sub_1C1ABD4(&System_Threading_Tasks_Task_TypeInfo, v5);
    sub_1C1ABD4(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v6);
    sub_1C1ABD4(&SignedData___c__DisplayClass5_0_TypeInfo, v7);
    byte_4BC5A65 = 1;
  }
  v8 = sub_1C1AE20(SignedData___c__DisplayClass5_0_TypeInfo);
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
    sub_1C1AE30(SIGNED_PACK_QUEUE, v10);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_3234FD4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v8 + 16) )
    return 0LL;
  v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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

  if ( (byte_4BC5A66 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_1C1ABD4(&SignedData_TypeInfo, v3);
    byte_4BC5A66 = 1;
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
      sub_1C1AE30(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_3235E70 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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

  if ( (byte_4BC5A6A & 1) == 0 )
  {
    sub_1C1ABD4(&SignedData_TypeInfo, method);
    byte_4BC5A6A = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, method);
}