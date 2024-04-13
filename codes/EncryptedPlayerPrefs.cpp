void __fastcall EncryptedPlayerPrefs___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42ECFDC & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_22882/*"t68aZyLxlMWVjw8lWgdZ"*/, v8, v9, v10);
    byte_42ECFDC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EncryptedPlayerPrefs_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_22882/*"t68aZyLxlMWVjw8lWgdZ"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22882/*"t68aZyLxlMWVjw8lWgdZ"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_String_o *v19; // x0
  __int64 Int_35647620; // x0
  __int64 v21; // x1
  il2cpp_array_size_t v22; // w21
  EncryptedPlayerPrefs_c *v23; // x8
  struct System_String_array *keys; // x8
  System_Int32_array **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **privateKey; // x23
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_o *v86; // x0
  const MethodInfo *v87; // x1
  System_String_o *v88; // x20
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  System_String_o *String_35648228; // x0
  __int64 v93; // x0
  __int64 v94; // x0

  if ( (byte_42ECFCE & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)type, (_DWORD)value, method);
    sub_B5D5C4(&string___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16394/*"_used_key"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16333/*"_encryption_check"*/, v16, v17, v18);
    byte_42ECFCE = 1;
  }
  v19 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16394/*"_used_key"*/, 0LL);
  Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v19, 0LL);
  v22 = Int_35647620;
  v23 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v23 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v23->static_fields->keys;
  if ( !keys )
    goto LABEL_49;
  if ( v22 >= keys->max_length )
    goto LABEL_47;
  v25 = (System_Int32_array **)keys->m_Items[v22];
  Int_35647620 = sub_B5D5DC(string___TypeInfo, 9LL);
  if ( !Int_35647620 )
LABEL_49:
    sub_B5D69C(Int_35647620, v21);
  v32 = (System_String_array *)Int_35647620;
  if ( key )
  {
    Int_35647620 = sub_B5D684(key, *(_QWORD *)(*(_QWORD *)Int_35647620 + 64LL));
    if ( !Int_35647620 )
      goto LABEL_48;
  }
  if ( !v32->max_length )
    goto LABEL_47;
  v32->m_Items[0] = key;
  sub_B5D560((BattleServantConfConponent_o *)v32->m_Items, (System_Int32_array **)key, v26, v27, v28, v29, v30, v31);
  Int_35647620 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    Int_35647620 = sub_B5D684(StringLiteral_16096/*"_"*/, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
    v39 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_47;
  v32->m_Items[1] = (System_String_o *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
  if ( type )
  {
    Int_35647620 = sub_B5D684(type, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
  }
  if ( v32->max_length <= 2 )
    goto LABEL_47;
  v32->m_Items[2] = type;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v32->m_Items[2],
    (System_Int32_array **)type,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Int_35647620 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    Int_35647620 = sub_B5D684(StringLiteral_16096/*"_"*/, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
    v52 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v32->max_length <= 3 )
    goto LABEL_47;
  v32->m_Items[3] = (System_String_o *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    Int_35647620 = sub_B5D684(privateKey, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
  }
  if ( v32->max_length <= 4 )
    goto LABEL_47;
  v32->m_Items[4] = (System_String_o *)privateKey;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[4], privateKey, v53, v54, v55, v56, v57, v58);
  Int_35647620 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    Int_35647620 = sub_B5D684(StringLiteral_16096/*"_"*/, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
    v66 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v32->max_length <= 5 )
    goto LABEL_47;
  v32->m_Items[5] = (System_String_o *)v66;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[5], v66, v60, v61, v62, v63, v64, v65);
  if ( v25 )
  {
    Int_35647620 = sub_B5D684(v25, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
  }
  if ( v32->max_length <= 6 )
    goto LABEL_47;
  v32->m_Items[6] = (System_String_o *)v25;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[6], v25, v67, v68, v69, v70, v71, v72);
  Int_35647620 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    Int_35647620 = sub_B5D684(StringLiteral_16096/*"_"*/, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_48;
    v79 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( v32->max_length <= 7 )
    goto LABEL_47;
  v32->m_Items[7] = (System_String_o *)v79;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[7], v79, v73, v74, v75, v76, v77, v78);
  if ( value )
  {
    Int_35647620 = sub_B5D684(value, v32->obj.klass->_1.element_class);
    if ( !Int_35647620 )
    {
LABEL_48:
      v94 = sub_B5D6BC(Int_35647620);
      sub_B5D668(v94, 0LL);
    }
  }
  if ( v32->max_length <= 8 )
  {
LABEL_47:
    v93 = sub_B5D6C8(Int_35647620);
    sub_B5D668(v93, 0LL);
  }
  v32->m_Items[8] = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v32->m_Items[8],
    (System_Int32_array **)value,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = System_String__Concat_44657912(v32, 0LL);
  v88 = EncryptedPlayerPrefs__Md5(v86, v87);
  v89 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16333/*"_encryption_check"*/, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v89, 0LL) )
    return 0;
  v90 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16333/*"_encryption_check"*/, 0LL);
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v90, 0LL);
  return System_String__op_Equality(String_35648228, v88, 0LL);
}


