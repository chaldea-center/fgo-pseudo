float __fastcall EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_49FBFB3 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_double___, key);
    byte_49FBFB3 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2E27630 *)Method_BasicHelper_GetValue_double___);
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

  if ( (byte_49FBFB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, key);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v7);
    sub_1B640C8(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    byte_49FBFB5 = 1;
  }
  if ( !script )
    return defaultValue;
  v10 = (System_Func_object__object__o *)sub_1B64314(System_Func_List_object___List_int___TypeInfo, key, defaultValue);
  System_Func_object__object____ctor(v10, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  result = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   key,
                                   (System_Func_TSource__TDestination__o *)v10,
                                   0LL,
                                   (const MethodInfo_2E420B8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  if ( result )
    result = System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)result,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49FBFB6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, key);
    byte_49FBFB6 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v9 + 184), v3);
}


int32_t __fastcall EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_49FBFB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_long___, key);
    byte_49FBFB2 = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_2E2771C *)Method_BasicHelper_GetValue_long___);
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
  __int64 v10; // x2
  __int64 v11; // x3
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  System_String_o *v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_49FBFB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FBFB4 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1B64324(0LL);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1B645E4(Item);
  EntityScriptUtil__GetIntArray(v13, v14, v15, v16);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_2E42218 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2E42218_RGCTXs *rgctx_data; // x24
  __int64 native_size; // x20
  char *v11; // x27
  Il2CppObject *v12; // x26
  Il2CppClass *_2_TSource; // x1
  _QWORD *v14; // x0
  const MethodInfo_2E42218_RGCTXs *v15; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  void (__fastcall *methodPointer)(); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x1
  Il2CppClass *_0_TDestination; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v22; // x0 OVERLAPPED
  void *v23; // x1
  __int64 v24; // [xsp+0h] [xbp-40h] BYREF
  System_Func_TSource__TDestination__o *v25; // [xsp+8h] [xbp-38h]
  void *monitor; // [xsp+10h] [xbp-30h]
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v28; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v29; // [xsp+28h] [xbp-18h] BYREF
  char *v30; // [xsp+30h] [xbp-10h]
  __int64 v31; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v25 = converter;
  monitor = defaultValue.monitor;
  klass = defaultValue.klass;
  v31 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v28 = defaultValue.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_0_TDestination->_2.native_size;
  v11 = (char *)&v24 - (((unsigned int)rgctx_data->_2_TSource->_2.native_size + 15LL) & 0x1FFFFFFF0LL);
  value = 0LL;
  memset((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  if ( !script )
  {
    _0_TDestination = rgctx_data->_0_TDestination;
    goto LABEL_15;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_15:
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL));
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v20 = &v28;
    else
      v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    goto LABEL_18;
  }
  v12 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_2_TSource);
  v14 = (_QWORD *)sub_1B64214(v12, _2_TSource, v11);
  if ( !v25 )
    sub_1B64324(v14);
  v15 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v15->_3_System_Func_TSource__TDestination__Invoke;
  bits = v15->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v14 = (_QWORD *)*v14;
  v29 = v14;
  v30 = (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _3_System_Func_TSource__TDestination__Invoke->invoker_method(
    methodPointer,
    _3_System_Func_TSource__TDestination__Invoke,
    v25,
    (void **)&v29,
    v30);
  memcpy(
    (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
    native_size);
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v20 = v19;
LABEL_18:
  memcpy(v19, v20, native_size);
  v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                    native_size);
  result.monitor = v23;
  result.klass = v22;
  return result;
}


System_Nullable_int__o __fastcall EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_2E41F50 *method)
{
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo_2E41F50_RGCTXs *rgctx_data; // x8
  Il2CppObject *v14; // x21
  __int64 _2_TSource; // x1
  _QWORD *v16; // x0
  void *v18; // x0
  int v19; // w1
  _QWORD **v20; // x20
  __int64 v21; // x0
  _QWORD *exception; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_1B64324(v10);
      rgctx_data = method->rgctx_data;
      v14 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_BYTE *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_1BB5FA4(_2_TSource);
        _2_TSource = v10;
      }
      if ( !v14 )
        sub_1B64324(v10);
      if ( v14->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v16 = (_QWORD *)j_il2cpp_object_unbox_0(v14, _2_TSource, v11, v12);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))converter->fields.m_target)(
                                         converter->fields.original_method_info,
                                         *v16,
                                         *(_QWORD *)&converter->fields.extra_arg);
      }
      else
      {
        sub_1B645E4(v14);
        if ( v19 != 1 )
          sub_1C4EB58();
        v20 = (_QWORD **)__cxa_begin_catch(v18);
        v21 = sub_1B640DC(&System_InvalidCastException_TypeInfo);
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
        const MethodInfo_2E420B8 *method)
{
  _BOOL8 v10; // x0
  Il2CppObject *v11; // x22
  Il2CppClass *_2_TSource; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  value = 0LL;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_1B64324(v10);
      v11 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (BYTE5(_2_TSource->vtable[0].methodPtr) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_1BB5FA4(_2_TSource);
      if ( v11 && !sub_1B64204(v11, _2_TSource) )
        sub_1B645E4(v11);
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

  if ( (byte_49FBFB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____, key);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, v7);
    sub_1B640C8(&System_Func_List_object___string____TypeInfo, v8);
    byte_49FBFB0 = 1;
  }
  if ( !script )
    return defaultValue;
  v9 = (System_Func_object__object__o *)sub_1B64314(System_Func_List_object___string____TypeInfo, key, defaultValue);
  System_Func_object__object____ctor(v9, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0LL);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v9,
                                  &defaultValue->obj,
                                  (const MethodInfo_2E420B8 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
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

  if ( (byte_49FBFB1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_string___, key);
    byte_49FBFB1 = 1;
  }
  v6 = Method_System_Array_Empty_string___;
  v7 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v7 )
  {
    sub_1BB6000(Method_System_Array_Empty_string___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v9 + 184), v3);
}


System_String_o *__fastcall EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_49FBFAF & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_string___, key);
    byte_49FBFAF = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_2E27808 *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool __fastcall EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_49FBFAE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FBFAE = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Func_object__object__o *v13; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Object_array *v17; // x1

  if ( (byte_49FBFB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______, v7);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, v8);
    sub_1B640C8(&System_Func_List_object___List_int_____TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____ToArray__, v10);
    byte_49FBFB7 = 1;
  }
  *resValue = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)resValue, 0, (int32_t)resValue, (int32_t)method);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v13 = (System_Func_object__object__o *)sub_1B64314(System_Func_List_object___List_int_____TypeInfo, v11, v12);
  System_Func_object__object____ctor(
    v13,
    0LL,
    Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__,
    0LL);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v13,
                                 0LL,
                                 (const MethodInfo_2E420B8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v17 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v17 = 0LL;
  *resValue = (System_Int32_array_array *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)resValue, (int32_t)v17, v15, v16);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)resValue, (int32_t)IntArray, v6, v7);
  return IntArray != 0LL;
}