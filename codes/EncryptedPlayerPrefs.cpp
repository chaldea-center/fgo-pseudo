void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CC6ABC & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_24081/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4CC6ABC = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_24081/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_24081/*"t68aZyLxlMWVjw8lWgdZ"*/,
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
  __int64 Int_71682344; // x0
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
  System_String_o *String_71682912; // x0

  if ( (byte_4CC6AAE & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_16608/*"_used_key"*/);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    sub_1C713B0(&StringLiteral_16548/*"_encryption_check"*/);
    byte_4CC6AAE = 1;
  }
  v7 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16608/*"_used_key"*/, 0);
  Int_71682344 = UnityEngine_PlayerPrefs__GetInt_71682344(v7, 0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_71682344;
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
  Int_71682344 = sub_1C71458(string___TypeInfo, 9);
  if ( !Int_71682344 )
LABEL_21:
    sub_1C71608(Int_71682344, v9);
  v20 = Int_71682344;
  if ( !*(_DWORD *)(Int_71682344 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_71682344 + 32) = key;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(Int_71682344 + 32), (int32_t)key, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_20;
  v27 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 48), (int32_t)type, v28, v29, v30, v31, v32, v33);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_20;
  v40 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 56), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 64), (int32_t)privateKey, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v55 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 72), v55, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v13,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 80), (int32_t)v13, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v68 = StringLiteral_16109/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_16109/*"_"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 88), v68, v62, v63, v64, v65, v66, v67),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C71610(Int_71682344);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 96), (int32_t)value, v69, v70, v71, v72, v73, v74);
  v75 = System_String__Concat_64072256((System_String_array *)v20, 0);
  v77 = EncryptedPlayerPrefs__Md5(v75, v76);
  v78 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16548/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v78, 0) )
    return 0;
  v79 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16548/*"_encryption_check"*/, 0);
  String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(v79, 0);
  return System_String__op_Equality(String_71682912, v77, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4CC6ABB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16608/*"_used_key"*/);
    sub_1C713B0(&StringLiteral_16548/*"_encryption_check"*/);
    byte_4CC6ABB = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16548/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16608/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4CC6AB5 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4CC6AB5 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_41533128(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_41533128(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_71682636; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC6AB9 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_19576/*"float"*/);
    byte_4CC6AB9 = 1;
  }
  Float_71682636 = UnityEngine_PlayerPrefs__GetFloat_71682636(key, 0);
  v9 = floorf(Float_71682636 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19576/*"float"*/, v7, v6) )
    return Float_71682636;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC6AB3 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4CC6AB3 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_41532560(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_41532560(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_71682344; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC6AB7 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_20906/*"int"*/);
    byte_4CC6AB7 = 1;
  }
  Int_71682344 = UnityEngine_PlayerPrefs__GetInt_71682344(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_71682344, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20906/*"int"*/, v6, v5) )
    return Int_71682344;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC6AB4 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4CC6AB4 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_41532824(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_41532824(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71682912; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC6AB8 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_21445/*"long"*/);
    byte_4CC6AB8 = 1;
  }
  String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21445/*"long"*/, String_71682912, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_71682912, &result, 0);
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

  if ( (byte_4CC6AB6 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC6AB6 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_41533436(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_41533436(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71682912; // x21

  if ( (byte_4CC6ABA & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_23861/*"string"*/);
    byte_4CC6ABA = 1;
  }
  String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23861/*"string"*/, String_71682912, v5) )
    return String_71682912;
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

  if ( (byte_4CC6AAC & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1C713B0(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC6AAC = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1C715FC(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C715FC(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
        sub_1C71610(v4);
      v12 = v8->m_Items[v11];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_65127760(v12, 16, 0);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_64031724(v10, v13, 0);
      LODWORD(max_length) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C71608(v4, v5);
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
  __int64 v7; // x1
  float v8; // s0
  EncryptedPlayerPrefs_c *v9; // x0
  float v10; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v13; // s1
  unsigned int v14; // w10
  int32_t v15; // w21
  Il2CppClass *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  EncryptedPlayerPrefs_c *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  System_String_o *v78; // x0
  const MethodInfo *v79; // x1
  System_String_o *v80; // x20
  System_String_o *v81; // x0
  System_String_o *v82; // x0

  if ( (byte_4CC6AAD & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_16608/*"_used_key"*/);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    sub_1C713B0(&StringLiteral_16548/*"_encryption_check"*/);
    byte_4CC6AAD = 1;
  }
  v8 = UnityEngine_Random__get_value(0);
  v9 = EncryptedPlayerPrefs_TypeInfo;
  v10 = v8;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v9 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v9->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v13 = v10 * (float)max_length;
  v14 = vcvtms_s32_f32(v13);
  if ( floorf(v13) == INFINITY )
    v15 = 0x80000000;
  else
    v15 = v14;
  if ( v15 >= (unsigned int)max_length )
LABEL_21:
    sub_1C71610(v9);
  v16 = (Il2CppClass *)keys->m_Items[v15];
  v9 = (EncryptedPlayerPrefs_c *)sub_1C71458(string___TypeInfo, 9);
  if ( !v9 )
LABEL_22:
    sub_1C71608(v9, v7);
  v23 = v9;
  if ( !LODWORD(v9->_1.namespaze) )
    goto LABEL_21;
  v9->_1.byval_arg.data = key;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->_1.byval_arg, (int32_t)key, v17, v18, v19, v20, v21, v22);
  if ( LODWORD(v23->_1.namespaze) <= 1 )
    goto LABEL_21;
  v30 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)&v23->_1.byval_arg.bits = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.byval_arg.bits, v30, v24, v25, v26, v27, v28, v29);
  if ( LODWORD(v23->_1.namespaze) <= 2 )
    goto LABEL_21;
  v23->_1.this_arg.data = type;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.this_arg, (int32_t)type, v31, v32, v33, v34, v35, v36);
  if ( LODWORD(v23->_1.namespaze) <= 3 )
    goto LABEL_21;
  v43 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)&v23->_1.this_arg.bits = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.this_arg.bits, v43, v37, v38, v39, v40, v41, v42);
  if ( LODWORD(v23->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v23->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.element_class, (int32_t)privateKey, v44, v45, v46, v47, v48, v49);
  if ( LODWORD(v23->_1.namespaze) <= 5 )
    goto LABEL_21;
  v58 = StringLiteral_16109/*"_"*/;
  v23->_1.castClass = (Il2CppClass *)StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.castClass, v58, v52, v53, v54, v55, v56, v57);
  if ( LODWORD(v23->_1.namespaze) <= 6 )
    goto LABEL_21;
  v23->_1.declaringType = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.declaringType, (int32_t)v16, v59, v60, v61, v62, v63, v64);
  if ( LODWORD(v23->_1.namespaze) <= 7 )
    goto LABEL_21;
  v71 = StringLiteral_16109/*"_"*/;
  v23->_1.parent = (Il2CppClass *)StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.parent, v71, v65, v66, v67, v68, v69, v70);
  if ( LODWORD(v23->_1.namespaze) <= 8 )
    goto LABEL_21;
  v23->_1.generic_class = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->_1.generic_class, (int32_t)value, v72, v73, v74, v75, v76, v77);
  v78 = System_String__Concat_64072256((System_String_array *)v23, 0);
  v80 = EncryptedPlayerPrefs__Md5(v78, v79);
  v81 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16548/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v81, v80, 0);
  v82 = System_String__Concat_64031724(key, (System_String_o *)StringLiteral_16608/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v82, v15, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC6AB1 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_19576/*"float"*/);
    byte_4CC6AB1 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19576/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4CC6AAF & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_20906/*"int"*/);
    byte_4CC6AAF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20906/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4CC6AB0 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_21445/*"long"*/);
    byte_4CC6AB0 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21445/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4CC6AB2 & 1) == 0 )
  {
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&StringLiteral_23861/*"string"*/);
    byte_4CC6AB2 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23861/*"string"*/, value, v5);
}