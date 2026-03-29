void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D300D7 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_24265/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4D300D7 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_24265/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_24265/*"t68aZyLxlMWVjw8lWgdZ"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EncryptedPlayerPrefs___ctor(EncryptedPlayerPrefs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EncryptedPlayerPrefs__CheckEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 Int_72077644; // x0
  __int64 v9; // x1
  EncryptedPlayerPrefs_c *v10; // x8
  unsigned int v11; // w22
  struct System_String_array *keys; // x8
  System_String_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  System_String_o *v75; // x0
  const MethodInfo *v76; // x1
  System_String_o *v77; // x20
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *String_72078212; // x0

  if ( (byte_4D300C9 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_16710/*"_used_key"*/);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_16650/*"_encryption_check"*/);
    byte_4D300C9 = 1;
  }
  v7 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16710/*"_used_key"*/, 0);
  Int_72077644 = UnityEngine_PlayerPrefs__GetInt_72077644(v7, 0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_72077644;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v10 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v10->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v11 >= LODWORD(keys->max_length) )
    goto LABEL_20;
  v13 = keys->m_Items[v11];
  Int_72077644 = sub_1C93B7C(string___TypeInfo, 9);
  if ( !Int_72077644 )
LABEL_21:
    sub_1C93D2C(Int_72077644, v9);
  v20 = Int_72077644;
  if ( !*(_DWORD *)(Int_72077644 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_72077644 + 32) = key;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(Int_72077644 + 32), (int32_t)key, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_20;
  v27 = StringLiteral_16207/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 48), (int32_t)type, v28, v29, v30, v31, v32, v33);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_20;
  v40 = StringLiteral_16207/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 56), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 64), (int32_t)privateKey, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v55 = StringLiteral_16207/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 72), v55, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v13,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 80), (int32_t)v13, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v68 = StringLiteral_16207/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_16207/*"_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 88), v68, v62, v63, v64, v65, v66, v67),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C93D34(Int_72077644);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 96), (int32_t)value, v69, v70, v71, v72, v73, v74);
  v75 = System_String__Concat_64466256((System_String_array *)v20, 0);
  v77 = EncryptedPlayerPrefs__Md5(v75, v76);
  v78 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16650/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v78, 0) )
    return 0;
  v79 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16650/*"_encryption_check"*/, 0);
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(v79, 0);
  return System_String__op_Equality(String_72078212, v77, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4D300D6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16710/*"_used_key"*/);
    sub_1C93AD4(&StringLiteral_16650/*"_encryption_check"*/);
    byte_4D300D6 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16650/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16710/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4D300D0 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4D300D0 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_41981660(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_41981660(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_72077936; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D300D4 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_19711/*"float"*/);
    byte_4D300D4 = 1;
  }
  Float_72077936 = UnityEngine_PlayerPrefs__GetFloat_72077936(key, 0);
  v9 = floorf(Float_72077936 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19711/*"float"*/, v7, v6) )
    return Float_72077936;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D300CE & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4D300CE = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_41981092(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_41981092(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_72077644; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D300D2 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_21062/*"int"*/);
    byte_4D300D2 = 1;
  }
  Int_72077644 = UnityEngine_PlayerPrefs__GetInt_72077644(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_72077644, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21062/*"int"*/, v6, v5) )
    return Int_72077644;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D300CF & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4D300CF = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_41981356(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_41981356(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_72078212; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D300D3 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_21609/*"long"*/);
    byte_4D300D3 = 1;
  }
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21609/*"long"*/, String_72078212, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_72078212, &result, 0);
    return result;
  }
  else
  {
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    return EncryptedPlayerPrefs__GetInt(key, v7);
  }
}


System_String_o *EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D300D1 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D300D1 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_41981968(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_41981968(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_72078212; // x21

  if ( (byte_4D300D5 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_24040/*"string"*/);
    byte_4D300D5 = 1;
  }
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_24040/*"string"*/, String_72078212, v5) )
    return String_72078212;
  else
    return defaultValue;
}


bool EncryptedPlayerPrefs__HasKey(System_String_o *key, const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__HasKey(key, 0);
}


