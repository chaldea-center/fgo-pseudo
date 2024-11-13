void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B158B1 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24069/*"t68aZyLxlMWVjw8lWgdZ"*/, v8, v9);
    byte_4B158B1 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_24069/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_24069/*"t68aZyLxlMWVjw8lWgdZ"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  __int64 Int_70111952; // x0
  __int64 v17; // x1
  EncryptedPlayerPrefs_c *v18; // x8
  il2cpp_array_size_t v19; // w22
  struct System_String_array *keys; // x8
  int64_t v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  int64_t privateKey; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_String_o *v83; // x0
  const MethodInfo *v84; // x1
  System_String_o *v85; // x20
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *String_70112520; // x0

  if ( (byte_4B158A3 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, type, value);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16766/*"_used_key"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16705/*"_encryption_check"*/, v13, v14);
    byte_4B158A3 = 1;
  }
  v15 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16766/*"_used_key"*/, 0LL);
  Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v15, 0LL);
  v18 = EncryptedPlayerPrefs_TypeInfo;
  v19 = Int_70111952;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v17);
    v18 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v18->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v19 >= keys->max_length )
    goto LABEL_20;
  v21 = (int64_t)keys->m_Items[v19];
  Int_70111952 = sub_1BCA888(string___TypeInfo, 9LL);
  if ( !Int_70111952 )
