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

  if ( (byte_4A6FA02 & 1) == 0 )
  {
    sub_1B90010(&Method_EntityScriptUtil_GetScriptValue_List_object___List_float____, key);
    sub_1B90010(&Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, v7);
    sub_1B90010(&System_Func_List_object___List_float___TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_float__ToArray__, v9);
    byte_4A6FA02 = 1;
  }
  if ( !script )
    return defaultArray;
  v10 = (System_Func_object__object__o *)sub_1B9025C(System_Func_List_object___List_float___TypeInfo);
  System_Func_object__object____ctor(v10, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, 0LL);
  result = (System_Single_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                    script,
                                    key,
                                    (System_Func_TSource__TDestination__o *)v10,
                                    0LL,
                                    (const MethodInfo_2E96EE8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
  if ( result )
    result = System_Collections_Generic_List_float___ToArray(
               (System_Collections_Generic_List_float__o *)result,
               (const MethodInfo_3532BF4 *)Method_System_Collections_Generic_List_float__ToArray__);
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
  if ( (byte_4A6F9FD & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_GetValue_double___, key);
    byte_4A6F9FD = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2E7C3A4 *)Method_BasicHelper_GetValue_double___);
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

  if ( (byte_4A6F9FF & 1) == 0 )
  {
    sub_1B90010(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, key);
    sub_1B90010(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v7);
    sub_1B90010(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    byte_4A6F9FF = 1;
  }
  if ( !script )
    return defaultValue;
  v10 = (System_Func_object__object__o *)sub_1B9025C(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v10, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v10,
                                   0LL,
                                   (const MethodInfo_2E96EE8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4A6FA00 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, key);
    byte_4A6FA00 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BE1F48(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BE1EEC(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BE1EEC(v9);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v9 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4A6F9FC & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_GetValue_long___, key);
    byte_4A6F9FC = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2E7C490 *)Method_BasicHelper_GetValue_long___);
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
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  System_String_o *v15; // x1
  System_Int32_array *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_4A6F9FE & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B90010(&long_TypeInfo, v8);
    byte_4A6F9FE = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1B9026C(0LL, v10);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) / 1000.0;
  sub_1B9052C(Item);
  EntityScriptUtil__GetIntArray(v14, v15, v16, v17);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_2E97048 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2E97048_RGCTXs *rgctx_data; // x24
  __int64 native_size; // x20
  char *v11; // x27
  Il2CppObject *v12; // x26
  Il2CppClass *_2_TSource; // x1
  _QWORD *v14; // x0
  __int64 v15; // x1
  const MethodInfo_2E97048_RGCTXs *v16; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  void (__fastcall *methodPointer)(); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  Il2CppClass *_0_TDestination; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x0 OVERLAPPED
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
  v32 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v29 = defaultValue.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BE1F48();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_0_TDestination->_2.native_size;
  v11 = (char *)&v25 - (((unsigned int)rgctx_data->_2_TSource->_2.native_size + 15LL) & 0x1FFFFFFF0LL);
  value = 0LL;
  memset((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  if ( !script )
  {
    _0_TDestination = rgctx_data->_0_TDestination;
    goto LABEL_15;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_15:
    v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL));
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v21 = &v29;
    else
      v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    goto LABEL_18;
  }
  v12 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_1BE1EEC(method->rgctx_data->_2_TSource);
  v14 = (_QWORD *)sub_1B9015C(v12, _2_TSource, v11);
  if ( !v26 )
    sub_1B9026C(v14, v15);
  v16 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v16->_3_System_Func_TSource__TDestination__Invoke;
  bits = v16->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v14 = (_QWORD *)*v14;
  v30 = v14;
  v31 = (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _3_System_Func_TSource__TDestination__Invoke->invoker_method(
    methodPointer,
    _3_System_Func_TSource__TDestination__Invoke,
    v26,
    (void **)&v30,
    v31);
  memcpy(
    (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
    native_size);
  v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v21 = v20;
LABEL_18:
  memcpy(v20, v21, native_size);
  v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                    native_size);
  result.monitor = v24;
  result.klass = v23;
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_2E96D80 *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  const MethodInfo_2E96D80_RGCTXs *rgctx_data; // x8
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
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1BE1F48();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_1B9026C(v10, v11);
      rgctx_data = method->rgctx_data;
      v15 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_BYTE *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_1BE1EEC(_2_TSource);
        _2_TSource = v10;
      }
      if ( !v15 )
        sub_1B9026C(v10, _2_TSource);
      if ( v15->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v17 = (_QWORD *)j_il2cpp_object_unbox_0(v15, _2_TSource, v12, v13);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))converter->fields.m_target)(
                                         converter->fields.original_method_info,
                                         *v17,
                                         *(_QWORD *)&converter->fields.extra_arg);
      }
      else
      {
        sub_1B9052C(v15);
        if ( v20 != 1 )
          sub_1C7AAA0();
        v21 = (_QWORD **)__cxa_begin_catch(v19);
        v22 = sub_1B90024(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v22, **v21) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v21;
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
        const MethodInfo_2E96EE8 *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  Il2CppClass *_2_TSource; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1BE1F48();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_1B9026C(v10, v11);
      v12 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_1BE1EEC(_2_TSource);
      if ( v12 && !sub_1B9014C(v12, _2_TSource) )
        sub_1B9052C(v12);
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

  if ( (byte_4A6F9FA & 1) == 0 )
  {
    sub_1B90010(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____, key);
    sub_1B90010(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, v7);
    sub_1B90010(&System_Func_List_object___string____TypeInfo, v8);
    byte_4A6F9FA = 1;
  }
  if ( !script )
    return defaultValue;
  v9 = (System_Func_object__object__o *)sub_1B9025C(System_Func_List_object___string____TypeInfo);
  System_Func_object__object____ctor(v9, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0LL);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v9,
                                  &defaultValue->obj,
                                  (const MethodInfo_2E96EE8 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
}


System_String_array *__fastcall EntityScriptUtil__GetStringArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4A6F9FB & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_string___, key);
    byte_4A6F9FB = 1;
  }
  v6 = Method_System_Array_Empty_string___;
  v7 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v7 )
  {
    sub_1BE1F48(Method_System_Array_Empty_string___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BE1EEC(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BE1EEC(v9);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v9 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4A6F9F9 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_GetValue_string___, key);
    byte_4A6F9F9 = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_2E7C57C *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4A6F9F8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4A6F9F8 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool __fastcall EntityScriptUtil__TryGet2DimensionalIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array_array **resValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Func_object__object__o *v11; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *v15; // x1

  if ( (byte_4A6FA01 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B90010(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______, v7);
    sub_1B90010(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, v8);
    sub_1B90010(&System_Func_List_object___List_int_____TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int____ToArray__, v10);
    byte_4A6FA01 = 1;
  }
  *resValue = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)resValue, 0, (int32_t)resValue, (int32_t)method);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v11 = (System_Func_object__object__o *)sub_1B9025C(System_Func_List_object___List_int_____TypeInfo);
  System_Func_object__object____ctor(
    v11,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    0LL);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v11,
                                 0LL,
                                 (const MethodInfo_2E96EE8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v15 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v15 = 0LL;
  *resValue = (System_Int32_array_array *)v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)resValue, (int32_t)v15, v13, v14);
  return 1;
}


bool __fastcall EntityScriptUtil__TryGetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array **resValue,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  IntArray = EntityScriptUtil__GetIntArray(script, key, 0LL, method);
  *resValue = IntArray;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)resValue, (int32_t)IntArray, v6, v7);
  return IntArray != 0LL;
}