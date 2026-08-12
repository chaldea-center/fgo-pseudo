void ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597065F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
    byte_597065F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v12; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_597066C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_ConstantStrMaster___c__DisplayClass15_0__ExistValueArray_b__0__);
    sub_2213A60(&ConstantStrMaster___c__DisplayClass15_0_TypeInfo);
    byte_597066C = 1;
  }
  v7 = sub_2213CCC(ConstantStrMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_DWORD *)(v7 + 16) = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0, v10);
  if ( ValueArray )
  {
    v12 = ValueArray;
    v13 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_ConstantStrMaster___c__DisplayClass15_0__ExistValueArray_b__0__,
      0);
    LOBYTE(ValueArray) = BasicHelper__Any_int__58784608(
                           v12,
                           (System_Func_T__bool__o *)v13,
                           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
  }
  return (char)ValueArray;
}


System_String_array_array *ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v4; // x2

  if ( (byte_597066A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_2213A60(&StringLiteral_3756/*"COMBINE_SCENE_VOICE_RETURN"*/);
    byte_597066A = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3756/*"COMBINE_SCENE_VOICE_RETURN"*/,
                    (const MethodInfo_3F14C6C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  return ConstantStrMaster__GetVoiceList((ConstantStrMaster_o *)EntityFromKey, (ConstantStrEntity_o *)EntityFromKey, v4);
}


System_String_array_array *ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v4; // x2

  if ( (byte_5970669 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_2213A60(&StringLiteral_3757/*"COMBINE_SCENE_VOICE_WELCOME"*/);
    byte_5970669 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (System_String_o *)StringLiteral_3757/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                    (const MethodInfo_3F14C6C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
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
  __int64 v10; // x1
  System_String_array *v11; // x8
  System_String_o **m_Items; // x8

  if ( (byte_597066B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597066B = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    key,
                    (const MethodInfo_3F14C6C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey,
                (ConstantStrEntity_o *)EntityFromKey,
                v6);
  if ( VoiceList )
  {
    v8 = VoiceList;
    v9 = UnityEngine_Random__Range_83400680(0, VoiceList->max_length, 0);
    if ( (unsigned int)v9 >= LODWORD(v8->max_length) )
      goto LABEL_10;
    v11 = v8->m_Items[(int)v9];
    if ( !v11 )
      sub_2213CDC(v9, v10);
    if ( !LODWORD(v11->max_length) )
LABEL_10:
      sub_2213CE4(v9);
    m_Items = v11->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_Int32_array *ConstantStrMaster__GetRewardUpFuncCategory(ConstantStrMaster_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_597066D & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8);
    sub_2213A60(&StringLiteral_11640/*"REWARD_UP_FUNC_CATEGORY"*/);
    byte_597066D = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(int___TypeInfo, 7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__32E61B8A078EC5060768F6C250266F4A9A747B496E0B2130085D11FB5ADC41A8,
    0);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11640/*"REWARD_UP_FUNC_CATEGORY"*/, (System_Int32_array *)v3, v4);
}


System_Int32_array *ConstantStrMaster__GetRewardUpIgnoreSvtId(ConstantStrMaster_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_597066E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C);
    sub_2213A60(&StringLiteral_11641/*"REWARD_UP_IGNORE_SVT_ID"*/);
    byte_597066E = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(int___TypeInfo, 8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__5125E39E939B8566F4CC0BF2887F335560BD37968AD9EAF0FAFD413BD659457C,
    0);
  return ConstantStrMaster__GetValueArray(this, (System_String_o *)StringLiteral_11641/*"REWARD_UP_IGNORE_SVT_ID"*/, (System_Int32_array *)v3, v4);
}


System_String_o *ConstantStrMaster__GetValue(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970663 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    byte_5970663 = 1;
  }
  entity = 0;
  v6 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_3F15838 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
    return *(System_String_o **)((char *)off_18 + (_QWORD)entity);
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
  __int64 v8; // x1
  System_String_o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  ConstantStrMaster___c_c *v12; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v15; // x21
  struct ConstantStrMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970664 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__);
    sub_2213A60(&ConstantStrMaster___c_TypeInfo);
    byte_5970664 = 1;
  }
  entity = 0;
  IsNullOrEmpty = DataMasterBase_object__object__object___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    (Il2CppObject *)name,
                    (const MethodInfo_3F15838 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( IsNullOrEmpty )
  {
    if ( !entity )
      goto LABEL_15;
    v9 = *(System_String_o **)((char *)off_18 + (_QWORD)entity);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v9, 0);
    if ( IsNullOrEmpty )
      return defVal;
    if ( !v9 )
LABEL_15:
      sub_2213CDC(IsNullOrEmpty, v8);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v9, 0x2Cu, 0, 0);
    v12 = ConstantStrMaster___c_TypeInfo;
    if ( !*(&ConstantStrMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo, v10);
      v12 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__6_0 = (System_Func_object__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v10);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__6_0, v15, Method_ConstantStrMaster___c__GetValueArray_b__6_0__, 0);
      v16 = ConstantStrMaster___c_TypeInfo->static_fields;
      v16->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__6_0, (int32_t)_9__6_0, v17, v18, v19, v20, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v23,
             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_5970662 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970662 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  return ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Master_object, name, 0, v5);
}


float ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_5970661 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970661 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v7);
}


