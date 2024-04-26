void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43563FB & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_22953/*"t68aZyLxlMWVjw8lWgdZ"*/);
    byte_43563FB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EncryptedPlayerPrefs_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22953/*"t68aZyLxlMWVjw8lWgdZ"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22953/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  __int64 Int_36094592; // x0
  __int64 v9; // x1
  il2cpp_array_size_t v10; // w21
  EncryptedPlayerPrefs_c *v11; // x8
  struct System_String_array *keys; // x8
  System_Int32_array **v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **privateKey; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_o *v74; // x0
  const MethodInfo *v75; // x1
  System_String_o *v76; // x20
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  System_String_o *String_36095200; // x0
  __int64 v81; // x0
  __int64 v82; // x0

  if ( (byte_43563ED & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16438/*"_used_key"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_16377/*"_encryption_check"*/);
    byte_43563ED = 1;
  }
  v7 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16438/*"_used_key"*/, 0LL);
  Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v7, 0LL);
  v10 = Int_36094592;
  v11 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v11 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v11->static_fields->keys;
  if ( !keys )
    goto LABEL_49;
  if ( v10 >= keys->max_length )
    goto LABEL_47;
  v13 = (System_Int32_array **)keys->m_Items[v10];
  Int_36094592 = sub_B706AC(string___TypeInfo, 9LL);
  if ( !Int_36094592 )
