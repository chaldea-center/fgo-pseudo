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

  if ( (byte_418BD74 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22577/*"t68aZyLxlMWVjw8lWgdZ"*/, v8);
    byte_418BD74 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EncryptedPlayerPrefs_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22577/*"t68aZyLxlMWVjw8lWgdZ"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22577/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 Int_35342280; // x0
  __int64 v13; // x1
  il2cpp_array_size_t v14; // w21
  EncryptedPlayerPrefs_c *v15; // x8
  struct System_String_array *keys; // x8
  System_Int32_array **v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **privateKey; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_o *v78; // x0
  const MethodInfo *v79; // x1
  System_String_o *v80; // x20
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *String_35342888; // x0
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_418BD66 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16200/*"_used_key"*/, v8);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v9);
    sub_B2C35C(&StringLiteral_16140/*"_encryption_check"*/, v10);
    byte_418BD66 = 1;
  }
  v11 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16200/*"_used_key"*/, 0LL);
  Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v11, 0LL);
  v14 = Int_35342280;
  v15 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v15 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v15->static_fields->keys;
  if ( !keys )
    goto LABEL_49;
  if ( v14 >= keys->max_length )
    goto LABEL_47;
  v17 = (System_Int32_array **)keys->m_Items[v14];
  Int_35342280 = sub_B2C374(string___TypeInfo, 9LL);
  if ( !Int_35342280 )
