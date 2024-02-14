void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4218B97 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22653/*"t68aZyLxlMWVjw8lWgdZ"*/, v8);
    byte_4218B97 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EncryptedPlayerPrefs_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22653/*"t68aZyLxlMWVjw8lWgdZ"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22653/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EncryptedPlayerPrefs___ctor(EncryptedPlayerPrefs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EncryptedPlayerPrefs__CheckEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 Int_34962660; // x0
  il2cpp_array_size_t v13; // w21
  EncryptedPlayerPrefs_c *v14; // x8
  struct System_String_array *keys; // x8
  System_Int32_array **v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **privateKey; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_o *v77; // x0
  const MethodInfo *v78; // x1
  System_String_o *v79; // x20
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  System_String_o *String_34963268; // x0
  __int64 v84; // x0
  __int64 v85; // x0

  if ( (byte_4218B89 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16248/*"_used_key"*/, v8);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v9);
    sub_B0D8A4(&StringLiteral_16188/*"_encryption_check"*/, v10);
    byte_4218B89 = 1;
  }
  v11 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16248/*"_used_key"*/, 0LL);
  Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v11, 0LL);
  v13 = Int_34962660;
  v14 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v14 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v14->static_fields->keys;
  if ( !keys )
    goto LABEL_49;
  if ( v13 >= keys->max_length )
    goto LABEL_47;
  v16 = (System_Int32_array **)keys->m_Items[v13];
  Int_34962660 = sub_B0D8BC(string___TypeInfo, 9LL);
  if ( !Int_34962660 )
