void EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5937D3B & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_25191/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_5937D3B = 1;
  }
  v7 = StringLiteral_25191/*"t68aZyLxlMWVjw8lWgdZ"*/;
  EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey = (struct System_String_o *)StringLiteral_25191/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EncryptedPlayerPrefs_TypeInfo->static_fields,
    v7,
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
  __int64 Int_83183516; // x0
  __int64 v9; // x1
  EncryptedPlayerPrefs_c *v10; // x8
  unsigned int v11; // w22
  struct System_String_array *keys; // x8
  System_String_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x0
  const MethodInfo *v76; // x1
  System_String_o *v77; // x20
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *String_83184936; // x0

  if ( (byte_5937D2D & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_17245/*"_used_key"*/);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_17183/*"_encryption_check"*/);
    byte_5937D2D = 1;
  }
  v7 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17245/*"_used_key"*/, 0);
  Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v7, 0);
  v10 = EncryptedPlayerPrefs_TypeInfo;
  v11 = Int_83183516;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v9);
    v10 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v10->static_fields->keys;
  if ( !keys )
    goto LABEL_21;
  if ( v11 >= LODWORD(keys->max_length) )
    goto LABEL_20;
  v13 = keys->m_Items[v11];
  Int_83183516 = sub_21FFD10(string___TypeInfo, 9);
  if ( !Int_83183516 )
LABEL_21:
    sub_21FFECC(Int_83183516, v9);
  v20 = Int_83183516;
  if ( !*(_DWORD *)(Int_83183516 + 24) )
    goto LABEL_20;
  *(_QWORD *)(Int_83183516 + 32) = key;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Int_83183516 + 32), (int32_t)key, v14, v15, v16, v17, v18, v19);
  if ( (*(_DWORD *)(v20 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_20;
  v27 = StringLiteral_16714/*"_"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_20;
  *(_QWORD *)(v20 + 48) = type;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 48), (int32_t)type, v28, v29, v30, v31, v32, v33);
  if ( (*(_DWORD *)(v20 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_20;
  v40 = StringLiteral_16714/*"_"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 56), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_20;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  *(_QWORD *)(v20 + 64) = static_fields->privateKey;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 64), (int32_t)privateKey, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_20;
  v55 = StringLiteral_16714/*"_"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 72), v55, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (*(_QWORD *)(v20 + 80) = v13,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 80), (int32_t)v13, v56, v57, v58, v59, v60, v61),
        (*(_DWORD *)(v20 + 24) & 0xFFFFFFF8) == 0)
    || (v68 = StringLiteral_16714/*"_"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_16714/*"_"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 88), v68, v62, v63, v64, v65, v66, v67),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_20:
    sub_21FFED4(Int_83183516);
  }
  *(_QWORD *)(v20 + 96) = value;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 96), (int32_t)value, v69, v70, v71, v72, v73, v74);
  v75 = System_String__Concat_75483816((System_String_array *)v20, 0);
  v77 = EncryptedPlayerPrefs__Md5(v75, v76);
  v78 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17183/*"_encryption_check"*/, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v78, 0) )
    return 0;
  v79 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17183/*"_encryption_check"*/, 0);
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v79, 0);
  return System_String__op_Equality(String_83184936, v77, 0);
}


void EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_5937D3A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17245/*"_used_key"*/);
    sub_21FFC50(&StringLiteral_17183/*"_encryption_check"*/);
    byte_5937D3A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0);
  v3 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17183/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17245/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
}


float EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_5937D34 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    byte_5937D34 = 1;
  }
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetFloat_48193320(key, 0.0, method);
}


float EncryptedPlayerPrefs__GetFloat_48193320(System_String_o *key, float defaultValue, const MethodInfo *method)
{
  float Float_83184068; // s9
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937D38 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_20380/*"float"*/);
    byte_5937D38 = 1;
  }
  Float_83184068 = UnityEngine_PlayerPrefs__GetFloat_83184068(key, 0);
  v10 = floorf(Float_83184068 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v6);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20380/*"float"*/, v8, v7) )
    return Float_83184068;
  else
    return defaultValue;
}


int32_t EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5937D32 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    byte_5937D32 = 1;
  }
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetInt_48192744(key, 0, v2);
}


int32_t EncryptedPlayerPrefs__GetInt_48192744(System_String_o *key, int32_t defaultValue, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_83183516; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D36 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_21791/*"int"*/);
    byte_5937D36 = 1;
  }
  Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(key, 0);
  v7 = System_Int32__ToString((int32_t)&Int_83183516, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_21791/*"int"*/, v7, v6) )
    return Int_83183516;
  else
    return defaultValue;
}


int64_t EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5937D33 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    byte_5937D33 = 1;
  }
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetLong_48193012(key, 0, v2);
}


int64_t EncryptedPlayerPrefs__GetLong_48193012(System_String_o *key, int64_t defaultValue, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_83184936; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937D37 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_22382/*"long"*/);
    byte_5937D37 = 1;
  }
  result = 0;
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(key, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22382/*"long"*/, String_83184936, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_83184936, &result, 0);
    return result;
  }
  else
  {
    if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v8);
    return EncryptedPlayerPrefs__GetInt(key, v8);
  }
}


