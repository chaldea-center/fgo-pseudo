void NpcServantDisplayTypeDetailEntity___ctor(NpcServantDisplayTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C5F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938C5F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(
        System_Nullable_Color__o *__return_ptr retstr,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_Nullable_Color__o *result; // x0
  const MethodInfo_45AD82C *v6; // x1
  UnityEngine_Color_o v7; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = colorCode;
  if ( (byte_5938C59 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Color___ctor__);
    colorCode = (System_String_o *)sub_21FFC50(&StringLiteral_395/*"#"*/);
    byte_5938C59 = 1;
  }
  *(_QWORD *)&v7.fields.r = 0;
  *(_QWORD *)&v7.fields.b = 0;
  if ( !v3 )
    sub_21FFECC(colorCode, method);
  if ( !System_String__StartsWith(v3, (System_String_o *)StringLiteral_395/*"#"*/, 0) )
    v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_395/*"#"*/, v3, 0);
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(v3, &v7, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v8 = v7;
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    v6 = (const MethodInfo_45AD82C *)Method_System_Nullable_Color___ctor__;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v8, v6);
  }
  else
  {
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    retstr->fields.value.fields.a = 0.0;
  }
  return result;
}


System_String_o *NpcServantDisplayTypeDetailEntity__CreatePK(
        int32_t displayType,
        int32_t colorType,
        const MethodInfo *method)
{
  if ( (byte_5938C5E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938C5E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           displayType,
           colorType,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *NpcServantDisplayTypeDetailEntity__CreatePrimaryKey(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return NpcServantDisplayTypeDetailEntity__CreatePK(this->fields.displayType, this->fields.colorType, v2);
}


UnityEngine_Color_o NpcServantDisplayTypeDetailEntity__GetAddColor(
        NpcServantDisplayTypeDetailEntity_o *entity,
        const MethodInfo *method)
{
  float r; // s8
  float g; // s1
  float b; // s2
  float a; // s3
  float v7; // s0
  System_Nullable_Color__o v8; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5938C5B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_Color__get_HasValue__);
    byte_5938C5B = 1;
  }
  r = 0.0;
  if ( entity )
  {
    NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v8, entity->fields.addColor, method);
    g = 0.0;
    b = 0.0;
    a = 0.0;
    if ( v8.fields.hasValue )
    {
      r = v8.fields.value.fields.r;
      g = v8.fields.value.fields.g;
      b = v8.fields.value.fields.b;
      a = v8.fields.value.fields.a;
    }
  }
  else
  {
    g = 0.0;
    b = 0.0;
    a = 0.0;
  }
  v7 = r;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = v7;
  return result;
}


