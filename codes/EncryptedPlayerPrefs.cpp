void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5A848 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_23821/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_4A5A848 = 1;
  }
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_23821/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    StringLiteral_23821/*"t68aZyLxlMWVjw8lWgdZ"*/,
    v1,
    v2);
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
  System_String_o *v7; // x0
  __int64 Int_69417088; // x0
  __int64 v9; // x1
  EncryptedPlayerPrefs_c *v10; // x8
  il2cpp_array_size_t v11; // w22
  struct System_String_array *keys; // x8
  System_String_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *String_69417656; // x0

  if ( (byte_4A5A83A & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_16597/*"_used_key"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_16536/*"_encryption_check"*/);
    byte_4A5A83A = 1;
  }
  v7 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16597/*"_used_key"*/, 0LL);
  Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v7, 0LL);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_69417088;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v10 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v10->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v11 >= keys->max_length )
    goto LABEL_20;
  v13 = keys->m_Items[v11];
  Int_69417088 = sub_1B88658(string___TypeInfo, 9LL);
  if ( !Int_69417088 )
LABEL_21:
    sub_1B8880C(Int_69417088, v9);
  v16 = Int_69417088;
  if ( !*(_DWORD *)(Int_69417088 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_69417088 + 32) = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Int_69417088 + 32), (int32_t)key, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_20;
  v19 = StringLiteral_16123/*"_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 40), v19, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v16 + 48) = type;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 48), (int32_t)type, v20, v21);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_20;
  v24 = StringLiteral_16123/*"_"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 56), v24, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v16 + 64) = static_fields->privateKey;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 64), (int32_t)privateKey, v25, v26);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_20;
  v31 = StringLiteral_16123/*"_"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 72), v31, v29, v30);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (*(_QWORD *)(v16 + 80) = v13,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 80), (int32_t)v13, v32, v33),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v36 = StringLiteral_16123/*"_"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_16123/*"_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 88), v36, v34, v35),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_20:
    sub_1B88814(Int_69417088, v9);
  }
  *(_QWORD *)(v16 + 96) = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 96), (int32_t)value, v37, v38);
  v39 = System_String__Concat_61720560((System_String_array *)v16, 0LL);
  v41 = EncryptedPlayerPrefs__Md5(v39, v40);
  v42 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16536/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v42, 0LL) )
    return 0;
  v43 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16536/*"_encryption_check"*/, 0LL);
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v43, 0LL);
  return System_String__op_Equality(String_69417656, v41, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4A5A847 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16597/*"_used_key"*/);
    sub_1B885B0(&StringLiteral_16536/*"_encryption_check"*/);
    byte_4A5A847 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v3 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16536/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
  v4 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16597/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4A5A841 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4A5A841 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetFloat_38379852(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_38379852(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  float Float_69417380; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A845 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_19480/*"float"*/);
    byte_4A5A845 = 1;
  }
  Float_69417380 = UnityEngine_PlayerPrefs__GetFloat_69417380(key, 0LL);
  v9 = floorf(Float_69417380 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19480/*"float"*/, v7, v6) )
    return Float_69417380;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5A83F & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4A5A83F = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetInt_38379284(key, 0, v2);
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt_38379284(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_69417088; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A843 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_20692/*"int"*/);
    byte_4A5A843 = 1;
  }
  Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(key, 0LL);
  v6 = System_Int32__ToString((int32_t)&Int_69417088, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20692/*"int"*/, v6, v5) )
    return Int_69417088;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5A840 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    byte_4A5A840 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetLong_38379548(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_38379548(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_69417656; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A844 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_21206/*"long"*/);
    byte_4A5A844 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21206/*"long"*/, String_69417656, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_69417656, &result, 0LL);
    return result;
  }
  else
  {
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    return EncryptedPlayerPrefs__GetInt(key, v7);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5A842 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A842 = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  return EncryptedPlayerPrefs__GetString_38380160(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_38380160(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_69417656; // x21

  if ( (byte_4A5A846 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_23587/*"string"*/);
    byte_4A5A846 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(key, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_23587/*"string"*/, String_69417656, v5) )
    return String_69417656;
  else
    return defaultValue;
}


bool __fastcall EncryptedPlayerPrefs__HasKey(System_String_o *key, const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__HasKey(key, 0LL);
}


System_String_o *__fastcall EncryptedPlayerPrefs__Md5(System_String_o *strToEncrypt, const MethodInfo *method)
{
  System_Text_UTF8Encoding_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v7; // x20
  System_Byte_array *v8; // x19
  __int64 v9; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x22
  uint8_t v12; // w21
  System_String_o *v13; // x0

  if ( (byte_4A5A838 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_1B885B0(&System_Text_UTF8Encoding_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A838 = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_1B887FC(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v3->klass->vtable._19_GetBytes.method)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._20_GetBytes.methodPtr);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_1B887FC(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  v8 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
         (System_Security_Cryptography_HashAlgorithm_o *)v7,
         v6,
         0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v7, 0LL);
  if ( !v8 )
    goto LABEL_15;
  v9 = *(_QWORD *)&v8->max_length;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1B88814(v4, v5);
      v12 = v8->m_Items[v11 + 4];
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v4 = System_Convert__ToString_62374684(v12, 16, 0LL);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0LL);
      v4 = System_String__Concat_61707032(v10, v13, 0LL);
      LODWORD(v9) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B8880C(v4, v5);
  }
LABEL_13:
  if ( !v10 )
    goto LABEL_15;
  return System_String__PadLeft(v10, 32, 0x30u, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SaveEncryption(
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
  EncryptedPlayerPrefs_c *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x0
  const MethodInfo *v43; // x1
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x0

  if ( (byte_4A5A839 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_16597/*"_used_key"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_16536/*"_encryption_check"*/);
    byte_4A5A839 = 1;
  }
  v8 = UnityEngine_Random__get_value(0LL);
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
    sub_1B88814(v9, v7);
  v16 = (Il2CppClass *)keys->m_Items[v15];
  v9 = (EncryptedPlayerPrefs_c *)sub_1B88658(string___TypeInfo, 9LL);
  if ( !v9 )
LABEL_22:
    sub_1B8880C(v9, v7);
  v19 = v9;
  if ( !LODWORD(v9->_1.namespaze) )
    goto LABEL_21;
  v9->_1.byval_arg.data = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->_1.byval_arg, (int32_t)key, v17, v18);
  if ( LODWORD(v19->_1.namespaze) <= 1 )
    goto LABEL_21;
  v22 = StringLiteral_16123/*"_"*/;
  *(_QWORD *)&v19->_1.byval_arg.bits = StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.byval_arg.bits, v22, v20, v21);
  if ( LODWORD(v19->_1.namespaze) <= 2 )
    goto LABEL_21;
  v19->_1.this_arg.data = type;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.this_arg, (int32_t)type, v23, v24);
  if ( LODWORD(v19->_1.namespaze) <= 3 )
    goto LABEL_21;
  v27 = StringLiteral_16123/*"_"*/;
  *(_QWORD *)&v19->_1.this_arg.bits = StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.this_arg.bits, v27, v25, v26);
  if ( LODWORD(v19->_1.namespaze) <= 4 )
    goto LABEL_21;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v19->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.element_class, (int32_t)privateKey, v28, v29);
  if ( LODWORD(v19->_1.namespaze) <= 5 )
    goto LABEL_21;
  v34 = StringLiteral_16123/*"_"*/;
  v19->_1.castClass = (Il2CppClass *)StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.castClass, v34, v32, v33);
  if ( LODWORD(v19->_1.namespaze) <= 6 )
    goto LABEL_21;
  v19->_1.declaringType = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.declaringType, (int32_t)v16, v35, v36);
  if ( LODWORD(v19->_1.namespaze) <= 7 )
    goto LABEL_21;
  v39 = StringLiteral_16123/*"_"*/;
  v19->_1.parent = (Il2CppClass *)StringLiteral_16123/*"_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.parent, v39, v37, v38);
  if ( LODWORD(v19->_1.namespaze) <= 8 )
    goto LABEL_21;
  v19->_1.generic_class = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->_1.generic_class, (int32_t)value, v40, v41);
  v42 = System_String__Concat_61720560((System_String_array *)v19, 0LL);
  v44 = EncryptedPlayerPrefs__Md5(v42, v43);
  v45 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16536/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v45, v44, 0LL);
  v46 = System_String__Concat_61707032(key, (System_String_o *)StringLiteral_16597/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v46, v15, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A83D & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_19480/*"float"*/);
    byte_4A5A83D = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19480/*"float"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = value;
  if ( (byte_4A5A83B & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_20692/*"int"*/);
    byte_4A5A83B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20692/*"int"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = value;
  if ( (byte_4A5A83C & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_21206/*"long"*/);
    byte_4A5A83C = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0LL);
  v6 = System_Int64__ToString((int64_t)&v7, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21206/*"long"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4A5A83E & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&StringLiteral_23587/*"string"*/);
    byte_4A5A83E = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_23587/*"string"*/, value, v5);
}