System_String_o *EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5937D35 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D35 = 1;
  }
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  return EncryptedPlayerPrefs__GetString_48193632(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *EncryptedPlayerPrefs__GetString_48193632(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_83184936; // x21

  if ( (byte_5937D39 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_24959/*"string"*/);
    byte_5937D39 = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(key, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_24959/*"string"*/, String_83184936, v6) )
    return String_83184936;
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

  if ( (byte_5937D2B & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_21FFC50(&System_Text_UTF8Encoding_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D2B = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_21FFEBC(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_15;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._18_GetBytes.methodPtr)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._18_GetBytes.method);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_21FFEBC(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
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
        sub_21FFED4(v4);
      v12 = v8->m_Items[v11];
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v5);
      v4 = System_Convert__ToString_76483960(v12, 16, 0);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0);
      v4 = System_String__Concat_75438412(v10, v13, 0);
      LODWORD(max_length) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_21FFECC(v4, v5);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  EncryptedPlayerPrefs_c *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x8
  struct System_String_o *privateKey; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x0
  const MethodInfo *v74; // x1
  System_String_o *v75; // x20
  System_String_o *v76; // x0
  System_String_o *v77; // x0

  if ( (byte_5937D2C & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_17245/*"_used_key"*/);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_17183/*"_encryption_check"*/);
    byte_5937D2C = 1;
  }
  v7 = EncryptedPlayerPrefs_TypeInfo;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, type);
    v7 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v7->static_fields->keys;
  if ( !keys )
    goto LABEL_20;
  v7 = (EncryptedPlayerPrefs_c *)UnityEngine_Random__Range_83187376(0, keys->max_length, 0);
  v9 = EncryptedPlayerPrefs_TypeInfo->static_fields->keys;
  if ( !v9 )
    goto LABEL_20;
  v10 = (int)v7;
  if ( (unsigned int)v7 >= LODWORD(v9->max_length) )
    goto LABEL_19;
  v11 = v9->m_Items[(int)v7];
  v7 = (EncryptedPlayerPrefs_c *)sub_21FFD10(string___TypeInfo, 9);
  if ( !v7 )
LABEL_20:
    sub_21FFECC(v7, type);
  v18 = v7;
  if ( !LODWORD(v7->_1.namespaze) )
    goto LABEL_19;
  v7->_1.byval_arg.data = key;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->_1.byval_arg, (int32_t)key, v12, v13, v14, v15, v16, v17);
  if ( ((__int64)v18->_1.namespaze & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v25 = StringLiteral_16714/*"_"*/;
  *(_QWORD *)&v18->_1.byval_arg.bits = StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.byval_arg.bits, v25, v19, v20, v21, v22, v23, v24);
  if ( LODWORD(v18->_1.namespaze) <= 2 )
    goto LABEL_19;
  v18->_1.this_arg.data = type;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.this_arg, (int32_t)type, v26, v27, v28, v29, v30, v31);
  if ( ((__int64)v18->_1.namespaze & 0xFFFFFFFC) == 0 )
    goto LABEL_19;
  v38 = StringLiteral_16714/*"_"*/;
  *(_QWORD *)&v18->_1.this_arg.bits = StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.this_arg.bits, v38, v32, v33, v34, v35, v36, v37);
  if ( LODWORD(v18->_1.namespaze) <= 4 )
    goto LABEL_19;
  static_fields = EncryptedPlayerPrefs_TypeInfo->static_fields;
  privateKey = static_fields->privateKey;
  v18->_1.element_class = (Il2CppClass *)static_fields->privateKey;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v18->_1.element_class,
    (int32_t)privateKey,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( LODWORD(v18->_1.namespaze) <= 5 )
    goto LABEL_19;
  v53 = StringLiteral_16714/*"_"*/;
  v18->_1.castClass = (Il2CppClass *)StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.castClass, v53, v47, v48, v49, v50, v51, v52);
  if ( LODWORD(v18->_1.namespaze) <= 6
    || (v18->_1.declaringType = (Il2CppClass *)v11,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v18->_1.declaringType,
          (int32_t)v11,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59),
        ((__int64)v18->_1.namespaze & 0xFFFFFFF8) == 0)
    || (v66 = StringLiteral_16714/*"_"*/,
        v18->_1.parent = (Il2CppClass *)StringLiteral_16714/*"_"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.parent, v66, v60, v61, v62, v63, v64, v65),
        LODWORD(v18->_1.namespaze) <= 8) )
  {
LABEL_19:
    sub_21FFED4(v7);
  }
  v18->_1.generic_class = value;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->_1.generic_class, (int32_t)value, v67, v68, v69, v70, v71, v72);
  v73 = System_String__Concat_75483816((System_String_array *)v18, 0);
  v75 = EncryptedPlayerPrefs__Md5(v73, v74);
  v76 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17183/*"_encryption_check"*/, 0);
  UnityEngine_PlayerPrefs__SetString(v76, v75, 0);
  v77 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_17245/*"_used_key"*/, 0);
  UnityEngine_PlayerPrefs__SetInt(v77, v10, 0);
}


void EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D30 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_20380/*"float"*/);
    byte_5937D30 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20380/*"float"*/, v7, v6);
}


void EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = value;
  if ( (byte_5937D2E & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_21791/*"int"*/);
    byte_5937D2E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0);
  v7 = System_Int32__ToString((int32_t)&v8, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_21791/*"int"*/, v7, v6);
}


void EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  v8 = value;
  if ( (byte_5937D2F & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_22382/*"long"*/);
    byte_5937D2F = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v8, 0);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0);
  v7 = System_Int64__ToString((int64_t)&v8, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22382/*"long"*/, v7, v6);
}


void EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_5937D31 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&StringLiteral_24959/*"string"*/);
    byte_5937D31 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v5);
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_24959/*"string"*/, value, v6);
}