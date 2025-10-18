void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C4268B & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_23965/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4C4268B = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23965/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields, StringLiteral_23965/*"t68aZyLxlMWVjw8lWgdZ"*/, v1, v2);
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
  __int64 Int_71224996; // x0
  EncryptedPlayerPrefs_c *v9; // x8
  unsigned int v10; // w22
  struct System_String_array *keys; // x8
  System_String_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  System_String_o *v40; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *String_71225564; // x0

  if ( (byte_4C4267D & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_16607/*"_used_key"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_16547/*"_encryption_check"*/);
    byte_4C4267D = 1;
  }
  v7 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16607/*"_used_key"*/, 0);
  Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(v7, 0);
  v9 = EncryptedPlayerPrefs_TypeInfo;
  v10 = Int_71224996;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v9 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v9->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v10 >= LODWORD(keys->max_length) )
    goto LABEL_20;
  v12 = keys->m_Items[v10];
  Int_71224996 = sub_1C37100(string___TypeInfo, 9);
  if ( !Int_71224996 )
LABEL_21:
    sub_1C372B4(Int_71224996);
  v15 = Int_71224996;
  if ( !*(_DWORD *)(Int_71224996 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_71224996 + 32) = key;
  sub_1C36FFC((CGThumbnailListItem_o *)(Int_71224996 + 32), (int32_t)key, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_20;
  v18 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 40), v18, v16, v17);
  if ( *(_DWORD *)(v15 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v15 + 48) = type;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 48), (int32_t)type, v19, v20);
  if ( *(_DWORD *)(v15 + 24) <= 3u )
    goto LABEL_20;
  v23 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v15 + 56) = StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 56), v23, v21, v22);
  if ( *(_DWORD *)(v15 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v15 + 64) = static_fields->privateKey;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 64), (int32_t)privateKey, v24, v25);
  if ( *(_DWORD *)(v15 + 24) <= 5u )
    goto LABEL_20;
  v30 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)(v15 + 72) = StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 72), v30, v28, v29);
  if ( *(_DWORD *)(v15 + 24) <= 6u
    || (*(_QWORD *)(v15 + 80) = v12,
        sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 80), (int32_t)v12, v31, v32),
        *(_DWORD *)(v15 + 24) <= 7u)
    || (v35 = StringLiteral_16109/*"_"*/,
        *(_QWORD *)(v15 + 88) = StringLiteral_16109/*"_"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 88), v35, v33, v34),
        *(_DWORD *)(v15 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C372BC(Int_71224996);
  }
  *(_QWORD *)(v15 + 96) = value;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 96), (int32_t)value, v36, v37);
  v38 = System_String__Concat_63602172((System_String_array *)v15, 0);
  v40 = EncryptedPlayerPrefs__Md5(v38, v39);
  v41 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16547/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v41, 0) )
    return 0;
  v42 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16547/*"_encryption_check"*/, 0);
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(v42, 0);
  return System_String__op_Equality(String_71225564, v40, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4C4268A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16607/*"_used_key"*/);
    sub_1C37058(&StringLiteral_16547/*"_encryption_check"*/);
    byte_4C4268A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16547/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16607/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4C42684 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C42684 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_41256056(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_41256056(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_71225288; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42688 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_19502/*"float"*/);
    byte_4C42688 = 1;
  }
  Float_71225288 = UnityEngine_PlayerPrefs__GetFloat_71225288(key, 0);
  v9 = floorf(Float_71225288 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19502/*"float"*/, v7, v6) )
    return Float_71225288;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42682 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C42682 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_41255488(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_41255488(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_71224996; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42686 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_20827/*"int"*/);
    byte_4C42686 = 1;
  }
  Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_71224996, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20827/*"int"*/, v6, v5) )
    return Int_71224996;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42683 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C42683 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_41255752(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_41255752(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71225564; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42687 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_21346/*"long"*/);
    byte_4C42687 = 1;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21346/*"long"*/, String_71225564, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_71225564, &result, 0);
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

  if ( (byte_4C42685 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42685 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_41256364(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_41256364(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71225564; // x21

  if ( (byte_4C42689 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_23747/*"string"*/);
    byte_4C42689 = 1;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23747/*"string"*/, String_71225564, v5) )
    return String_71225564;
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
  System_Byte_array *v5; // x19
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v6; // x20
  System_Byte_array *v7; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v9; // x20
  unsigned __int64 v10; // x22
  uint8_t v11; // w21
  System_String_o *v12; // x0

  if ( (byte_4C4267B & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1C37058(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4267B = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1C372A4(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v6 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v6, 0);
  if ( !v6 )
    goto LABEL_15;
  v7 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
         (System_Security_Cryptography_HashAlgorithm_o *)v6,
         v5,
         0);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v6, 0);
  if ( !v7 )
    goto LABEL_15;
  max_length = v7->max_length;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(v4);
      v11 = v7->m_Items[v10];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_64659636(v11, 16, 0);
      if ( !v4 )
        break;
      v12 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_63561656(v9, v12, 0);
      LODWORD(max_length) = v7->max_length;
      ++v10;
      v9 = v4;
      if ( (__int64)v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C372B4(v4);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  return System_String__PadLeft(v9, 32, 0x30u, 0);
}


void EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  float v7; // s0
  EncryptedPlayerPrefs_c *v8; // x0
  float v9; // s8
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v12; // s1
  unsigned int v13; // w10
  int32_t v14; // w21
  Il2CppClass *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EncryptedPlayerPrefs_c *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_String_o *v41; // x0
  const MethodInfo *v42; // x1
  System_String_o *v43; // x20
  System_String_o *v44; // x0
  System_String_o *v45; // x0

  if ( (byte_4C4267C & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_16607/*"_used_key"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_16547/*"_encryption_check"*/);
    byte_4C4267C = 1;
  }
  v7 = UnityEngine_Random__get_value(0);
  v8 = EncryptedPlayerPrefs_TypeInfo;
  v9 = v7;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v8 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v8->static_fields->keys;
  if ( !keys )
    goto LABEL_22;
  max_length = keys->max_length;
  v12 = v9 * (float)max_length;
  v13 = vcvtms_s32_f32(v12);
  if ( floorf(v12) == INFINITY )
    v14 = 0x80000000;
  else
    v14 = v13;
  if ( v14 >= (unsigned int)max_length )
LABEL_21:
    sub_1C372BC(v8);
  v15 = (Il2CppClass *)keys->m_Items[v14];
  v8 = (EncryptedPlayerPrefs_c *)sub_1C37100(string___TypeInfo, 9);
  if ( !v8 )
LABEL_22:
    sub_1C372B4(v8);
  v18 = v8;
  if ( !LODWORD(v8->_1.namespaze) )
    goto LABEL_21;
  v8->_1.byval_arg.data = key;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->_1.byval_arg, (int32_t)key, v16, v17);
  if ( LODWORD(v18->_1.namespaze) <= 1 )
    goto LABEL_21;
  v21 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)&v18->_1.byval_arg.bits = StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.byval_arg.bits, v21, v19, v20);
  if ( LODWORD(v18->_1.namespaze) <= 2 )
    goto LABEL_21;
  v18->_1.this_arg.data = type;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.this_arg, (int32_t)type, v22, v23);
  if ( LODWORD(v18->_1.namespaze) <= 3 )
    goto LABEL_21;
  v26 = StringLiteral_16109/*"_"*/;
  *(_QWORD *)&v18->_1.this_arg.bits = StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.this_arg.bits, v26, v24, v25);
  if ( LODWORD(v18->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v18->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.element_class, (int32_t)privateKey, v27, v28);
  if ( LODWORD(v18->_1.namespaze) <= 5 )
    goto LABEL_21;
  v33 = StringLiteral_16109/*"_"*/;
  v18->_1.castClass = (Il2CppClass *)StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.castClass, v33, v31, v32);
  if ( LODWORD(v18->_1.namespaze) <= 6 )
    goto LABEL_21;
  v18->_1.declaringType = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.declaringType, (int32_t)v15, v34, v35);
  if ( LODWORD(v18->_1.namespaze) <= 7 )
    goto LABEL_21;
  v38 = StringLiteral_16109/*"_"*/;
  v18->_1.parent = (Il2CppClass *)StringLiteral_16109/*"_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.parent, v38, v36, v37);
  if ( LODWORD(v18->_1.namespaze) <= 8 )
    goto LABEL_21;
  v18->_1.generic_class = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->_1.generic_class, (int32_t)value, v39, v40);
  v41 = System_String__Concat_63602172((System_String_array *)v18, 0);
  v43 = EncryptedPlayerPrefs__Md5(v41, v42);
  v44 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16547/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v44, v43, 0);
  v45 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_16607/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v45, v14, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42680 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_19502/*"float"*/);
    byte_4C42680 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19502/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4C4267E & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_20827/*"int"*/);
    byte_4C4267E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20827/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4C4267F & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_21346/*"long"*/);
    byte_4C4267F = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21346/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4C42681 & 1) == 0 )
  {
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&StringLiteral_23747/*"string"*/);
    byte_4C42681 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23747/*"string"*/, value, v5);
}