LABEL_49:
    sub_B2C434(Int_35342280, v13);
  v24 = (System_String_array *)Int_35342280;
  if ( key )
  {
    Int_35342280 = sub_B2C41C(key, *(_QWORD *)(*(_QWORD *)Int_35342280 + 64LL));
    if ( !Int_35342280 )
      goto LABEL_48;
  }
  if ( !v24->max_length )
    goto LABEL_47;
  v24->m_Items[0] = key;
  sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, (System_Int32_array **)key, v18, v19, v20, v21, v22, v23);
  Int_35342280 = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    Int_35342280 = sub_B2C41C(StringLiteral_15905/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
    v31 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_47;
  v24->m_Items[1] = (System_String_o *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  if ( type )
  {
    Int_35342280 = sub_B2C41C(type, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_47;
  v24->m_Items[2] = type;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v24->m_Items[2],
    (System_Int32_array **)type,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Int_35342280 = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    Int_35342280 = sub_B2C41C(StringLiteral_15905/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
    v44 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_47;
  v24->m_Items[3] = (System_String_o *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    Int_35342280 = sub_B2C41C(privateKey, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_47;
  v24->m_Items[4] = (System_String_o *)privateKey;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[4], privateKey, v45, v46, v47, v48, v49, v50);
  Int_35342280 = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    Int_35342280 = sub_B2C41C(StringLiteral_15905/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
    v58 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_47;
  v24->m_Items[5] = (System_String_o *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
  if ( v17 )
  {
    Int_35342280 = sub_B2C41C(v17, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_47;
  v24->m_Items[6] = (System_String_o *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[6], v17, v59, v60, v61, v62, v63, v64);
  Int_35342280 = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    Int_35342280 = sub_B2C41C(StringLiteral_15905/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_48;
    v71 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v24->max_length <= 7 )
    goto LABEL_47;
  v24->m_Items[7] = (System_String_o *)v71;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[7], v71, v65, v66, v67, v68, v69, v70);
  if ( value )
  {
    Int_35342280 = sub_B2C41C(value, v24->obj.klass->_1.element_class);
    if ( !Int_35342280 )
    {
LABEL_48:
      v86 = sub_B2C454(Int_35342280);
      sub_B2C400(v86, 0LL);
    }
  }
  if ( v24->max_length <= 8 )
  {
LABEL_47:
    v85 = sub_B2C460(Int_35342280);
    sub_B2C400(v85, 0LL);
  }
  v24->m_Items[8] = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v24->m_Items[8],
    (System_Int32_array **)value,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = System_String__Concat_44385656(v24, 0LL);
  v80 = EncryptedPlayerPrefs__Md5(v78, v79);
  v81 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16140/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v81, 0LL) )
    return 0;
  v82 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16140/*"_encryption_check"*/, 0LL);
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(v82, 0LL);
  return System_String__op_Equality(String_35342888, v80, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0

  if ( (byte_418BD73 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16200/*"_used_key"*/, method);
    sub_B2C35C(&StringLiteral_16140/*"_encryption_check"*/, v3);
    byte_418BD73 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v4 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16140/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
  v5 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16200/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_418BD6D & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_418BD6D = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetFloat_33169244(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_33169244(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float Float_35342584; // s9
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418BD71 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18770/*"float"*/, v5);
    byte_418BD71 = 1;
  }
  Float_35342584 = UnityEngine_PlayerPrefs__GetFloat_35342584(key, 0LL);
  v10 = floorf(Float_35342584 * 1000.0);
  v8 = System_Single__ToString(v10, (const MethodInfo *)&v10);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_18770/*"float"*/, v8, v7) )
    return Float_35342584;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418BD6B & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_418BD6B = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetInt_33168616(key, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EncryptedPlayerPrefs__GetInt_33168616(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  int32_t Int_35342280; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418BD6F & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&defaultValue);
    sub_B2C35C(&StringLiteral_19842/*"int"*/, v5);
    byte_418BD6F = 1;
  }
  Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(key, 0LL);
  v7 = System_Int32__ToString((int32_t)&Int_35342280, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19842/*"int"*/, v7, v6) )
    return Int_35342280;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418BD6C & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    byte_418BD6C = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetLong_33168904(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_33168904(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_35342888; // x21
  const MethodInfo *v8; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418BD70 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B2C35C(&StringLiteral_20315/*"long"*/, v5);
    byte_418BD70 = 1;
  }
  result = 0LL;
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20315/*"long"*/, String_35342888, v6) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_35342888, &result, 0LL);
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

  if ( (byte_418BD6E & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418BD6E = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetString_33169576(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_33169576(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *String_35342888; // x21

  if ( (byte_418BD72 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, defaultValue);
    sub_B2C35C(&StringLiteral_22359/*"string"*/, v5);
    byte_418BD72 = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22359/*"string"*/, String_35342888, v6) )
    return String_35342888;
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
  __int64 v18; // x0

  if ( (byte_418BD64 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v3);
    sub_B2C35C(&System_Text_UTF8Encoding_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418BD64 = 1;
  }
  v6 = (System_Text_UTF8Encoding_o *)sub_B2C42C(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_16;
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v6->klass->vtable._18_GetBytes.method)(
                              v6,
                              strToEncrypt,
                              v6->klass->vtable._19_GetBytes.methodPtr);
  v10 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_B2C42C(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  v11 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43523120(
          (System_Security_Cryptography_HashAlgorithm_o *)v10,
          v9,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v10, 0LL);
  if ( !v11 )
    goto LABEL_16;
  v12 = *(_QWORD *)&v11->max_length;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        v18 = sub_B2C460(v7);
        sub_B2C400(v18, 0LL);
      }
      v15 = v11->m_Items[v14 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v7 = System_Convert__ToString_42143872(v15, 16, 0LL);
      if ( !v7 )
        break;
      v16 = System_String__PadLeft(v7, 2, 0x30u, 0LL);
      v7 = System_String__Concat_44305532(v13, v16, 0LL);
      LODWORD(v12) = v11->max_length;
      ++v14;
      v13 = v7;
      if ( (__int64)v14 >= (int)v12 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(v7, v8);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
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
  float v12; // s8
  EncryptedPlayerPrefs_c *v13; // x0
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v16; // s1
  double v17; // d0
  int32_t v18; // w21
  System_Int32_array **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **privateKey; // x24
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_o *v80; // x0
  const MethodInfo *v81; // x1
  System_String_o *v82; // x20
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_418BD65 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, type);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16200/*"_used_key"*/, v8);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v9);
    sub_B2C35C(&StringLiteral_16140/*"_encryption_check"*/, v10);
    byte_418BD65 = 1;
  }
  v12 = UnityEngine_Random__get_value(0LL);
  v13 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v13 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v13->static_fields->keys;
  if ( !keys )
    goto LABEL_50;
  max_length = keys->max_length;
  v16 = floorf(v12 * (float)max_length);
  if ( v16 == INFINITY )
    v17 = -v16;
  else
    v17 = v16;
  v18 = (int)v17;
  if ( (int)v17 >= (unsigned int)max_length )
  {
LABEL_48:
    v85 = sub_B2C460(v13);
    sub_B2C400(v85, 0LL);
  }
  v19 = (System_Int32_array **)keys->m_Items[v18];
  v13 = (EncryptedPlayerPrefs_c *)sub_B2C374(string___TypeInfo, 9LL);
  if ( !v13 )
LABEL_50:
    sub_B2C434(v13, v11);
  v26 = (System_String_array *)v13;
  if ( key )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(key, *((_QWORD *)v13->_1.image + 8));
    if ( !v13 )
      goto LABEL_49;
  }
  if ( !v26->max_length )
    goto LABEL_48;
  v26->m_Items[0] = key;
  sub_B2C2F8((BattleServantConfConponent_o *)v26->m_Items, (System_Int32_array **)key, v20, v21, v22, v23, v24, v25);
  v13 = (EncryptedPlayerPrefs_c *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(StringLiteral_15905/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
    v33 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_48;
  v26->m_Items[1] = (System_String_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  if ( type )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(type, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_48;
  v26->m_Items[2] = type;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v26->m_Items[2],
    (System_Int32_array **)type,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v13 = (EncryptedPlayerPrefs_c *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(StringLiteral_15905/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
    v46 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_48;
  v26->m_Items[3] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(privateKey, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_48;
  v26->m_Items[4] = (System_String_o *)privateKey;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[4], privateKey, v47, v48, v49, v50, v51, v52);
  v13 = (EncryptedPlayerPrefs_c *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(StringLiteral_15905/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
    v60 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_48;
  v26->m_Items[5] = (System_String_o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[5], v60, v54, v55, v56, v57, v58, v59);
  if ( v19 )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(v19, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_48;
  v26->m_Items[6] = (System_String_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[6], v19, v61, v62, v63, v64, v65, v66);
  v13 = (EncryptedPlayerPrefs_c *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(StringLiteral_15905/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_49;
    v73 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v73 = 0LL;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_48;
  v26->m_Items[7] = (System_String_o *)v73;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[7], v73, v67, v68, v69, v70, v71, v72);
  if ( value )
  {
    v13 = (EncryptedPlayerPrefs_c *)sub_B2C41C(value, v26->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_49:
      v86 = sub_B2C454(v13);
      sub_B2C400(v86, 0LL);
    }
  }
  if ( v26->max_length <= 8 )
    goto LABEL_48;
  v26->m_Items[8] = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v26->m_Items[8],
    (System_Int32_array **)value,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = System_String__Concat_44385656(v26, 0LL);
  v82 = EncryptedPlayerPrefs__Md5(v80, v81);
  v83 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16140/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v83, v82, 0LL);
  v84 = System_String__Concat_44305532(key, (System_String_o *)StringLiteral_16200/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v84, v18, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  float v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418BD69 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18770/*"float"*/, v5);
    byte_418BD69 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v8 = floorf(value * 1000.0);
  v7 = System_Single__ToString(v8, (const MethodInfo *)&v8);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_18770/*"float"*/, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = value;
  if ( (byte_418BD67 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&StringLiteral_19842/*"int"*/, v5);
    byte_418BD67 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19842/*"int"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = value;
  if ( (byte_418BD68 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B2C35C(&StringLiteral_20315/*"long"*/, v4);
    byte_418BD68 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v5, 0LL);
  v7 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20315/*"long"*/, v7, v6);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_418BD6A & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, value);
    sub_B2C35C(&StringLiteral_22359/*"string"*/, v5);
    byte_418BD6A = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22359/*"string"*/, value, v6);
}