void __fastcall EncryptedPlayerPrefs__DeleteKey(System_String_o *key, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  System_String_o *v9; // x0

  if ( (byte_42ECFDB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16394/*"_used_key"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16333/*"_encryption_check"*/, v5, v6, v7);
    byte_42ECFDB = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey(key, 0LL);
  v8 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16333/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v8, 0LL);
  v9 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16394/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(v9, 0LL);
}


float __fastcall EncryptedPlayerPrefs__GetFloat(System_String_o *key, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFD5 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFD5 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetFloat_33981172(key, 0.0, method);
}


float __fastcall EncryptedPlayerPrefs__GetFloat_33981172(
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  float Float_35647924; // s9
  const MethodInfo *v11; // x3
  System_String_o *v12; // x20
  float v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ECFD9 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_19006/*"float"*/, v7, v8, v9);
    byte_42ECFD9 = 1;
  }
  Float_35647924 = UnityEngine_PlayerPrefs__GetFloat_35647924(key, 0LL);
  v14 = floorf(Float_35647924 * 1000.0);
  v12 = System_Single__ToString(v14, (const MethodInfo *)&v14);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_19006/*"float"*/, v12, v11) )
    return Float_35647924;
  else
    return defaultValue;
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42ECFD3 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECFD3 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetInt_33980544(key, 0, v2);
}


int32_t __fastcall EncryptedPlayerPrefs__GetInt_33980544(
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3
  System_String_o *v10; // x21
  int32_t Int_35647620; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECFD7 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, defaultValue, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20093/*"int"*/, v6, v7, v8);
    byte_42ECFD7 = 1;
  }
  Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(key, 0LL);
  v10 = System_Int32__ToString((int32_t)&Int_35647620, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20093/*"int"*/, v10, v9) )
    return Int_35647620;
  else
    return defaultValue;
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42ECFD4 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECFD4 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetLong_33980832(key, 0LL, v2);
}


int64_t __fastcall EncryptedPlayerPrefs__GetLong_33980832(
        System_String_o *key,
        int64_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3
  System_String_o *String_35648228; // x21
  const MethodInfo *v11; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ECFD8 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, defaultValue, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20574/*"long"*/, v6, v7, v8);
    byte_42ECFD8 = 1;
  }
  result = 0LL;
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_20574/*"long"*/, String_35648228, v9) )
  {
    result = defaultValue;
    System_Int64__TryParse(String_35648228, &result, 0LL);
    return result;
  }
  else
  {
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    return EncryptedPlayerPrefs__GetInt(key, v11);
  }
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString(System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ECFD6 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ECFD6 = 1;
  }
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  return EncryptedPlayerPrefs__GetString_33981504(key, (System_String_o *)StringLiteral_1/*""*/, v2);
}