System_String_o *EncryptedPlayerPrefs__Md5(System_String_o *strToEncrypt, const MethodInfo *method)
{
  System_Text_UTF8Encoding_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v7; // x20
  System_Byte_array *v8; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x22
  uint8_t v12; // w21
  System_String_o *v13; // x0

  if ( (byte_4D300C7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1C93AD4(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D300C7 = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1C93D20(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C93D20(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_15;
  v8 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
         (System_Security_Cryptography_HashAlgorithm_o *)v7,
         v6,
         0);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v7, 0);
  if ( !v8 )
    goto LABEL_15;
  max_length = v8->max_length;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C93D34(v4);
      v12 = v8->m_Items[v11];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_65521760(v12, 16, 0);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_64425724(v10, v13, 0);
      LODWORD(max_length) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C93D2C(v4, v5);
  }
LABEL_13:
  if ( !v10 )
    goto LABEL_15;
  return System_String__PadLeft(v10, 32, 0x30u, 0);
}


void EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  EncryptedPlayerPrefs_c *v7; // x0
  struct System_String_array *keys; // x8
  struct System_String_array *v9; // x8
  int32_t v10; // w21
  System_String_o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  EncryptedPlayerPrefs_c *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_String_o *v73; // x0
  const MethodInfo *v74; // x1
  System_String_o *v75; // x20
  System_String_o *v76; // x0
  System_String_o *v77; // x0

  if ( (byte_4D300C8 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_16710/*"_used_key"*/);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_16650/*"_encryption_check"*/);
    byte_4D300C8 = 1;
  }
  v7 = EncryptedPlayerPrefs_TypeInfo;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v7 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v7->static_fields->keys;
  if ( !keys )
    goto LABEL_20;
  v7 = (EncryptedPlayerPrefs_c *)UnityEngine_Random__Range_72079620(0, keys->max_length, 0);
  v9 = EncryptedPlayerPrefs_TypeInfo->static_fields->keys;
  if ( !v9 )
    goto LABEL_20;
  v10 = (int)v7;
  if ( (unsigned int)v7 >= LODWORD(v9->max_length) )
    goto LABEL_19;
  v11 = v9->m_Items[(int)v7];
  v7 = (EncryptedPlayerPrefs_c *)sub_1C93B7C(string___TypeInfo, 9);
  if ( !v7 )
LABEL_20:
    sub_1C93D2C(v7, type);
  v18 = v7;
  if ( !LODWORD(v7->_1.namespaze) )
    goto LABEL_19;
  v7->_1.byval_arg.data = key;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->_1.byval_arg, (int32_t)key, v12, v13, v14, v15, v16, v17);
  if ( LODWORD(v18->_1.namespaze) <= 1 )
    goto LABEL_19;
  v25 = StringLiteral_16207/*"_"*/;
  *(_QWORD *)&v18->_1.byval_arg.bits = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.byval_arg.bits, v25, v19, v20, v21, v22, v23, v24);
  if ( LODWORD(v18->_1.namespaze) <= 2 )
    goto LABEL_19;
  v18->_1.this_arg.data = type;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.this_arg, (int32_t)type, v26, v27, v28, v29, v30, v31);
  if ( LODWORD(v18->_1.namespaze) <= 3 )
    goto LABEL_19;
  v38 = StringLiteral_16207/*"_"*/;
  *(_QWORD *)&v18->_1.this_arg.bits = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.this_arg.bits, v38, v32, v33, v34, v35, v36, v37);
  if ( LODWORD(v18->_1.namespaze) <= 4 )
    goto LABEL_19;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v18->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.element_class, (int32_t)privateKey, v39, v40, v41, v42, v43, v44);
  if ( LODWORD(v18->_1.namespaze) <= 5 )
    goto LABEL_19;
  v53 = StringLiteral_16207/*"_"*/;
  v18->_1.castClass = (Il2CppClass *)StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.castClass, v53, v47, v48, v49, v50, v51, v52);
  if ( LODWORD(v18->_1.namespaze) <= 6
    || (v18->_1.declaringType = (Il2CppClass *)v11,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.declaringType, (int32_t)v11, v54, v55, v56, v57, v58, v59),
        LODWORD(v18->_1.namespaze) <= 7)
    || (v66 = StringLiteral_16207/*"_"*/,
        v18->_1.parent = (Il2CppClass *)StringLiteral_16207/*"_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.parent, v66, v60, v61, v62, v63, v64, v65),
        LODWORD(v18->_1.namespaze) <= 8) )
  {
LABEL_19:
    sub_1C93D34(v7);
  }
  v18->_1.generic_class = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_1.generic_class, (int32_t)value, v67, v68, v69, v70, v71, v72);
  v73 = System_String__Concat_64466256((System_String_array *)v18, 0);
  v75 = EncryptedPlayerPrefs__Md5(v73, v74);
  v76 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16650/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v76, v75, 0);
  v77 = System_String__Concat_64425724(key, (System_String_o *)StringLiteral_16710/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v77, v10, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D300CC & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_19711/*"float"*/);
    byte_4D300CC = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19711/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4D300CA & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_21062/*"int"*/);
    byte_4D300CA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21062/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4D300CB & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_21609/*"long"*/);
    byte_4D300CB = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21609/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4D300CD & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&StringLiteral_24040/*"string"*/);
    byte_4D300CD = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_24040/*"string"*/, value, v5);
}