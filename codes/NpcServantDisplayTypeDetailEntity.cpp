void __fastcall NpcServantDisplayTypeDetailEntity___ctor(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B165E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(
        System_Nullable_Color__o *retstr,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  __int64 v3; // x2
  System_String_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Nullable_Color__o *result; // x0
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = colorCode;
  if ( (byte_4B165DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Color___ctor__, method, v3);
    colorCode = (System_String_o *)sub_1BCA7E0(&StringLiteral_396/*"#"*/, v6, v7);
    byte_4B165DF = 1;
  }
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  if ( !v4 )
    sub_1BCAA3C(colorCode, method);
  if ( !System_String__StartsWith(v4, (System_String_o *)StringLiteral_396/*"#"*/, 0LL) )
    v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_396/*"#"*/, v4, 0LL);
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(v4, &v9, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v10 = v9;
    *(_QWORD *)&retstr->fields.hasValue = 0LL;
    *(_QWORD *)&retstr->fields.value.fields.g = 0LL;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v10, (const MethodInfo_36BBBE0 *)Method_System_Nullable_Color___ctor__);
  }
  else
  {
    *(_QWORD *)&retstr->fields.hasValue = 0LL;
    *(_QWORD *)&retstr->fields.value.fields.g = 0LL;
    retstr->fields.value.fields.a = 0.0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcServantDisplayTypeDetailEntity__CreatePK(
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  if ( (byte_4B165E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&colorType, method);
    byte_4B165E0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           displayType,
           colorType,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall NpcServantDisplayTypeDetailEntity__CreatePrimaryKey(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return NpcServantDisplayTypeDetailEntity__CreatePK(this->fields.displayType, this->fields.colorType, v2);
}


System_Collections_Generic_Dictionary_string__Nullable_Color___o *__fastcall NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_string__Nullable_Color___o *result; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_38868828; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NpcServantDisplayTypeDetailEntity___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_T__TResult__o *_9__8_0; // x20
  Il2CppObject *v30; // x21
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Func_T__TResult__o *_9__8_1; // x21
  Il2CppObject *v39; // x22
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B165DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string__object___, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____,
      v4,
      v5);
    sub_1BCA7E0(&System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_KeyValuePair_string__object___string__TypeInfo, v8, v9);
    sub_1BCA7E0(&JsonManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_0__, v12, v13);
    sub_1BCA7E0(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_1__, v14, v15);
    sub_1BCA7E0(&NpcServantDisplayTypeDetailEntity___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_19105/*"effectColorDetail"*/, v18, v19);
    byte_4B165DE = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)BasicHelper__GetValue_object__object_(
                                                                                 (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                                                                 (Il2CppObject *)StringLiteral_19105/*"effectColorDetail"*/,
                                                                                 0LL,
                                                                                 (const MethodInfo_2F013D8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v22 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    Dictionary_38868828 = JsonManager__getDictionary_38868828(v22, 0LL);
    v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Dictionary_38868828;
    if ( !NpcServantDisplayTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NpcServantDisplayTypeDetailEntity___c_TypeInfo, v24);
      v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v27->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v24);
        v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                               System_Func_KeyValuePair_string__object___string__TypeInfo,
                                               v24,
                                               v25,
                                               v26);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__8_0,
        v30,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_0__,
        0LL);
      static_fields = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_KeyValuePair_string__object___string__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v24);
      v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__8_1 = (System_Func_T__TResult__o *)v27->static_fields->__9__8_1;
    if ( !_9__8_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v24);
        v27 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v27->static_fields->__9;
      _9__8_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                               System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo,
                                               v24,
                                               v25,
                                               v26);
      System_Func_KeyValuePair_object__object___Nullable_Color_____ctor(
        _9__8_1,
        v39,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_1__,
        0LL);
      v40 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      v40->__9__8_1 = (struct System_Func_KeyValuePair_string__object___Nullable_Color___o *)_9__8_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v40->__9__8_1, (int64_t)_9__8_1, v41, v42, v43, v44, v45, v46);
    }
    return (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__Nullable_Color__(
                                                                                 v28,
                                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                                 (System_Func_TSource__TElement__o *)_9__8_1,
                                                                                 (const MethodInfo_2F4BF3C *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
  }
  return result;
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity__get_AddColor(
        System_Nullable_Color__o *retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  __int128 v5; // q0
  System_Nullable_Color__o v6; // [xsp+8h] [xbp-28h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.addColor, method);
  v5 = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v5;
  return result;
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity__get_EffectColor(
        System_Nullable_Color__o *retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  __int128 v5; // q0
  System_Nullable_Color__o v6; // [xsp+8h] [xbp-28h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.effectColor, method);
  v5 = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v5;
  return result;
}


bool __fastcall NpcServantDisplayTypeDetailEntity__get_IsDefaultEffectId(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.effectId == 0;
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity__get_MainColor(
        System_Nullable_Color__o *retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  __int128 v5; // q0
  System_Nullable_Color__o v6; // [xsp+8h] [xbp-28h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.mainColor, method);
  v5 = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v5;
  return result;
}


void __fastcall NpcServantDisplayTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B165E2 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcServantDisplayTypeDetailEntity___c_TypeInfo, v1, v2);
    byte_4B165E2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(NpcServantDisplayTypeDetailEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct NpcServantDisplayTypeDetailEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall NpcServantDisplayTypeDetailEntity___c___ctor(
        NpcServantDisplayTypeDetailEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall NpcServantDisplayTypeDetailEntity___c___GetEffectColorDetailDict_b__8_0(
        NpcServantDisplayTypeDetailEntity___c_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_4B165E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, x.fields.key, x.fields.value);
    byte_4B165E3 = 1;
  }
  return key;
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity___c___GetEffectColorDetailDict_b__8_1(
        System_Nullable_Color__o *retstr,
        NpcServantDisplayTypeDetailEntity___c_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Nullable_Color__o *result; // x0
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+8h] [xbp-38h] BYREF

  value = x.fields.value;
  if ( (byte_4B165E4 & 1) == 0 )
  {
    this = (NpcServantDisplayTypeDetailEntity___c_o *)sub_1BCA7E0(
                                                        &Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__,
                                                        x.fields.key,
                                                        x.fields.value);
    byte_4B165E4 = 1;
  }
  if ( !value )
    sub_1BCAA3C(this, x.fields.key);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, Il2CppObject *, const MethodInfo *))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr,
                            x.fields.value,
                            method);
  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v10, v6, v7);
  v9 = *(_OWORD *)&v10.fields.hasValue;
  retstr->fields.value.fields.a = v10.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v9;
  return result;
}