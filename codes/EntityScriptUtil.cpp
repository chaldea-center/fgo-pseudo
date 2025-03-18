System_Single_array *__fastcall EntityScriptUtil__GetFloatArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Single_array *defaultArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x22
  System_Single_array *result; // x0

  if ( (byte_4C21ADD & 1) == 0 )
  {
    sub_1C3B764(&Method_EntityScriptUtil_GetScriptValue_List_object___List_float____, key);
    sub_1C3B764(&Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, v7);
    sub_1C3B764(&System_Func_List_object___List_float___TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_float__ToArray__, v9);
    byte_4C21ADD = 1;
  }
  if ( !script )
    return defaultArray;
  v10 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_List_object___List_float___TypeInfo);
  System_Func_object__object____ctor(v10, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, 0LL);
  result = (System_Single_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v10,
                                    0LL,
                                    (const MethodInfo_2FF699C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
  if ( result )
    result = System_Collections_Generic_List_float___ToArray(
               (System_Collections_Generic_List_float__o *)result,
               (const MethodInfo_36ADEA0 *)Method_System_Collections_Generic_List_float__ToArray__);
  if ( !result )
    return defaultArray;
  return result;
}


float __fastcall EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C21AD8 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetValue_double___, key);
    byte_4C21AD8 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2FDDCD8 *)Method_BasicHelper_GetValue_double___);
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
  System_Func_object__object__o *v10; // x22
  System_Int32_array *result; // x0

  if ( (byte_4C21ADA & 1) == 0 )
  {
    sub_1C3B764(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, key);
    sub_1C3B764(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v7);
    sub_1C3B764(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    byte_4C21ADA = 1;
  }
  if ( !script )
    return defaultValue;
  v10 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v10, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v10,
                                   0LL,
                                   (const MethodInfo_2FF699C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4C21ADB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, key);
    byte_4C21ADB = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C8D69C(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8D640(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8D640(inited);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v10 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C21AD7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetValue_long___, key);
    byte_4C21AD7 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2FDDDC4 *)Method_BasicHelper_GetValue_long___);
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EntityScriptUtil__GetIntValueAndCompare(
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


float __fastcall EntityScriptUtil__GetMillesimal(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  System_String_o *v15; // x1
  System_Int32_array *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_4C21AD9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C3B764(&long_TypeInfo, v8);
    byte_4C21AD9 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C3B9C0(0LL, v10);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) / 1000.0;
  sub_1C3BC80(Item);
  EntityScriptUtil__GetIntArray(v14, v15, v16, v17);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_2FF6AFC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2FF6AFC_RGCTXs *rgctx_data; // x24
  __int64 native_size; // x20
  char *v11; // x27
  long double v12; // q0
  Il2CppObject *v13; // x26
  Il2CppClass *_2_TSource; // x1
  _QWORD *v15; // x0
  __int64 v16; // x1
  const MethodInfo_2FF6AFC_RGCTXs *v17; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  void (__fastcall *methodPointer)(); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  Il2CppClass *_0_TDestination; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // x0 OVERLAPPED
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
  v33 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v30 = defaultValue.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C8D69C();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_0_TDestination->_2.native_size;
  v11 = (char *)&v26 - (((unsigned int)rgctx_data->_2_TSource->_2.native_size + 15LL) & 0x1FFFFFFF0LL);
  value = 0LL;
  memset((char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  if ( !script )
  {
    _0_TDestination = rgctx_data->_0_TDestination;
    goto LABEL_15;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_15:
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL));
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v22 = &v30;
    else
      v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    goto LABEL_18;
  }
  v13 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_1C8D640(v12);
  v15 = (_QWORD *)sub_1C3B8B0(v13, _2_TSource, v11);
  if ( !v27 )
    sub_1C3B9C0(v15, v16);
  v17 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v17->_3_System_Func_TSource__TDestination__Invoke;
  bits = v17->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v15 = (_QWORD *)*v15;
  v31 = v15;
  v32 = (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _3_System_Func_TSource__TDestination__Invoke->invoker_method(
    methodPointer,
    _3_System_Func_TSource__TDestination__Invoke,
    v27,
    (void **)&v31,
    v32);
  memcpy(
    (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL),
    native_size);
  v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v22 = v21;
LABEL_18:
  memcpy(v21, v22, native_size);
  v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                    native_size);
  result.monitor = v25;
  result.klass = v24;
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_2FF6834 *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  const MethodInfo_2FF6834_RGCTXs *rgctx_data; // x8
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
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1C8D69C();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_1C3B9C0(v10, v11);
      rgctx_data = method->rgctx_data;
      v16 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_BYTE *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_1C8D640(v14);
        _2_TSource = v10;
      }
      if ( !v16 )
        sub_1C3B9C0(v10, _2_TSource);
      if ( v16->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v18 = (_QWORD *)j_il2cpp_object_unbox_0(v16, _2_TSource, v12, v13);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))converter->fields.m_target)(
                                         converter->fields.original_method_info,
                                         *v18,
                                         *(_QWORD *)&converter->fields.extra_arg);
      }
      else
      {
        sub_1C3BC80(v16);
        if ( v21 != 1 )
          sub_1D261F4();
        v22 = (_QWORD **)__cxa_begin_catch(v20);
        v23 = sub_1C3B778(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v23, **v22) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v22;
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
        const MethodInfo_2FF699C *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  long double v12; // q0
  Il2CppObject *v13; // x22
  Il2CppClass *_2_TSource; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1C8D69C();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_1C3B9C0(v10, v11);
      v13 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_1C8D640(v12);
      if ( v13 && !sub_1C3B8A0(v13, _2_TSource) )
        sub_1C3BC80(v13);
      return (Il2CppObject *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *))converter->fields.m_target)(converter->fields.original_method_info);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_object__object__o *v9; // x22

  if ( (byte_4C21AD5 & 1) == 0 )
  {
    sub_1C3B764(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____, key);
    sub_1C3B764(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, v7);
    sub_1C3B764(&System_Func_List_object___string____TypeInfo, v8);
    byte_4C21AD5 = 1;
  }
  if ( !script )
    return defaultValue;
  v9 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_List_object___string____TypeInfo);
  System_Func_object__object____ctor(v9, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0LL);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v9,
                                  &defaultValue->obj,
                                  (const MethodInfo_2FF699C *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
}


