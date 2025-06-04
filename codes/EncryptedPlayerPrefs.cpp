void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B01738 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_23728/*"t68aZyLxlMWVjw8lWgdZ"*/, v4);
    byte_4B01738 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23728/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields, StringLiteral_23728/*"t68aZyLxlMWVjw8lWgdZ"*/, v2, v3);
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
  __int64 Int_69992544; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  EncryptedPlayerPrefs_c *v15; // x8
  il2cpp_array_size_t v16; // w22
  struct System_String_array *keys; // x8
  System_String_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x22
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  System_String_o *v35; // x0
  const MethodInfo *v36; // x1
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *String_69993112; // x0

  if ( (byte_4B0172A & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&StringLiteral_16458/*"_used_key"*/, v8);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v9);
    sub_1BC3008(&StringLiteral_16399/*"_encryption_check"*/, v10);
    byte_4B0172A = 1;
  }
  v11 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16458/*"_used_key"*/, 0LL);
  Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v11, 0LL);
  v15 = EncryptedPlayerPrefs_TypeInfo;
  v16 = Int_69992544;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v15 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v15->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v16 >= keys->max_length )
    goto LABEL_20;
  v18 = keys->m_Items[v16];
  Int_69992544 = sub_1BC30B0(string___TypeInfo, 9LL);
  if ( !Int_69992544 )
