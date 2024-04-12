float __fastcall EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_42B4683 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_double___);
    byte_42B4683 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1A437D0 *)Method_BasicHelper_GetValue_double___);
  return defaultValue;
}


System_Int32_array *__fastcall EntityScriptUtil__GetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v7; // x22
  System_Int32_array *result; // x0

  if ( (byte_42B4685 & 1) == 0 )
  {
    sub_B52984(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_B52984(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_B52984(&Method_System_Func_List_object___List_int____ctor__);
    sub_B52984(&System_Func_List_object___List_int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42B4685 = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v7,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2BCA808 *)Method_System_Func_List_object___List_int____ctor__);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v7,
                                   0LL,
                                   (const MethodInfo_1A51738 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42B4686 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    byte_42B4686 = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_int___;
  v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AEB684(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AEB684(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*v6[6]);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v11 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_42B4682 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_long___);
    byte_42B4682 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1A438BC *)Method_BasicHelper_GetValue_long___);
  return defaultValue;
}


float __fastcall EntityScriptUtil__GetMillesimal(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v8; // x1
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  System_String_o *v11; // x1
  System_Int32_array *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_42B4684 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B4684 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B52A5C(0LL, v8);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  sub_B52D50(Item);
  EntityScriptUtil__GetIntArray(v10, v11, v12, v13);
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_1A515C4 *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo_1A515C4_RGCTXs *rgctx_data; // x8
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

  if ( (byte_42B1636 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B1636 = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_B52A5C(v10, v11);
      rgctx_data = method->rgctx_data;
      v13 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        v10 = sub_AEB684(_0_TSource);
      if ( !v13 )
        sub_B52A5C(v10, v11);
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
        v18 = (void *)sub_B52D50(v13);
        if ( v19 != 1 )
          _Unwind_Resume(v18);
        v20 = (_QWORD **)__cxa_begin_catch(v18);
        v21 = sub_B52988(&System_InvalidCastException_TypeInfo);
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
  return defaultValue;
}


Il2CppObject *__fastcall EntityScriptUtil__GetScriptValue_object__object_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Il2CppObject *defaultValue,
        const MethodInfo_1A51738 *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo_1A51738_RGCTXs *rgctx_data; // x8
  System_Xml_Schema_XmlSchemaObject_o *v13; // x23
  Il2CppClass *_0_TSource; // x22
  __int64 (__fastcall *methodPointer)(System_Func_TSource__TDestination__o *); // x24
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B1637 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B1637 = 1;
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_B52A5C(v10, v11);
      rgctx_data = method->rgctx_data;
      v13 = value;
      _0_TSource = rgctx_data->_0_TSource;
      methodPointer = (__int64 (__fastcall *)(System_Func_TSource__TDestination__o *))rgctx_data->_1_System_Func_TSource__TDestination__Invoke->methodPointer;
      if ( (BYTE2(rgctx_data->_0_TSource->vtable[0].methodPtr) & 1) == 0 )
        sub_AEB684(_0_TSource);
      if ( v13 && !sub_B52A44(v13, _0_TSource) )
        sub_B52D50(v13);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v7; // x22

  if ( (byte_42B4680 & 1) == 0 )
  {
    sub_B52984(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
    sub_B52984(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__);
    sub_B52984(&Method_System_Func_List_object___string_____ctor__);
    sub_B52984(&System_Func_List_object___string____TypeInfo);
    byte_42B4680 = 1;
  }
  if ( script )
  {
    v7 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_List_object___string____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v7,
      0LL,
      Method_EntityScriptValueConvertLogic_ObjectListToStringArray__,
      (const MethodInfo_2BCA808 *)Method_System_Func_List_object___string_____ctor__);
    return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v7,
                                    &defaultValue->obj,
                                    (const MethodInfo_1A51738 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
  }
  return defaultValue;
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

  if ( (byte_42B4681 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_string___);
    byte_42B4681 = 1;
  }
  v6 = (_QWORD **)Method_System_Array_Empty_string___;
  v7 = **((_QWORD **)Method_System_Array_Empty_string___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_string___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AEB684(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AEB684(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*v6[6]);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v11 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_42B467F & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_string___);
    byte_42B467F = 1;
  }
  if ( script )
    return BasicHelper__GetValue_string_(
             script,
             key,
             defaultValue,
             (const MethodInfo_1A439A8 *)Method_BasicHelper_GetValue_string___);
  return defaultValue;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_42B467E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B467E = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v11; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array_array *v19; // x1

  if ( (byte_42B4687 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
    sub_B52984(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__);
    sub_B52984(&Method_System_Func_List_object___List_int______ctor__);
    sub_B52984(&System_Func_List_object___List_int_____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_42B4687 = 1;
  }
  *resValue = 0LL;
  sub_B52920(
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
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_List_object___List_int_____TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v11,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    (const MethodInfo_2BCA808 *)Method_System_Func_List_object___List_int______ctor__);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v11,
                                 0LL,
                                 (const MethodInfo_1A51738 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v19 = (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptValue_object__object,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v19 = 0LL;
  *resValue = v19;
  sub_B52920((BattleServantConfConponent_o *)resValue, (System_Int32_array **)v19, v13, v14, v15, v16, v17, v18);
  return 1;
}