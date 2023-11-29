void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FE292 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22484, v8);
    byte_40FE292 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EncryptedPlayerPrefs_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22484;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22484;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 Int_34836848; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  il2cpp_array_size_t v15; // w21
  EncryptedPlayerPrefs_c *v16; // x8
  struct System_String_array *keys; // x8
  System_Int32_array **v18; // x22
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x21
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **privateKey; // x23
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_o *v66; // x0
  const MethodInfo *v67; // x1
  System_String_o *v68; // x20
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *String_34837456; // x0

  if ( (byte_40FE284 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B16FFC(&string___TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16135, v8);
    sub_B16FFC(&StringLiteral_15842, v9);
    sub_B16FFC(&StringLiteral_16077, v10);
    byte_40FE284 = 1;
  }
  v11 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16135, 0LL);
  Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v11, 0LL);
  v15 = Int_34836848;
  v16 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v16 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v16->static_fields->keys;
  if ( !keys )
    goto LABEL_49;
  if ( v15 >= keys->max_length )
    goto LABEL_47;
  v18 = (System_Int32_array **)keys->m_Items[v15];
  Int_34836848 = sub_B17014(string___TypeInfo, 9LL, v14);
  if ( !Int_34836848 )
LABEL_49:
    sub_B170D4();
  v24 = (System_String_array *)Int_34836848;
  if ( key )
  {
    Int_34836848 = sub_B170BC(key, *(_QWORD *)(*(_QWORD *)Int_34836848 + 64LL));
    if ( !Int_34836848 )
      goto LABEL_48;
  }
  if ( !v24->max_length )
    goto LABEL_47;
  v24->m_Items[0] = key;
  sub_B16F98((BattleServantConfConponent_o *)v24->m_Items, (System_Int32_array **)key, v14, v19, v20, v21, v22, v23);
  Int_34836848 = StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    Int_34836848 = sub_B170BC(StringLiteral_15842, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
    v13 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_47;
  v24->m_Items[1] = (System_String_o *)v13;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[1], v13, v14, v25, v26, v27, v28, v29);
  if ( type )
  {
    Int_34836848 = sub_B170BC(type, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_47;
  v24->m_Items[2] = type;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->m_Items[2],
    (System_Int32_array **)type,
    v14,
    v30,
    v31,
    v32,
    v33,
    v34);
  Int_34836848 = StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    Int_34836848 = sub_B170BC(StringLiteral_15842, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
    v13 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_47;
  v24->m_Items[3] = (System_String_o *)v13;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[3], v13, v14, v35, v36, v37, v38, v39);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    Int_34836848 = sub_B170BC(privateKey, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_47;
  v24->m_Items[4] = (System_String_o *)privateKey;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[4], privateKey, v14, v40, v41, v42, v43, v44);
  Int_34836848 = StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    Int_34836848 = sub_B170BC(StringLiteral_15842, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
    v13 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_47;
  v24->m_Items[5] = (System_String_o *)v13;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[5], v13, v14, v46, v47, v48, v49, v50);
  if ( v18 )
  {
    Int_34836848 = sub_B170BC(v18, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_47;
  v24->m_Items[6] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[6], v18, v14, v51, v52, v53, v54, v55);
  Int_34836848 = StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    Int_34836848 = sub_B170BC(StringLiteral_15842, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
      goto LABEL_48;
    v13 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v24->max_length <= 7 )
    goto LABEL_47;
  v24->m_Items[7] = (System_String_o *)v13;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[7], v13, v14, v56, v57, v58, v59, v60);
  if ( value )
  {
    Int_34836848 = sub_B170BC(value, v24->obj.klass->_1.element_class);
    if ( !Int_34836848 )
    {
LABEL_48:
      sub_B170F4(Int_34836848);
      sub_B170A0();
    }
  }
  if ( v24->max_length <= 8 )
  {
LABEL_47:
    sub_B17100(Int_34836848, v13, v14);
    sub_B170A0();
  }
  v24->m_Items[8] = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->m_Items[8],
    (System_Int32_array **)value,
    v14,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = System_String__Concat_43823856(v24, 0LL);
  v68 = EncryptedPlayerPrefs__Md5(v66, v67);
  v69 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16077, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v69, 0LL) )
    return 0;
  v70 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16077, 0LL);
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(v70, 0LL);
  return System_String__op_Equality(String_34837456, v68, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_40FE291 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16135, method);
    sub_B16FFC(&StringLiteral_16077, v3);
    byte_40FE291 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16077, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16135, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_40FE28B & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_40FE28B = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetFloat_33187280(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_33187280(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_34837152; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FE28F & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18698, v5);
    byte_40FE28F = 1;
  }
  Float_34837152 = UnityEngine_PlayerPrefs__GetFloat_34837152(key, 0LL);
  v10 = floorf(Float_34837152 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_18698, v8, v7) )
    return Float_34837152;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FE289 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_40FE289 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetInt_33186652(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_33186652(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_34836848; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FE28D & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_B16FFC(&StringLiteral_19761, v5);
    byte_40FE28D = 1;
  }
  Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_34836848, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19761, v7, v6) )
    return Int_34836848;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FE28A & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_40FE28A = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetLong_33186940(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_33186940(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_34837456; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FE28E & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B16FFC(&StringLiteral_20232, v5);
    byte_40FE28E = 1;
  }
  result = 0LL;
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20232, String_34837456, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_34837456, &result, 0LL);
    return result;
  }
  else
  {
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    return EncryptedPlayerPrefs__GetInt(key, v8);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1

  if ( (byte_40FE28C & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FE28C = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetString_33187612(key, (System_String_o *)StringLiteral_1, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_33187612(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_34837456; // x21

  if ( (byte_40FE290 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B16FFC(&StringLiteral_22267, v5);
    byte_40FE290 = 1;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22267, String_34837456, v6) )
    return String_34837456;
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Text_UTF8Encoding_o *v9; // x20
  System_Byte_array *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v15; // x20
  System_Byte_array *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  System_String_o *v21; // x20
  unsigned __int64 v22; // x22
  uint8_t v23; // w21
  System_String_o *v24; // x0
  System_String_o *v25; // x0

  if ( (byte_40FE282 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v6);
    sub_B16FFC(&System_Text_UTF8Encoding_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FE282 = 1;
  }
  v9 = (System_Text_UTF8Encoding_o *)sub_B170CC(System_Text_UTF8Encoding_TypeInfo, method, v2, v3, v4);
  System_Text_UTF8Encoding___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v10 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._18_GetBytes.method)(
                               v9,
                               strToEncrypt,
                               v9->klass->vtable._19_GetBytes.methodPtr);
  v15 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_B170CC(
                                                                     System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo,
                                                                     v11,
                                                                     v12,
                                                                     v13,
                                                                     v14);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v16 = System_Security_Cryptography_HashAlgorithm__ComputeHash_42874060(
          (System_Security_Cryptography_HashAlgorithm_o *)v15,
          v10,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v15, 0LL);
  if ( !v16 )
    goto LABEL_16;
  v20 = *(_QWORD *)&v16->max_length;
  v21 = (System_String_o *)StringLiteral_1;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v23 = v16->m_Items[v22 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v24 = System_Convert__ToString_41758320(v23, 16, 0LL);
      if ( !v24 )
        break;
      v25 = System_String__PadLeft(v24, 2, 0x30u, 0LL);
      v17 = System_String__Concat_43743732(v21, v25, 0LL);
      LODWORD(v20) = v16->max_length;
      ++v22;
      v21 = v17;
      if ( (__int64)v22 >= (int)v20 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v21 )
    goto LABEL_16;
  return System_String__PadLeft(v21, 32, 0x30u, 0LL);
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
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  float v13; // s8
  EncryptedPlayerPrefs_c *v14; // x0
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v17; // s1
  double v18; // d0
  int32_t v19; // w21
  System_Int32_array **v20; // x23
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **privateKey; // x24
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_o *v68; // x0
  const MethodInfo *v69; // x1
  System_String_o *v70; // x20
  System_String_o *v71; // x0
  System_String_o *v72; // x0

  if ( (byte_40FE283 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B16FFC(&string___TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16135, v8);
    sub_B16FFC(&StringLiteral_15842, v9);
    sub_B16FFC(&StringLiteral_16077, v10);
    byte_40FE283 = 1;
  }
  v13 = UnityEngine_Random__get_value(0LL);
  v14 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v14 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v14->static_fields->keys;
  if ( !keys )
    goto LABEL_50;
  max_length = keys->max_length;
  v17 = floorf(v13 * (float)max_length);
  if ( v17 == INFINITY )
    v18 = -v17;
  else
    v18 = v17;
  v19 = (int)v18;
  if ( (int)v18 >= (unsigned int)max_length )
  {
LABEL_48:
    sub_B17100(v14, v11, v12);
    sub_B170A0();
  }
  v20 = (System_Int32_array **)keys->m_Items[v19];
  v14 = (EncryptedPlayerPrefs_c *)sub_B17014(string___TypeInfo, 9LL, v12);
  if ( !v14 )
LABEL_50:
    sub_B170D4();
  v26 = (System_String_array *)v14;
  if ( key )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(key, *((_QWORD *)v14->_1.image + 8));
    if ( !v14 )
      goto LABEL_49;
  }
  if ( !v26->max_length )
    goto LABEL_48;
  v26->m_Items[0] = key;
  sub_B16F98((BattleServantConfConponent_o *)v26->m_Items, (System_Int32_array **)key, v12, v21, v22, v23, v24, v25);
  v14 = (EncryptedPlayerPrefs_c *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(StringLiteral_15842, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v11 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_48;
  v26->m_Items[1] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[1], v11, v12, v27, v28, v29, v30, v31);
  if ( type )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(type, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_48;
  v26->m_Items[2] = type;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->m_Items[2],
    (System_Int32_array **)type,
    v12,
    v32,
    v33,
    v34,
    v35,
    v36);
  v14 = (EncryptedPlayerPrefs_c *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(StringLiteral_15842, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v11 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_48;
  v26->m_Items[3] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[3], v11, v12, v37, v38, v39, v40, v41);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(privateKey, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_48;
  v26->m_Items[4] = (System_String_o *)privateKey;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[4], privateKey, v12, v42, v43, v44, v45, v46);
  v14 = (EncryptedPlayerPrefs_c *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(StringLiteral_15842, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v11 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_48;
  v26->m_Items[5] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[5], v11, v12, v48, v49, v50, v51, v52);
  if ( v20 )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(v20, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_48;
  v26->m_Items[6] = (System_String_o *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[6], v20, v12, v53, v54, v55, v56, v57);
  v14 = (EncryptedPlayerPrefs_c *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(StringLiteral_15842, v26->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v11 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_48;
  v26->m_Items[7] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[7], v11, v12, v58, v59, v60, v61, v62);
  if ( value )
  {
    v14 = (EncryptedPlayerPrefs_c *)sub_B170BC(value, v26->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_49:
      sub_B170F4(v14);
      sub_B170A0();
    }
  }
  if ( v26->max_length <= 8 )
    goto LABEL_48;
  v26->m_Items[8] = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->m_Items[8],
    (System_Int32_array **)value,
    v12,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = System_String__Concat_43823856(v26, 0LL);
  v70 = EncryptedPlayerPrefs__Md5(v68, v69);
  v71 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16077, 0LL);
  UnityEngine_PlayerPrefs__SetString(v71, v70, 0LL);
  v72 = System_String__Concat_43743732(key, (System_String_o *)StringLiteral_16135, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v72, v19, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FE287 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18698, v5);
    byte_40FE287 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_18698, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = value;
  if ( (byte_40FE285 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&StringLiteral_19761, v5);
    byte_40FE285 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19761, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = value;
  if ( (byte_40FE286 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B16FFC(&StringLiteral_20232, v4);
    byte_40FE286 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20232, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_40FE288 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B16FFC(&StringLiteral_22267, v5);
    byte_40FE288 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22267, value, v6);
}