System_Single_array *EntityScriptUtil__GetFloatArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Single_array *defaultArray,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Single_array *result; // x0

  if ( (byte_4C374EA & 1) == 0 )
  {
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
    sub_1C32C20(&Method_EntityScriptValueConvertLogic_ObjectListToFloatList__);
    sub_1C32C20(&System_Func_List_object___List_float___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_float__ToArray__);
    byte_4C374EA = 1;
  }
  if ( !script )
    return defaultArray;
  v7 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_List_object___List_float___TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, 0);
  result = (System_Single_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v7,
                                    0,
                                    (const MethodInfo_30E3B88 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
  if ( result )
    result = System_Collections_Generic_List_float___ToArray(
               (System_Collections_Generic_List_float__o *)result,
               (const MethodInfo_37BFDF0 *)Method_System_Collections_Generic_List_float__ToArray__);
  if ( !result )
    return defaultArray;
  return result;
}


float EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C374E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_double___);
    byte_4C374E5 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_30CAB8C *)Method_BasicHelper_GetValue_double___);
  return defaultValue;
}


System_Int32_array *EntityScriptUtil__GetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Int32_array *result; // x0

  if ( (byte_4C374E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C32C20(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C32C20(&System_Func_List_object___List_int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C374E7 = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v7,
                                   0,
                                   (const MethodInfo_30E3B88 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !result )
    return defaultValue;
  return result;
}


System_Int32_array *EntityScriptUtil__GetIntArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4C374E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    byte_4C374E8 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334(inited);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v10 + 184), v3);
}


int32_t EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C374E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_long___);
    byte_4C374E4 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_30CAC78 *)Method_BasicHelper_GetValue_long___);
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
bool EntityScriptUtil__GetIntValueAndCompare(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t *value,
        int32_t compareValue,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  IntValue = EntityScriptUtil__GetIntValue(script, key, compareValue, *(const MethodInfo **)&compareValue);
  *value = IntValue;
  return IntValue != compareValue;
}


float EntityScriptUtil__GetMillesimal(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4C374E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C374E6 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C32E7C(0);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) / 1000.0;
  sub_1C3313C(Item);
  EntityScriptUtil__GetIntArray(v11, v12, v13, v14);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_30E3CE8 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_30E3CE8_RGCTXs *rgctx_data; // x24
  size_t actualSize; // x20
  char *v11; // x27
  long double v12; // q0
  Il2CppObject *v13; // x26
  Il2CppClass *_2_TSource; // x1
  _QWORD *v15; // x0
  const MethodInfo_30E3CE8_RGCTXs *v16; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  void (*methodPointer)(); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  Il2CppClass *_0_TDestination; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x0
  void *v24; // x1
  __int64 v25; // [xsp+0h] [xbp-40h] BYREF
  System_Func_TSource__TDestination__o *v26; // [xsp+8h] [xbp-38h]
  void *monitor; // [xsp+10h] [xbp-30h]
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v30; // [xsp+28h] [xbp-18h] BYREF
  char *v31; // [xsp+30h] [xbp-10h]
  __int64 v32; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v26 = converter;
  monitor = defaultValue.monitor;
  klass = defaultValue.klass;
  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v29 = defaultValue.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_0_TDestination->_2.actualSize;
  v11 = (char *)&v25 - ((rgctx_data->_2_TSource->_2.actualSize + 15LL) & 0x1FFFFFFF0LL);
  value = 0;
  memset((char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( !script )
  {
    _0_TDestination = rgctx_data->_0_TDestination;
    goto LABEL_15;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_15:
    v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL));
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v21 = &v29;
    else
      v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    goto LABEL_18;
  }
  v13 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (*(&_2_TSource->_2.bitflags2 + 2) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_1C83334(v12);
  v15 = (_QWORD *)sub_1C32D6C(v13, _2_TSource, v11);
  if ( !v26 )
    sub_1C32E7C(v15);
  v16 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v16->_3_System_Func_TSource__TDestination__Invoke;
  bits = v16->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v15 = (_QWORD *)*v15;
  v30 = v15;
  v31 = (char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  _3_System_Func_TSource__TDestination__Invoke->invoker_method(
    methodPointer,
    _3_System_Func_TSource__TDestination__Invoke,
    v26,
    (void **)&v30,
    v31);
  memcpy(
    (char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    (char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    actualSize);
  v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v21 = v20;
LABEL_18:
  memcpy(v20, v21, actualSize);
  v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v25 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
  result.monitor = v24;
  result.klass = v23;
  return result;
}


System_Nullable_int__o EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_30E3A20 *method)
{
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  long double v13; // q0
  const MethodInfo_30E3A20_RGCTXs *rgctx_data; // x8
  Il2CppObject *v15; // x21
  __int64 _2_TSource; // x1
  _QWORD *v17; // x0
  void *v19; // x0
  int v20; // w1
  _QWORD **v21; // x20
  __int64 v22; // x0
  _QWORD *exception; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_1C32E7C(v10);
      rgctx_data = method->rgctx_data;
      v15 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_BYTE *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_1C83334(v13);
        _2_TSource = v10;
      }
      if ( !v15 )
        sub_1C32E7C(v10);
      if ( v15->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v17 = (_QWORD *)j_il2cpp_object_unbox_0(v15, _2_TSource, v11, v12);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))converter->fields.invoke_impl)(
                                         converter->fields.method_code,
                                         *v17,
                                         converter->fields.method);
      }
      else
      {
        sub_1C3313C(v15);
        if ( v20 != 1 )
          sub_1D1BD54();
        v21 = (_QWORD **)__cxa_begin_catch(v19);
        v22 = sub_1C32C34(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v22, **v21) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v21;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0);
        }
        __cxa_end_catch();
      }
    }
  }
  return defaultValue;
}


