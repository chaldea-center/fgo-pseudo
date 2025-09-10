void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C269C4 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_23943/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4C269C4 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23943/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C2D434((CGThumbnailListItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields, StringLiteral_23943/*"t68aZyLxlMWVjw8lWgdZ"*/, v1, v2);
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
  __int64 Int_71121948; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EncryptedPlayerPrefs_c *v11; // x8
  unsigned int v12; // w22
  struct System_String_array *keys; // x8
  System_String_o *v14; // x23
  const MethodInfo *v15; // x3
  __int64 v16; // x22
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  System_String_o *v31; // x0
  const MethodInfo *v32; // x1
  System_String_o *v33; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *String_71122516; // x0

  if ( (byte_4C269B6 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_16603/*"_used_key"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_16543/*"_encryption_check"*/);
    byte_4C269B6 = 1;
  }
  v7 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16603/*"_used_key"*/, 0);
  Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v7, 0);
  v11 = EncryptedPlayerPrefs_TypeInfo;
  v12 = Int_71121948;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v11 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v11->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v12 >= LODWORD(keys->max_length) )
    goto LABEL_20;
  v14 = keys->m_Items[v12];
  Int_71121948 = sub_1C2D538(string___TypeInfo, 9);
  if ( !Int_71121948 )
LABEL_21:
    sub_1C2D6EC(Int_71121948, v9);
  v16 = Int_71121948;
  if ( !*(_DWORD *)(Int_71121948 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_71121948 + 32) = key;
  sub_1C2D434((CGThumbnailListItem_o *)(Int_71121948 + 32), (int32_t)key, v10, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_20;
  v18 = StringLiteral_16105/*"_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 40), v18, v10, v17);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v16 + 48) = type;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 48), (int32_t)type, v10, v19);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_20;
  v21 = StringLiteral_16105/*"_"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 56), v21, v10, v20);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v16 + 64) = static_fields->privateKey;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 64), (int32_t)privateKey, v10, v22);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_20;
  v26 = StringLiteral_16105/*"_"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 72), v26, v10, v25);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (*(_QWORD *)(v16 + 80) = v14,
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 80), (int32_t)v14, v10, v27),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v29 = StringLiteral_16105/*"_"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_16105/*"_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 88), v29, v10, v28),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C2D6F4(Int_71121948, v9, v10);
  }
  *(_QWORD *)(v16 + 96) = value;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 96), (int32_t)value, v10, v30);
  v31 = System_String__Concat_63498380((System_String_array *)v16, 0);
  v33 = EncryptedPlayerPrefs__Md5(v31, v32);
  v34 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16543/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v34, 0) )
    return 0;
  v35 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16543/*"_encryption_check"*/, 0);
  String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(v35, 0);
  return System_String__op_Equality(String_71122516, v33, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4C269C3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16603/*"_used_key"*/);
    sub_1C2D490(&StringLiteral_16543/*"_encryption_check"*/);
    byte_4C269C3 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16543/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16603/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4C269BD & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C269BD = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_41034684(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_41034684(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_71122240; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C269C1 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_19487/*"float"*/);
    byte_4C269C1 = 1;
  }
  Float_71122240 = UnityEngine_PlayerPrefs__GetFloat_71122240(key, 0);
  v9 = floorf(Float_71122240 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19487/*"float"*/, v7, v6) )
    return Float_71122240;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C269BB & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C269BB = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_41034116(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_41034116(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_71121948; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C269BF & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_20812/*"int"*/);
    byte_4C269BF = 1;
  }
  Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_71121948, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20812/*"int"*/, v6, v5) )
    return Int_71121948;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C269BC & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C269BC = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_41034380(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_41034380(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71122516; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C269C0 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_21330/*"long"*/);
    byte_4C269C0 = 1;
  }
  String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21330/*"long"*/, String_71122516, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_71122516, &result, 0);
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

  if ( (byte_4C269BE & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C269BE = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_41034992(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_41034992(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71122516; // x21

  if ( (byte_4C269C2 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_23725/*"string"*/);
    byte_4C269C2 = 1;
  }
  String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23725/*"string"*/, String_71122516, v5) )
    return String_71122516;
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
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_String_o *v11; // x20
  unsigned __int64 v12; // x22
  uint8_t v13; // w21
  System_String_o *v14; // x0

  if ( (byte_4C269B4 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1C2D490(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C269B4 = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1C2D6DC(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C2D6DC(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2D6F4(v4, v5, v9);
      v13 = v8->m_Items[v12];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_64556588(v13, 16, 0);
      if ( !v4 )
        break;
      v14 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_63457864(v11, v14, 0);
      LODWORD(max_length) = v8->max_length;
      ++v12;
      v11 = v4;
      if ( (__int64)v12 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C2D6EC(v4, v5);
  }
LABEL_13:
  if ( !v11 )
    goto LABEL_15;
  return System_String__PadLeft(v11, 32, 0x30u, 0);
}


void EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s0
  EncryptedPlayerPrefs_c *v10; // x0
  float v11; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v14; // s1
  unsigned int v15; // w10
  int32_t v16; // w21
  Il2CppClass *v17; // x24
  const MethodInfo *v18; // x3
  EncryptedPlayerPrefs_c *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  System_String_o *v36; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x0

  if ( (byte_4C269B5 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_16603/*"_used_key"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_16543/*"_encryption_check"*/);
    byte_4C269B5 = 1;
  }
  v9 = UnityEngine_Random__get_value(0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = v9;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v10 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v10->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v14 = v11 * (float)max_length;
  v15 = vcvtms_s32_f32(v14);
  if ( floorf(v14) == INFINITY )
    v16 = 0x80000000;
  else
    v16 = v15;
  if ( v16 >= (unsigned int)max_length )
LABEL_21:
    sub_1C2D6F4(v10, v7, v8);
  v17 = (Il2CppClass *)keys->m_Items[v16];
  v10 = (EncryptedPlayerPrefs_c *)sub_1C2D538(string___TypeInfo, 9);
  if ( !v10 )
LABEL_22:
    sub_1C2D6EC(v10, v7);
  v19 = v10;
  if ( !LODWORD(v10->_1.namespaze) )
    goto LABEL_21;
  v10->_1.byval_arg.data = key;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->_1.byval_arg, (int32_t)key, v8, v18);
  if ( LODWORD(v19->_1.namespaze) <= 1 )
    goto LABEL_21;
  v21 = StringLiteral_16105/*"_"*/;
  *(_QWORD *)&v19->_1.byval_arg.bits = StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.byval_arg.bits, v21, v8, v20);
  if ( LODWORD(v19->_1.namespaze) <= 2 )
    goto LABEL_21;
  v19->_1.this_arg.data = type;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.this_arg, (int32_t)type, v8, v22);
  if ( LODWORD(v19->_1.namespaze) <= 3 )
    goto LABEL_21;
  v24 = StringLiteral_16105/*"_"*/;
  *(_QWORD *)&v19->_1.this_arg.bits = StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.this_arg.bits, v24, v8, v23);
  if ( LODWORD(v19->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v19->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.element_class, (int32_t)privateKey, v8, v25);
  if ( LODWORD(v19->_1.namespaze) <= 5 )
    goto LABEL_21;
  v29 = StringLiteral_16105/*"_"*/;
  v19->_1.castClass = (Il2CppClass *)StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.castClass, v29, v8, v28);
  if ( LODWORD(v19->_1.namespaze) <= 6 )
    goto LABEL_21;
  v19->_1.declaringType = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.declaringType, (int32_t)v17, v8, v30);
  if ( LODWORD(v19->_1.namespaze) <= 7 )
    goto LABEL_21;
  v32 = StringLiteral_16105/*"_"*/;
  v19->_1.parent = (Il2CppClass *)StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.parent, v32, v8, v31);
  if ( LODWORD(v19->_1.namespaze) <= 8 )
    goto LABEL_21;
  v19->_1.generic_class = value;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->_1.generic_class, (int32_t)value, v8, v33);
  v34 = System_String__Concat_63498380((System_String_array *)v19, 0);
  v36 = EncryptedPlayerPrefs__Md5(v34, v35);
  v37 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16543/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v37, v36, 0);
  v38 = System_String__Concat_63457864(key, (System_String_o *)StringLiteral_16603/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v38, v16, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C269B9 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_19487/*"float"*/);
    byte_4C269B9 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19487/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4C269B7 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_20812/*"int"*/);
    byte_4C269B7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20812/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4C269B8 & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_21330/*"long"*/);
    byte_4C269B8 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21330/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4C269BA & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&StringLiteral_23725/*"string"*/);
    byte_4C269BA = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23725/*"string"*/, value, v5);
}