LABEL_21:
    sub_1BC3264(Int_69992544, v13);
  v20 = Int_69992544;
  if ( !*(_DWORD *)(Int_69992544 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_69992544 + 32) = key;
  sub_1BC2FAC((CGThumbnailListItem_o *)(Int_69992544 + 32), (int32_t)key, v14, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_20;
  v22 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 40), v22, v14, v21);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 48), (int32_t)type, v14, v23);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_20;
  v25 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 56), v25, v14, v24);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 64), (int32_t)privateKey, v14, v26);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v30 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 72), v30, v14, v29);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v18,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 80), (int32_t)v18, v14, v31),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v33 = StringLiteral_15961/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_15961/*"_"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 88), v33, v14, v32),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_1BC326C(Int_69992544, v13, v14);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 96), (int32_t)value, v14, v34);
  v35 = System_String__Concat_62389164((System_String_array *)v20, 0LL);
  v37 = EncryptedPlayerPrefs__Md5(v35, v36);
  v38 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16399/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v38, 0LL) )
    return 0;
  v39 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16399/*"_encryption_check"*/, 0LL);
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v39, 0LL);
  return System_String__op_Equality(String_69993112, v37, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_4B01737 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16458/*"_used_key"*/, method);
    sub_1BC3008(&StringLiteral_16399/*"_encryption_check"*/, v3);
    byte_4B01737 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16399/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16458/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4B01731 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4B01731 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_40281052(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_40281052(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_69992836; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B01735 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19315/*"float"*/, v5);
    byte_4B01735 = 1;
  }
  Float_69992836 = UnityEngine_PlayerPrefs__GetFloat_69992836(key, 0LL);
  v10 = floorf(Float_69992836 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19315/*"float"*/, v8, v7) )
    return Float_69992836;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B0172F & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4B0172F = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_40280484(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_40280484(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_69992544; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B01733 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_1BC3008(&StringLiteral_20623/*"int"*/, v5);
    byte_4B01733 = 1;
  }
  Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_69992544, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20623/*"int"*/, v7, v6) )
    return Int_69992544;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B01730 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_4B01730 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_40280748(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_40280748(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_69993112; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01734 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1BC3008(&StringLiteral_21135/*"long"*/, v5);
    byte_4B01734 = 1;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21135/*"long"*/, String_69993112, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_69993112, &result, 0LL);
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

  if ( (byte_4B01732 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v4);
    byte_4B01732 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_40281360(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_40281360(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_69993112; // x21

  if ( (byte_4B01736 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_1BC3008(&StringLiteral_23513/*"string"*/, v5);
    byte_4B01736 = 1;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23513/*"string"*/, String_69993112, v6) )
    return String_69993112;
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
  __int64 v12; // x2
  __int64 v13; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x22
  uint8_t v16; // w21
  System_String_o *v17; // x0

  if ( (byte_4B01728 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, method);
    sub_1BC3008(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v3);
    sub_1BC3008(&System_Text_UTF8Encoding_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B01728 = 1;
  }
  v6 = (System_Text_UTF8Encoding_o *)sub_1BC3254(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_15;
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v6->klass->vtable._18_GetBytes.method)(
                              v6,
                              strToEncrypt,
                              v6->klass->vtable._19_GetBytes.methodPtr);
  v10 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1BC3254(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
  v13 = *(_QWORD *)&v11->max_length;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1BC326C(v7, v8, v12);
      v16 = v11->m_Items[v15 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v7 = System_Convert__ToString_63445232(v16, 16, 0LL);
      if ( !v7 )
        break;
      v17 = System_String__PadLeft(v7, 2, 0x30u, 0LL);
      v7 = System_String__Concat_62348648(v14, v17, 0LL);
      LODWORD(v13) = v11->max_length;
      ++v15;
      v14 = v7;
      if ( (__int64)v15 >= (int)v13 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BC3264(v7, v8);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_15;
  return System_String__PadLeft(v14, 32, 0x30u, 0LL);
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
  __int64 v12; // x2
  float v13; // s0
  EncryptedPlayerPrefs_c *v14; // x0
  float v15; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v18; // s1
  unsigned int v19; // w10
  int32_t v20; // w21
  Il2CppClass *v21; // x24
  const MethodInfo *v22; // x3
  EncryptedPlayerPrefs_c *v23; // x23
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  System_String_o *v40; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x0

  if ( (byte_4B01729 & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&StringLiteral_16458/*"_used_key"*/, v8);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v9);
    sub_1BC3008(&StringLiteral_16399/*"_encryption_check"*/, v10);
    byte_4B01729 = 1;
  }
  v13 = UnityEngine_Random__get_value(0LL);
  v14 = EncryptedPlayerPrefs_TypeInfo;
  v15 = v13;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v14 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v14->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v18 = v15 * (float)max_length;
  v19 = vcvtms_s32_f32(v18);
  if ( floorf(v18) == INFINITY )
    v20 = 0x80000000;
  else
    v20 = v19;
  if ( v20 >= (unsigned int)max_length )
LABEL_21:
    sub_1BC326C(v14, v11, v12);
  v21 = (Il2CppClass *)keys->m_Items[v20];
  v14 = (EncryptedPlayerPrefs_c *)sub_1BC30B0(string___TypeInfo, 9LL);
  if ( !v14 )
LABEL_22:
    sub_1BC3264(v14, v11);
  v23 = v14;
  if ( !LODWORD(v14->_1.namespaze) )
    goto LABEL_21;
  v14->_1.byval_arg.data = key;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14->_1.byval_arg, (int32_t)key, v12, v22);
  if ( LODWORD(v23->_1.namespaze) <= 1 )
    goto LABEL_21;
  v25 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)&v23->_1.byval_arg.bits = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.byval_arg.bits, v25, v12, v24);
  if ( LODWORD(v23->_1.namespaze) <= 2 )
    goto LABEL_21;
  v23->_1.this_arg.data = type;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.this_arg, (int32_t)type, v12, v26);
  if ( LODWORD(v23->_1.namespaze) <= 3 )
    goto LABEL_21;
  v28 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)&v23->_1.this_arg.bits = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.this_arg.bits, v28, v12, v27);
  if ( LODWORD(v23->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v23->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.element_class, (int32_t)privateKey, v12, v29);
  if ( LODWORD(v23->_1.namespaze) <= 5 )
    goto LABEL_21;
  v33 = StringLiteral_15961/*"_"*/;
  v23->_1.castClass = (Il2CppClass *)StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.castClass, v33, v12, v32);
  if ( LODWORD(v23->_1.namespaze) <= 6 )
    goto LABEL_21;
  v23->_1.declaringType = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.declaringType, (int32_t)v21, v12, v34);
  if ( LODWORD(v23->_1.namespaze) <= 7 )
    goto LABEL_21;
  v36 = StringLiteral_15961/*"_"*/;
  v23->_1.parent = (Il2CppClass *)StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.parent, v36, v12, v35);
  if ( LODWORD(v23->_1.namespaze) <= 8 )
    goto LABEL_21;
  v23->_1.generic_class = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->_1.generic_class, (int32_t)value, v12, v37);
  v38 = System_String__Concat_62389164((System_String_array *)v23, 0LL);
  v40 = EncryptedPlayerPrefs__Md5(v38, v39);
  v41 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16399/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v41, v40, 0LL);
  v42 = System_String__Concat_62348648(key, (System_String_o *)StringLiteral_16458/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v42, v20, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B0172D & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19315/*"float"*/, v5);
    byte_4B0172D = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19315/*"float"*/, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = value;
  if ( (byte_4B0172B & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_1BC3008(&StringLiteral_20623/*"int"*/, v5);
    byte_4B0172B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20623/*"int"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  v8 = value;
  if ( (byte_4B0172C & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1BC3008(&StringLiteral_21135/*"long"*/, v4);
    byte_4B0172C = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21135/*"long"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B0172E & 1) == 0 )
  {
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_1BC3008(&StringLiteral_23513/*"string"*/, v5);
    byte_4B0172E = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23513/*"string"*/, value, v6);
}