LABEL_21:
    sub_1BCAA3C(Int_70111952, v17);
  v28 = Int_70111952;
  if ( !*(_DWORD *)(Int_70111952 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_70111952 + 32) = key;
  sub_1BCA784((PartyOrganizationUtility_o *)(Int_70111952 + 32), (int64_t)key, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_20;
  v35 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)(v28 + 40) = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v28 + 48) = type;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), (int64_t)type, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v28 + 24) <= 3u )
    goto LABEL_20;
  v48 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)(v28 + 56) = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 56), v48, v42, v43, v44, v45, v46, v47);
  if ( *(_DWORD *)(v28 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = (int64_t)static_fields->privateKey;
  *(_QWORD *)(v28 + 64) = static_fields->privateKey;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 64), privateKey, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v28 + 24) <= 5u )
    goto LABEL_20;
  v63 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)(v28 + 72) = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 72), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v28 + 24) <= 6u
    || (*(_QWORD *)(v28 + 80) = v21,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 80), v21, v64, v65, v66, v67, v68, v69),
        *(_DWORD *)(v28 + 24) <= 7u)
    || (v76 = StringLiteral_16290/*"_"*/,
        *(_QWORD *)(v28 + 88) = StringLiteral_16290/*"_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 88), v76, v70, v71, v72, v73, v74, v75),
        *(_DWORD *)(v28 + 24) <= 8u) )
  {
LABEL_20:
    sub_1BCAA44(Int_70111952, v17);
  }
  *(_QWORD *)(v28 + 96) = value;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 96), (int64_t)value, v77, v78, v79, v80, v81, v82);
  v83 = System_String__Concat_62414748((System_String_array *)v28, 0LL);
  v85 = EncryptedPlayerPrefs__Md5(v83, v84);
  v86 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16705/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v86, 0LL) )
    return 0;
  v87 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16705/*"_encryption_check"*/, 0LL);
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v87, 0LL);
  return System_String__op_Equality(String_70112520, v85, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  System_String_o *v7; // x0

  if ( (byte_4B158B0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16766/*"_used_key"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_16705/*"_encryption_check"*/, v4, v5);
    byte_4B158B0 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v6 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16705/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v6, 0LL);
  v7 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16766/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v7, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B158AA & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v2);
    byte_4B158AA = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetFloat_39090392(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_39090392(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float Float_70112244; // s9
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x20
  float v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B158AE & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_19682/*"float"*/, v6, v7);
    byte_4B158AE = 1;
  }
  Float_70112244 = UnityEngine_PlayerPrefs__GetFloat_70112244(key, 0LL);
  v13 = floorf(Float_70112244 * 1000.0);
  v11 = System_Single__ToString(v13, (const MethodInfo *)&v13);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v9);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19682/*"float"*/, v11, v10) )
    return Float_70112244;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B158A8 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v2);
    byte_4B158A8 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetInt_39089824(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_39089824(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *v9; // x21
  int32_t Int_70111952; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B158AC & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue, method);
    sub_1BCA7E0(&StringLiteral_20916/*"int"*/, v5, v6);
    byte_4B158AC = 1;
  }
  Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(key, 0LL);
  v9 = System_Int32__ToString((int32_t)&Int_70111952, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20916/*"int"*/, v9, v8) )
    return Int_70111952;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B158A9 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v2);
    byte_4B158A9 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetLong_39090088(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_39090088(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *String_70112520; // x21
  const MethodInfo *v10; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B158AD & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, defaultValue, method);
    sub_1BCA7E0(&StringLiteral_21432/*"long"*/, v5, v6);
    byte_4B158AD = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21432/*"long"*/, String_70112520, v8) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_70112520, &result, 0LL);
    return result;
  }
  else
  {
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v10);
    return EncryptedPlayerPrefs__GetInt(key, v10);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B158AB & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B158AB = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetString_39090700(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_39090700(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *String_70112520; // x21

  if ( (byte_4B158AF & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, defaultValue, method);
    sub_1BCA7E0(&StringLiteral_23835/*"string"*/, v5, v6);
    byte_4B158AF = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23835/*"string"*/, String_70112520, v8) )
    return String_70112520;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Text_UTF8Encoding_o *v11; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_Byte_array *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v18; // x20
  System_Byte_array *v19; // x19
  __int64 v20; // x8
  System_String_o *v21; // x20
  unsigned __int64 v22; // x22
  uint8_t v23; // w21
  System_String_o *v24; // x0

  if ( (byte_4B158A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Text_UTF8Encoding_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B158A1 = 1;
  }
  v11 = (System_Text_UTF8Encoding_o *)sub_1BCAA2C(System_Text_UTF8Encoding_TypeInfo, method, v2, v3);
  System_Text_UTF8Encoding___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  v14 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v11->klass->vtable._19_GetBytes.method)(
                               v11,
                               strToEncrypt,
                               v11->klass->vtable._20_GetBytes.methodPtr);
  v18 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1BCAA2C(
                                                                     System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo,
                                                                     v15,
                                                                     v16,
                                                                     v17);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_15;
  v19 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v18,
          v14,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v18, 0LL);
  if ( !v19 )
    goto LABEL_15;
  v20 = *(_QWORD *)&v19->max_length;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        sub_1BCAA44(v12, v13);
      v23 = v19->m_Items[v22 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
      v12 = System_Convert__ToString_63069200(v23, 16, 0LL);
      if ( !v12 )
        break;
      v24 = System_String__PadLeft(v12, 2, 0x30u, 0LL);
      v12 = System_String__Concat_62401220(v21, v24, 0LL);
      LODWORD(v20) = v19->max_length;
      ++v22;
      v21 = v12;
      if ( (__int64)v22 >= (int)v20 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(v12, v13);
  }
LABEL_13:
  if ( !v21 )
    goto LABEL_15;
  return System_String__PadLeft(v21, 32, 0x30u, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  float v16; // s0
  EncryptedPlayerPrefs_c *v17; // x0
  float v18; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v21; // s1
  unsigned int v22; // w10
  int32_t v23; // w21
  int64_t v24; // x24
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  EncryptedPlayerPrefs_c *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  int64_t privateKey; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_String_o *v86; // x0
  const MethodInfo *v87; // x1
  System_String_o *v88; // x20
  System_String_o *v89; // x0
  System_String_o *v90; // x0

  if ( (byte_4B158A2 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, type, value);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16766/*"_used_key"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16705/*"_encryption_check"*/, v13, v14);
    byte_4B158A2 = 1;
  }
  v16 = UnityEngine_Random__get_value(0LL);
  v17 = EncryptedPlayerPrefs_TypeInfo;
  v18 = v16;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v15);
    v17 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v17->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v21 = v18 * (float)max_length;
  v22 = vcvtms_s32_f32(v21);
  if ( floorf(v21) == INFINITY )
    v23 = 0x80000000;
  else
    v23 = v22;
  if ( v23 >= (unsigned int)max_length )
