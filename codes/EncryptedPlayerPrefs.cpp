void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4E76D8B & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24454/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4E76D8B = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_24454/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_24454/*"t68aZyLxlMWVjw8lWgdZ"*/,
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
  __int64 Int_73317220; // x0
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
  System_String_o *String_73317788; // x0

  if ( (byte_4E76D7D & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_16833/*"_used_key"*/);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    sub_1D0F0B4(&StringLiteral_16772/*"_encryption_check"*/);
    byte_4E76D7D = 1;
  }
  v7 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16833/*"_used_key"*/, 0);
  Int_73317220 = UnityEngine_PlayerPrefs__GetInt_73317220(v7, 0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_73317220;
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
  Int_73317220 = sub_1D0F15C(string___TypeInfo, 9);
  if ( !Int_73317220 )
LABEL_21:
    sub_1D0F30C(Int_73317220, v9);
  v20 = Int_73317220;
  if ( !*(_DWORD *)(Int_73317220 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_73317220 + 32) = key;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(Int_73317220 + 32), (int32_t)key, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_20;
  v27 = StringLiteral_16314/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 48), (int32_t)type, v28, v29, v30, v31, v32, v33);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_20;
  v40 = StringLiteral_16314/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 56), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 64), (int32_t)privateKey, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v55 = StringLiteral_16314/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 72), v55, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v13,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 80), (int32_t)v13, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v68 = StringLiteral_16314/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_16314/*"_"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 88), v68, v62, v63, v64, v65, v66, v67),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_1D0F314(Int_73317220);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 96), (int32_t)value, v69, v70, v71, v72, v73, v74);
  v75 = System_String__Concat_65603304((System_String_array *)v20, 0);
  v77 = EncryptedPlayerPrefs__Md5(v75, v76);
  v78 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16772/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v78, 0) )
    return 0;
  v79 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16772/*"_encryption_check"*/, 0);
  String_73317788 = UnityEngine_PlayerPrefs__GetString_73317788(v79, 0);
  return System_String__op_Equality(String_73317788, v77, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4E76D8A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_16833/*"_used_key"*/);
    sub_1D0F0B4(&StringLiteral_16772/*"_encryption_check"*/);
    byte_4E76D8A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16772/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16833/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4E76D84 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4E76D84 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_42625816(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_42625816(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_73317512; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E76D88 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19854/*"float"*/);
    byte_4E76D88 = 1;
  }
  Float_73317512 = UnityEngine_PlayerPrefs__GetFloat_73317512(key, 0);
  v9 = floorf(Float_73317512 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19854/*"float"*/, v7, v6) )
    return Float_73317512;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E76D82 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4E76D82 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_42625248(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_42625248(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_73317220; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E76D86 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21221/*"int"*/);
    byte_4E76D86 = 1;
  }
  Int_73317220 = UnityEngine_PlayerPrefs__GetInt_73317220(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_73317220, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21221/*"int"*/, v6, v5) )
    return Int_73317220;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E76D83 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    byte_4E76D83 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_42625512(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_42625512(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_73317788; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E76D87 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21773/*"long"*/);
    byte_4E76D87 = 1;
  }
  String_73317788 = UnityEngine_PlayerPrefs__GetString_73317788(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21773/*"long"*/, String_73317788, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_73317788, &result, 0);
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

  if ( (byte_4E76D85 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E76D85 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_42626124(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_42626124(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_73317788; // x21

  if ( (byte_4E76D89 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24225/*"string"*/);
    byte_4E76D89 = 1;
  }
  String_73317788 = UnityEngine_PlayerPrefs__GetString_73317788(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_24225/*"string"*/, String_73317788, v5) )
    return String_73317788;
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

  if ( (byte_4E76D7B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Convert_TypeInfo);
    sub_1D0F0B4(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1D0F0B4(&System_Text_UTF8Encoding_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E76D7B = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1D0F300(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1D0F300(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
        sub_1D0F314(v4);
      v12 = v8->m_Items[v11];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_66658808(v12, 16, 0);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_65562772(v10, v13, 0);
      LODWORD(max_length) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1D0F30C(v4, v5);
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

  if ( (byte_4E76D7C & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_16833/*"_used_key"*/);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    sub_1D0F0B4(&StringLiteral_16772/*"_encryption_check"*/);
    byte_4E76D7C = 1;
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
  v7 = (EncryptedPlayerPrefs_c *)UnityEngine_Random__Range_73319196(0, keys->max_length, 0);
  v9 = EncryptedPlayerPrefs_TypeInfo->static_fields->keys;
  if ( !v9 )
    goto LABEL_20;
  v10 = (int)v7;
  if ( (unsigned int)v7 >= LODWORD(v9->max_length) )
    goto LABEL_19;
  v11 = v9->m_Items[(int)v7];
  v7 = (EncryptedPlayerPrefs_c *)sub_1D0F15C(string___TypeInfo, 9);
  if ( !v7 )
LABEL_20:
    sub_1D0F30C(v7, type);
  v18 = v7;
  if ( !LODWORD(v7->_1.namespaze) )
    goto LABEL_19;
  v7->_1.byval_arg.data = key;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v7->_1.byval_arg, (int32_t)key, v12, v13, v14, v15, v16, v17);
  if ( LODWORD(v18->_1.namespaze) <= 1 )
    goto LABEL_19;
  v25 = StringLiteral_16314/*"_"*/;
  *(_QWORD *)&v18->_1.byval_arg.bits = StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.byval_arg.bits, v25, v19, v20, v21, v22, v23, v24);
  if ( LODWORD(v18->_1.namespaze) <= 2 )
    goto LABEL_19;
  v18->_1.this_arg.data = type;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.this_arg, (int32_t)type, v26, v27, v28, v29, v30, v31);
  if ( LODWORD(v18->_1.namespaze) <= 3 )
    goto LABEL_19;
  v38 = StringLiteral_16314/*"_"*/;
  *(_QWORD *)&v18->_1.this_arg.bits = StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.this_arg.bits, v38, v32, v33, v34, v35, v36, v37);
  if ( LODWORD(v18->_1.namespaze) <= 4 )
    goto LABEL_19;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v18->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.element_class, (int32_t)privateKey, v39, v40, v41, v42, v43, v44);
  if ( LODWORD(v18->_1.namespaze) <= 5 )
    goto LABEL_19;
  v53 = StringLiteral_16314/*"_"*/;
  v18->_1.castClass = (Il2CppClass *)StringLiteral_16314/*"_"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.castClass, v53, v47, v48, v49, v50, v51, v52);
  if ( LODWORD(v18->_1.namespaze) <= 6
    || (v18->_1.declaringType = (Il2CppClass *)v11,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.declaringType, (int32_t)v11, v54, v55, v56, v57, v58, v59),
        LODWORD(v18->_1.namespaze) <= 7)
    || (v66 = StringLiteral_16314/*"_"*/,
        v18->_1.parent = (Il2CppClass *)StringLiteral_16314/*"_"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.parent, v66, v60, v61, v62, v63, v64, v65),
        LODWORD(v18->_1.namespaze) <= 8) )
  {
LABEL_19:
    sub_1D0F314(v7);
  }
  v18->_1.generic_class = value;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->_1.generic_class, (int32_t)value, v67, v68, v69, v70, v71, v72);
  v73 = System_String__Concat_65603304((System_String_array *)v18, 0);
  v75 = EncryptedPlayerPrefs__Md5(v73, v74);
  v76 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16772/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v76, v75, 0);
  v77 = System_String__Concat_65562772(key, (System_String_o *)StringLiteral_16833/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v77, v10, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E76D80 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19854/*"float"*/);
    byte_4E76D80 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19854/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4E76D7E & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21221/*"int"*/);
    byte_4E76D7E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21221/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4E76D7F & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21773/*"long"*/);
    byte_4E76D7F = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21773/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4E76D81 & 1) == 0 )
  {
    sub_1D0F0B4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24225/*"string"*/);
    byte_4E76D81 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_24225/*"string"*/, value, v5);
}