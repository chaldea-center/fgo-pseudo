System_Single_array *EntityScriptUtil__GetFloatArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Single_array *defaultArray,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Single_array *ScriptValue_object__object; // x0

  if ( (byte_59381A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_ObjectListToFloatList__);
    sub_21FFC50(&System_Func_List_object___List_float___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__ToArray__);
    byte_59381A3 = 1;
  }
  if ( script )
  {
    v7 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___List_float___TypeInfo);
    System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToFloatList__, 0);
    ScriptValue_object__object = (System_Single_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                                          script,
                                                          key,
                                                          (System_Func_TSource__TDestination__o *)v7,
                                                          0,
                                                          (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_float____);
    if ( ScriptValue_object__object )
      ScriptValue_object__object = System_Collections_Generic_List_float___ToArray(
                                     (System_Collections_Generic_List_float__o *)ScriptValue_object__object,
                                     (const MethodInfo_447C438 *)Method_System_Collections_Generic_List_float__ToArray__);
    if ( ScriptValue_object__object )
      return ScriptValue_object__object;
  }
  return defaultArray;
}


float EntityScriptUtil__GetFloatValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593819E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_double___);
    byte_593819E = 1;
  }
  if ( script )
    return BasicHelper__GetValue_double_(
             script,
             key,
             defaultValue,
             (const MethodInfo_37E0B00 *)Method_BasicHelper_GetValue_double___);
  return defaultValue;
}


System_Collections_Generic_Dictionary_string__object__o *EntityScriptUtil__GetInScript(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__c *v5; // x0
  Il2CppObject *Value_object; // x19
  __int64 naturalAligment; // x9

  if ( (byte_59381A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59381A4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)script, 0) )
  {
    v5 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
LABEL_8:
    Value_object = (Il2CppObject *)sub_21FFEBC(v5);
    System_Collections_Generic_Dictionary_object__object____ctor(
      (System_Collections_Generic_Dictionary_object__object__o *)Value_object,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    return (System_Collections_Generic_Dictionary_string__object__o *)Value_object;
  }
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   0,
                   (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_object___);
  v5 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
  if ( !Value_object )
    goto LABEL_8;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( Value_object->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_Dictionary_string__object__c *)Value_object->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_8;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)Value_object;
}


System_Int32_array *EntityScriptUtil__GetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Int32_array *ScriptValue_object__object; // x0

  if ( (byte_59381A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_21FFC50(&System_Func_List_object___List_int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_59381A0 = 1;
  }
  if ( script )
  {
    v7 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___List_int___TypeInfo);
    System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
    ScriptValue_object__object = (System_Int32_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                                         script,
                                                         key,
                                                         (System_Func_TSource__TDestination__o *)v7,
                                                         0,
                                                         (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    if ( ScriptValue_object__object )
      ScriptValue_object__object = System_Collections_Generic_List_int___ToArray(
                                     (System_Collections_Generic_List_int__o *)ScriptValue_object__object,
                                     (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( ScriptValue_object__object )
      return ScriptValue_object__object;
  }
  return defaultValue;
}


System_Int32_array *EntityScriptUtil__GetIntArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_59381A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_59381A1 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v4);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v9, key);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v4);
  return EntityScriptUtil__GetIntArray(script, key, **(System_Int32_array ***)(v10 + 184), v3);
}