LABEL_49:
    sub_B7076C(Int_36094592, v9);
  v20 = (System_String_array *)Int_36094592;
  if ( key )
  {
    Int_36094592 = sub_B70754(key, *(_QWORD *)(*(_QWORD *)Int_36094592 + 64LL));
    if ( !Int_36094592 )
      goto LABEL_48;
  }
  if ( !v20->max_length )
    goto LABEL_47;
  v20->m_Items[0] = key;
  sub_B70630((BattleServantConfConponent_o *)v20->m_Items, (System_Int32_array **)key, v14, v15, v16, v17, v18, v19);
  Int_36094592 = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    Int_36094592 = sub_B70754(StringLiteral_16127/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
    v27 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_47;
  v20->m_Items[1] = (System_String_o *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  if ( type )
  {
    Int_36094592 = sub_B70754(type, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_47;
  v20->m_Items[2] = type;
  sub_B70630(
    (BattleServantConfConponent_o *)&v20->m_Items[2],
    (System_Int32_array **)type,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Int_36094592 = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    Int_36094592 = sub_B70754(StringLiteral_16127/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
    v40 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_47;
  v20->m_Items[3] = (System_String_o *)v40;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    Int_36094592 = sub_B70754(privateKey, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_47;
  v20->m_Items[4] = (System_String_o *)privateKey;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[4], privateKey, v41, v42, v43, v44, v45, v46);
  Int_36094592 = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    Int_36094592 = sub_B70754(StringLiteral_16127/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
    v54 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_47;
  v20->m_Items[5] = (System_String_o *)v54;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[5], v54, v48, v49, v50, v51, v52, v53);
  if ( v13 )
  {
    Int_36094592 = sub_B70754(v13, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_47;
  v20->m_Items[6] = (System_String_o *)v13;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[6], v13, v55, v56, v57, v58, v59, v60);
  Int_36094592 = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    Int_36094592 = sub_B70754(StringLiteral_16127/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
      goto LABEL_48;
    v67 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_47;
  v20->m_Items[7] = (System_String_o *)v67;
  sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
  if ( value )
  {
    Int_36094592 = sub_B70754(value, v20->obj.klass->_1.element_class);
    if ( !Int_36094592 )
    {
LABEL_48:
      v82 = sub_B7078C(Int_36094592);
      sub_B70738(v82, 0LL);
    }
  }
  if ( v20->max_length <= 8 )
  {
LABEL_47:
    v81 = sub_B70798(Int_36094592);
    sub_B70738(v81, 0LL);
  }
  v20->m_Items[8] = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&v20->m_Items[8],
    (System_Int32_array **)value,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = System_String__Concat_44838292(v20, 0LL);
  v76 = EncryptedPlayerPrefs__Md5(v74, v75);
  v77 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16377/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v77, 0LL) )
    return 0;
  v78 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16377/*"_encryption_check"*/, 0LL);
  String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200(v78, 0LL);
  return System_String__op_Equality(String_36095200, v76, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_43563FA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16438/*"_used_key"*/);
    sub_B70694(&StringLiteral_16377/*"_encryption_check"*/);
    byte_43563FA = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v3 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16377/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
  v4 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16438/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_43563F4 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    byte_43563F4 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetFloat_33932216(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_33932216(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  float Float_36094896; // s9
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43563F8 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_19058/*"float"*/);
    byte_43563F8 = 1;
  }
  Float_36094896 = UnityEngine_PlayerPrefs__GetFloat_36094896(key, 0LL);
  v9 = floorf(Float_36094896 * 1000.0);
  v7 = System_Single__ToString(v9, (const MethodInfo *)&v9);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19058/*"float"*/, v7, v6) )
    return Float_36094896;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_43563F2 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    byte_43563F2 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetInt_33931588(key, 0, v2);
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt_33931588(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x21
  int32_t Int_36094592; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43563F6 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_20152/*"int"*/);
    byte_43563F6 = 1;
  }
  Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(key, 0LL);
  v6 = System_Int32__ToString((int32_t)&Int_36094592, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20152/*"int"*/, v6, v5) )
    return Int_36094592;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_43563F3 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    byte_43563F3 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetLong_33931876(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_33931876(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_36095200; // x21
  const MethodInfo *v7; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43563F7 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_20634/*"long"*/);
    byte_43563F7 = 1;
  }
  result = 0LL;
  String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20634/*"long"*/, String_36095200, v5) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_36095200, &result, 0LL);
    return result;
  }
  else
  {
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    return EncryptedPlayerPrefs__GetInt(key, v7);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_43563F5 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43563F5 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetString_33932548(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_33932548(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *String_36095200; // x21

  if ( (byte_43563F9 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_22732/*"string"*/);
    byte_43563F9 = 1;
  }
  String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22732/*"string"*/, String_36095200, v5) )
    return String_36095200;
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
  __int64 v15; // x0

  if ( (byte_43563EB & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
    sub_B70694(&System_Text_UTF8Encoding_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43563EB = 1;
  }
  v3 = (System_Text_UTF8Encoding_o *)sub_B70764(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_16;
  v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v3->klass->vtable._18_GetBytes.method)(
                              v3,
                              strToEncrypt,
                              v3->klass->vtable._19_GetBytes.methodPtr);
  v7 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_B70764(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v8 = System_Security_Cryptography_HashAlgorithm__ComputeHash_44164804(
         (System_Security_Cryptography_HashAlgorithm_o *)v7,
         v6,
         0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v7, 0LL);
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)&v8->max_length;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v15 = sub_B70798(v4);
        sub_B70738(v15, 0LL);
      }
      v12 = v8->m_Items[v11 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v4 = System_Convert__ToString_42446060(v12, 16, 0LL);
      if ( !v4 )
        break;
      v13 = System_String__PadLeft(v4, 2, 0x30u, 0LL);
      v4 = System_String__Concat_44758168(v10, v13, 0LL);
      LODWORD(v9) = v8->max_length;
      ++v11;
      v10 = v4;
      if ( (__int64)v11 >= (int)v9 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(v4, v5);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_String__PadLeft(v10, 32, 0x30u, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SaveEncryption(
        System_String_o *key,
        System_String_o *type,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  float v8; // s8
  EncryptedPlayerPrefs_c *v9; // x0
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v12; // s1
  double v13; // d0
  int32_t v14; // w21
  System_Int32_array **v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **privateKey; // x24
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_o *v76; // x0
  const MethodInfo *v77; // x1
  System_String_o *v78; // x20
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0

  if ( (byte_43563EC & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16438/*"_used_key"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_16377/*"_encryption_check"*/);
    byte_43563EC = 1;
  }
  v8 = UnityEngine_Random__get_value(0LL);
  v9 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v9 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v9->static_fields->keys;
  if ( !keys )
    goto LABEL_50;
  max_length = keys->max_length;
  v12 = floorf(v8 * (float)max_length);
  if ( v12 == INFINITY )
    v13 = -v12;
  else
    v13 = v12;
  v14 = (int)v13;
  if ( (int)v13 >= (unsigned int)max_length )
  {
LABEL_48:
    v81 = sub_B70798(v9);
    sub_B70738(v81, 0LL);
  }
  v15 = (System_Int32_array **)keys->m_Items[v14];
  v9 = (EncryptedPlayerPrefs_c *)sub_B706AC(string___TypeInfo, 9LL);
  if ( !v9 )
LABEL_50:
    sub_B7076C(v9, v7);
  v22 = (System_String_array *)v9;
  if ( key )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(key, *((_QWORD *)v9->_1.image + 8));
    if ( !v9 )
      goto LABEL_49;
  }
  if ( !v22->max_length )
    goto LABEL_48;
  v22->m_Items[0] = key;
  sub_B70630((BattleServantConfConponent_o *)v22->m_Items, (System_Int32_array **)key, v16, v17, v18, v19, v20, v21);
  v9 = (EncryptedPlayerPrefs_c *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(StringLiteral_16127/*"_"*/, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
    v29 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_48;
  v22->m_Items[1] = (System_String_o *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  if ( type )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(type, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_48;
  v22->m_Items[2] = type;
  sub_B70630(
    (BattleServantConfConponent_o *)&v22->m_Items[2],
    (System_Int32_array **)type,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v9 = (EncryptedPlayerPrefs_c *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(StringLiteral_16127/*"_"*/, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
    v42 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v22->max_length <= 3 )
    goto LABEL_48;
  v22->m_Items[3] = (System_String_o *)v42;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(privateKey, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
  }
  if ( v22->max_length <= 4 )
    goto LABEL_48;
  v22->m_Items[4] = (System_String_o *)privateKey;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[4], privateKey, v43, v44, v45, v46, v47, v48);
  v9 = (EncryptedPlayerPrefs_c *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(StringLiteral_16127/*"_"*/, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
    v56 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v22->max_length <= 5 )
    goto LABEL_48;
  v22->m_Items[5] = (System_String_o *)v56;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[5], v56, v50, v51, v52, v53, v54, v55);
  if ( v15 )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(v15, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
  }
  if ( v22->max_length <= 6 )
    goto LABEL_48;
  v22->m_Items[6] = (System_String_o *)v15;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[6], v15, v57, v58, v59, v60, v61, v62);
  v9 = (EncryptedPlayerPrefs_c *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(StringLiteral_16127/*"_"*/, v22->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_49;
    v69 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v22->max_length <= 7 )
    goto LABEL_48;
  v22->m_Items[7] = (System_String_o *)v69;
  sub_B70630((BattleServantConfConponent_o *)&v22->m_Items[7], v69, v63, v64, v65, v66, v67, v68);
  if ( value )
  {
    v9 = (EncryptedPlayerPrefs_c *)sub_B70754(value, v22->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_49:
      v82 = sub_B7078C(v9);
      sub_B70738(v82, 0LL);
    }
  }
  if ( v22->max_length <= 8 )
    goto LABEL_48;
  v22->m_Items[8] = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&v22->m_Items[8],
    (System_Int32_array **)value,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = System_String__Concat_44838292(v22, 0LL);
  v78 = EncryptedPlayerPrefs__Md5(v76, v77);
  v79 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16377/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v79, v78, 0LL);
  v80 = System_String__Concat_44758168(key, (System_String_o *)StringLiteral_16438/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v80, v14, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  float v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43563F0 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_19058/*"float"*/);
    byte_43563F0 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v7 = floorf(value * 1000.0);
  v6 = System_Single__ToString(v7, (const MethodInfo *)&v7);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19058/*"float"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = value;
  if ( (byte_43563EE & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_20152/*"int"*/);
    byte_43563EE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20152/*"int"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int64_t v7; // [xsp+8h] [xbp-18h] BYREF

  v7 = value;
  if ( (byte_43563EF & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_20634/*"long"*/);
    byte_43563EF = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v7, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v4, 0LL);
  v6 = System_Int64__ToString((int64_t)&v7, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20634/*"long"*/, v6, v5);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_43563F1 & 1) == 0 )
  {
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&StringLiteral_22732/*"string"*/);
    byte_43563F1 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22732/*"string"*/, value, v5);
}