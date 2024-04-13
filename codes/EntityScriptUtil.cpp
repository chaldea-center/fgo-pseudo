float __fastcall EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3

  if ( (byte_42ED00C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_double___, (_DWORD)key, (_DWORD)method, v4);
    byte_42ED00C = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1AD8898 *)Method_BasicHelper_GetValue_double___);
  return defaultValue;
}


System_Int32_array *__fastcall EntityScriptUtil__GetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array *defaultValue,
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v19; // x22
  System_Int32_array *result; // x0

  if ( (byte_42ED00E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EntityScriptUtil_GetScriptValue_List_object___List_int____,
      (_DWORD)key,
      (_DWORD)defaultValue,
      method);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_List_object___List_int____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_List_object___List_int___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17, v18);
    byte_42ED00E = 1;
  }
  if ( !script )
    return defaultValue;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v19,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2C3041C *)Method_System_Func_List_object___List_int____ctor__);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v19,
                                   0LL,
                                   (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42ED00F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)key, (_DWORD)method, v3);
    byte_42ED00F = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_int___;
  v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*v6[6]);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v11 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v4; // w19

  v4 = defaultValue;
  if ( (byte_42ED00B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_long___, (_DWORD)key, defaultValue, method);
    byte_42ED00B = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(script, key, v4, (const MethodInfo_1AD8984 *)Method_BasicHelper_GetValue_long___);
  return v4;
}


float __fastcall EntityScriptUtil__GetMillesimal(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v15; // x1
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v17; // x0
  System_String_o *v18; // x1
  System_Int32_array *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_42ED00D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    sub_B5D5C4(&long_TypeInfo, v11, v12, v13);
    byte_42ED00D = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B5D69C(0LL, v15);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  sub_B5D990(Item);
  EntityScriptUtil__GetIntArray(v17, v18, v19, v20);
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_1AE668C *method)
{
  System_Nullable_int__o v6; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo_1AE668C_RGCTXs *rgctx_data; // x8
  System_Xml_Schema_XmlSchemaObject_o *v13; // x22
  Il2CppClass *_0_TSource; // x23
  __int64 (__fastcall *methodPointer)(_QWORD, _QWORD, _QWORD); // x24
  _QWORD *v16; // x0
  void *v18; // x0
  int v19; // w1
  _QWORD **v20; // x20
  __int64 v21; // x0
  _QWORD *exception; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v6 = defaultValue;
  if ( (byte_42EA2F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)converter,
      defaultValue);
    byte_42EA2F0 = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_B5D69C(v10, v11);
      rgctx_data = method->rgctx_data;
      v13 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        v10 = sub_AF52C4(_0_TSource);
      if ( !v13 )
        sub_B5D69C(v10, v11);
      if ( v13->klass->_1.element_class == _0_TSource->_1.element_class )
      {
        v16 = (_QWORD *)j_il2cpp_object_unbox_0(v13);
        return (System_Nullable_int__o)methodPointer(
                                         converter,
                                         *v16,
                                         method->rgctx_data->_1_System_Func_TSource__TDestination__Invoke);
      }
      else
      {
        v18 = (void *)sub_B5D990(v13);
        if ( v19 != 1 )
          _Unwind_Resume(v18);
        v20 = (_QWORD **)__cxa_begin_catch(v18);
        v21 = sub_B5D5C8(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v21, **v20) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v20;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
        }
        __cxa_end_catch();
      }
    }
  }
  return v6;
}


Il2CppObject *__fastcall EntityScriptUtil__GetScriptValue_object__object_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Il2CppObject *defaultValue,
        const MethodInfo_1AE6800 *method)
{
  Il2CppObject *v6; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo_1AE6800_RGCTXs *rgctx_data; // x8
  System_Xml_Schema_XmlSchemaObject_o *v13; // x23
  Il2CppClass *_0_TSource; // x22
  __int64 (__fastcall *methodPointer)(System_Func_TSource__TDestination__o *); // x24
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  v6 = defaultValue;
  if ( (byte_42EA2F1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)converter,
      defaultValue);
    byte_42EA2F1 = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_B5D69C(v10, v11);
      rgctx_data = method->rgctx_data;
      v13 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(System_Func_TSource__TDestination__o *))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(_0_TSource);
      if ( v13 && !sub_B5D684(v13, _0_TSource) )
        sub_B5D990(v13);
      return (Il2CppObject *)methodPointer(converter);
    }
  }
  return v6;
}


System_String_array *__fastcall EntityScriptUtil__GetStringArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  System_String_array *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v16; // x22

  v4 = defaultValue;
  if ( (byte_42ED009 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EntityScriptUtil_GetScriptValue_List_object___string_____,
      (_DWORD)key,
      (_DWORD)defaultValue,
      method);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_List_object___string_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_List_object___string____TypeInfo, v13, v14, v15);
    byte_42ED009 = 1;
  }
  if ( script )
  {
    v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___string____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v16,
      0LL,
      Method_EntityScriptValueConvertLogic_ObjectListToStringArray__,
      (const MethodInfo_2C3041C *)Method_System_Func_List_object___string_____ctor__);
    return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v16,
                                    &v4->obj,
                                    (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
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

  if ( (byte_42ED00A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_string___, (_DWORD)key, (_DWORD)method, v3);
    byte_42ED00A = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_string___;
  v7 = **((_QWORD **)Method_System_Array_Empty_string___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_string___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*v6[6]);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v11 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v4; // x19

  v4 = defaultValue;
  if ( (byte_42ED008 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_string___, (_DWORD)key, (_DWORD)defaultValue, method);
    byte_42ED008 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_string_(
             script,
             key,
             v4,
             (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_string___);
  return v4;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED007 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42ED007 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v26; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array_array *v34; // x1

  if ( (byte_42ED010 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)resValue,
      method);
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______, v11, v12, v13);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_List_object___List_int______ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_List_object___List_int_____TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____ToArray__, v23, v24, v25);
    byte_42ED010 = 1;
  }
  *resValue = 0LL;
  sub_B5D560(
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
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___List_int_____TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v26,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    (const MethodInfo_2C3041C *)Method_System_Func_List_object___List_int______ctor__);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v26,
                                 0LL,
                                 (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v34 = (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptValue_object__object,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v34 = 0LL;
  *resValue = v34;
  sub_B5D560((BattleServantConfConponent_o *)resValue, (System_Int32_array **)v34, v28, v29, v30, v31, v32, v33);
  return 1;
}