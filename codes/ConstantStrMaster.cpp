void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353527 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
    byte_4353527 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    102,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  ConstantStrMaster___c__DisplayClass14_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v12; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4353533 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__);
    sub_B70694(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
    byte_4353533 = 1;
  }
  v7 = (ConstantStrMaster___c__DisplayClass14_0_o *)sub_B70764(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  ConstantStrMaster___c__DisplayClass14_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.checkVal = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v10);
  if ( ValueArray )
  {
    v12 = ValueArray;
    v13 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    LOBYTE(ValueArray) = BasicHelper__Any_int__29214704(
                           v12,
                           (System_Func_T__bool__o *)v13,
                           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4353531 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_B70694(&StringLiteral_3272/*"COMBINE_SCENE_VOICE_RETURN"*/);
    byte_4353531 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3272/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_1CA3D48 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v4);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4353530 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_B70694(&StringLiteral_3273/*"COMBINE_SCENE_VOICE_WELCOME"*/);
    byte_4353530 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3273/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_1CA3D48 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v4);
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
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v6; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array *v11; // x8
  System_String_o **m_Items; // x8
  __int64 v14; // x0

  if ( (byte_4353532 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353532 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_1CA3D48 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v6);
  if ( VoiceList )
  {
    v8 = VoiceList;
    v9 = UnityEngine_Random__Range_36100992(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v9 >= v8->max_length )
      goto LABEL_10;
    v11 = v8->m_Items[(int)v9];
    if ( !v11 )
      sub_B7076C(v9, v10);
    if ( !v11->max_length )
    {
LABEL_10:
      v14 = sub_B70798(v9);
      sub_B70738(v14, 0LL);
    }
    m_Items = v11->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_String_o *__fastcall ConstantStrMaster__GetValue(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435352B & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    byte_435352B = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_21C08E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B7076C(0LL, v5);
    return *(System_String_o **)&entity->fields.shortCutBannerId;
  }
  return result;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Char_array *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  ConstantStrMaster___c_c *v11; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct ConstantStrMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v24; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435352C & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__);
    sub_B70694(&ConstantStrMaster___c_TypeInfo);
    byte_435352C = 1;
  }
  entity = 0LL;
  v7 = (System_Char_array *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                              (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
                              &entity,
                              name,
                              (const MethodInfo_21C08E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v9 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v9 )
      return defVal;
    v7 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v7 )
LABEL_18:
      sub_B7076C(v7, v8);
    if ( !v7->max_length )
    {
      v24 = sub_B70798(v7);
      sub_B70738(v24, 0LL);
    }
    v7->m_Items[2] = 44;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v9, v7, 0LL);
    v11 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v11 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v14,
        Method_ConstantStrMaster___c__GetValueArray_b__6_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
      v15 = ConstantStrMaster___c_TypeInfo->static_fields;
      v15->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v15->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v22,
             (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_435352A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435352A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  return ConstantStrMaster__GetValueArray(Master_WarQuestSelectionMaster, name, 0LL, v5);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4353529 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353529 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v7);
}


System_Single_array *__fastcall ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_Single_array *result; // x0
  System_String_o *v8; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  ConstantStrMaster___c_c *v10; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__7_0; // x20
  Il2CppObject *v13; // x21
  struct ConstantStrMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435352D & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__float___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_float___);
    sub_B70694(&Method_System_Func_string__float___ctor__);
    sub_B70694(&System_Func_string__float__TypeInfo);
    sub_B70694(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__);
    sub_B70694(&ConstantStrMaster___c_TypeInfo);
    byte_435352D = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_21C08E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      goto LABEL_19;
    v8 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v8 )
      return 0LL;
    result = (System_Single_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !result )