LABEL_21:
    sub_1BCAA44(v17, v15);
  v24 = (int64_t)keys->m_Items[v23];
  v17 = (EncryptedPlayerPrefs_c *)sub_1BCA888(string___TypeInfo, 9LL);
  if ( !v17 )
LABEL_22:
    sub_1BCAA3C(v17, v15);
  v31 = v17;
  if ( !LODWORD(v17->_1.namespaze) )
    goto LABEL_21;
  v17->_1.byval_arg.data = key;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->_1.byval_arg, (int64_t)key, v25, v26, v27, v28, v29, v30);
  if ( LODWORD(v31->_1.namespaze) <= 1 )
    goto LABEL_21;
  v38 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)&v31->_1.byval_arg.bits = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.byval_arg.bits, v38, v32, v33, v34, v35, v36, v37);
  if ( LODWORD(v31->_1.namespaze) <= 2 )
    goto LABEL_21;
  v31->_1.this_arg.data = type;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.this_arg, (int64_t)type, v39, v40, v41, v42, v43, v44);
  if ( LODWORD(v31->_1.namespaze) <= 3 )
    goto LABEL_21;
  v51 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)&v31->_1.this_arg.bits = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.this_arg.bits, v51, v45, v46, v47, v48, v49, v50);
  if ( LODWORD(v31->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = (int64_t)static_fields->privateKey;
  v31->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.element_class, privateKey, v52, v53, v54, v55, v56, v57);
  if ( LODWORD(v31->_1.namespaze) <= 5 )
    goto LABEL_21;
  v66 = StringLiteral_16290/*"_"*/;
  v31->_1.castClass = (Il2CppClass *)StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.castClass, v66, v60, v61, v62, v63, v64, v65);
  if ( LODWORD(v31->_1.namespaze) <= 6 )
    goto LABEL_21;
  v31->_1.declaringType = (Il2CppClass *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.declaringType, v24, v67, v68, v69, v70, v71, v72);
  if ( LODWORD(v31->_1.namespaze) <= 7 )
    goto LABEL_21;
  v79 = StringLiteral_16290/*"_"*/;
  v31->_1.parent = (Il2CppClass *)StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.parent, v79, v73, v74, v75, v76, v77, v78);
  if ( LODWORD(v31->_1.namespaze) <= 8 )
    goto LABEL_21;
  v31->_1.generic_class = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->_1.generic_class, (int64_t)value, v80, v81, v82, v83, v84, v85);
  v86 = System_String__Concat_62414748((System_String_array *)v31, 0LL);
  v88 = EncryptedPlayerPrefs__Md5(v86, v87);
  v89 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16705/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v89, v88, 0LL);
  v90 = System_String__Concat_62401220(key, (System_String_o *)StringLiteral_16766/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v90, v23, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20
  float v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B158A6 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_19682/*"float"*/, v6, v7);
    byte_4B158A6 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v11 = floorf(value * 1000.0);
  v10 = System_Single__ToString(v11, (const MethodInfo *)&v11);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v8);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19682/*"float"*/, v10, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *v9; // x20
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = value;
  if ( (byte_4B158A4 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value, method);
    sub_1BCA7E0(&StringLiteral_20916/*"int"*/, v5, v6);
    byte_4B158A4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v9 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20916/*"int"*/, v9, v8);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *v9; // x20
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = value;
  if ( (byte_4B158A5 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, value, method);
    sub_1BCA7E0(&StringLiteral_21432/*"long"*/, v4, v5);
    byte_4B158A5 = 1;
  }
  v6 = System_Int64__ToString((int64_t)&v10, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v6, 0LL);
  v9 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21432/*"long"*/, v9, v8);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B158A7 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, value, method);
    sub_1BCA7E0(&StringLiteral_23835/*"string"*/, v5, v6);
    byte_4B158A7 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v7);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23835/*"string"*/, value, v8);
}