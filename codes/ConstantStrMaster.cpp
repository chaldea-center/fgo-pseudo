void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E5A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, method);
    byte_4B01E5A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    107,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v15; // x19
  System_Func_int__bool__o *v16; // x20

  if ( (byte_4B01E66 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, name);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v7);
    sub_1BC3008(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v8);
    sub_1BC3008(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v9);
    byte_4B01E66 = 1;
  }
  v10 = sub_1BC3254(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BC3264(v11, v12);
  *(_DWORD *)(v10 + 16) = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v13);
  if ( ValueArray )
  {
    v15 = ValueArray;
    v16 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v16,
      (Il2CppObject *)v10,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      0LL);
    LOBYTE(ValueArray) = BasicHelper__Any_int__50245724(
                           v15,
                           (System_Func_T__bool__o *)v16,
                           (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B01E64 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__, method);
    sub_1BC3008(&StringLiteral_3577/*"COMBINE_SCENE_VOICE_RETURN"*/, v3);
    byte_4B01E64 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3577/*"COMBINE_SCENE_VOICE_RETURN"*/,
                    (const MethodInfo_32B2EB0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  return ConstantStrMaster__GetVoiceList((ConstantStrMaster_o *)EntityFromKey, (ConstantStrEntity_o *)EntityFromKey, v5);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B01E63 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__, method);
    sub_1BC3008(&StringLiteral_3578/*"COMBINE_SCENE_VOICE_WELCOME"*/, v3);
    byte_4B01E63 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3578/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                    (const MethodInfo_32B2EB0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  return ConstantStrMaster__GetVoiceList((ConstantStrMaster_o *)EntityFromKey, (ConstantStrEntity_o *)EntityFromKey, v5);
}


float __fastcall ConstantStrMaster__GetFloat(
        ConstantStrMaster_o *this,
        System_String_o *name,
        float defVal,
        const MethodInfo *method)
{
  System_String_o *Value; // x19
  float result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0.0;
  Value = ConstantStrMaster__GetValue(this, name, method);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) && System_Single__TryParse(Value, &result, 0LL) )
    return result;
  return defVal;
}


System_String_o *__fastcall ConstantStrMaster__GetRandomVoice(
        ConstantStrMaster_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v7; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_array *v13; // x8
  System_String_o **m_Items; // x8

  if ( (byte_4B01E65 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__, key);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B01E65 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    key,
                    (const MethodInfo_32B2EB0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey,
                (ConstantStrEntity_o *)EntityFromKey,
                v7);
  if ( VoiceList )
  {
    v9 = VoiceList;
    v10 = UnityEngine_Random__Range_69994520(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v10 >= v9->max_length )
      goto LABEL_10;
    v13 = v9->m_Items[(int)v10];
    if ( !v13 )
      sub_1BC3264(v10, v11);
    if ( !v13->max_length )
LABEL_10:
      sub_1BC326C(v10, v11, v12);
    m_Items = v13->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_Int32_array *__fastcall ConstantStrMaster__GetRewardUpFuncCategory(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Int32_array *v6; // x20
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4B01E67 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8,
      v3);
    sub_1BC3008(&StringLiteral_11039/*"REWARD_UP_FUNC_CATEGORY"*/, v4);
    byte_4B01E67 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 7LL);
  v9.fields.value = Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8;
  v6 = (System_Int32_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v9, 0LL);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11039/*"REWARD_UP_FUNC_CATEGORY"*/, v6, v7);
}


System_Int32_array *__fastcall ConstantStrMaster__GetRewardUpIgnoreSvtId(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Int32_array *v6; // x20
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4B01E68 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C,
      v3);
    sub_1BC3008(&StringLiteral_11040/*"REWARD_UP_IGNORE_SVT_ID"*/, v4);
    byte_4B01E68 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 8LL);
  v9.fields.value = Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C;
  v6 = (System_Int32_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v9, 0LL);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11040/*"REWARD_UP_IGNORE_SVT_ID"*/, v6, v7);
}


