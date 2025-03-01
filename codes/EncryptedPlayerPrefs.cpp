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

  if ( (byte_4BFCDF1 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_24273/*"t68aZyLxlMWVjw8lWgdZ"*/, v8);
    byte_4BFCDF1 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_24273/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_24273/*"t68aZyLxlMWVjw8lWgdZ"*/,
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 Int_70947428; // x0
  __int64 v13; // x1
  EncryptedPlayerPrefs_c *v14; // x8
  il2cpp_array_size_t v15; // w22
  struct System_String_array *keys; // x8
  int64_t v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  int64_t privateKey; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_String_o *v79; // x0
  const MethodInfo *v80; // x1
  System_String_o *v81; // x20
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *String_70947996; // x0

  if ( (byte_4BFCDE3 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1C2E12C(&string___TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_16888/*"_used_key"*/, v8);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v9);
    sub_1C2E12C(&StringLiteral_16827/*"_encryption_check"*/, v10);
    byte_4BFCDE3 = 1;
  }
  v11 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16888/*"_used_key"*/, 0LL);
  Int_70947428 = UnityEngine_PlayerPrefs__GetInt_70947428(v11, 0LL);
  v14 = EncryptedPlayerPrefs_TypeInfo;
  v15 = Int_70947428;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v14 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v14->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v15 >= keys->max_length )
    goto LABEL_20;
  v17 = (int64_t)keys->m_Items[v15];
  Int_70947428 = sub_1C2E1D4(string___TypeInfo, 9LL);
  if ( !Int_70947428 )