System_Single_array *ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_Single_array *defaultArray,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  ConstantStrMaster___c_c *v12; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__7_0; // x20
  Il2CppObject *v15; // x21
  struct ConstantStrMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970665 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_float___);
    sub_2213A60(&System_Func_string__float__TypeInfo);
    sub_2213A60(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__);
    sub_2213A60(&ConstantStrMaster___c_TypeInfo);
    byte_5970665 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_3F15838 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_2213CDC(v7, v8);
    v9 = *(System_String_o **)((char *)off_18 + (_QWORD)entity);
    if ( v9 )
    {
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v9, 0x2Cu, 0, 0);
      v12 = ConstantStrMaster___c_TypeInfo;
      if ( !*(&ConstantStrMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo, v10);
        v12 = ConstantStrMaster___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__7_0 = (System_Func_T__TResult__o *)static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v10);
          static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__7_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_string__float__TypeInfo);
        System_Func_object__float____ctor(_9__7_0, v15, Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, 0);
        v16 = ConstantStrMaster___c_TypeInfo->static_fields;
        v16->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__7_0, (int32_t)_9__7_0, v17, v18, v19, v20, v21, v22);
      }
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__float_(
                                                                   v11,
                                                                   (System_Func_TSource__TResult__o *)_9__7_0,
                                                                   (const MethodInfo_3891880 *)Method_System_Linq_Enumerable_Select_string__float___);
      return System_Linq_Enumerable__ToArray_float_(
               v23,
               (const MethodInfo_389BC3C *)Method_System_Linq_Enumerable_ToArray_float___);
    }
  }
  return defaultArray;
}


System_String_array *ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_String_array *defaultArray,
        const MethodInfo *method)
{
  System_String_o *EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970666 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__);
    byte_5970666 = 1;
  }
  result = 0;
  EntityFromId = (System_String_o *)DataMasterBase_object__object__object___TryGetEntityFromId(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_3F14F9C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)EntityFromId & 1) != 0 )
  {
    if ( !result || (EntityFromId = *(System_String_o **)((char *)off_18 + (_QWORD)result)) == 0 )
      sub_2213CDC(EntityFromId, v8);
    return System_String__Split(EntityFromId, 0x2Cu, 0, 0);
  }
  return defaultArray;
}


UnityEngine_Vector3_o ConstantStrMaster__GetValueVector3(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Single_array *ValueFloatArray; // x0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // t1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, 0, v3);
  if ( ValueFloatArray )
  {
    if ( LODWORD(ValueFloatArray->max_length) <= 2 )
      sub_2213CE4(ValueFloatArray);
    result.fields.x = ValueFloatArray->m_Items[0];
    p_y = &ValueFloatArray->m_Items[1];
    p_z = &ValueFloatArray->m_Items[2];
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
    x = static_fields->zeroVector.fields.x;
    p_z = &static_fields->zeroVector.fields.z;
    result.fields.x = x;
  }
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  return result;
}