int32_t EntityScriptUtil__GetIntValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593819D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_long___);
    byte_593819D = 1;
  }
  if ( script )
    return BasicHelper__GetValue_long_(
             script,
             key,
             defaultValue,
             (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___);
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

  if ( (byte_593819F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_593819F = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defaultValue;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_21FFECC(0, v8);
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, qword_594C090, v9, v10) / 1000.0;
  sub_220024C(Item, qword_594C090, v9, v10);
  EntityScriptUtil__GetIntArray(v12, v13, v14, v15);
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o EntityScriptUtil__GetScriptValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_382DE24 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  const MethodInfo_382DE24_RGCTXs *rgctx_data; // x9
  Il2CppClass *_0_TDestination; // x8
  size_t actualSize; // x20
  char *v14; // x27
  long double v15; // q0
  Il2CppObject *v16; // x24
  Il2CppClass *_2_TSource; // x1
  _QWORD *v18; // x0
  __int64 v19; // x1
  const MethodInfo_382DE24_RGCTXs *v20; // x8
  MethodInfo *_3_System_Func_TSource__TDestination__Invoke; // x1
  unsigned int bits; // w9
  Il2CppMethodPointer methodPointer; // x8
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x9
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // x0
  void *v26; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v27; // x21
  _DWORD v28[6]; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v31; // [xsp+28h] [xbp-18h] BYREF
  char *v32; // [xsp+30h] [xbp-10h]
  __int64 v33; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = defaultValue.monitor;
  klass = defaultValue.klass;
  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v30 = defaultValue.klass;
  if ( !rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_2237B54();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_TDestination = rgctx_data->_0_TDestination;
  actualSize = rgctx_data->_0_TDestination->_2.actualSize;
  v14 = (char *)v28 - ((rgctx_data->_2_TSource->_2.actualSize + 15LL) & 0x1FFFFFFF0LL);
  value = 0;
  v28[4] = 0;
  if ( !script )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    _0_TDestination = method->rgctx_data->_0_TDestination;
LABEL_13:
    if ( (_0_TDestination->_1.byval_arg.bits & 0x80000000) == 0 )
      v27 = &v30;
    else
      v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)v28 - ((actualSize + 15) & 0x1FFFFFFF0LL), v27, actualSize);
    v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v27, actualSize);
    goto LABEL_19;
  }
  v16 = value;
  _2_TSource = method->rgctx_data->_2_TSource;
  if ( (*((_WORD *)&_2_TSource->_2.bitflags2 + 1) & 1) == 0 )
    _2_TSource = (Il2CppClass *)sub_2237AF8(v15);
  v18 = (_QWORD *)sub_21FFDB4(v16, _2_TSource, v14);
  if ( !converter )
    sub_21FFECC(v18, v19);
  v20 = method->rgctx_data;
  _3_System_Func_TSource__TDestination__Invoke = v20->_3_System_Func_TSource__TDestination__Invoke;
  bits = v20->_2_TSource->_1.byval_arg.bits;
  methodPointer = _3_System_Func_TSource__TDestination__Invoke->methodPointer;
  if ( (bits & 0x80000000) == 0 )
    v18 = (_QWORD *)*v18;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_System_Func_TSource__TDestination__Invoke->invoker_method;
  v31 = v18;
  v32 = (char *)v28 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  invoker_method(methodPointer, _3_System_Func_TSource__TDestination__Invoke, converter, &v31, v32);
  v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)v28 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
LABEL_19:
  result.monitor = v26;
  result.klass = v25;
  return result;
}


