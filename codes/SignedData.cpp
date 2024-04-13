void __fastcall SignedData___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v18; // x19
  struct SignedData_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E9791 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&SignedData_TypeInfo, v7, v8, v9);
    byte_42E9791 = 1;
  }
  v10 = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)sub_B5D694(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData____ctor(
    v10,
    (const MethodInfo_23ECE24 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  static_fields = (BattleServantConfConponent_o *)SignedData_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)sub_B5D694(System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TypeInfo);
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData____ctor(
    v18,
    (const MethodInfo_23ECE24 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___ctor__);
  v19 = SignedData_TypeInfo->static_fields;
  v19->SIGNED_PACK_QUEUE_ACCOUNT_REGIST = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
    (System_Int32_array **)v18,
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  SignedValue_c *v49; // x8
  int32_t exist; // w19
  System_Byte_array *Bytes_40367492; // x21
  System_Text_StringBuilder_o *v52; // x19
  _QWORD **appended; // x0
  __int64 v54; // x1
  struct System_Int32_array *io; // x20
  int max_length; // w8
  unsigned int v57; // w23
  __int64 v58; // x25
  __int64 v59; // x8
  __int64 v60; // x25
  __int64 v61; // x8
  unsigned __int64 v62; // x26
  signed int v63; // w9
  char v64; // w28
  uint8_t v65; // w22
  uint16_t v66; // w0
  __int64 v67; // x21
  int32_t v68; // w22
  System_Security_Cryptography_RSACryptoServiceProvider_o *v69; // x19
  __int64 v70; // x0
  __int64 v71; // x1
  System_String_o *v72; // x21
  __int64 v73; // x1
  SignedData_c *v74; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  __int64 v76; // x3
  int32_t j; // w22
  const MethodInfo *v78; // x2
  System_String_o *v79; // x24
  __int64 v80; // x23
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_o *v88; // x0
  const MethodInfo *v89; // x3
  System_String_o *v90; // x24
  System_String_o *v91; // x0
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x1
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v100; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE_ACCOUNT_REGIST; // x0
  int32_t i; // w22
  const MethodInfo *v103; // x2
  System_String_o *v104; // x24
  __int64 v105; // x23
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  const MethodInfo *v113; // x3
  System_String_o *SignedData; // x0
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  __int64 v122; // x1
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *v123; // x0
  System_Security_Cryptography_RSACryptoServiceProvider_c *klass; // x8
  unsigned __int64 v125; // x10
  int32_t *p_offset; // x11
  __int64 v127; // x0
  __int64 v128; // x0
  System_Guid_o v130; // [xsp+18h] [xbp-68h] BYREF
  int64_t UserId; // [xsp+28h] [xbp-58h] BYREF
  System_Guid_o v132; // 0:x0.16
  System_Guid_o v133; // 0:x0.16

  if ( (byte_42E978F & 1) == 0 )
  {
    sub_B5D5C4(&System_BitConverter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v7, v8, v9);
    sub_B5D5C4(&System_Convert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Guid_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&SignedData_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&SignedData_SignedPackData_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&SignedValue_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12225/*"SHA256"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1360/*"<RSAKeyValue><Modulus>"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_1313/*"</D></RSAKeyValue>"*/, v46, v47, v48);
    byte_42E978F = 1;
  }
  UserId = 0LL;
  v130 = (System_Guid_o)0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v49 = SignedValue_TypeInfo;
  if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedValue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
    v49 = SignedValue_TypeInfo;
  }
  exist = v49->static_fields->exist;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_40367492 = System_BitConverter__GetBytes_40367492(exist, 0LL);
  v52 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v52, 0LL);
  if ( !v52
    || (appended = (_QWORD **)System_Text_StringBuilder__Append_42953744(
                                v52,
                                (System_String_o *)StringLiteral_1360/*"<RSAKeyValue><Modulus>"*/,
                                0LL),
        (io = SignedValue_TypeInfo->static_fields->io) == 0LL) )
  {
LABEL_81:
    sub_B5D69C(appended, v54);
  }
  max_length = io->max_length;
  if ( max_length >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      if ( v57 >= max_length )
        goto LABEL_80;
      appended = (_QWORD **)SignedValue_TypeInfo;
      v58 = io->m_Items[v57 + 1];
      if ( (BYTE3(SignedValue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SignedValue_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SignedValue_TypeInfo);
        appended = (_QWORD **)SignedValue_TypeInfo;
      }
      v59 = *appended[23];
      if ( !v59 )
        goto LABEL_81;
      if ( (unsigned int)v58 >= *(_DWORD *)(v59 + 24) )
        goto LABEL_80;
      v60 = *(_QWORD *)(v59 + 8 * v58 + 32);
      if ( !v60 )
        goto LABEL_81;
      v61 = *(_QWORD *)(v60 + 24);
      if ( (int)v61 >= 1 )
        break;
LABEL_32:
      max_length = io->max_length;
      if ( (int)++v57 >= max_length )
        goto LABEL_33;
    }
    v62 = 0LL;
    while ( v62 < (unsigned int)v61 )
    {
      if ( !Bytes_40367492 )
        goto LABEL_81;
      v63 = Bytes_40367492->max_length;
      if ( (int)v62 % v63 >= (unsigned int)v63 )
        break;
      v64 = *(_BYTE *)(v60 + 32 + v62);
      v65 = Bytes_40367492->m_Items[(int)v62 % v63 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v66 = System_Convert__ToChar_42777604(v65 ^ v64, 0LL);
      appended = (_QWORD **)System_Text_StringBuilder__Append_42956988(v52, v66, 0LL);
      LODWORD(v61) = *(_DWORD *)(v60 + 24);
      if ( (__int64)++v62 >= (int)v61 )
        goto LABEL_32;
    }
LABEL_80:
    v128 = sub_B5D6C8(appended);
    sub_B5D668(v128, 0LL);
  }
LABEL_33:
  System_Text_StringBuilder__Append_42953744(v52, (System_String_o *)StringLiteral_1313/*"</D></RSAKeyValue>"*/, 0LL);
  v67 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v52->klass->vtable._3_ToString.method)(
          v52,
          v52->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( System_Text_StringBuilder__get_Length(v52, 0LL) >= 1 )
  {
    v68 = 0;
    do
      System_Text_StringBuilder__set_Chars(v52, v68++, 0x61u, 0LL);
    while ( v68 < System_Text_StringBuilder__get_Length(v52, 0LL) );
  }
  v69 = (System_Security_Cryptography_RSACryptoServiceProvider_o *)sub_B5D694(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RSACryptoServiceProvider___ctor(v69, 0LL);
  if ( !v69 )
    sub_B5D69C(v70, v71);
  ((void (__fastcall *)(System_Security_Cryptography_RSACryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v69->klass->vtable._11_FromXmlString.method)(
    v69,
    v67,
    v69->klass->vtable._12_ToXmlString.methodPtr);
  v72 = System_Security_Cryptography_CryptoConfig__MapNameToOID_42832144((System_String_o *)StringLiteral_12225/*"SHA256"*/, 0LL);
  System_String__IsNullOrEmpty(v72, 0LL);
  v74 = SignedData_TypeInfo;
  if ( (UserId & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v74 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE_ACCOUNT_REGIST = v74->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
    if ( !SIGNED_PACK_QUEUE_ACCOUNT_REGIST )
      sub_B5D69C(0LL, v73);
    for ( i = System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
                SIGNED_PACK_QUEUE_ACCOUNT_REGIST,
                (const MethodInfo_23ED454 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
          i < maxCount;
          ++i )
    {
      if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Guid_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
      }
      v130 = System_Guid__NewGuid(0LL);
      *(_QWORD *)&v133.fields._a = &v130;
      *(_QWORD *)&v133.fields._d = 0LL;
      v104 = System_Guid__ToString(v133, v103);
      v105 = sub_B5D694(SignedData_SignedPackData_TypeInfo);
      SignedData_SignedPackData___ctor((SignedData_SignedPackData_o *)v105, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v106 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v104, 0LL);
      if ( !v105 )
        sub_B5D69C(v106, v106);
      *(_QWORD *)(v105 + 16) = v106;
      sub_B5D560((BattleServantConfConponent_o *)(v105 + 16), v106, v107, v108, v109, v110, v111, v112);
      if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData = SignedData__MakeSignedData(v69, v72, v104, v113);
      v115 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(SignedData, 0LL);
      *(_QWORD *)(v105 + 24) = v115;
      sub_B5D560((BattleServantConfConponent_o *)(v105 + 24), v115, v116, v117, v118, v119, v120, v121);
      v123 = SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
      if ( !v123 )
        sub_B5D69C(0LL, v122);
      System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___Enqueue(
        v123,
        (SignedData_SignedPackData_o *)v105,
        (const MethodInfo_23EE0E4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    }
  }
  else
  {
    if ( (WORD1(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v74 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = v74->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_B5D69C(0LL, v73);
    for ( j = System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
                SIGNED_PACK_QUEUE,
                (const MethodInfo_23ED454 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__);
          j < maxCount;
          ++j )
    {
      if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Guid_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
      }
      v130 = System_Guid__NewGuid(0LL);
      *(_QWORD *)&v132.fields._a = &v130;
      *(_QWORD *)&v132.fields._d = 0LL;
      v79 = System_Guid__ToString(v132, v78);
      v80 = sub_B5D694(SignedData_SignedPackData_TypeInfo);
      SignedData_SignedPackData___ctor((SignedData_SignedPackData_o *)v80, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v81 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v79, 0LL);
      if ( !v80 )
        sub_B5D69C(v81, v81);
      *(_QWORD *)(v80 + 16) = v81;
      sub_B5D560((BattleServantConfConponent_o *)(v80 + 16), v81, v82, v83, v84, v85, v86, v87);
      v88 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v90 = System_String__Concat_44577788(v88, v79, 0LL);
      if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v91 = SignedData__MakeSignedData(v69, v72, v90, v89);
      v92 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v91, 0LL);
      *(_QWORD *)(v80 + 24) = v92;
      sub_B5D560((BattleServantConfConponent_o *)(v80 + 24), v92, v93, v94, v95, v96, v97, v98);
      v100 = SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
      if ( !v100 )
        sub_B5D69C(0LL, v99);
      System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___Enqueue(
        v100,
        (SignedData_SignedPackData_o *)v80,
        (const MethodInfo_23EE0E4 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__Enqueue__);
    }
  }
  klass = v69->klass;
  if ( *(_WORD *)&v69->klass->_2.bitflags1 )
  {
    v125 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v125;
      p_offset += 4;
      if ( v125 >= *(unsigned __int16 *)&v69->klass->_2.bitflags1 )
        goto LABEL_77;
    }
    v127 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_77:
    v127 = sub_AF54C0(v69, System_IDisposable_TypeInfo, 0LL, v76);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RSACryptoServiceProvider_o *, _QWORD))v127)(
    v69,
    *(_QWORD *)(v127 + 8));
}


bool __fastcall SignedData__GetSignedPackData(SignedData_SignedPackData_o **outData, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t UserId; // x0
  __int64 v12; // x1
  SignedData_c *v13; // x8
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0

  if ( (byte_42E978C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SignedData_TypeInfo, v8, v9, v10);
    byte_42E978C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v13 = SignedData_TypeInfo;
  if ( (UserId & 0x8000000000000000LL) == 0 )
  {
    if ( (WORD1(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v13 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = v13->static_fields->SIGNED_PACK_QUEUE;
    if ( SIGNED_PACK_QUEUE )
      return System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(
               SIGNED_PACK_QUEUE,
               outData,
               (const MethodInfo_23EE3A0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
LABEL_16:
    sub_B5D69C(SIGNED_PACK_QUEUE, v12);
  }
  if ( (WORD1(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v13 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v13->static_fields->SIGNED_PACK_QUEUE_ACCOUNT_REGIST;
  if ( !SIGNED_PACK_QUEUE )
    goto LABEL_16;
  return System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(
           SIGNED_PACK_QUEUE,
           outData,
           (const MethodInfo_23EE3A0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
}


System_String_o *__fastcall SignedData__MakeSignedData(
        System_Security_Cryptography_RSACryptoServiceProvider_o *signProvider,
        System_String_o *hashAlgorithm,
        System_String_o *idempotencyKey,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Text_Encoding_o *UTF8; // x0
  __int64 v12; // x1
  System_Byte_array *v13; // x0
  System_Byte_array *v14; // x19

  if ( (byte_42E9790 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)hashAlgorithm, (_DWORD)idempotencyKey, method);
    sub_B5D5C4(&StringLiteral_9564/*"No Algorithm"*/, v7, v8, v9);
    byte_42E9790 = 1;
  }
  if ( System_String__IsNullOrEmpty(hashAlgorithm, 0LL) )
    return (System_String_o *)StringLiteral_9564/*"No Algorithm"*/;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B5D69C(0LL, v12);
  v13 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               idempotencyKey,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !signProvider )
    sub_B5D69C(v13, v13);
  v14 = System_Security_Cryptography_RSACryptoServiceProvider__SignData(
          signProvider,
          v13,
          (Il2CppObject *)hashAlgorithm,
          0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String(v14, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefillSigningData(int32_t maxCount, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  SignedData___c__DisplayClass5_0_o *v20; // x19
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  __int64 v22; // x1
  SignedData_c *v23; // x0
  System_Action_o *v24; // x20

  if ( (byte_42E978D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__, v5, v6, v7);
    sub_B5D5C4(&SignedData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Threading_Tasks_Task_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, v14, v15, v16);
    sub_B5D5C4(&SignedData___c__DisplayClass5_0_TypeInfo, v17, v18, v19);
    byte_42E978D = 1;
  }
  v20 = (SignedData___c__DisplayClass5_0_o *)sub_B5D694(SignedData___c__DisplayClass5_0_TypeInfo);
  SignedData___c__DisplayClass5_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_14;
  v20->fields.maxCount = maxCount;
  v23 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v23 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v23->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_14:
    sub_B5D69C(SIGNED_PACK_QUEUE, v22);
  if ( System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___get_Count(
         SIGNED_PACK_QUEUE,
         (const MethodInfo_23ED454 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__get_Count__) >= v20->fields.maxCount )
    return 0LL;
  v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v20, Method_SignedData___c__DisplayClass5_0__RefillSigningData_b__0__, 0LL);
  if ( (BYTE3(System_Threading_Tasks_Task_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Threading_Tasks_Task_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Threading_Tasks_Task_TypeInfo);
  }
  return System_Threading_Tasks_Task__Run(v24, 0LL);
}


System_Threading_Tasks_Task_o *__fastcall SignedData__RefreshSigningData(int32_t maxCount, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SignedData_c *v8; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  SignedData_SignedPackData_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E978E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&SignedData_TypeInfo, v5, v6, v7);
    byte_42E978E = 1;
  }
  result = 0LL;
  do
  {
    v8 = SignedData_TypeInfo;
    if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      v8 = SignedData_TypeInfo;
    }
    SIGNED_PACK_QUEUE = v8->static_fields->SIGNED_PACK_QUEUE;
    if ( !SIGNED_PACK_QUEUE )
      sub_B5D69C(0LL, method);
    System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(
      SIGNED_PACK_QUEUE,
      &result,
      (const MethodInfo_23EE3A0 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t maxCount; // w19

  if ( (byte_42E5DDA & 1) == 0 )
  {
    sub_B5D5C4(&SignedData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5DDA = 1;
  }
  maxCount = this->fields.maxCount;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(maxCount, 0LL);
}