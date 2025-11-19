System_Single_array *EntityScriptUtil__GetFloatArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Single_array *defaultArray,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Single_array *result; // x0

  if ( (byte_4CB5DE5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
    sub_1C6BA08(&Method_EntityScriptValueConvertLogic_ObjectListToFloatList__);
    sub_1C6BA08(&System_Func_List_object___List_float___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__ToArray__);
    byte_4CB5DE5 = 1;
  }
  if ( !script )
    return defaultArray;
  v7 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___List_float___TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, 0);
  result = (System_Single_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v7,
                                    0,
                                    (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
  if ( result )
    result = System_Collections_Generic_List_float___ToArray(
               (System_Collections_Generic_List_float__o *)result,
               (const MethodInfo_3827FA8 *)Method_System_Collections_Generic_List_float__ToArray__);
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
  if ( (byte_4CB5DE0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_double___);
    byte_4CB5DE0 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_312882C *)Method_BasicHelper_GetValue_double___);
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

  if ( (byte_4CB5DE2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C6BA08(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C6BA08(&System_Func_List_object___List_int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4CB5DE2 = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v7,
                                   0,
                                   (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4CB5DE3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    byte_4CB5DE3 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(inited);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v10 + 184), v3);
}


int32_t EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CB5DDF & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_long___);
    byte_4CB5DDF = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_3128918 *)Method_BasicHelper_GetValue_long___);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v12; // x0
  System_String_o *v13; // x1
  System_Int32_array *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_4CB5DE1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB5DE1 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C6BC60(0, v8);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) / 1000.0;
  sub_1C6BFFC(Item);
  EntityScriptUtil__GetIntArray(v12, v13, v14, v15);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_3141C60 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_3141C60_RGCTXs *rgctx_data; // x24
  size_t actualSize; // x20
  char *v11; // x27
  long double v12; // q0
  Il2CppObject *v13; // x26
  Il2CppClass *_2_TSource; // x1
  _QWORD *v15; // x0
  __int64 v16; // x1
  const MethodInfo_3141C60_RGCTXs *v17; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  void (*methodPointer)(); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  Il2CppClass *_0_TDestination; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // x0
  void *v25; // x1
  __int64 v26; // [xsp+0h] [xbp-40h] BYREF
  System_Func_TSource__TDestination__o *v27; // [xsp+8h] [xbp-38h]
  void *monitor; // [xsp+10h] [xbp-30h]
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v31; // [xsp+28h] [xbp-18h] BYREF
  char *v32; // [xsp+30h] [xbp-10h]
  __int64 v33; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v27 = converter;
  monitor = defaultValue.monitor;
  klass = defaultValue.klass;
  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v30 = defaultValue.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8();
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_0_TDestination->_2.actualSize;
  v11 = (char *)&v26 - ((rgctx_data->_2_TSource->_2.actualSize + 15LL) & 0x1FFFFFFF0LL);
  value = 0;
  memset((char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( !script )
  {
    _0_TDestination = rgctx_data->_0_TDestination;
    goto LABEL_15;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_15:
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL));
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v22 = &v30;
    else
      v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    goto LABEL_18;
  }
  v13 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (*(&_2_TSource->_2.bitflags2 + 2) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_1C41A9C(v12);
  v15 = (_QWORD *)sub_1C6BB54(v13, _2_TSource, v11);
  if ( !v27 )
    sub_1C6BC60(v15, v16);
  v17 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v17->_3_System_Func_TSource__TDestination__Invoke;
  bits = v17->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v15 = (_QWORD *)*v15;
  v31 = v15;
  v32 = (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  _3_System_Func_TSource__TDestination__Invoke->invoker_method(
    methodPointer,
    _3_System_Func_TSource__TDestination__Invoke,
    v27,
    (void **)&v31,
    v32);
  memcpy(
    (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    actualSize);
  v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v22 = v21;
LABEL_18:
  memcpy(v21, v22, actualSize);
  v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
  result.monitor = v25;
  result.klass = v24;
  return result;
}


System_Nullable_int__o EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_3141998 *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  const MethodInfo_3141998_RGCTXs *rgctx_data; // x8
  Il2CppObject *v16; // x21
  __int64 _2_TSource; // x1
  _QWORD *v18; // x0
  void *v20; // x0
  int v21; // w1
  _QWORD **v22; // x20
  __int64 v23; // x0
  _QWORD *exception; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_1C41AF8();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_1C6BC60(v10, v11);
      rgctx_data = method->rgctx_data;
      v16 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_BYTE *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_1C41A9C(v14);
        _2_TSource = v10;
      }
      if ( !v16 )
        sub_1C6BC60(v10, _2_TSource);
      if ( v16->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v18 = (_QWORD *)j_il2cpp_object_unbox_0(v16, _2_TSource, v12, v13);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))converter->fields.invoke_impl)(
                                         converter->fields.method_code,
                                         *v18,
                                         converter->fields.method);
      }
      else
      {
        sub_1C6BFFC(v16);
        if ( v21 != 1 )
          sub_1D4FBE4();
        v22 = (_QWORD **)__cxa_begin_catch(v20);
        v23 = sub_1C6BA1C(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v23, **v22) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v22;
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
        const MethodInfo_3141B00 *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  long double v12; // q0
  Il2CppObject *v13; // x22
  Il2CppClass *_2_TSource; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_1C41AF8();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_1C6BC60(v10, v11);
      v13 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (*(&_2_TSource->_2.bitflags2 + 2) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_1C41A9C(v12);
      if ( v13 && !sub_1C6BB44(v13, _2_TSource) )
        sub_1C6BFFC(v13);
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

  if ( (byte_4CB5DDD & 1) == 0 )
  {
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
    sub_1C6BA08(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__);
    sub_1C6BA08(&System_Func_List_object___string____TypeInfo);
    byte_4CB5DDD = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___string____TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v7,
                                  &defaultValue->obj,
                                  (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
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

  if ( (byte_4CB5DDE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_string___);
    byte_4CB5DDE = 1;
  }
  v7 = Method_System_Array_Empty_string___;
  v8 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v8 )
  {
    sub_1C41AF8(Method_System_Array_Empty_string___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(inited);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v10 + 184), v3);
}


System_String_o *EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CB5DDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_string___);
    byte_4CB5DDC = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_3128A04 *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4CB5DDB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CB5DDB = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4CB5DE4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
    sub_1C6BA08(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__);
    sub_1C6BA08(&System_Func_List_object___List_int_____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_4CB5DE4 = 1;
  }
  *resValue = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)resValue, 0, (int32_t)resValue, method);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v7 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___List_int_____TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, 0);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v7,
                                 0,
                                 (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v11 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v11 = 0;
  *resValue = (System_Int32_array_array *)v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)resValue, (int32_t)v11, v9, v10);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)resValue, (int32_t)IntArray, v6, v7);
  return IntArray != 0;
}