System_Nullable_int__o EntityScriptUtil__GetScriptValue_long__Nullable_int__(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        System_Nullable_int__o defaultValue,
        const MethodInfo_382D990 *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  long double v13; // q0
  const MethodInfo_382D990_RGCTXs *rgctx_data; // x8
  Il2CppObject *v15; // x21
  __int64 _2_TSource; // x1
  _QWORD *v17; // x0
  void *v19; // x0
  int v20; // w1
  _QWORD **v21; // x20
  __int64 v22; // x0
  int v23; // w21
  _QWORD *exception; // x0
  _BYTE v25[8]; // [xsp+8h] [xbp-48h]
  int v26; // [xsp+10h] [xbp-40h]
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  value = 0;
  v26 = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v10 & 1) != 0 )
    {
      if ( !converter )
        sub_21FFECC(v10, v11);
      rgctx_data = method->rgctx_data;
      v15 = value;
      _2_TSource = (__int64)rgctx_data->_2_TSource;
      if ( (*(_WORD *)(_2_TSource + 309) & 1) == 0 )
      {
        v10 = sub_2237AF8(v13);
        _2_TSource = v10;
      }
      if ( !v15 )
        sub_21FFECC(v10, _2_TSource);
      if ( v15->klass->_1.element_class == *(Il2CppClass **)(_2_TSource + 64) )
      {
        v17 = (_QWORD *)j_il2cpp_object_unbox_0(v15, _2_TSource, v12);
        return (System_Nullable_int__o)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))converter->fields.invoke_impl)(
                                         converter->fields.method_code,
                                         *v17,
                                         converter->fields.method);
      }
      else
      {
        sub_220024C(v15, _2_TSource, v12);
        if ( v20 != 1 )
          sub_22ED31C();
        v21 = (_QWORD **)__cxa_begin_catch(v19);
        v22 = sub_21FFC64(&System_InvalidCastException_TypeInfo);
        if ( (j_il2cpp_class_is_assignable_from_0(v22, **v21) & 1) == 0 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = *v21;
          __cxa_throw(exception, (struct type_info *)`typeinfo for'Il2CppExceptionWrapper, 0);
        }
        v23 = v26;
        *(_QWORD *)&v25[8 * v26] = *v21;
        v26 = v23 + 1;
        __cxa_end_catch();
        v26 = v23;
      }
    }
  }
  return defaultValue;
}


int32_t EntityScriptUtil__GetScriptValue_object__int_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        int32_t defaultValue,
        const MethodInfo_382DB1C *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  long double v12; // q0
  Il2CppObject *v13; // x22
  Il2CppClass *_2_TSource; // x21
  __int64 v15; // x2
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_21FFECC(v10, v11);
      v13 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (*((_WORD *)&_2_TSource->_2.bitflags2 + 1) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_2237AF8(v12);
      if ( v13 && !sub_21FFDA4(v13, _2_TSource) )
        sub_220024C(v13, _2_TSource, v15);
      return ((__int64 (__fastcall *)(intptr_t))converter->fields.invoke_impl)(converter->fields.method_code);
    }
  }
  return defaultValue;
}


Il2CppObject *EntityScriptUtil__GetScriptValue_object__object_(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Func_TSource__TDestination__o *converter,
        Il2CppObject *defaultValue,
        const MethodInfo_382DCA0 *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  long double v12; // q0
  Il2CppObject *v13; // x22
  Il2CppClass *_2_TSource; // x21
  __int64 v15; // x2
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  value = 0;
  if ( script )
  {
    v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v10 )
    {
      if ( !converter )
        sub_21FFECC(v10, v11);
      v13 = value;
      _2_TSource = method->rgctx_data->_2_TSource;
      if ( (*((_WORD *)&_2_TSource->_2.bitflags2 + 1) & 1) == 0 )
        _2_TSource = (Il2CppClass *)sub_2237AF8(v12);
      if ( v13 && !sub_21FFDA4(v13, _2_TSource) )
        sub_220024C(v13, _2_TSource, v15);
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

  if ( (byte_593819B & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_ObjectListToStringArray__);
    sub_21FFC50(&System_Func_List_object___string____TypeInfo);
    byte_593819B = 1;
  }
  if ( !script )
    return defaultValue;
  v7 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___string____TypeInfo);
  System_Func_object__object____ctor(v7, 0, Method_EntityScriptValueConvertLogic_ObjectListToStringArray__, 0);
  return (System_String_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  key,
                                  (System_Func_TSource__TDestination__o *)v7,
                                  &defaultValue->obj,
                                  (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___string_____);
}


System_String_array *EntityScriptUtil__GetStringArrayDefaultEmpty(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_593819C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_string___);
    byte_593819C = 1;
  }
  v7 = Method_System_Array_Empty_string___;
  v8 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v8 )
  {
    sub_2237B54(Method_System_Array_Empty_string___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v4);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v9, key);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v4);
  return EntityScriptUtil__GetStringArray(script, key, **(System_String_array ***)(v10 + 184), v3);
}


System_String_o *EntityScriptUtil__GetStringValue(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593819A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string___);
    byte_593819A = 1;
  }
  if ( script )
    return (System_String_o *)BasicHelper__GetValue_object_(
                                script,
                                key,
                                (Il2CppObject *)defaultValue,
                                (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
  else
    return defaultValue;
}


bool EntityScriptUtil__ScriptHasKey(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_5938199 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_5938199 = 1;
  }
  return script
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


bool EntityScriptUtil__TryGet2DimensionalIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array_array **resValue,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Func_object__object__o *v11; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Object_array *v19; // x1

  if ( (byte_59381A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__);
    sub_21FFC50(&System_Func_List_object___List_int_____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_59381A2 = 1;
  }
  *resValue = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)resValue,
    0,
    (System_String_o *)resValue,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v11 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___List_int_____TypeInfo);
  System_Func_object__object____ctor(v11, 0, Method_EntityScriptValueConvertLogic_DoubleObjectListToIntArrayList__, 0);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 key,
                                 (System_Func_TSource__TDestination__o *)v11,
                                 0,
                                 (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int______);
  if ( ScriptValue_object__object )
    v19 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)ScriptValue_object__object,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_int____ToArray__);
  else
    v19 = 0;
  *resValue = (System_Int32_array_array *)v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resValue, (int32_t)v19, v13, v14, v15, v16, v17, v18);
  return 1;
}


bool EntityScriptUtil__TryGetIntArray(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        System_Int32_array **resValue,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  IntArray = EntityScriptUtil__GetIntArray(script, key, 0, method);
  *resValue = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resValue, (int32_t)IntArray, v6, v7, v8, v9, v10, v11);
  return IntArray != 0;
}