System_String_o *__fastcall ConstantStrMaster__GetValue(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B01E5E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    byte_4B01E5E = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_32B3B74 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1BC3264(0LL, v5);
    return (System_String_o *)entity[1].monitor;
  }
  return result;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_String_o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  ConstantStrMaster___c_c *v16; // x8
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v18; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01E5F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1BC3008(&System_Func_string__int__TypeInfo, v9);
    sub_1BC3008(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v10);
    sub_1BC3008(&ConstantStrMaster___c_TypeInfo, v11);
    byte_4B01E5F = 1;
  }
  entity = 0LL;
  v12 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          (Il2CppObject *)name,
          (const MethodInfo_32B3B74 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( v12 )
  {
    if ( !entity )
      sub_1BC3264(v12, v13);
    monitor = (System_String_o *)entity[1].monitor;
    if ( monitor )
    {
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(monitor, 0x2Cu, 0, 0LL);
      v16 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
        v16 = ConstantStrMaster___c_TypeInfo;
      }
      _9__6_0 = (System_Func_object__int__o *)v16->static_fields->__9__6_0;
      if ( !_9__6_0 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = ConstantStrMaster___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v16->static_fields->__9;
        _9__6_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(_9__6_0, v18, Method_ConstantStrMaster___c__GetValueArray_b__6_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v20, v21);
      }
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v15,
                                                                   (System_Func_TSource__TResult__o *)_9__6_0,
                                                                   (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_string__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v22,
               (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B01E5D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ConstantStrMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B01E5D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v5);
  return ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Master_object, name, 0LL, v6);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B01E5C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B01E5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v8);
}


System_Single_array *__fastcall ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool v11; // w8
  System_Single_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  ConstantStrMaster___c_c *v14; // x8
  System_Func_T__TResult__o *_9__7_0; // x20
  Il2CppObject *v16; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B01E60 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__float___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_float___, v6);
    sub_1BC3008(&System_Func_string__float__TypeInfo, v7);
    sub_1BC3008(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v8);
    sub_1BC3008(&ConstantStrMaster___c_TypeInfo, v9);
    byte_4B01E60 = 1;
  }
  entity = 0LL;
  v11 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          (Il2CppObject *)name,
          (const MethodInfo_32B3B74 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v11 )
  {
    if ( !entity )
      sub_1BC3264(0LL, v10);
    result = (System_Single_array *)entity[1].monitor;
    if ( result )
    {
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                   (System_String_o *)result,
                                                                   0x2Cu,
                                                                   0,
                                                                   0LL);
      v14 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
        v14 = ConstantStrMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = ConstantStrMaster___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__7_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_string__float__TypeInfo);
        System_Func_object__float____ctor(_9__7_0, v16, Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v18, v19);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__float_(
                                                                   v13,
                                                                   (System_Func_TSource__TResult__o *)_9__7_0,
                                                                   (const MethodInfo_3036684 *)Method_System_Linq_Enumerable_Select_string__float___);
      return System_Linq_Enumerable__ToArray_float_(
               v20,
               (const MethodInfo_303E5D4 *)Method_System_Linq_Enumerable_ToArray_float___);
    }
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_String_array *defaultArray,
        const MethodInfo *method)
{
  System_String_o *EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01E61 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__, name);
    byte_4B01E61 = 1;
  }
  result = 0LL;
  EntityFromId = (System_String_o *)DataMasterBase_object__object__object___TryGetEntityFromId(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_32B31D8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)EntityFromId & 1) != 0 )
  {
    if ( !result || (EntityFromId = (System_String_o *)result[1].monitor) == 0LL )
      sub_1BC3264(EntityFromId, v8);
    return System_String__Split(EntityFromId, 0x2Cu, 0, 0LL);
  }
  return defaultArray;
}