LABEL_19:
      sub_B7076C(result, v5);
    if ( !result->max_length )
    {
      v22 = sub_B70798(result);
      sub_B70738(v22, 0LL);
    }
    LOWORD(result->m_Items[1]) = 44;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v8, (System_Char_array *)result, 0LL);
    v10 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v10 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B70764(System_Func_string__float__TypeInfo);
      System_Func_WarBoardAIRoute_RouteData__float____ctor(
        _9__7_0,
        v13,
        Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__,
        (const MethodInfo_29AE46C *)Method_System_Func_string__float___ctor__);
      v14 = ConstantStrMaster___c_TypeInfo->static_fields;
      v14->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v14->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1CC452C *)Method_System_Linq_Enumerable_Select_string__float___);
    return System_Linq_Enumerable__ToArray_float_(
             v21,
             (const MethodInfo_1CC8820 *)Method_System_Linq_Enumerable_ToArray_float___);
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *v5; // x1
  bool EntityFromId_ServantVoiceEntity; // w8
  System_String_array *v7; // x0
  System_String_o *v8; // x19
  __int64 v9; // x0
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435352E & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
    byte_435352E = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  v7 = 0LL;
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      goto LABEL_10;
    v8 = *(System_String_o **)&result->fields.type;
    v7 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_10;
    v5 = v7;
    if ( !v7->max_length )
    {
      v9 = sub_B70798(v7);
      sub_B70738(v9, 0LL);
    }
    LOWORD(v7->m_Items[0]) = 44;
    if ( !v8 )
LABEL_10:
      sub_B7076C(v7, v5);
    return System_String__Split(v8, (System_Char_array *)v7, 0LL);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ConstantStrMaster__GetValueVector3(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Single_array *ValueFloatArray; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  __int64 v7; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( ValueFloatArray->max_length < 3 )
    {
      v7 = sub_B70798(ValueFloatArray);
      sub_B70738(v7, 0LL);
    }
    v4 = ValueFloatArray->m_Items[1];
    v5 = ValueFloatArray->m_Items[2];
    v6 = ValueFloatArray->m_Items[3];
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


System_String_array_array *__fastcall ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *value; // x19
  System_Char_array *v5; // x0
  System_Char_array *v6; // x1
  System_Char_array *v7; // x19
  int max_length; // w8
  System_String_array_array *v9; // x20
  __int64 v10; // x24
  BattleServantConfConponent_o *i; // x21
  System_String_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x22
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_435352F & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&string_____TypeInfo);
    byte_435352F = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v5 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_22;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_23;
  v5->m_Items[2] = 47;
  if ( !value || (v5 = (System_Char_array *)System_String__Split(value, v5, 0LL)) == 0LL )
LABEL_22:
    sub_B7076C(v5, v6);
  v7 = v5;
  v5 = (System_Char_array *)sub_B706AC(string_____TypeInfo, v5->max_length);
  max_length = v7->max_length;
  v9 = (System_String_array_array *)v5;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    for ( i = (BattleServantConfConponent_o *)&v5->m_Items[2];
          (unsigned int)v10 < max_length;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      v12 = *(System_String_o **)&v7->m_Items[4 * v10 + 2];
      v5 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !v5 )
        goto LABEL_22;
      v6 = v5;
      if ( !v5->max_length )
        break;
      v5->m_Items[2] = 44;
      if ( !v12 )
        goto LABEL_22;
      v5 = (System_Char_array *)System_String__Split(v12, v5, 0LL);
      if ( !v9 )
        goto LABEL_22;
      v19 = (System_Int32_array **)v5;
      if ( v5 )
      {
        v5 = (System_Char_array *)sub_B70754(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v22 = sub_B7078C(0LL);
          sub_B70738(v22, 0LL);
        }
      }
      if ( (unsigned int)v10 >= v9->max_length )
        break;
      i->klass = (BattleServantConfConponent_c *)v19;
      sub_B70630(i, v19, v13, v14, v15, v16, v17, v18);
      max_length = v7->max_length;
      if ( (int)++v10 >= max_length )
        return v9;
    }
LABEL_23:
    v21 = sub_B70798(v5);
    sub_B70738(v21, 0LL);
  }
  return v9;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0

  if ( (byte_4353528 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353528 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_1CA3D48 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FAF9 & 1) == 0 )
  {
    sub_B70694(&ConstantStrMaster___c_TypeInfo);
    byte_434FAF9 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ConstantStrMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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