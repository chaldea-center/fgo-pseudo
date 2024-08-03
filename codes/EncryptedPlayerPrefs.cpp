void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FBB0F & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_23724/*"t68aZyLxlMWVjw8lWgdZ"*/, v4);
    byte_49FBB0F = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23724/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_23724/*"t68aZyLxlMWVjw8lWgdZ"*/,
    v2,
    v3);
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
  __int64 Int_69085444; // x0
  __int64 v13; // x1
  EncryptedPlayerPrefs_c *v14; // x8
  il2cpp_array_size_t v15; // w22
  struct System_String_array *keys; // x8
  System_String_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x0
  const MethodInfo *v44; // x1
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *String_69086012; // x0

  if ( (byte_49FBB01 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16528/*"_used_key"*/, v8);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v9);
    sub_1B640C8(&StringLiteral_16467/*"_encryption_check"*/, v10);
    byte_49FBB01 = 1;
  }
  v11 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16528/*"_used_key"*/, 0LL);
  Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v11, 0LL);
  v14 = EncryptedPlayerPrefs_TypeInfo;
  v15 = Int_69085444;
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
  v17 = keys->m_Items[v15];
  Int_69085444 = sub_1B64170(string___TypeInfo, 9LL);
  if ( !Int_69085444 )
LABEL_21:
    sub_1B64324(Int_69085444);
  v20 = Int_69085444;
  if ( !*(_DWORD *)(Int_69085444 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_69085444 + 32) = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Int_69085444 + 32), (int32_t)key, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_20;
  v23 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 40), v23, v21, v22);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 48), (int32_t)type, v24, v25);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_20;
  v28 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 56), v28, v26, v27);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 64), (int32_t)privateKey, v29, v30);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v35 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 72), v35, v33, v34);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v17,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 80), (int32_t)v17, v36, v37),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v40 = StringLiteral_16054/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_16054/*"_"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 88), v40, v38, v39),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_1B6432C(Int_69085444, v13);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 96), (int32_t)value, v41, v42);
  v43 = System_String__Concat_61388924((System_String_array *)v20, 0LL);
  v45 = EncryptedPlayerPrefs__Md5(v43, v44);
  v46 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16467/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v46, 0LL) )
    return 0;
  v47 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16467/*"_encryption_check"*/, 0LL);
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v47, 0LL);
  return System_String__op_Equality(String_69086012, v45, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_49FBB0E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16528/*"_used_key"*/, method);
    sub_1B640C8(&StringLiteral_16467/*"_encryption_check"*/, v3);
    byte_49FBB0E = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16467/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16528/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_49FBB08 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_49FBB08 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_38065352(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_38065352(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_69085736; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FBB0C & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19402/*"float"*/, v5);
    byte_49FBB0C = 1;
  }
  Float_69085736 = UnityEngine_PlayerPrefs__GetFloat_69085736(key, 0LL);
  v10 = floorf(Float_69085736 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19402/*"float"*/, v8, v7) )
    return Float_69085736;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FBB06 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_49FBB06 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_38064784(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_38064784(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_69085444; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBB0A & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_1B640C8(&StringLiteral_20611/*"int"*/, v5);
    byte_49FBB0A = 1;
  }
  Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_69085444, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20611/*"int"*/, v7, v6) )
    return Int_69085444;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FBB07 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_49FBB07 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_38065048(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_38065048(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_69086012; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBB0B & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1B640C8(&StringLiteral_21124/*"long"*/, v5);
    byte_49FBB0B = 1;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21124/*"long"*/, String_69086012, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_69086012, &result, 0LL);
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

  if ( (byte_49FBB09 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBB09 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_38065660(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_38065660(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_69086012; // x21

  if ( (byte_49FBB0D & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1B640C8(&StringLiteral_23490/*"string"*/, v5);
    byte_49FBB0D = 1;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23490/*"string"*/, String_69086012, v6) )
    return String_69086012;
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
  __int64 v14; // x1
  __int64 v15; // x8
  System_String_o *v16; // x20
  unsigned __int64 v17; // x22
  uint8_t v18; // w21
  System_String_o *v19; // x0

  if ( (byte_49FBAFF & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v4);
    sub_1B640C8(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FBAFF = 1;
  }
  v7 = (System_Text_UTF8Encoding_o *)sub_1B64314(System_Text_UTF8Encoding_TypeInfo, method, v2);
  System_Text_UTF8Encoding___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v7->klass->vtable._19_GetBytes.method)(
                              v7,
                              strToEncrypt,
                              v7->klass->vtable._20_GetBytes.methodPtr);
  v12 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1B64314(
                                                                     System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo,
                                                                     v10,
                                                                     v11);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_15;
  v13 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v12,
          v9,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v12, 0LL);
  if ( !v13 )
    goto LABEL_15;
  v15 = *(_QWORD *)&v13->max_length;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1B6432C(v8, v14);
      v18 = v13->m_Items[v17 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v8 = System_Convert__ToString_62043040(v18, 16, 0LL);
      if ( !v8 )
        break;
      v19 = System_String__PadLeft(v8, 2, 0x30u, 0LL);
      v8 = System_String__Concat_61375396(v16, v19, 0LL);
      LODWORD(v15) = v13->max_length;
      ++v17;
      v16 = v8;
      if ( (__int64)v17 >= (int)v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(v8);
  }
LABEL_13:
  if ( !v16 )
    goto LABEL_15;
  return System_String__PadLeft(v16, 32, 0x30u, 0LL);
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
  Il2CppClass *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  EncryptedPlayerPrefs_c *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x0
  const MethodInfo *v47; // x1
  System_String_o *v48; // x20
  System_String_o *v49; // x0
  System_String_o *v50; // x0

  if ( (byte_49FBB00 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16528/*"_used_key"*/, v8);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v9);
    sub_1B640C8(&StringLiteral_16467/*"_encryption_check"*/, v10);
    byte_49FBB00 = 1;
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
    sub_1B6432C(v13, v11);
  v20 = (Il2CppClass *)keys->m_Items[v19];
  v13 = (EncryptedPlayerPrefs_c *)sub_1B64170(string___TypeInfo, 9LL);
  if ( !v13 )
LABEL_22:
    sub_1B64324(v13);
  v23 = v13;
  if ( !LODWORD(v13->_1.namespaze) )
    goto LABEL_21;
  v13->_1.byval_arg.data = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->_1.byval_arg, (int32_t)key, v21, v22);
  if ( LODWORD(v23->_1.namespaze) <= 1 )
    goto LABEL_21;
  v26 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)&v23->_1.byval_arg.bits = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.byval_arg.bits, v26, v24, v25);
  if ( LODWORD(v23->_1.namespaze) <= 2 )
    goto LABEL_21;
  v23->_1.this_arg.data = type;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.this_arg, (int32_t)type, v27, v28);
  if ( LODWORD(v23->_1.namespaze) <= 3 )
    goto LABEL_21;
  v31 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)&v23->_1.this_arg.bits = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.this_arg.bits, v31, v29, v30);
  if ( LODWORD(v23->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v23->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.element_class, (int32_t)privateKey, v32, v33);
  if ( LODWORD(v23->_1.namespaze) <= 5 )
    goto LABEL_21;
  v38 = StringLiteral_16054/*"_"*/;
  v23->_1.castClass = (Il2CppClass *)StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.castClass, v38, v36, v37);
  if ( LODWORD(v23->_1.namespaze) <= 6 )
    goto LABEL_21;
  v23->_1.declaringType = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.declaringType, (int32_t)v20, v39, v40);
  if ( LODWORD(v23->_1.namespaze) <= 7 )
    goto LABEL_21;
  v43 = StringLiteral_16054/*"_"*/;
  v23->_1.parent = (Il2CppClass *)StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.parent, v43, v41, v42);
  if ( LODWORD(v23->_1.namespaze) <= 8 )
    goto LABEL_21;
  v23->_1.generic_class = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->_1.generic_class, (int32_t)value, v44, v45);
  v46 = System_String__Concat_61388924((System_String_array *)v23, 0LL);
  v48 = EncryptedPlayerPrefs__Md5(v46, v47);
  v49 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16467/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v49, v48, 0LL);
  v50 = System_String__Concat_61375396(key, (System_String_o *)StringLiteral_16528/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v50, v19, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBB04 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19402/*"float"*/, v5);
    byte_49FBB04 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19402/*"float"*/, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = value;
  if ( (byte_49FBB02 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_1B640C8(&StringLiteral_20611/*"int"*/, v5);
    byte_49FBB02 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20611/*"int"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  v8 = value;
  if ( (byte_49FBB03 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1B640C8(&StringLiteral_21124/*"long"*/, v4);
    byte_49FBB03 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21124/*"long"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_49FBB05 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1B640C8(&StringLiteral_23490/*"string"*/, v5);
    byte_49FBB05 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23490/*"string"*/, value, v6);
}