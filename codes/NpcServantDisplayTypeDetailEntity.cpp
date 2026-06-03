void NpcServantDisplayTypeDetailEntity___ctor(NpcServantDisplayTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77C42 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E77C42 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(
        System_Nullable_Color__o *__return_ptr retstr,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_Nullable_Color__o *result; // x0
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = colorCode;
  if ( (byte_4E77C3C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Nullable_Color___ctor__);
    colorCode = (System_String_o *)sub_1D0F0B4(&StringLiteral_370/*"#"*/);
    byte_4E77C3C = 1;
  }
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !v3 )
    sub_1D0F30C(colorCode, method);
  if ( !System_String__StartsWith(v3, (System_String_o *)StringLiteral_370/*"#"*/, 0) )
    v3 = System_String__Concat_65562772((System_String_o *)StringLiteral_370/*"#"*/, v3, 0);
  result = (System_Nullable_Color__o *)UnityEngine_ColorUtility__TryParseHtmlString(v3, &v6, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v7 = v6;
    *(_QWORD *)&retstr->fields.hasValue = 0;
    *(_QWORD *)&retstr->fields.value.fields.g = 0;
    retstr->fields.value.fields.a = 0.0;
    System_Nullable_Color____ctor(retstr, v7, (const MethodInfo_3A81824 *)Method_System_Nullable_Color___ctor__);
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
  if ( (byte_4E77C41 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4E77C41 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           displayType,
           colorType,
           (const MethodInfo_324D340 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Nullable_Color__o v8; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E77C3E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1D0F0B4(&Method_System_Nullable_Color__get_HasValue__);
    byte_4E77C3E = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *result; // x0
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o **p_changeEffectShaderDataDict; // x20
  Il2CppObject *v11; // x21
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *v12; // x22
  System_Collections_Generic_Dictionary_object__object__o *v13; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 Count; // x0
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4E77C3F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__set_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1D0F0B4(&StringLiteral_18081/*"changeEffectShader"*/);
    byte_4E77C3F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.isChangeEffectShaderDataLoaded )
    return this->fields.changeEffectShaderDataDict;
  this->fields.changeEffectShaderDataDict = 0;
  p_changeEffectShaderDataDict = &this->fields.changeEffectShaderDataDict;
  this->fields.isChangeEffectShaderDataLoaded = 1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.changeEffectShaderDataDict, 0, v2, v3, v4, v5, v6, v7);
  result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)this->fields.script;
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)BasicHelper__GetValue_object__object_((System_Collections_Generic_Dictionary_K__V__o *)result, (Il2CppObject *)StringLiteral_18081/*"changeEffectShader"*/, 0, (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
    if ( result )
    {
      v11 = (Il2CppObject *)result;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      result = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)JsonManager__getDictionary_42383520(v11, 0);
      if ( result )
      {
        v12 = result;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)result,
               (const MethodInfo_36012B4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
        {
          return 0;
        }
        else
        {
          v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TypeInfo);
          System_Collections_Generic_Dictionary_object__object____ctor(
            v13,
            (const MethodInfo_3600C34 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData___ctor__);
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v25,
            (System_Collections_Generic_Dictionary_object__object__o *)v12,
            (const MethodInfo_3601A14 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v26 = v25;
          while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v26,
                    (const MethodInfo_37027DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            current = v26.fields._current;
            if ( !System_String__IsNullOrEmpty((System_String_o *)v26.fields._current.fields.key, 0)
              && current.fields.value != 0 )
            {
              if ( !JsonManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              v15 = JsonManager__Deserialize_object_(
                      current.fields.value,
                      (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
              if ( v15 )
              {
                if ( !v13 )
                  sub_1D0F30C(v15, v16);
                System_Collections_Generic_Dictionary_object__object___set_Item(
                  v13,
                  current.fields.key,
                  v15,
                  (const MethodInfo_36015D0 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__set_Item__);
              }
            }
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v26,
            (const MethodInfo_37028FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( !v13
            || ((Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                           v13,
                           (const MethodInfo_36012B4 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__get_Count__),
                 (int)Count <= 0)
              ? (v18 = 0)
              : (v18 = (System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *)v13),
                !this) )
          {
            sub_1D0F30C(Count, v18);
          }
          *p_changeEffectShaderDataDict = v18;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&this->fields.changeEffectShaderDataDict,
            (int32_t)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          return *p_changeEffectShaderDataDict;
        }
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
  Il2CppObject *v4; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_42383520; // x0
  NpcServantDisplayTypeDetailEntity___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_T__TResult__o *_9__13_0; // x20
  Il2CppObject *v9; // x21
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Func_T__TResult__o *_9__13_1; // x21
  Il2CppObject *v18; // x22
  struct NpcServantDisplayTypeDetailEntity___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4E77C3B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
    sub_1D0F0B4(&System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo);
    sub_1D0F0B4(&System_Func_KeyValuePair_string__object___string__TypeInfo);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_0__);
    sub_1D0F0B4(&Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_1__);
    sub_1D0F0B4(&NpcServantDisplayTypeDetailEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19234/*"effectColorDetail"*/);
    byte_4E77C3B = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)BasicHelper__GetValue_object__object_(
                                                                                 (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                                                                 (Il2CppObject *)StringLiteral_19234/*"effectColorDetail"*/,
                                                                                 0,
                                                                                 (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_42383520 = JsonManager__getDictionary_42383520(v4, 0);
    v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Dictionary_42383520;
    if ( !NpcServantDisplayTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NpcServantDisplayTypeDetailEntity___c_TypeInfo);
      v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__13_0 = (System_Func_T__TResult__o *)v6->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__13_0 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_KeyValuePair_string__object___string__TypeInfo);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__13_0,
        v9,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_0__,
        0);
      static_fields = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_KeyValuePair_string__object___string__o *)_9__13_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
        (int32_t)_9__13_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
    }
    _9__13_1 = (System_Func_T__TResult__o *)v6->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = NpcServantDisplayTypeDetailEntity___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v6->static_fields->__9;
      _9__13_1 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_KeyValuePair_string__object___Nullable_Color___TypeInfo);
      System_Func_KeyValuePair_object__object___Nullable_Color_____ctor(
        _9__13_1,
        v18,
        Method_NpcServantDisplayTypeDetailEntity___c__GetEffectColorDetailDict_b__13_1__,
        0);
      v19 = NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields;
      v19->__9__13_1 = (struct System_Func_KeyValuePair_string__object___Nullable_Color___o *)_9__13_1;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v19->__9__13_1, (int32_t)_9__13_1, v20, v21, v22, v23, v24, v25);
    }
    return (System_Collections_Generic_Dictionary_string__Nullable_Color___o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__Nullable_Color__(
                                                                                 v7,
                                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                                 (System_Func_TSource__TElement__o *)_9__13_1,
                                                                                 (const MethodInfo_3290590 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__object___string__Nullable_Color____);
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
  System_Nullable_Color__o v9; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E77C3D & 1) == 0 )
  {
    sub_1D0F0B4(&BattleDataDefine_TypeInfo);
    sub_1D0F0B4(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1D0F0B4(&Method_System_Nullable_Color__get_HasValue__);
    byte_4E77C3D = 1;
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
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *changeShaderData; // x1
  NpcServantDisplayTypeDetailEntity_Fields *p_fields; // x20
  Il2CppObject *Value_object__object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4E77C40 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18091/*"changeShader"*/);
    byte_4E77C40 = 1;
  }
  if ( this->fields.isChangeShaderDataLoaded )
  {
    changeShaderData = this->fields.changeShaderData;
LABEL_9:
    *data = changeShaderData;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)data, (int32_t)changeShaderData, (int32_t)method, v3, v4, v5, v6, v7);
    return *data != 0;
  }
  this->fields.changeShaderData = 0;
  p_fields = &this->fields;
  p_fields->isChangeShaderDataLoaded = 1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)p_fields, 0, (int32_t)method, v3, v4, v5, v6, v7);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)p_fields->script,
                           (Il2CppObject *)StringLiteral_18091/*"changeShader"*/,
                           0,
                           (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v19 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__Deserialize_object_(
            v19,
            (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_NpcServantDisplayTypeDetailEntity_ChangeShaderData___);
    p_fields->changeShaderData = (struct NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)v20, v21, v22, v23, v24, v25, v26);
    changeShaderData = p_fields->changeShaderData;
    goto LABEL_9;
  }
  *data = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)data, 0, v13, v14, v15, v16, v17, v18);
  return 0;
}


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__get_AddColor(
        System_Nullable_Color__o *__return_ptr retstr,
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


System_Nullable_Color__o *NpcServantDisplayTypeDetailEntity__get_EffectColor(
        System_Nullable_Color__o *__return_ptr retstr,
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
  __int128 v5; // q0
  System_Nullable_Color__o v6; // [xsp+8h] [xbp-28h] BYREF

  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v6, this->fields.mainColor, method);
  v5 = *(_OWORD *)&v6.fields.hasValue;
  retstr->fields.value.fields.a = v6.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v5;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E77C43 & 1) == 0 )
  {
    sub_1D0F0B4(&NpcServantDisplayTypeDetailEntity___c_TypeInfo);
    byte_4E77C43 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(NpcServantDisplayTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct NpcServantDisplayTypeDetailEntity___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)NpcServantDisplayTypeDetailEntity___c_TypeInfo->static_fields,
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
  if ( (byte_4E77C44 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    byte_4E77C44 = 1;
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
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+8h] [xbp-38h] BYREF

  value = x.fields.value;
  if ( (byte_4E77C45 & 1) == 0 )
  {
    this = (NpcServantDisplayTypeDetailEntity___c_o *)sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4E77C45 = 1;
  }
  if ( !value )
    sub_1D0F30C(this, x.fields.key);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method,
                            x.fields.value,
                            method);
  result = NpcServantDisplayTypeDetailEntity__ConvertColorFromColorCode(&v10, v6, v7);
  v9 = *(_OWORD *)&v10.fields.hasValue;
  retstr->fields.value.fields.a = v10.fields.value.fields.a;
  *(_OWORD *)&retstr->fields.hasValue = v9;
  return result;
}