UnityEngine_Vector3_o __fastcall ConstantStrMaster__GetValueVector3(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Single_array *ValueFloatArray; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float v6; // s0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // t1
  float v11; // s2
  float v12; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( ValueFloatArray->max_length < 3 )
      sub_1BC326C(ValueFloatArray, v4, v5);
    v6 = ValueFloatArray->m_Items[1];
    p_y = &ValueFloatArray->m_Items[2];
    p_z = &ValueFloatArray->m_Items[3];
  }
  else
  {
    if ( !byte_4AFBDB1 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4AFBDB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    p_z = &static_fields->zeroVector.fields.z;
    v6 = x;
    p_y = &UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.y;
  }
  v11 = *p_z;
  v12 = *p_y;
  result.fields.z = v11;
  result.fields.y = v12;
  result.fields.x = v6;
  return result;
}


System_String_array_array *__fastcall ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *value; // x19
  System_Char_array *v6; // x0
  System_Char_array *v7; // x1
  __int64 v8; // x2
  System_Char_array *v9; // x19
  int max_length; // w8
  System_String_array_array *v11; // x20
  __int64 v12; // x24
  CGThumbnailListItem_o *v13; // x21
  System_String_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B01E62 & 1) == 0 )
  {
    sub_1BC3008(&char___TypeInfo, ent);
    sub_1BC3008(&string_____TypeInfo, v4);
    byte_4B01E62 = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v6 = (System_Char_array *)sub_1BC30B0(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_20;
  v7 = v6;
  if ( !v6->max_length )
    goto LABEL_21;
  v6->m_Items[2] = 47;
  if ( !value || (v6 = (System_Char_array *)System_String__Split_62397724(value, v6, 0LL)) == 0LL )
LABEL_20:
    sub_1BC3264(v6, v7);
  v9 = v6;
  v6 = (System_Char_array *)sub_1BC30B0(string_____TypeInfo, v6->max_length);
  max_length = v9->max_length;
  v11 = (System_String_array_array *)v6;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (CGThumbnailListItem_o *)&v6->m_Items[2];
    while ( (unsigned int)v12 < max_length )
    {
      v14 = *(System_String_o **)&v9->m_Items[4 * v12 + 2];
      v6 = (System_Char_array *)sub_1BC30B0(char___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_20;
      v7 = v6;
      if ( !v6->max_length )
        break;
      v6->m_Items[2] = 44;
      if ( !v14 )
        goto LABEL_20;
      v6 = (System_Char_array *)System_String__Split_62397724(v14, v6, 0LL);
      if ( !v11 )
        goto LABEL_20;
      if ( (unsigned int)v12 >= v11->max_length )
        break;
      v13->klass = (CGThumbnailListItem_c *)v6;
      sub_1BC2FAC(v13, (int32_t)v6, v8, v15);
      max_length = v9->max_length;
      ++v12;
      v13 = (CGThumbnailListItem_o *)((char *)v13 + 8);
      if ( (int)v12 >= max_length )
        return v11;
    }
LABEL_21:
    sub_1BC326C(v6, v7, v8);
  }
  return v11;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *result; // x0

  if ( (byte_4B01E5B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B01E5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
  }
  result = (System_String_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                name,
                                (const MethodInfo_32B2EB0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01E69 & 1) == 0 )
  {
    sub_1BC3008(&ConstantStrMaster___c_TypeInfo, v1);
    byte_4B01E69 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ConstantStrMaster___c_TypeInfo->static_fields->__9 = (struct ConstantStrMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ConstantStrMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ConstantStrMaster___c___ctor(ConstantStrMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ConstantStrMaster___c___GetValueArray_b__6_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


float __fastcall ConstantStrMaster___c___GetValueFloatArray_b__7_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Single__Parse(a, 0LL);
}


void __fastcall ConstantStrMaster___c__DisplayClass14_0___ctor(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ConstantStrMaster___c__DisplayClass14_0___ExistValueArray_b__0(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return this->fields.checkVal == val;
}