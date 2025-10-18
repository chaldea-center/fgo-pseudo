void ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42DF0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
    byte_4C42DF0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    107,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v11; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4C42DFC & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__);
    sub_1C37058(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
    byte_4C42DFC = 1;
  }
  v7 = sub_1C372A4(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_DWORD *)(v7 + 16) = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0, v9);
  if ( ValueArray )
  {
    v11 = ValueArray;
    v12 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)v7,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      0);
    LOBYTE(ValueArray) = BasicHelper__Any_int__51187064(
                           v11,
                           (System_Func_T__bool__o *)v12,
                           (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
  }
  return (char)ValueArray;
}


System_String_array_array *ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42DFA & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_1C37058(&StringLiteral_3614/*"COMBINE_SCENE_VOICE_RETURN"*/);
    byte_4C42DFA = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3614/*"COMBINE_SCENE_VOICE_RETURN"*/,
                    (const MethodInfo_33A4EE0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  return ConstantStrMaster__GetVoiceList((ConstantStrMaster_o *)EntityFromKey, (ConstantStrEntity_o *)EntityFromKey, v4);
}


System_String_array_array *ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42DF9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_1C37058(&StringLiteral_3615/*"COMBINE_SCENE_VOICE_WELCOME"*/);
    byte_4C42DF9 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3615/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                    (const MethodInfo_33A4EE0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  return ConstantStrMaster__GetVoiceList((ConstantStrMaster_o *)EntityFromKey, (ConstantStrEntity_o *)EntityFromKey, v4);
}


float ConstantStrMaster__GetFloat(
        ConstantStrMaster_o *this,
        System_String_o *name,
        float defVal,
        const MethodInfo *method)
{
  System_String_o *Value; // x19
  float result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0.0;
  Value = ConstantStrMaster__GetValue(this, name, method);
  if ( !System_String__IsNullOrEmpty(Value, 0) && System_Single__TryParse(Value, &result, 0) )
    return result;
  return defVal;
}


System_String_o *ConstantStrMaster__GetRandomVoice(
        ConstantStrMaster_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v6; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v8; // x19
  __int64 v9; // x0
  System_String_array *v10; // x8
  System_String_o **m_Items; // x8

  if ( (byte_4C42DFB & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42DFB = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    key,
                    (const MethodInfo_33A4EE0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey,
                (ConstantStrEntity_o *)EntityFromKey,
                v6);
  if ( VoiceList )
  {
    v8 = VoiceList;
    v9 = UnityEngine_Random__Range_71226972(0, VoiceList->max_length, 0);
    if ( (unsigned int)v9 >= LODWORD(v8->max_length) )
      goto LABEL_10;
    v10 = v8->m_Items[(int)v9];
    if ( !v10 )
      sub_1C372B4(v9);
    if ( !LODWORD(v10->max_length) )
LABEL_10:
      sub_1C372BC(v9);
    m_Items = v10->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_Int32_array *ConstantStrMaster__GetRewardUpFuncCategory(ConstantStrMaster_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Int32_array *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4C42DFD & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8);
    sub_1C37058(&StringLiteral_11154/*"REWARD_UP_FUNC_CATEGORY"*/);
    byte_4C42DFD = 1;
  }
  v3 = (System_Array_o *)sub_1C37100(int___TypeInfo, 7);
  v4.fields.value = Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8;
  v5 = (System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v3, v4, 0);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11154/*"REWARD_UP_FUNC_CATEGORY"*/, v5, v6);
}


System_Int32_array *ConstantStrMaster__GetRewardUpIgnoreSvtId(ConstantStrMaster_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Int32_array *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4C42DFE & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C);
    sub_1C37058(&StringLiteral_11155/*"REWARD_UP_IGNORE_SVT_ID"*/);
    byte_4C42DFE = 1;
  }
  v3 = (System_Array_o *)sub_1C37100(int___TypeInfo, 8);
  v4.fields.value = Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C;
  v5 = (System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v3, v4, 0);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11155/*"REWARD_UP_IGNORE_SVT_ID"*/, v5, v6);
}


System_String_o *ConstantStrMaster__GetValue(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  bool v5; // w8
  System_String_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42DF4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    byte_4C42DF4 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0;
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(0);
    return *(System_String_o **)((char *)&off_18 + (_QWORD)entity);
  }
  return result;
}


System_Int32_array *ConstantStrMaster__GetValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  System_String_o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  ConstantStrMaster___c_c *v10; // x8
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42DF5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__);
    sub_1C37058(&ConstantStrMaster___c_TypeInfo);
    byte_4C42DF5 = 1;
  }
  entity = 0;
  IsNullOrEmpty = DataMasterBase_object__object__object___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    (Il2CppObject *)name,
                    (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( IsNullOrEmpty )
  {
    if ( !entity )
      goto LABEL_15;
    v8 = *(System_String_o **)((char *)&off_18 + (_QWORD)entity);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v8, 0);
    if ( IsNullOrEmpty )
      return defVal;
    if ( !v8 )
LABEL_15:
      sub_1C372B4(IsNullOrEmpty);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v8, 0x2Cu, 0, 0);
    v10 = ConstantStrMaster___c_TypeInfo;
    if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v10 = ConstantStrMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v10->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = ConstantStrMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__6_0, v12, Method_ConstantStrMaster___c__GetValueArray_b__6_0__, 0);
      static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v16,
             (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C42DF3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C42DF3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Master_object, name, 0, v4);
}


float ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C42DF2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42DF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v6);
}


