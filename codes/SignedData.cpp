void __fastcall SignedData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Concurrent_ConcurrentQueue_T__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Concurrent_ConcurrentQueue_T__o *v18; // x19
  struct SignedData_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B14206 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v4, v5);
    sub_1BCA7E0(&SignedData_TypeInfo, v6, v7);
    byte_4B14206 = 1;
  }
  v8 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1BCAA2C(
                                                               System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo,
                                                               v1,
                                                               v2,
                                                               v3);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v8,
    (const MethodInfo_31A1498 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SignedData_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v18 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)sub_1BCAA2C(
                                                                System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo,
                                                                v15,
                                                                v16,
                                                                v17);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(
    v18,
    (const MethodInfo_31A1498 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = SignedData_TypeInfo->static_fields;
  static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (struct System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (int64_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall SignedData___ctor(SignedData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SignedData__CreateSignedPackData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t UserId; // x0
  __int64 v32; // x1
  SignedValue_c *v33; // x8
  System_Byte_array *Bytes_63017840; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Text_StringBuilder_o *v38; // x19
  _QWORD **appended; // x0
  __int64 v40; // x1
  struct System_Int32_array *io; // x23
  int max_length; // w8
  unsigned int v43; // w24
  __int64 v44; // x26
  __int64 v45; // x8
  __int64 v46; // x26
  __int64 v47; // x8
  unsigned __int64 v48; // x27
  signed int v49; // w9
  char v50; // w29
  uint8_t v51; // w20
  uint16_t v52; // w0
  __int64 v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  int32_t v57; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v58; // x19
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x1
  System_String_o *v62; // x21
  __int64 v63; // x1
  SignedData_c *v64; // x0
  uint32_t cctor_finished; // w8
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  int32_t v67; // w0
  int v68; // w25
  const MethodInfo *v69; // x2
  System_String_o *v70; // x22
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x20
  __int64 v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_String_o *v83; // x0
  __int64 v84; // x1
  const MethodInfo *v85; // x3
  System_String_o *v86; // x22
  System_String_o *v87; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v96; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t Count; // w0
  int v99; // w25
  const MethodInfo *v100; // x2
  System_String_o *v101; // x22
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x20
  __int64 v106; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x1
  const MethodInfo *v115; // x3
  System_String_o *SignedData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x1
  System_Collections_Concurrent_ConcurrentQueue_T__o *v125; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  __int64 v127; // x9
  int32_t *p_offset; // x10
  __int64 v129; // x0
  System_Guid_o v131; // [xsp+8h] [xbp-78h] BYREF
  int64_t v132; // [xsp+18h] [xbp-68h] BYREF
  System_Guid_o v133; // 0:x0.16
  System_Guid_o v134; // 0:x0.16

  if ( (byte_4B14204 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v3, v4);
    sub_1BCA7E0(&System_Convert_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Security_Cryptography_CryptoConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v15, v16);
    sub_1BCA7E0(&SignedData_TypeInfo, v17, v18);
    sub_1BCA7E0(&SignedData_SignedPackData_TypeInfo, v19, v20);
    sub_1BCA7E0(&SignedValue_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_12111/*"SHA256"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1655/*"<RSAKeyValue><Modulus>"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1606/*"</D></RSAKeyValue>"*/, v29, v30);
    byte_4B14204 = 1;
  }
  v131 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  v33 = SignedValue_TypeInfo;
  v132 = UserId;
  if ( !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo, v32);
    v33 = SignedValue_TypeInfo;
  }
  Bytes_63017840 = System_BitConverter__GetBytes_63017840(v33->static_fields->exist, 0LL);
  v38 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v35, v36, v37);
  System_Text_StringBuilder___ctor(v38, 0LL);
  if ( !v38
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_61563116(
                                v38,
                                (System_String_o *)StringLiteral_1655/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_66:
    sub_1BCAA3C(appended, v40);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        goto LABEL_65;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v44 = io->m_Items[v43 + 1];
      if ( !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo, v40);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v45 = *appended[23];
      if ( !v45 )
        goto LABEL_66;
      if ( (unsigned int)v44 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_65;
      v46 = *(_QWORD *)(v45 + 8 * v44 + 32);
      if ( !v46 )
        goto LABEL_66;
      v47 = *(_QWORD *)(v46 + 24);
      if ( (int)v47 >= 1 )
        break;
LABEL_25:
      max_length = io->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_26;
    }
    v48 = 0LL;
    while ( v48 < (unsigned int)v47 )
    {
      if ( !Bytes_63017840 )
        goto LABEL_66;
      v49 = Bytes_63017840->max_length;
      if ( (int)v48 % v49 >= (unsigned int)v49 )
        break;
      v50 = *(_BYTE *)(v46 + 32 + v48);
      v51 = Bytes_63017840->m_Items[(int)v48 % v49 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v40);
      v52 = System_Convert__ToChar_63031416(v51 ^ v50, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_61565444(v38, v52, 0LL);
      LODWORD(v47) = *(_DWORD *)(v46 + 24);
      if ( (__int64)++v48 >= (int)v47 )
        goto LABEL_25;
    }
LABEL_65:
    sub_1BCAA44(appended, v40);
  }
LABEL_26:
  System_Text_StringBuilder__Append_61563116(v38, (System_String_o *)StringLiteral_1606/*"</D></RSAKeyValue>"*/, 0LL);
  v53 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
          v38,
          v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v38, 0LL) >= 1 )
  {
    v57 = 0;
    do
      System_Text_StringBuilder__set_Chars(v38, v57++, 0x61u, 0LL);
    while ( v57 < System_Text_StringBuilder__get_Length(v38, 0LL) );
  }
  v58 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_1BCAA2C(
                                                                     System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,
                                                                     v54,
                                                                     v55,
                                                                     v56);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v58, 0LL);
  if ( !v58 )
    sub_1BCAA3C(v59, v60);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v58->klass->vtable._11_FromXmlString.method)(
    v58,
    v53,
    v58->klass->vtable._12_ToXmlString.methodPtr);
  if ( !System_Security_Cryptography_CryptoConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Security_Cryptography_CryptoConfig_TypeInfo, v61);
  v62 = System_Security_Cryptography_CryptoConfig__MapNameToOID_61876236((System_String_o *)StringLiteral_12111/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v62, 0LL);
  v64 = SignedData_TypeInfo;
  cctor_finished = SignedData_TypeInfo->_2.cctor_finished;
  if ( (v132 & 0x8000000000000000LL) != 0 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v63);
      v64 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v64->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_1BCAA3C(0LL, v63);
    Count = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
              SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
              (const MethodInfo_31A1A68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( Count < maxCount )
    {
      v99 = maxCount - Count;
      do
      {
        v131 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v134.fields._a = &v131;
        *(_QWORD *)&v134.fields._d = 0LL;
        v101 = System_Guid__ToString(v134, v100);
        v105 = sub_1BCAA2C(SignedData_SignedPackData_TypeInfo, v102, v103, v104);
        System_Object___ctor((Il2CppObject *)v105, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v106);
        v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v101, 0LL);
        if ( !v105 )
          sub_1BCAA3C(v107, v107);
        *(_QWORD *)(v105 + 16) = v107;
        sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 16), (int64_t)v107, v108, v109, v110, v111, v112, v113);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v114);
        SignedData = SignedData__MakeSignedData(v58, v62, v101, v115);
        v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
        *(_QWORD *)(v105 + 24) = v117;
        sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 24), (int64_t)v117, v118, v119, v120, v121, v122, v123);
        v125 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
        if ( !v125 )
          sub_1BCAA3C(0LL, v124);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v125,
          (Il2CppObject *)v105,
          (const MethodInfo_31A2668 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v99;
      }
      while ( v99 );
    }
  }
  else
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v63);
      v64 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v64->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1BCAA3C(0LL, v63);
    v67 = System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
            SIGNED_PACK_QUEUE,
            (const MethodInfo_31A1A68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
    if ( v67 < maxCount )
    {
      v68 = maxCount - v67;
      do
      {
        v131 = System_Guid__NewGuid(0LL);
        *(_QWORD *)&v133.fields._a = &v131;
        *(_QWORD *)&v133.fields._d = 0LL;
        v70 = System_Guid__ToString(v133, v69);
        v74 = sub_1BCAA2C(SignedData_SignedPackData_TypeInfo, v71, v72, v73);
        System_Object___ctor((Il2CppObject *)v74, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v75);
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v70, 0LL);
        if ( !v74 )
          sub_1BCAA3C(v76, v76);
        *(_QWORD *)(v74 + 16) = v76;
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 16), (int64_t)v76, v77, v78, v79, v80, v81, v82);
        v83 = System_Int64__ToString((int64_t)&v132, 0LL);
        v86 = System_String__Concat_62401220(v83, v70, 0LL);
        if ( !SignedData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v84);
        v87 = SignedData__MakeSignedData(v58, v62, v86, v85);
        v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v87, 0LL);
        *(_QWORD *)(v74 + 24) = v88;
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 24), (int64_t)v88, v89, v90, v91, v92, v93, v94);
        v96 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
        if ( !v96 )
          sub_1BCAA3C(0LL, v95);
        System_Collections_Concurrent_ConcurrentQueue_object___Enqueue(
          v96,
          (Il2CppObject *)v74,
          (const MethodInfo_31A2668 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
        --v68;
      }
      while ( v68 );
    }
  }
  klass = v58->klass;
  v127 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v127;
      p_offset += 4;
      if ( !v127 )
        goto LABEL_62;
    }
    v129 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_62:
    v129 = sub_1C1C7C0(v58, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v129)(
    v58,
    *(_QWORD *)(v129 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t UserId; // x0
  __int64 v9; // x1
  SignedData_c *v10; // x8
  int64_t v11; // x20
  System_Collections_Concurrent_ConcurrentQueue_T__o **static_fields; // x8
  System_Collections_Concurrent_ConcurrentQueue_T__o *v13; // x0

  if ( (byte_4B14201 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__,
      method,
      v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&SignedData_TypeInfo, v6, v7);
    byte_4B14201 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  v10 = SignedData_TypeInfo;
  v11 = UserId;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v9);
    v10 = SignedData_TypeInfo;
  }
  static_fields = (System_Collections_Concurrent_ConcurrentQueue_T__o **)v10->static_fields;
  if ( (v11 & 0x8000000000000000LL) != 0 )
  {
    v13 = static_fields[1];
    if ( v13 )
      return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
               v13,
               (Il2CppObject **)outData,
               (const MethodInfo_31A2904 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_11:
    sub_1BCAA3C(v13, v9);
  }
  v13 = *static_fields;
  if ( !*static_fields )
    goto LABEL_11;
  return System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
           v13,
           (Il2CppObject **)outData,
           (const MethodInfo_31A2904 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *__fastcall SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Text_Encoding_o *UTF8; // x0
  __int64 v11; // x1
  System_Byte_array *v12; // x0
  __int64 v13; // x1
  System_Byte_array *v14; // x19

  if ( (byte_4B14205 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, hashAlgorithm, idempotencyKey);
    sub_1BCA7E0(&StringLiteral_9547/*"No Algorithm"*/, v7, v8);
    byte_4B14205 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9547/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v11);
  v12 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !signProvider )
    sub_1BCAA3C(v12, v12);
  v14 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v12,
          (Il2CppObject *)hashAlgorithm,
          0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
  return System_Convert__ToBase64String(v14, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  __int64 v17; // x1
  SignedData_c *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  __int64 v23; // x1

  if ( (byte_4B14202 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v5, v6);
    sub_1BCA7E0(&SignedData_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Threading_Tasks_Task_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v11, v12);
    sub_1BCA7E0(&SignedData___c__DisplayClass5_0_TypeInfo, v13, v14);
    byte_4B14202 = 1;
  }
  v15 = sub_1BCAA2C(SignedData___c__DisplayClass5_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_DWORD *)(v15 + 16) = maxCount;
  v18 = SignedData_TypeInfo;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v17);
    v18 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v18->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_12:
    sub_1BCAA3C(SIGNED_PACK_QUEUE, v17);
  if ( System_Collections_Concurrent_ConcurrentQueue_object___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_31A1A68 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= *(_DWORD *)(v15 + 16) )
    return 0LL;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)v15, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0LL);
  if ( !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo, v23);
  return System_Threading_Tasks_Task__Run(v22, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SignedData_c *v6; // x0
  System_Collections_Concurrent_ConcurrentQueue_T__o *SIGNED_PACK_QUEUE; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B14203 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__,
      method,
      v2);
    sub_1BCA7E0(&SignedData_TypeInfo, v4, v5);
    byte_4B14203 = 1;
  }
  result = 0LL;
  do
  {
    v6 = SignedData_TypeInfo;
    if ( !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method);
      v6 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_T__o *)v6->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_1BCAA3C(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_31A2904 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  }
  while ( result );
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method);
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
  __int64 v2; // x2
  int32_t maxCount; // w19

  if ( (byte_4B14207 & 1) == 0 )
  {
    sub_1BCA7E0(&SignedData_TypeInfo, method, v2);
    byte_4B14207 = 1;
  }
  maxCount = this->fields.maxCount;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method);
  SignedData__CreateSignedPackData(maxCount, method);
}