float __fastcall EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4218BC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_double___, key);
    byte_4218BC7 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1708C9C *)Method_BasicHelper_GetValue_double___);
  return defaultValue;
}


System_Int32_array *__fastcall EntityScriptUtil__GetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v11; // x22
  System_Int32_array *result; // x0

  if ( (byte_4218BC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, key);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v7);
    sub_B0D8A4(&Method_System_Func_List_object___List_int____ctor__, v8);
    sub_B0D8A4(&System_Func_List_object___List_int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    byte_4218BC9 = 1;
  }
  if ( !script )
    return defaultValue;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_List_object___List_int___TypeInfo,
                                                                                          key,
                                                                                          defaultValue);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v11,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_261A104 *)Method_System_Func_List_object___List_int____ctor__);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v11,
                                   0LL,
                                   (const MethodInfo_1716B5C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !result )
    return defaultValue;
  return result;
}


System_Int32_array *__fastcall EntityScriptUtil__GetIntArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _QWORD **v6; // x22
  __int64 v7; // x21
  __int16 v8; // w8
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x21

  if ( (byte_4218BCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, key);
    byte_4218BCA = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_int___;
  v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AA65A4(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AA65A4(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(*v6[6]);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v11 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4218BC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long___, key);
    byte_4218BC6 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1708D88 *)Method_BasicHelper_GetValue_long___);
  return defaultValue;
}


float __fastcall EntityScriptUtil__GetMillesimal(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4218BC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_4218BC8 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B0D97C(0LL);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  sub_B0DC70(Item);
  EntityScriptUtil__GetIntArray(v11, v12, v13, v14);
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_17169E8 *method)
{
  __int64 v10; // x0
  const MethodInfo_17169E8_RGCTXs *rgctx_data; // x8
  System_Xml_Schema_XmlSchemaObject_o *v12; // x22
  Il2CppClass *_0_TSource; // x23
  __int64 (__fastcall *methodPointer)(_QWORD, _QWORD, _QWORD); // x24
  _QWORD *v15; // x0
  void *v17; // x0
  int v18; // w1
  _QWORD **v19; // x20
  __int64 v20; // x0
  _QWORD *exception; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421437F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_421437F = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_B0D97C(v10);
      rgctx_data = method->rgctx_data;
      v12 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        v10 = sub_AA65A4(_0_TSource);
      if ( !v12 )
        sub_B0D97C(v10);
      if ( v12->klass->_1.element_class == _0_TSource->_1.element_class )
      {
        v15 = (_QWORD *)j_il2cpp_object_unbox_0(v12);
        return (System_Nullable_int__o)methodPointer(
                                         converter,
                                         *v15,
                                         method->rgctx_data->_1_System_Func_TSource__TDestination__Invoke);
      }
      else
      {
        v17 = (void *)sub_B0DC70(v12);
        if ( v18 != 1 )
          _Unwind_Resume(v17);
        v19 = (_QWORD **)__cxa_begin_catch(v17);
        v20 = sub_B0D8A8(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v20, **v19) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v19;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
        }
        __cxa_end_catch();
      }
    }
  }
  return defaultValue;
}


Il2CppObject *__fastcall EntityScriptUtil__GetScriptValue_object__object_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Il2CppObject *defaultValue,
        const MethodInfo_1716B5C *method)
{
  _BOOL8 v10; // x0
  const MethodInfo_1716B5C_RGCTXs *rgctx_data; // x8
  System_Xml_Schema_XmlSchemaObject_o *v12; // x23
  Il2CppClass *_0_TSource; // x22
  __int64 (__fastcall *methodPointer)(System_Func_TSource__TDestination__o *); // x24
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214380 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4214380 = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_B0D97C(v10);
      rgctx_data = method->rgctx_data;
      v12 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(System_Func_TSource__TDestination__o *))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(_0_TSource);
      if ( v12 && !sub_B0D964(v12, _0_TSource) )
        sub_B0DC70(v12);
      return (Il2CppObject *)methodPointer(converter);
    }
  }
  return defaultValue;
}


System_String_array *__fastcall EntityScriptUtil__GetStringArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  System_String_array *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x22

  v4 = defaultValue;
  if ( (byte_4218BC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____, key);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, v7);
    sub_B0D8A4(&Method_System_Func_List_object___string_____ctor__, v8);
    sub_B0D8A4(&System_Func_List_object___string____TypeInfo, v9);
    byte_4218BC4 = 1;
  }
  if ( script )
  {
    v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_List_object___string____TypeInfo,
                                                                                            key,
                                                                                            defaultValue);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v10,
      0LL,
      Method_EntityScriptValueConvertLogic_ObjectListToStringArray__,
      (const MethodInfo_261A104 *)Method_System_Func_List_object___string_____ctor__);
    return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v10,
                                    &v4->obj,
                                    (const MethodInfo_1716B5C *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
  }
  return v4;
}


System_String_array *__fastcall EntityScriptUtil__GetStringArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _QWORD **v6; // x22
  __int64 v7; // x21
  __int16 v8; // w8
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x21

  if ( (byte_4218BC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_string___, key);
    byte_4218BC5 = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_string___;
  v7 = **((_QWORD **)Method_System_Array_Empty_string___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_string___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AA65A4(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AA65A4(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(*v6[6]);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v11 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4218BC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_string___, key);
    byte_4218BC3 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_string_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1708E74 *)Method_BasicHelper_GetValue_string___);
  return defaultValue;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4218BC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4218BC2 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool __fastcall EntityScriptUtil__TryGet2DimensionalIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array_array **resValue,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array_array *v26; // x1

  if ( (byte_4218BCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______, v11);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, v12);
    sub_B0D8A4(&Method_System_Func_List_object___List_int______ctor__, v13);
    sub_B0D8A4(&System_Func_List_object___List_int_____TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____ToArray__, v15);
    byte_4218BCB = 1;
  }
  *resValue = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)resValue,
    0LL,
    (System_String_array **)resValue,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_List_object___List_int_____TypeInfo,
                                                                                          v16,
                                                                                          v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v18,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    (const MethodInfo_261A104 *)Method_System_Func_List_object___List_int______ctor__);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v18,
                                 0LL,
                                 (const MethodInfo_1716B5C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v26 = (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptValue_object__object,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v26 = 0LL;
  *resValue = v26;
  sub_B0D840((BattleServantConfConponent_o *)resValue, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  return 1;
}