System_String_array *ConstantStrMaster__GetVoiceIds(
        ConstantStrMaster_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey; // x0
  const MethodInfo *v6; // x2
  System_String_array_array *VoiceList; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  ConstantStrMaster___c_c *v10; // x0
  struct ConstantStrMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v13; // x21
  struct ConstantStrMaster___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_5970667 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string____string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_string____string__TypeInfo);
    sub_2213A60(&Method_ConstantStrMaster___c__GetVoiceIds_b__10_0__);
    sub_2213A60(&ConstantStrMaster___c_TypeInfo);
    byte_5970667 = 1;
  }
  EntityFromKey = DataMasterBase_object__object__object___getEntityFromKey(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    key,
                    (const MethodInfo_3F14C6C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey,
                (ConstantStrEntity_o *)EntityFromKey,
                v6);
  if ( !VoiceList )
    return 0;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)VoiceList;
  if ( !VoiceList->max_length )
    return 0;
  v10 = ConstantStrMaster___c_TypeInfo;
  if ( !*(&ConstantStrMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo, v8);
    v10 = ConstantStrMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__10_0 = (System_Func_object__object__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string____string__TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v13, Method_ConstantStrMaster___c__GetVoiceIds_b__10_0__, 0);
    v14 = ConstantStrMaster___c_TypeInfo->static_fields;
    v14->__9__10_0 = (struct System_Func_string____string__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__10_0, (int32_t)_9__10_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__10_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_string____string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v21,
                                  (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_array_array *ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *value; // x19
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  System_String_array *v7; // x19
  int max_length; // w8
  System_String_array *v9; // x20
  unsigned int v10; // w23
  __int64 v11; // x24
  System_String_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5970668 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&string_____TypeInfo);
    byte_5970668 = 1;
  }
  if ( !ent )
    return 0;
  value = ent->fields.value;
  v5 = (System_String_array *)sub_2213B20(char___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_20;
  v6 = v5;
  if ( !LODWORD(v5->max_length) )
    goto LABEL_21;
  LOWORD(v5->m_Items[0]) = 47;
  if ( !value || (v5 = System_String__Split_75705984(value, (System_Char_array *)v5, 0)) == 0 )
LABEL_20:
    sub_2213CDC(v5, v6);
  v7 = v5;
  v5 = (System_String_array *)sub_2213B20(string_____TypeInfo, LODWORD(v5->max_length));
  max_length = v7->max_length;
  v9 = v5;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 32;
    while ( v10 < max_length )
    {
      v12 = *(System_String_o **)((char *)&v7->obj.klass + v11);
      v5 = (System_String_array *)sub_2213B20(char___TypeInfo, 1);
      if ( !v5 )
        goto LABEL_20;
      v6 = v5;
      if ( !LODWORD(v5->max_length) )
        break;
      LOWORD(v5->m_Items[0]) = 44;
      if ( !v12 )
        goto LABEL_20;
      v5 = System_String__Split_75705984(v12, (System_Char_array *)v5, 0);
      if ( !v9 )
        goto LABEL_20;
      if ( v10 >= LODWORD(v9->max_length) )
        break;
      *(Il2CppClass **)((char *)&v9->obj.klass + v11) = (Il2CppClass *)v5;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v9 + v11), (int32_t)v5, v13, v14, v15, v16, v17, v18);
      max_length = v7->max_length;
      ++v10;
      v11 += 8;
      if ( (int)v10 >= max_length )
        return (System_String_array_array *)v9;
    }
LABEL_21:
    sub_2213CE4(v5);
  }
  return (System_String_array_array *)v9;
}


void ConstantStrMaster__TryOverwriteJsonArray___Il2CppFullySharedGenericType_(
        ConstantStrMaster_o *this,
        System_String_o *constantName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array **destination,
        const MethodInfo_3823AF8 *method)
{
  System_String_o *Value; // x21
  __int64 v9; // x1
  long double v10; // q0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( !method->rgctx_data )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  Value = ConstantStrMaster__GetValue(this, constantName, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeArray_T_->methodPointer)(
                                                                          Value,
                                                                          v10);
    if ( v11 )
    {
      *destination = v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)destination, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    }
  }
}


void ConstantStrMaster__TryOverwriteJsonArray_object_(
        ConstantStrMaster_o *this,
        System_String_o *constantName,
        System_Object_array **destination,
        const MethodInfo_3823A40 *method)
{
  Il2CppObject *Value; // x21
  __int64 v9; // x1
  System_Object_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !method->rgctx_data )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  Value = (Il2CppObject *)ConstantStrMaster__GetValue(this, constantName, 0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
    v10 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_38D3A34 *)method->rgctx_data->_0_JsonManager_DeserializeArray_T_);
    if ( v10 )
    {
      *destination = v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)destination, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
}


System_String_o *ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0

  if ( (byte_5970660 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970660 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                name,
                                (const MethodInfo_3F14C6C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__getEntityFromKey__);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597066F & 1) == 0 )
  {
    sub_2213A60(&ConstantStrMaster___c_TypeInfo);
    byte_597066F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ConstantStrMaster___c_TypeInfo->static_fields->__9 = (struct ConstantStrMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ConstantStrMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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


System_String_o *ConstantStrMaster___c___GetVoiceIds_b__10_0(
        ConstantStrMaster___c_o *this,
        System_String_array *voice,
        const MethodInfo *method)
{
  if ( !voice )
    sub_2213CDC(this, 0);
  if ( !LODWORD(voice->max_length) )
    sub_2213CE4(this);
  return voice->m_Items[0];
}


void ConstantStrMaster___c__DisplayClass15_0___ctor(
        ConstantStrMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ConstantStrMaster___c__DisplayClass15_0___ExistValueArray_b__0(
        ConstantStrMaster___c__DisplayClass15_0_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return this->fields.checkVal == val;
}