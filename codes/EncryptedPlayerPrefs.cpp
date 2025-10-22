void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C56434 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_23985/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4C56434 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23985/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1C3E508((CGThumbnailListItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields, StringLiteral_23985/*"t68aZyLxlMWVjw8lWgdZ"*/, v1, v2);
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
  __int64 Int_71299808; // x0
  __int64 v9; // x1
  EncryptedPlayerPrefs_c *v10; // x8
  unsigned int v11; // w22
  struct System_String_array *keys; // x8
  System_String_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *String_71300376; // x0

  if ( (byte_4C56426 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_16617/*"_used_key"*/);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_16557/*"_encryption_check"*/);
    byte_4C56426 = 1;
  }
  v7 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16617/*"_used_key"*/, 0);
  Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v7, 0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_71299808;
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
  Int_71299808 = sub_1C3E60C(string___TypeInfo, 9);
  if ( !Int_71299808 )
LABEL_21:
    sub_1C3E7C0(Int_71299808, v9);
  v16 = Int_71299808;
  if ( !*(_DWORD *)(Int_71299808 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_71299808 + 32) = key;
  sub_1C3E508((CGThumbnailListItem_o *)(Int_71299808 + 32), (int32_t)key, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_20;
  v19 = StringLiteral_16119/*"_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 40), v19, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v16 + 48) = type;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 48), (int32_t)type, v20, v21);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_20;
  v24 = StringLiteral_16119/*"_"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 56), v24, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v16 + 64) = static_fields->privateKey;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 64), (int32_t)privateKey, v25, v26);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_20;
  v31 = StringLiteral_16119/*"_"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 72), v31, v29, v30);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (*(_QWORD *)(v16 + 80) = v13,
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 80), (int32_t)v13, v32, v33),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v36 = StringLiteral_16119/*"_"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_16119/*"_"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 88), v36, v34, v35),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_20:
    sub_1C3E7C8(Int_71299808, v9);
  }
  *(_QWORD *)(v16 + 96) = value;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 96), (int32_t)value, v37, v38);
  v39 = System_String__Concat_63676984((System_String_array *)v16, 0);
  v41 = EncryptedPlayerPrefs__Md5(v39, v40);
  v42 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16557/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v42, 0) )
    return 0;
  v43 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16557/*"_encryption_check"*/, 0);
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(v43, 0);
  return System_String__op_Equality(String_71300376, v41, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4C56433 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16617/*"_used_key"*/);
    sub_1C3E564(&StringLiteral_16557/*"_encryption_check"*/);
    byte_4C56433 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16557/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16617/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4C5642D & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C5642D = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_41304584(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_41304584(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_71300100; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C56431 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_19520/*"float"*/);
    byte_4C56431 = 1;
  }
  Float_71300100 = UnityEngine_PlayerPrefs__GetFloat_71300100(key, 0);
  v9 = floorf(Float_71300100 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19520/*"float"*/, v7, v6) )
    return Float_71300100;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C5642B & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C5642B = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_41304016(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_41304016(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_71299808; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5642F & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_20845/*"int"*/);
    byte_4C5642F = 1;
  }
  Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(key, 0);
  v6 = System_Int32__ToString((int32_t)&Int_71299808, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20845/*"int"*/, v6, v5) )
    return Int_71299808;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C5642C & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    byte_4C5642C = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_41304280(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_41304280(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71300376; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C56430 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_21364/*"long"*/);
    byte_4C56430 = 1;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21364/*"long"*/, String_71300376, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_71300376, &result, 0);
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

  if ( (byte_4C5642E & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5642E = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_41304892(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_41304892(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_71300376; // x21

  if ( (byte_4C56432 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_23767/*"string"*/);
    byte_4C56432 = 1;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(key, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23767/*"string"*/, String_71300376, v5) )
    return String_71300376;
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

  if ( (byte_4C56424 & 1) == 0 )
  {
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1C3E564(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C56424 = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1C3E7B0(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1C3E7B0(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
        sub_1C3E7C8(v4, v5);
      v12 = v8->m_Items[v11];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_64734448(v12, 16, 0);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_63636468(v10, v13, 0);
      LODWORD(max_length) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C3E7C0(v4, v5);
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
  const MethodInfo *v18; // x3
  EncryptedPlayerPrefs_c *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x0
  const MethodInfo *v43; // x1
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x0

  if ( (byte_4C56425 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_16617/*"_used_key"*/);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_16557/*"_encryption_check"*/);
    byte_4C56425 = 1;
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
    sub_1C3E7C8(v9, v7);
  v16 = (Il2CppClass *)keys->m_Items[v15];
  v9 = (EncryptedPlayerPrefs_c *)sub_1C3E60C(string___TypeInfo, 9);
  if ( !v9 )
LABEL_22:
    sub_1C3E7C0(v9, v7);
  v19 = v9;
  if ( !LODWORD(v9->_1.namespaze) )
    goto LABEL_21;
  v9->_1.byval_arg.data = key;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->_1.byval_arg, (int32_t)key, v17, v18);
  if ( LODWORD(v19->_1.namespaze) <= 1 )
    goto LABEL_21;
  v22 = StringLiteral_16119/*"_"*/;
  *(_QWORD *)&v19->_1.byval_arg.bits = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.byval_arg.bits, v22, v20, v21);
  if ( LODWORD(v19->_1.namespaze) <= 2 )
    goto LABEL_21;
  v19->_1.this_arg.data = type;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.this_arg, (int32_t)type, v23, v24);
  if ( LODWORD(v19->_1.namespaze) <= 3 )
    goto LABEL_21;
  v27 = StringLiteral_16119/*"_"*/;
  *(_QWORD *)&v19->_1.this_arg.bits = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.this_arg.bits, v27, v25, v26);
  if ( LODWORD(v19->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v19->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.element_class, (int32_t)privateKey, v28, v29);
  if ( LODWORD(v19->_1.namespaze) <= 5 )
    goto LABEL_21;
  v34 = StringLiteral_16119/*"_"*/;
  v19->_1.castClass = (Il2CppClass *)StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.castClass, v34, v32, v33);
  if ( LODWORD(v19->_1.namespaze) <= 6 )
    goto LABEL_21;
  v19->_1.declaringType = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.declaringType, (int32_t)v16, v35, v36);
  if ( LODWORD(v19->_1.namespaze) <= 7 )
    goto LABEL_21;
  v39 = StringLiteral_16119/*"_"*/;
  v19->_1.parent = (Il2CppClass *)StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.parent, v39, v37, v38);
  if ( LODWORD(v19->_1.namespaze) <= 8 )
    goto LABEL_21;
  v19->_1.generic_class = value;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->_1.generic_class, (int32_t)value, v40, v41);
  v42 = System_String__Concat_63676984((System_String_array *)v19, 0);
  v44 = EncryptedPlayerPrefs__Md5(v42, v43);
  v45 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16557/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v45, v44, 0);
  v46 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_16617/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v46, v15, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C56429 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_19520/*"float"*/);
    byte_4C56429 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19520/*"float"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4C56427 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_20845/*"int"*/);
    byte_4C56427 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20845/*"int"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4C56428 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_21364/*"long"*/);
    byte_4C56428 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v6 = System_Int64__ToString((int64_t)&v7, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21364/*"long"*/, v6, v5);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4C5642A & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&StringLiteral_23767/*"string"*/);
    byte_4C5642A = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23767/*"string"*/, value, v5);
}