System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *NpcServantDisplayTypeDetailEntity__GetChangeEffectShaderDataDict(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  _BOOL4 isChangeEffectShaderDataLoaded; // w8
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o **p_changeEffectShaderDataDict; // x20
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *result; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *v14; // x22
  System_Collections_Generic_Dictionary_object__object__o *v15; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 Count; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *v28; // x1
  _QWORD v29[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+10h] [xbp-80h] BYREF

  if ( (byte_5938C5C & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&StringLiteral_18559/*"changeEffectShader"*/);
    byte_5938C5C = 1;
  }
  isChangeEffectShaderDataLoaded = this->fields.isChangeEffectShaderDataLoaded;
  memset(&v30, 0, sizeof(v30));
  if ( isChangeEffectShaderDataLoaded )
  {
    p_changeEffectShaderDataDict = &this->fields.changeEffectShaderDataDict;
    return *p_changeEffectShaderDataDict;
  }
  this->fields.changeEffectShaderDataDict = 0;
  p_changeEffectShaderDataDict = &this->fields.changeEffectShaderDataDict;
  this->fields.isChangeEffectShaderDataLoaded = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.changeEffectShaderDataDict, 0, v2, v3, v4, v5, v6, v7);
  result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)this->fields.script;
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)BasicHelper__GetValue_object__object_((System_Collections_Generic_Dictionary_K__V__o *)result, (Il2CppObject *)StringLiteral_18559/*"changeEffectShader"*/, 0, (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
    if ( result )
    {
      v13 = (Il2CppObject *)result;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
      result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)JsonManager__getDictionary_47951196(v13, 0);
      if ( result )
      {
        v14 = result;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)result,
               (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
          return 0;
        v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v15,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData___ctor__);
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v30,
          (System_Collections_Generic_Dictionary_object__object__o *)v14,
          (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v29[0] = 0;
        v29[1] = &v30;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v30,
                  (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          current = v30.fields._current;
          if ( !System_String__IsNullOrEmpty((System_String_o *)v30.fields._current.fields.key, 0)
            && current.fields.value != 0 )
          {
            if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
            v18 = JsonManager__Deserialize_object_(
                    current.fields.value,
                    (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
            if ( v18 )
            {
              if ( !v15 )
                sub_21FFECC(v18, v19);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v15,
                current.fields.key,
                v18,
                (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__set_Item__);
            }
          }
        }
        Count = sub_1FE695C(v29);
        if ( !v15
          || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                        v15,
                        (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__get_Count__),
              !this) )
        {
          sub_21FFECC(Count, v21);
        }
        if ( (int)Count <= 0 )
          v28 = 0;
        else
          v28 = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)v15;
        *p_changeEffectShaderDataDict = v28;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.changeEffectShaderDataDict,
          (int32_t)v28,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        return *p_changeEffectShaderDataDict;
      }
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__Nullable_Color___o *NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Nullable_Color___o *result; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_47951196; // x0
  __int64 v7; // x1
  NpcServantDisplayTypeDetailEntity___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__13_0; // x20
  Il2CppObject *v12; // x21
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v20; // x9
  System_Func_T__TResult__o *_9__13_1; // x21
  Il2CppObject *v22; // x22
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5938C58 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
    sub_21FFC50(&System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_string__object___string__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_0__);
    sub_21FFC50(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_1__);
    sub_21FFC50(&NpcServantDisplayTypeDetailEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_19744/*"effectColorDetail"*/);
    byte_5938C58 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)BasicHelper__GetValue_object__object_(
                                                                                 (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                                                                 (Il2CppObject *)StringLiteral_19744/*"effectColorDetail"*/,
                                                                                 0,
                                                                                 (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v5 = (Il2CppObject *)result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    Dictionary_47951196 = JsonManager__getDictionary_47951196(v5, 0);
    v8 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)Dictionary_47951196;
    if ( !*(&NpcServantDisplayTypeDetailEntity___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NpcServantDisplayTypeDetailEntity___c_TypeInfo, v7);
      v8 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__13_0 = (System_Func_T__TResult__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        static_fields = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__object___string__TypeInfo);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__13_0,
        v12,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_0__,
        0);
      v13 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      v13->__9__13_0 = (struct System_Func_KeyValuePair_string__object___string__o *)_9__13_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__13_0, (int32_t)_9__13_0, v14, v15, v16, v17, v18, v19);
      v8 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      v8 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    v20 = v8->static_fields;
    _9__13_1 = (System_Func_T__TResult__o *)v20->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        v20 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__13_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo);
      System_Func_KeyValuePair_object__object___Nullable_Color_____ctor(
        _9__13_1,
        v22,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_1__,
        0);
      v23 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      v23->__9__13_1 = (struct System_Func_KeyValuePair_string__object___Nullable_Color___o *)_9__13_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__13_1, (int32_t)_9__13_1, v24, v25, v26, v27, v28, v29);
    }
    return (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__Nullable_Color__(
                                                                                 v9,
                                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                                 (System_Func_TSource__TElement__o *)_9__13_1,
                                                                                 (const MethodInfo_3868E0C *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
  }
  return result;
}


UnityEngine_Color_o NpcServantDisplayTypeDetailEntity__GetMainColor(
        NpcServantDisplayTypeDetailEntity_o *entity,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  BattleDataDefine_c *v7; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  System_Nullable_Color__o v9; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5938C5A & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_Color__get_HasValue__);
    byte_5938C5A = 1;
  }
  if ( entity
    && (NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v9, entity->fields.mainColor, method),
        v9.fields.hasValue) )
  {
    r = v9.fields.value.fields.r;
    g = v9.fields.value.fields.g;
    b = v9.fields.value.fields.b;
    a = v9.fields.value.fields.a;
  }
  else
  {
    v7 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
      v7 = BattleDataDefine_TypeInfo;
    }
    p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v7->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
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


