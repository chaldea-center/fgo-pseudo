void __fastcall NpcServantDisplayTypeDetailEntity___ctor(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CA61 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CA61 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


System_Nullable_Color__o *__fastcall NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(
        System_Nullable_Color__o *retstr,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v5; // x1
  System_Nullable_Color__o *result; // x0
  UnityEngine_Color_o v7; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = colorCode;
  if ( (byte_4B1CA5D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_Color___ctor__, method);
    colorCode = (System_String_o *)sub_1BCAFF8(&StringLiteral_368/*"#"*/, v5);
    byte_4B1CA5D = 1;
  }
  *(_QWORD *)&v7.fields.r = 0LL;
  *(_QWORD *)&v7.fields.b = 0LL;
  if ( !v3 )
    sub_1BCB254(colorCode, method);
  if ( !System_String__StartsWith(v3, (System_String_o *)StringLiteral_368/*"#"*/, 0LL) )
    v3 = System_String__Concat_62450424((System_String_o *)StringLiteral_368/*"#"*/, v3, 0LL);
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(v3, &v7, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v8 = v7;
    *(_QWORD *)&retstr->fields.hasValue = 0LL;
    *(_QWORD *)&retstr->fields.value.fields.g = 0LL;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v8, (const MethodInfo_37D6364 *)Method_System_Nullable_Color___ctor__);
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
  if ( (byte_4B1CA60 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&colorType);
    byte_4B1CA60 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           displayType,
           colorType,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall NpcServantDisplayTypeDetailEntity__CreatePrimaryKey(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return NpcServantDisplayTypeDetailEntity__CreatePK(this->fields.displayType, this->fields.colorType, v2);
}


UnityEngine_Color_o __fastcall NpcServantDisplayTypeDetailEntity__GetAddColor(
        NpcServantDisplayTypeDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float r; // s8
  float g; // s1
  float b; // s2
  float a; // s3
  float v8; // s0
  System_Nullable_Color__o v9; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1CA5F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_Color__GetValueOrDefault__, method);
    sub_1BCAFF8(&Method_System_Nullable_Color__get_HasValue__, v3);
    byte_4B1CA5F = 1;
  }
  r = 0.0;
  if ( entity )
  {
    NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v9, entity->fields.addColor, method);
    g = 0.0;
    b = 0.0;
    a = 0.0;
    if ( v9.fields.hasValue )
    {
      r = v9.fields.value.fields.r;
      g = v9.fields.value.fields.g;
      b = v9.fields.value.fields.b;
      a = v9.fields.value.fields.a;
    }
  }
  else
  {
    g = 0.0;
    b = 0.0;
    a = 0.0;
  }
  v8 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v8;
  return result;
}


System_Collections_Generic_Dictionary_string__Nullable_Color___o *__fastcall NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__Nullable_Color___o *result; // x0
  Il2CppObject *v12; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_40121248; // x0
  NpcServantDisplayTypeDetailEntity___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_T__TResult__o *_9__8_0; // x20
  Il2CppObject *v17; // x21
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Func_T__TResult__o *_9__8_1; // x21
  Il2CppObject *v22; // x22
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B1CA5C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____,
      v3);
    sub_1BCAFF8(&System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo, v4);
    sub_1BCAFF8(&System_Func_KeyValuePair_string__object___string__TypeInfo, v5);
    sub_1BCAFF8(&JsonManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_0__, v7);
    sub_1BCAFF8(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_1__, v8);
    sub_1BCAFF8(&NpcServantDisplayTypeDetailEntity___c_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_18752/*"effectColorDetail"*/, v10);
    byte_4B1CA5C = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)BasicHelper__GetValue_object__object_(
                                                                                 (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                                                                 (Il2CppObject *)StringLiteral_18752/*"effectColorDetail"*/,
                                                                                 0LL,
                                                                                 (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v12 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_40121248 = JsonManager__getDictionary_40121248(v12, 0LL);
    v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)Dictionary_40121248;
    if ( !NpcServantDisplayTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NpcServantDisplayTypeDetailEntity___c_TypeInfo);
      v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_string__object___string__TypeInfo);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__8_0,
        v17,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_0__,
        0LL);
      static_fields = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_KeyValuePair_string__object___string__o *)_9__8_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v19, v20);
      v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__8_1 = (System_Func_T__TResult__o *)v14->static_fields->__9__8_1;
    if ( !_9__8_1 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v14->static_fields->__9;
      _9__8_1 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo);
      System_Func_KeyValuePair_object__object___Nullable_Color_____ctor(
        _9__8_1,
        v22,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__8_1__,
        0LL);
      v23 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      v23->__9__8_1 = (struct System_Func_KeyValuePair_string__object___Nullable_Color___o *)_9__8_1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v23->__9__8_1, (int32_t)_9__8_1, v24, v25);
    }
    return (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__Nullable_Color__(
                                                                                 v15,
                                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                                 (System_Func_TSource__TElement__o *)_9__8_1,
                                                                                 (const MethodInfo_30579E4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
  }
  return result;
}


UnityEngine_Color_o __fastcall NpcServantDisplayTypeDetailEntity__GetMainColor(
        NpcServantDisplayTypeDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  BattleDataDefine_c *v9; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  System_Nullable_Color__o v11; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1CA5E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Nullable_Color__GetValueOrDefault__, v3);
    sub_1BCAFF8(&Method_System_Nullable_Color__get_HasValue__, v4);
    byte_4B1CA5E = 1;
  }
  if ( entity
    && (NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v11, entity->fields.mainColor, method),
        v11.fields.hasValue) )
  {
    r = v11.fields.value.fields.r;
    g = v11.fields.value.fields.g;
    b = v11.fields.value.fields.b;
    a = v11.fields.value.fields.a;
  }
  else
  {
    v9 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v9 = BattleDataDefine_TypeInfo;
    }
    p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v9->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
    r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
  }
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CA62 & 1) == 0 )
  {
    sub_1BCAFF8(&NpcServantDisplayTypeDetailEntity___c_TypeInfo, v1);
    byte_4B1CA62 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(NpcServantDisplayTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct NpcServantDisplayTypeDetailEntity___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_4B1CA63 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, x.fields.key);
    byte_4B1CA63 = 1;
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
  if ( (byte_4B1CA64 & 1) == 0 )
  {
    this = (NpcServantDisplayTypeDetailEntity___c_o *)sub_1BCAFF8(
                                                        &Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__,
                                                        x.fields.key);
    byte_4B1CA64 = 1;
  }
  if ( !value )
    sub_1BCB254(this, x.fields.key);
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