System_Single_array *ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  bool v5; // w8
  System_Single_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  ConstantStrMaster___c_c *v8; // x8
  System_Func_T__TResult__o *_9__7_0; // x20
  Il2CppObject *v10; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42DF6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_float___);
    sub_1C37058(&System_Func_string__float__TypeInfo);
    sub_1C37058(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__);
    sub_1C37058(&ConstantStrMaster___c_TypeInfo);
    byte_4C42DF6 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0;
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(0);
    result = *(System_Single_array **)((char *)&off_18 + (_QWORD)entity);
    if ( result )
    {
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                  (System_String_o *)result,
                                                                  0x2Cu,
                                                                  0,
                                                                  0);
      v8 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
        v8 = ConstantStrMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_T__TResult__o *)v8->static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ConstantStrMaster___c_TypeInfo;
        }
        v10 = (Il2CppObject *)v8->static_fields->__9;
        _9__7_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_string__float__TypeInfo);
        System_Func_object__float____ctor(_9__7_0, v10, Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, 0);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v12, v13);
      }
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__float_(
                                                                   v7,
                                                                   (System_Func_TSource__TResult__o *)_9__7_0,
                                                                   (const MethodInfo_311EC70 *)Method_System_Linq_Enumerable_Select_string__float___);
      return System_Linq_Enumerable__ToArray_float_(
               v14,
               (const MethodInfo_312737C *)Method_System_Linq_Enumerable_ToArray_float___);
    }
  }
  return result;
}


System_String_array *ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_String_array *defaultArray,
        const MethodInfo *method)
{
  System_String_o *EntityFromId; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42DF7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__);
    byte_4C42DF7 = 1;
  }
  result = 0;
  EntityFromId = (System_String_o *)DataMasterBase_object__object__object___TryGetEntityFromId(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_33A5208 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)EntityFromId & 1) != 0 )
  {
    if ( !result || (EntityFromId = *(System_String_o **)((char *)&off_18 + (_QWORD)result)) == 0 )
      sub_1C372B4(EntityFromId);
    return System_String__Split(EntityFromId, 0x2Cu, 0, 0);
  }
  return defaultArray;
}


UnityEngine_Vector3_o ConstantStrMaster__GetValueVector3(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Single_array *ValueFloatArray; // x0
  float v4; // s0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // t1
  float v9; // s2
  float v10; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( LODWORD(ValueFloatArray->max_length) <= 2 )
      sub_1C372BC(ValueFloatArray);
    v4 = ValueFloatArray->m_Items[0];
    p_y = &ValueFloatArray->m_Items[1];
    p_z = &ValueFloatArray->m_Items[2];
  }
  else
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    p_z = &static_fields->zeroVector.fields.z;
    v4 = x;
    p_y = &UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.y;
  }
  v9 = *p_z;
  v10 = *p_y;
  result.fields.z = v9;
  result.fields.y = v10;
  result.fields.x = v4;
  return result;
}


System_String_array_array *ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *value; // x19
  System_String_array *v5; // x0
  System_String_array *v6; // x19
  int max_length; // w8
  System_String_array *v8; // x20
  __int64 v9; // x24
  CGThumbnailListItem_o *m_Items; // x21
  System_String_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C42DF8 & 1) == 0 )
  {
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&string_____TypeInfo);
    byte_4C42DF8 = 1;
  }
  if ( !ent )
    return 0;
  value = ent->fields.value;
  v5 = (System_String_array *)sub_1C37100(char___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_20;
  if ( !LODWORD(v5->max_length) )
    goto LABEL_21;
  LOWORD(v5->m_Items[0]) = 47;
  if ( !value || (v5 = System_String__Split_63610732(value, (System_Char_array *)v5, 0)) == 0 )
LABEL_20:
    sub_1C372B4(v5);
  v6 = v5;
  v5 = (System_String_array *)sub_1C37100(string_____TypeInfo, LODWORD(v5->max_length));
  max_length = v6->max_length;
  v8 = v5;
  if ( max_length >= 1 )
  {
    v9 = 0;
    m_Items = (CGThumbnailListItem_o *)v5->m_Items;
    while ( (unsigned int)v9 < max_length )
    {
      v11 = v6->m_Items[v9];
      v5 = (System_String_array *)sub_1C37100(char___TypeInfo, 1);
      if ( !v5 )
        goto LABEL_20;
      if ( !LODWORD(v5->max_length) )
        break;
      LOWORD(v5->m_Items[0]) = 44;
      if ( !v11 )
        goto LABEL_20;
      v5 = System_String__Split_63610732(v11, (System_Char_array *)v5, 0);
      if ( !v8 )
        goto LABEL_20;
      if ( (unsigned int)v9 >= LODWORD(v8->max_length) )
        break;
      m_Items->klass = (CGThumbnailListItem_c *)v5;
      sub_1C36FFC(m_Items, (int32_t)v5, v12, v13);
      max_length = v6->max_length;
      ++v9;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
      if ( (int)v9 >= max_length )
        return (System_String_array_array *)v8;
    }
LABEL_21:
    sub_1C372BC(v5);
  }
  return (System_String_array_array *)v8;
}


System_String_o *ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *result; // x0

  if ( (byte_4C42DF1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42DF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  result = (System_String_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                name,
                                (const MethodInfo_33A4EE0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42DFF & 1) == 0 )
  {
    sub_1C37058(&ConstantStrMaster___c_TypeInfo);
    byte_4C42DFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ConstantStrMaster___c_TypeInfo->static_fields->__9 = (struct ConstantStrMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ConstantStrMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ConstantStrMaster___c___ctor(ConstantStrMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ConstantStrMaster___c___GetValueArray_b__6_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}


float ConstantStrMaster___c___GetValueFloatArray_b__7_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Single__Parse(a, 0);
}


void ConstantStrMaster___c__DisplayClass14_0___ctor(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ConstantStrMaster___c__DisplayClass14_0___ExistValueArray_b__0(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return this->fields.checkVal == val;
}