System_String_o *__fastcall EncryptedPlayerPrefs__GetString_33981504(
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3
  System_String_o *String_35648228; // x21

  if ( (byte_42ECFDA & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)defaultValue, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22662/*"string"*/, v6, v7, v8);
    byte_42ECFDA = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(key, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  if ( EncryptedPlayerPrefs__CheckEncryption(key, (System_String_o *)StringLiteral_22662/*"string"*/, String_35648228, v9) )
    return String_35648228;
  else
    return defaultValue;
}


bool __fastcall EncryptedPlayerPrefs__HasKey(System_String_o *key, const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__HasKey(key, 0LL);
}


System_String_o *__fastcall EncryptedPlayerPrefs__Md5(System_String_o *strToEncrypt, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Text_UTF8Encoding_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_Byte_array *v17; // x19
  System_Security_Cryptography_MD5CryptoServiceProvider_o *v18; // x20
  System_Byte_array *v19; // x19
  __int64 v20; // x8
  System_String_o *v21; // x20
  unsigned __int64 v22; // x22
  uint8_t v23; // w21
  System_String_o *v24; // x0
  __int64 v26; // x0

  if ( (byte_42ECFCC & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Text_UTF8Encoding_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42ECFCC = 1;
  }
  v14 = (System_Text_UTF8Encoding_o *)sub_B5D694(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v14->klass->vtable._18_GetBytes.method)(
                               v14,
                               strToEncrypt,
                               v14->klass->vtable._19_GetBytes.methodPtr);
  v18 = (System_Security_Cryptography_MD5CryptoServiceProvider_o *)sub_B5D694(System_Security_Cryptography_MD5CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_MD5CryptoServiceProvider___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_16;
  v19 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43923624(
          (System_Security_Cryptography_HashAlgorithm_o *)v18,
          v17,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v18, 0LL);
  if ( !v19 )
    goto LABEL_16;
  v20 = *(_QWORD *)&v19->max_length;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v26 = sub_B5D6C8(v15);
        sub_B5D668(v26, 0LL);
      }
      v23 = v19->m_Items[v22 + 4];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v15 = System_Convert__ToString_42797824(v23, 16, 0LL);
      if ( !v15 )
        break;
      v24 = System_String__PadLeft(v15, 2, 0x30u, 0LL);
      v15 = System_String__Concat_44577788(v21, v24, 0LL);
      LODWORD(v20) = v19->max_length;
      ++v22;
      v21 = v15;
      if ( (__int64)v22 >= (int)v20 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(v15, v16);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x1
  float v20; // s8
  EncryptedPlayerPrefs_c *v21; // x0
  struct System_String_array *keys; // x8
  int max_length; // w9
  float v24; // s1
  double v25; // d0
  int32_t v26; // w21
  System_Int32_array **v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
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
  System_Int32_array **privateKey; // x24
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_o *v88; // x0
  const MethodInfo *v89; // x1
  System_String_o *v90; // x20
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0

  if ( (byte_42ECFCD & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)type, (_DWORD)value, method);
    sub_B5D5C4(&string___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16394/*"_used_key"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16333/*"_encryption_check"*/, v16, v17, v18);
    byte_42ECFCD = 1;
  }
  v20 = UnityEngine_Random__get_value(0LL);
  v21 = EncryptedPlayerPrefs_TypeInfo;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v21 = EncryptedPlayerPrefs_TypeInfo;
  }
  keys = v21->static_fields->keys;
  if ( !keys )
    goto LABEL_50;
  max_length = keys->max_length;
  v24 = floorf(v20 * (float)max_length);
  if ( v24 == INFINITY )
    v25 = -v24;
  else
    v25 = v24;
  v26 = (int)v25;
  if ( (int)v25 >= (unsigned int)max_length )
  {
LABEL_48:
    v93 = sub_B5D6C8(v21);
    sub_B5D668(v93, 0LL);
  }
  v27 = (System_Int32_array **)keys->m_Items[v26];
  v21 = (EncryptedPlayerPrefs_c *)sub_B5D5DC(string___TypeInfo, 9LL);
  if ( !v21 )
LABEL_50:
    sub_B5D69C(v21, v19);
  v34 = (System_String_array *)v21;
  if ( key )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(key, *((_QWORD *)v21->_1.image + 8));
    if ( !v21 )
      goto LABEL_49;
  }
  if ( !v34->max_length )
    goto LABEL_48;
  v34->m_Items[0] = key;
  sub_B5D560((BattleServantConfConponent_o *)v34->m_Items, (System_Int32_array **)key, v28, v29, v30, v31, v32, v33);
  v21 = (EncryptedPlayerPrefs_c *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(StringLiteral_16096/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
    v41 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_48;
  v34->m_Items[1] = (System_String_o *)v41;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
  if ( type )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(type, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_48;
  v34->m_Items[2] = type;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v34->m_Items[2],
    (System_Int32_array **)type,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v21 = (EncryptedPlayerPrefs_c *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(StringLiteral_16096/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
    v54 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_48;
  v34->m_Items[3] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  privateKey = (System_Int32_array **)EncryptedPlayerPrefs_TypeInfo->static_fields->privateKey;
  if ( privateKey )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(privateKey, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_48;
  v34->m_Items[4] = (System_String_o *)privateKey;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[4], privateKey, v55, v56, v57, v58, v59, v60);
  v21 = (EncryptedPlayerPrefs_c *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(StringLiteral_16096/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
    v68 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v34->max_length <= 5 )
    goto LABEL_48;
  v34->m_Items[5] = (System_String_o *)v68;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  if ( v27 )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(v27, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
  }
  if ( v34->max_length <= 6 )
    goto LABEL_48;
  v34->m_Items[6] = (System_String_o *)v27;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[6], v27, v69, v70, v71, v72, v73, v74);
  v21 = (EncryptedPlayerPrefs_c *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(StringLiteral_16096/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_49;
    v81 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v34->max_length <= 7 )
    goto LABEL_48;
  v34->m_Items[7] = (System_String_o *)v81;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  if ( value )
  {
    v21 = (EncryptedPlayerPrefs_c *)sub_B5D684(value, v34->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_49:
      v94 = sub_B5D6BC(v21);
      sub_B5D668(v94, 0LL);
    }
  }
  if ( v34->max_length <= 8 )
    goto LABEL_48;
  v34->m_Items[8] = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v34->m_Items[8],
    (System_Int32_array **)value,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = System_String__Concat_44657912(v34, 0LL);
  v90 = EncryptedPlayerPrefs__Md5(v88, v89);
  v91 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16333/*"_encryption_check"*/, 0LL);
  UnityEngine_PlayerPrefs__SetString(v91, v90, 0LL);
  v92 = System_String__Concat_44577788(key, (System_String_o *)StringLiteral_16394/*"_used_key"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v92, v26, 0LL);
}


void __fastcall EncryptedPlayerPrefs__SetFloat(System_String_o *key, float value, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x3
  System_String_o *v11; // x20
  float v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECFD1 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_19006/*"float"*/, v7, v8, v9);
    byte_42ECFD1 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat(key, value, 0LL);
  v12 = floorf(value * 1000.0);
  v11 = System_Single__ToString(v12, (const MethodInfo *)&v12);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_19006/*"float"*/, v11, v10);
}


void __fastcall EncryptedPlayerPrefs__SetInt(System_String_o *key, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = value;
  if ( (byte_42ECFCF & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20093/*"int"*/, v6, v7, v8);
    byte_42ECFCF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(key, value, 0LL);
  v10 = System_Int32__ToString((int32_t)&v11, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20093/*"int"*/, v10, v9);
}


void __fastcall EncryptedPlayerPrefs__SetLong(System_String_o *key, int64_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = value;
  if ( (byte_42ECFD0 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20574/*"long"*/, v5, v6, v7);
    byte_42ECFD0 = 1;
  }
  v8 = System_Int64__ToString((int64_t)&v11, 0LL);
  UnityEngine_PlayerPrefs__SetString(key, v8, 0LL);
  v10 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_20574/*"long"*/, v10, v9);
}


void __fastcall EncryptedPlayerPrefs__SetString(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_42ECFD2 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22662/*"string"*/, v6, v7, v8);
    byte_42ECFD2 = 1;
  }
  UnityEngine_PlayerPrefs__SetString(key, value, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SaveEncryption(key, (System_String_o *)StringLiteral_22662/*"string"*/, value, v9);
}