Il2CppObject *EntityScriptUtil__GetScriptValue_object__object_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Il2CppObject *defaultValue,
        const MethodInfo_30E3B88 *method)
{
  _BOOL8 v10; // x0
  long double v11; // q0
  Il2CppObject *v12; // x22
  Il2CppClass *_2_TSource; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_1C32E7C(v10);
      v12 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (*(&_2_TSource->_2.bitflags2 + 2) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_1C83334(v11);
      if ( v12 && !sub_1C32D5C(v12, _2_TSource) )
        sub_1C3313C(v12);
      return (Il2CppObject *)((__int64 (__fastcall *)(intptr_t))converter->fields.invoke_impl)(converter->fields.method_code);
    }
  }
  return defaultValue;
}


System_String_array *EntityScriptUtil__GetStringArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22

  if ( (byte_4C374E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
    sub_1C32C20(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__);
    sub_1C32C20(&System_Func_List_object___string____TypeInfo);
    byte_4C374E2 = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_List_object___string____TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v7,
                                  &defaultValue->obj,
                                  (const MethodInfo_30E3B88 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
}


System_String_array *EntityScriptUtil__GetStringArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4C374E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_string___);
    byte_4C374E3 = 1;
  }
  v7 = Method_System_Array_Empty_string___;
  v8 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v8 )
  {
    sub_1C83390(Method_System_Array_Empty_string___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334(inited);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v10 + 184), v3);
}


System_String_o *EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C374E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string___);
    byte_4C374E1 = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4C374E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C374E0 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool EntityScriptUtil__TryGet2DimensionalIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array_array **resValue,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x1

  if ( (byte_4C374E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
    sub_1C32C20(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__);
    sub_1C32C20(&System_Func_List_object___List_int_____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_4C374E9 = 1;
  }
  *resValue = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)resValue, 0, (int32_t)resValue, method);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v7 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_List_object___List_int_____TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, 0);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v7,
                                 0,
                                 (const MethodInfo_30E3B88 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v11 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v11 = 0;
  *resValue = (System_Int32_array_array *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)resValue, (int32_t)v11, v9, v10);
  return 1;
}


bool EntityScriptUtil__TryGetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array **resValue,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  IntArray = EntityScriptUtil__GetIntArray(script, key, 0, method);
  *resValue = IntArray;
  sub_1C32BC4((CGThumbnailListItem_o *)resValue, (int32_t)IntArray, v6, v7);
  return IntArray != 0;
}