LABEL_21:
    sub_1C2E388(Int_70947428, v13);
  v24 = Int_70947428;
  if ( !*(_DWORD *)(Int_70947428 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_70947428 + 32) = key;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(Int_70947428 + 32), (int64_t)key, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v24 + 24) <= 1u )
    goto LABEL_20;
  v31 = StringLiteral_16410/*"_"*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 40), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v24 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v24 + 48) = type;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 48), (int64_t)type, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v24 + 24) <= 3u )
    goto LABEL_20;
  v44 = StringLiteral_16410/*"_"*/;
  *(_QWORD *)(v24 + 56) = StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 56), v44, v38, v39, v40, v41, v42, v43);
  if ( *(_DWORD *)(v24 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = (int64_t)static_fields->privateKey;
  *(_QWORD *)(v24 + 64) = static_fields->privateKey;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 64), privateKey, v45, v46, v47, v48, v49, v50);
  if ( *(_DWORD *)(v24 + 24) <= 5u )
    goto LABEL_20;
  v59 = StringLiteral_16410/*"_"*/;
  *(_QWORD *)(v24 + 72) = StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 72), v59, v53, v54, v55, v56, v57, v58);
  if ( *(_DWORD *)(v24 + 24) <= 6u
    || (*(_QWORD *)(v24 + 80) = v17,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 80), v17, v60, v61, v62, v63, v64, v65),
        *(_DWORD *)(v24 + 24) <= 7u)
    || (v72 = StringLiteral_16410/*"_"*/,
        *(_QWORD *)(v24 + 88) = StringLiteral_16410/*"_"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 88), v72, v66, v67, v68, v69, v70, v71),
        *(_DWORD *)(v24 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C2E390(Int_70947428, v13);
  }
  *(_QWORD *)(v24 + 96) = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 96), (int64_t)value, v73, v74, v75, v76, v77, v78);
  v79 = System_String__Concat_63249112((System_String_array *)v24, 0LL);
  v81 = EncryptedPlayerPrefs__Md5(v79, v80);
  v82 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16827/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v82, 0LL) )
    return 0;
  v83 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16827/*"_encryption_check"*/, 0LL);
  String_70947996 = UnityEngine_PlayerPrefs__GetString_70947996(v83, 0LL);
  return System_String__op_Equality(String_70947996, v81, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_4BFCDF0 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_16888/*"_used_key"*/, method);
    sub_1C2E12C(&StringLiteral_16827/*"_encryption_check"*/, v3);
    byte_4BFCDF0 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16827/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16888/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4BFCDEA & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4BFCDEA = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_39695232(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_39695232(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_70947720; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFCDEE & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_19833/*"float"*/, v5);
    byte_4BFCDEE = 1;
  }
  Float_70947720 = UnityEngine_PlayerPrefs__GetFloat_70947720(key, 0LL);
  v10 = floorf(Float_70947720 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19833/*"float"*/, v8, v7) )
    return Float_70947720;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFCDE8 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4BFCDE8 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_39694664(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_39694664(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_70947428; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFCDEC & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_1C2E12C(&StringLiteral_21079/*"int"*/, v5);
    byte_4BFCDEC = 1;
  }
  Int_70947428 = UnityEngine_PlayerPrefs__GetInt_70947428(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_70947428, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21079/*"int"*/, v7, v6) )
    return Int_70947428;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFCDE9 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4BFCDE9 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_39694928(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_39694928(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_70947996; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFCDED & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1C2E12C(&StringLiteral_21595/*"long"*/, v5);
    byte_4BFCDED = 1;
  }
  String_70947996 = UnityEngine_PlayerPrefs__GetString_70947996(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21595/*"long"*/, String_70947996, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_70947996, &result, 0LL);
    return result;
  }
  else
  {
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    return EncryptedPlayerPrefs__GetInt(key, v8);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1

  if ( (byte_4BFCDEB & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4BFCDEB = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_39695540(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_39695540(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_70947996; // x21

  if ( (byte_4BFCDEF & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1C2E12C(&StringLiteral_24037/*"string"*/, v5);
    byte_4BFCDEF = 1;
  }
  String_70947996 = UnityEngine_PlayerPrefs__GetString_70947996(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_24037/*"string"*/, String_70947996, v6) )
    return String_70947996;
  else
    return defaultValue;
}


bool __fastcall EncryptedPlayerPrefs__HasKey(System_String_o *key, const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__HasKey(key, 0LL);
}


System_String_o *__fastcall EncryptedPlayerPrefs__Md5(System_String_o *strToEncrypt, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_UTF8Encoding_o *v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Byte_array *v9; // x19
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v10; // x20
  System_Byte_array *v11; // x19
  __int64 v12; // x8
  System_String_o *v13; // x20
  unsigned __int64 v14; // x22
  uint8_t v15; // w21
  System_String_o *v16; // x0

  if ( (byte_4BFCDE1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Convert_TypeInfo, method);
    sub_1C2E12C(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v3);
    sub_1C2E12C(&System_Text_UTF8Encoding_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BFCDE1 = 1;
  }
  v6 = (System_Text_UTF8Encoding_o *)sub_1C2E378(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_15;
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v6->klass->vtable._19_GetBytes.method)(
                              v6,
                              strToEncrypt,
                              v6->klass->vtable._20_GetBytes.methodPtr);
  v10 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C2E378(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  v11 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v10,
          v9,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v10, 0LL);
  if ( !v11 )
    goto LABEL_15;
  v12 = *(_QWORD *)&v11->max_length;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        sub_1C2E390(v7, v8);
      v15 = v11->m_Items[v14 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v7 = System_Convert__ToString_63903564(v15, 16, 0LL);
      if ( !v7 )
        break;
      v16 = System_String__PadLeft(v7, 2, 0x30u, 0LL);
      v7 = System_String__Concat_63235584(v13, v16, 0LL);
      LODWORD(v12) = v11->max_length;
      ++v14;
      v13 = v7;
      if ( (__int64)v14 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C2E388(v7, v8);
  }
LABEL_13:
  if ( !v13 )
    goto LABEL_15;
  return System_String__PadLeft(v13, 32, 0x30u, 0LL);
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
  __int64 v11; // x1
  float v12; // s0
  EncryptedPlayerPrefs_c *v13; // x0
  float v14; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v17; // s1
  unsigned int v18; // w10
  int32_t v19; // w21
  int64_t v20; // x24
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  EncryptedPlayerPrefs_c *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  int64_t privateKey; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_String_o *v82; // x0
  const MethodInfo *v83; // x1
  System_String_o *v84; // x20
  System_String_o *v85; // x0
  System_String_o *v86; // x0

  if ( (byte_4BFCDE2 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1C2E12C(&string___TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_16888/*"_used_key"*/, v8);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v9);
    sub_1C2E12C(&StringLiteral_16827/*"_encryption_check"*/, v10);
    byte_4BFCDE2 = 1;
  }
  v12 = UnityEngine_Random__get_value(0LL);
  v13 = EncryptedPlayerPrefs_TypeInfo;
  v14 = v12;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v13 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v13->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v17 = v14 * (float)max_length;
  v18 = vcvtms_s32_f32(v17);
  if ( floorf(v17) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v18;
  if ( v19 >= (unsigned int)max_length )
LABEL_21:
    sub_1C2E390(v13, v11);
  v20 = (int64_t)keys->m_Items[v19];
  v13 = (EncryptedPlayerPrefs_c *)sub_1C2E1D4(string___TypeInfo, 9LL);
  if ( !v13 )
LABEL_22:
    sub_1C2E388(v13, v11);
  v27 = v13;
  if ( !LODWORD(v13->_1.namespaze) )
    goto LABEL_21;
  v13->_1.byval_arg.data = key;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v13->_1.byval_arg, (int64_t)key, v21, v22, v23, v24, v25, v26);
  if ( LODWORD(v27->_1.namespaze) <= 1 )
    goto LABEL_21;
  v34 = StringLiteral_16410/*"_"*/;
  *(_QWORD *)&v27->_1.byval_arg.bits = StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.byval_arg.bits, v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v27->_1.namespaze) <= 2 )
    goto LABEL_21;
  v27->_1.this_arg.data = type;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.this_arg, (int64_t)type, v35, v36, v37, v38, v39, v40);
  if ( LODWORD(v27->_1.namespaze) <= 3 )
    goto LABEL_21;
  v47 = StringLiteral_16410/*"_"*/;
  *(_QWORD *)&v27->_1.this_arg.bits = StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.this_arg.bits, v47, v41, v42, v43, v44, v45, v46);
  if ( LODWORD(v27->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = (int64_t)static_fields->privateKey;
  v27->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.element_class, privateKey, v48, v49, v50, v51, v52, v53);
  if ( LODWORD(v27->_1.namespaze) <= 5 )
    goto LABEL_21;
  v62 = StringLiteral_16410/*"_"*/;
  v27->_1.castClass = (Il2CppClass *)StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.castClass, v62, v56, v57, v58, v59, v60, v61);
  if ( LODWORD(v27->_1.namespaze) <= 6 )
    goto LABEL_21;
  v27->_1.declaringType = (Il2CppClass *)v20;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.declaringType, v20, v63, v64, v65, v66, v67, v68);
  if ( LODWORD(v27->_1.namespaze) <= 7 )
    goto LABEL_21;
  v75 = StringLiteral_16410/*"_"*/;
  v27->_1.parent = (Il2CppClass *)StringLiteral_16410/*"_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.parent, v75, v69, v70, v71, v72, v73, v74);
  if ( LODWORD(v27->_1.namespaze) <= 8 )
    goto LABEL_21;
  v27->_1.generic_class = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->_1.generic_class, (int64_t)value, v76, v77, v78, v79, v80, v81);
  v82 = System_String__Concat_63249112((System_String_array *)v27, 0LL);
  v84 = EncryptedPlayerPrefs__Md5(v82, v83);
  v85 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16827/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v85, v84, 0LL);
  v86 = System_String__Concat_63235584(key, (System_String_o *)StringLiteral_16888/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v86, v19, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFCDE6 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_19833/*"float"*/, v5);
    byte_4BFCDE6 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19833/*"float"*/, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = value;
  if ( (byte_4BFCDE4 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_1C2E12C(&StringLiteral_21079/*"int"*/, v5);
    byte_4BFCDE4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21079/*"int"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  v8 = value;
  if ( (byte_4BFCDE5 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1C2E12C(&StringLiteral_21595/*"long"*/, v4);
    byte_4BFCDE5 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21595/*"long"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4BFCDE7 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1C2E12C(&StringLiteral_24037/*"string"*/, v5);
    byte_4BFCDE7 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_24037/*"string"*/, value, v6);
}