LABEL_49:
    sub_B0D97C(Int_34962660);
  v23 = (System_String_array *)Int_34962660;
  if ( key )
  {
    Int_34962660 = sub_B0D964(key, *(_QWORD *)(*(_QWORD *)Int_34962660 + 64LL));
    if ( !Int_34962660 )
      goto LABEL_48;
  }
  if ( !v23->max_length )
    goto LABEL_47;
  v23->m_Items[0] = key;
  sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, (System_Int32_array **)key, v17, v18, v19, v20, v21, v22);
  Int_34962660 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    Int_34962660 = sub_B0D964(StringLiteral_15952/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
    v30 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_47;
  v23->m_Items[1] = (System_String_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  if ( type )
  {
    Int_34962660 = sub_B0D964(type, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_47;
  v23->m_Items[2] = type;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v23->m_Items[2],
    (System_Int32_array **)type,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Int_34962660 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    Int_34962660 = sub_B0D964(StringLiteral_15952/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
    v43 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_47;
  v23->m_Items[3] = (System_String_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    Int_34962660 = sub_B0D964(privateKey, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_47;
  v23->m_Items[4] = (System_String_o *)privateKey;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[4], privateKey, v44, v45, v46, v47, v48, v49);
  Int_34962660 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    Int_34962660 = sub_B0D964(StringLiteral_15952/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
    v57 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_47;
  v23->m_Items[5] = (System_String_o *)v57;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[5], v57, v51, v52, v53, v54, v55, v56);
  if ( v16 )
  {
    Int_34962660 = sub_B0D964(v16, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_47;
  v23->m_Items[6] = (System_String_o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[6], v16, v58, v59, v60, v61, v62, v63);
  Int_34962660 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    Int_34962660 = sub_B0D964(StringLiteral_15952/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_48;
    v70 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_47;
  v23->m_Items[7] = (System_String_o *)v70;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[7], v70, v64, v65, v66, v67, v68, v69);
  if ( value )
  {
    Int_34962660 = sub_B0D964(value, v23->obj.klass->_1.element_class);
    if ( !Int_34962660 )
    {
LABEL_48:
      v85 = sub_B0D99C(Int_34962660);
      sub_B0D948(v85, 0LL);
    }
  }
  if ( v23->max_length <= 8 )
  {
LABEL_47:
    v84 = sub_B0D9A8(Int_34962660);
    sub_B0D948(v84, 0LL);
  }
  v23->m_Items[8] = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v23->m_Items[8],
    (System_Int32_array **)value,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = System_String__Concat_43930028(v23, 0LL);
  v79 = EncryptedPlayerPrefs__Md5(v77, v78);
  v80 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16188/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v80, 0LL) )
    return 0;
  v81 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16188/*"_encryption_check"*/, 0LL);
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(v81, 0LL);
  return System_String__op_Equality(String_34963268, v79, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_4218B96 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16248/*"_used_key"*/, method);
    sub_B0D8A4(&StringLiteral_16188/*"_encryption_check"*/, v3);
    byte_4218B96 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16188/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16248/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4218B90 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4218B90 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetFloat_32690016(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_32690016(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_34962964; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4218B94 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18828/*"float"*/, v5);
    byte_4218B94 = 1;
  }
  Float_34962964 = UnityEngine_PlayerPrefs__GetFloat_34962964(key, 0LL);
  v10 = floorf(Float_34962964 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_18828/*"float"*/, v8, v7) )
    return Float_34962964;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4218B8E & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4218B8E = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetInt_32689388(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_32689388(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_34962660; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4218B92 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_B0D8A4(&StringLiteral_19904/*"int"*/, v5);
    byte_4218B92 = 1;
  }
  Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_34962660, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19904/*"int"*/, v7, v6) )
    return Int_34962660;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4218B8F & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4218B8F = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetLong_32689676(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_32689676(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_34963268; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4218B93 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B0D8A4(&StringLiteral_20378/*"long"*/, v5);
    byte_4218B93 = 1;
  }
  result = 0LL;
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20378/*"long"*/, String_34963268, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_34963268, &result, 0LL);
    return result;
  }
  else
  {
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    return EncryptedPlayerPrefs__GetInt(key, v8);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1

  if ( (byte_4218B91 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4218B91 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetString_32690348(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_32690348(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_34963268; // x21

  if ( (byte_4218B95 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B0D8A4(&StringLiteral_22435/*"string"*/, v5);
    byte_4218B95 = 1;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22435/*"string"*/, String_34963268, v6) )
    return String_34963268;
  else
    return defaultValue;
}


bool __fastcall EncryptedPlayerPrefs__HasKey(System_String_o *key, const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__HasKey(key, 0LL);
}


System_String_o *__fastcall EncryptedPlayerPrefs__Md5(System_String_o *strToEncrypt, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Text_UTF8Encoding_o *v7; // x20
  System_String_o *v8; // x0
  System_Byte_array *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v12; // x20
  System_Byte_array *v13; // x19
  __int64 v14; // x8
  System_String_o *v15; // x20
  unsigned __int64 v16; // x22
  uint8_t v17; // w21
  System_String_o *v18; // x0
  __int64 v20; // x0

  if ( (byte_4218B87 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v4);
    sub_B0D8A4(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4218B87 = 1;
  }
  v7 = (System_Text_UTF8Encoding_o *)sub_B0D974(System_Text_UTF8Encoding_TypeInfo, method, v2);
  System_Text_UTF8Encoding___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v7->klass->vtable._18_GetBytes.method)(
                              v7,
                              strToEncrypt,
                              v7->klass->vtable._19_GetBytes.methodPtr);
  v12 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_B0D974(
                                                                     System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo,
                                                                     v10,
                                                                     v11);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v13 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43128996(
          (System_Security_Cryptography_HashAlgorithm_o *)v12,
          v9,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v12, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v14 = *(_QWORD *)&v13->max_length;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
      {
        v20 = sub_B0D9A8(v8);
        sub_B0D948(v20, 0LL);
      }
      v17 = v13->m_Items[v16 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v8 = System_Convert__ToString_41933236(v17, 16, 0LL);
      if ( !v8 )
        break;
      v18 = System_String__PadLeft(v8, 2, 0x30u, 0LL);
      v8 = System_String__Concat_43849904(v15, v18, 0LL);
      LODWORD(v14) = v13->max_length;
      ++v16;
      v15 = v8;
      if ( (__int64)v16 >= (int)v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(v8);
  }
LABEL_14:
  if ( !v15 )
    goto LABEL_16;
  return System_String__PadLeft(v15, 32, 0x30u, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  float v11; // s8
  EncryptedPlayerPrefs_c *v12; // x0
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v15; // s1
  double v16; // d0
  int32_t v17; // w21
  System_Int32_array **v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **privateKey; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_o *v79; // x0
  const MethodInfo *v80; // x1
  System_String_o *v81; // x20
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0

  if ( (byte_4218B88 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16248/*"_used_key"*/, v8);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v9);
    sub_B0D8A4(&StringLiteral_16188/*"_encryption_check"*/, v10);
    byte_4218B88 = 1;
  }
  v11 = UnityEngine_Random__get_value(0LL);
  v12 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v12 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v12->static_fields->keys;
  if ( !keys )
    goto LABEL_50;
  max_length = keys->max_length;
  v15 = floorf(v11 * (float)max_length);
  if ( v15 == INFINITY )
    v16 = -v15;
  else
    v16 = v15;
  v17 = (int)v16;
  if ( (int)v16 >= (unsigned int)max_length )
  {
LABEL_48:
    v84 = sub_B0D9A8(v12);
    sub_B0D948(v84, 0LL);
  }
  v18 = (System_Int32_array **)keys->m_Items[v17];
  v12 = (EncryptedPlayerPrefs_c *)sub_B0D8BC(string___TypeInfo, 9LL);
  if ( !v12 )
LABEL_50:
    sub_B0D97C(v12);
  v25 = (System_String_array *)v12;
  if ( key )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(key, *((_QWORD *)v12->_1.image + 8));
    if ( !v12 )
      goto LABEL_49;
  }
  if ( !v25->max_length )
    goto LABEL_48;
  v25->m_Items[0] = key;
  sub_B0D840((BattleServantConfConponent_o *)v25->m_Items, (System_Int32_array **)key, v19, v20, v21, v22, v23, v24);
  v12 = (EncryptedPlayerPrefs_c *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(StringLiteral_15952/*"_"*/, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
    v32 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_48;
  v25->m_Items[1] = (System_String_o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  if ( type )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(type, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_48;
  v25->m_Items[2] = type;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v25->m_Items[2],
    (System_Int32_array **)type,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v12 = (EncryptedPlayerPrefs_c *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(StringLiteral_15952/*"_"*/, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
    v45 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_48;
  v25->m_Items[3] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(privateKey, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_48;
  v25->m_Items[4] = (System_String_o *)privateKey;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[4], privateKey, v46, v47, v48, v49, v50, v51);
  v12 = (EncryptedPlayerPrefs_c *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(StringLiteral_15952/*"_"*/, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
    v59 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_48;
  v25->m_Items[5] = (System_String_o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[5], v59, v53, v54, v55, v56, v57, v58);
  if ( v18 )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(v18, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_48;
  v25->m_Items[6] = (System_String_o *)v18;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[6], v18, v60, v61, v62, v63, v64, v65);
  v12 = (EncryptedPlayerPrefs_c *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(StringLiteral_15952/*"_"*/, v25->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_49;
    v72 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_48;
  v25->m_Items[7] = (System_String_o *)v72;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
  if ( value )
  {
    v12 = (EncryptedPlayerPrefs_c *)sub_B0D964(value, v25->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_49:
      v85 = sub_B0D99C(v12);
      sub_B0D948(v85, 0LL);
    }
  }
  if ( v25->max_length <= 8 )
    goto LABEL_48;
  v25->m_Items[8] = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v25->m_Items[8],
    (System_Int32_array **)value,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = System_String__Concat_43930028(v25, 0LL);
  v81 = EncryptedPlayerPrefs__Md5(v79, v80);
  v82 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16188/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v82, v81, 0LL);
  v83 = System_String__Concat_43849904(key, (System_String_o *)StringLiteral_16248/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v83, v17, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4218B8C & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18828/*"float"*/, v5);
    byte_4218B8C = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_18828/*"float"*/, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = value;
  if ( (byte_4218B8A & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&StringLiteral_19904/*"int"*/, v5);
    byte_4218B8A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19904/*"int"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = value;
  if ( (byte_4218B8B & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B0D8A4(&StringLiteral_20378/*"long"*/, v4);
    byte_4218B8B = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20378/*"long"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4218B8D & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B0D8A4(&StringLiteral_22435/*"string"*/, v5);
    byte_4218B8D = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22435/*"string"*/, value, v6);
}