System_String_array *__fastcall EntityScriptUtil__GetStringArrayDefaultEmpty(
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

  if ( (byte_4C21AD6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_string___, key);
    byte_4C21AD6 = 1;
  }
  v7 = Method_System_Array_Empty_string___;
  v8 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v8 )
  {
    sub_1C8D69C(Method_System_Array_Empty_string___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8D640(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8D640(inited);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v10 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C21AD4 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetValue_string___, key);
    byte_4C21AD4 = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_2FDDEB0 *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4C21AD3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4C21AD3 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool __fastcall EntityScriptUtil__TryGet2DimensionalIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array_array **resValue,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Func_object__object__o *v15; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *v23; // x1

  if ( (byte_4C21ADC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______, v11);
    sub_1C3B764(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, v12);
    sub_1C3B764(&System_Func_List_object___List_int_____TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int____ToArray__, v14);
    byte_4C21ADC = 1;
  }
  *resValue = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)resValue, 0LL, (int64_t)resValue, (int32_t)method, v4, v5, v6, v7);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v15 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_List_object___List_int_____TypeInfo);
  System_Func_object__object____ctor(
    v15,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    0LL);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v15,
                                 0LL,
                                 (const MethodInfo_2FF699C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v23 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v23 = 0LL;
  *resValue = (System_Int32_array_array *)v23;
  sub_1C3B708((PartyOrganizationUtility_o *)resValue, (int64_t)v23, v17, v18, v19, v20, v21, v22);
  return 1;
}


bool __fastcall EntityScriptUtil__TryGetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array **resValue,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  IntArray = EntityScriptUtil__GetIntArray(script, key, 0LL, method);
  *resValue = IntArray;
  sub_1C3B708((PartyOrganizationUtility_o *)resValue, (int64_t)IntArray, v6, v7, v8, v9, v10, v11);
  return IntArray != 0LL;
}