bool NpcServantDisplayTypeDetailEntity__TryGetChangeShaderData(
        NpcServantDisplayTypeDetailEntity_o *this,
        NpcServantDisplayTypeDetailEntity_ChangeShaderData_o **data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *changeShaderData; // x1
  NpcServantDisplayTypeDetailEntity_Fields *p_fields; // x20
  Il2CppObject *Value_object__object; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5938C5D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18569/*"changeShader"*/);
    byte_5938C5D = 1;
  }
  if ( this->fields.isChangeShaderDataLoaded )
  {
    changeShaderData = this->fields.changeShaderData;
LABEL_9:
    *data = changeShaderData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)data,
      (int32_t)changeShaderData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    return *data != 0;
  }
  this->fields.changeShaderData = 0;
  p_fields = &this->fields;
  p_fields->isChangeShaderDataLoaded = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)p_fields->script,
                           (Il2CppObject *)StringLiteral_18569/*"changeShader"*/,
                           0,
                           (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v20 = Value_object__object;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
    v21 = JsonManager__Deserialize_object_(
            v20,
            (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    p_fields->changeShaderData = (struct NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *)v21;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
    changeShaderData = p_fields->changeShaderData;
    goto LABEL_9;
  }
  *data = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)data, 0, v14, v15, v16, v17, v18, v19);
  return 0;
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__get_AddColor(
        System_Nullable_Color__o *__return_ptr retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  System_Nullable_Color__o v6; // [xsp+Ch] [xbp-24h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.addColor, method);
  a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = a;
  return result;
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__get_EffectColor(
        System_Nullable_Color__o *__return_ptr retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  System_Nullable_Color__o v6; // [xsp+Ch] [xbp-24h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.effectColor, method);
  a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = a;
  return result;
}


bool NpcServantDisplayTypeDetailEntity__get_IsDefaultEffectId(
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.effectId == 0;
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__get_MainColor(
        System_Nullable_Color__o *__return_ptr retstr,
        NpcServantDisplayTypeDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  System_Nullable_Color__o v6; // [xsp+Ch] [xbp-24h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.mainColor, method);
  a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = a;
  return result;
}


void NpcServantDisplayTypeDetailEntity_ChangeShaderData___ctor(
        NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void NpcServantDisplayTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938C60 & 1) == 0 )
  {
    sub_21FFC50(&NpcServantDisplayTypeDetailEntity___c_TypeInfo);
    byte_5938C60 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(NpcServantDisplayTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct NpcServantDisplayTypeDetailEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NpcServantDisplayTypeDetailEntity___c___ctor(
        NpcServantDisplayTypeDetailEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *NpcServantDisplayTypeDetailEntity___c___GetEffectColorDetailDict_b__13_0(
        NpcServantDisplayTypeDetailEntity___c_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_5938C61 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    byte_5938C61 = 1;
  }
  return key;
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity___c___GetEffectColorDetailDict_b__13_1(
        System_Nullable_Color__o *__return_ptr retstr,
        NpcServantDisplayTypeDetailEntity___c_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Nullable_Color__o *result; // x0
  float a; // w8
  System_Nullable_Color__o v10; // [xsp+Ch] [xbp-34h] BYREF

  value = x.fields.value;
  if ( (byte_5938C62 & 1) == 0 )
  {
    this = (NpcServantDisplayTypeDetailEntity___c_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_5938C62 = 1;
  }
  if ( !value )
    sub_21FFECC(this, x.fields.key);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method,
                            x.fields.value,
                            method);
  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v10, v6, v7);
  a = v10.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = *(_OWORD *)&v10.fields.hasValue;
  retstr->fields.value.fields.a = a;
  return result;
}