void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216462 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, method);
    byte_4216462 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    101,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ConstantStrMaster___c__DisplayClass14_0_o *v11; // x22
  __int64 v12; // x0
  const MethodInfo *v13; // x3
  System_Int32_array *ValueArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array *v17; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_421646E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, name);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v9);
    sub_B0D8A4(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v10);
    byte_421646E = 1;
  }
  v11 = (ConstantStrMaster___c__DisplayClass14_0_o *)sub_B0D974(
                                                       ConstantStrMaster___c__DisplayClass14_0_TypeInfo,
                                                       name,
                                                       *(_QWORD *)&checkVal);
  ConstantStrMaster___c__DisplayClass14_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.checkVal = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v13);
  if ( ValueArray )
  {
    v17 = ValueArray;
    v18 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v15, v16);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)v11,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    LOBYTE(ValueArray) = BasicHelper__Any_int__24145568(
                           v17,
                           (System_Func_T__bool__o *)v18,
                           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v5; // x2

  if ( (byte_421646C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B0D8A4(&StringLiteral_3210/*"COMBINE_SCENE_VOICE_RETURN"*/, v3);
    byte_421646C = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3210/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_1714D50 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v5);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v5; // x2

  if ( (byte_421646B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B0D8A4(&StringLiteral_3211/*"COMBINE_SCENE_VOICE_WELCOME"*/, v3);
    byte_421646B = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3211/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_1714D50 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v5);
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
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v7; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v9; // x19
  __int64 v10; // x0
  System_String_array *v11; // x8
  System_String_o **m_Items; // x8
  __int64 v14; // x0

  if ( (byte_421646D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, key);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421646D = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_1714D50 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v7);
  if ( VoiceList )
  {
    v9 = VoiceList;
    v10 = UnityEngine_Random__Range_34969060(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v10 >= v9->max_length )
      goto LABEL_10;
    v11 = v9->m_Items[(int)v10];
    if ( !v11 )
      sub_B0D97C(v10);
    if ( !v11->max_length )
    {
LABEL_10:
      v14 = sub_B0D9A8(v10);
      sub_B0D948(v14, 0LL);
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
  bool v5; // w8
  System_String_o *result; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216466 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    byte_4216466 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_266A07C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_B0D97C(0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Char_array *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  ConstantStrMaster___c_c *v19; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v22; // x21
  struct ConstantStrMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v32; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216467 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v10);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v11);
    sub_B0D8A4(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v12);
    sub_B0D8A4(&ConstantStrMaster___c_TypeInfo, v13);
    byte_4216467 = 1;
  }
  entity = 0LL;
  v14 = (System_Char_array *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                               (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
                               &entity,
                               name,
                               (const MethodInfo_266A07C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v15 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v15 )
      return defVal;
    v14 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v14 )
LABEL_18:
      sub_B0D97C(v14);
    if ( !v14->max_length )
    {
      v32 = sub_B0D9A8(v14);
      sub_B0D948(v32, 0LL);
    }
    v14->m_Items[2] = 44;
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v15, v14, 0LL);
    v19 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v19 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_string__int__TypeInfo,
                                                                                  v16,
                                                                                  v17);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v22,
        Method_ConstantStrMaster___c__GetValueArray_b__6_0__,
        (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
      v23 = ConstantStrMaster___c_TypeInfo->static_fields;
      v23->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v23->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v18,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v30,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4216465 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4216465 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return ConstantStrMaster__GetValueArray(Master_WarQuestSelectionMaster, name, 0LL, v5);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4216464 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216464 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v7);
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
  __int64 v11; // x1
  bool v12; // w8
  System_Single_array *result; // x0
  System_String_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  ConstantStrMaster___c_c *v18; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__7_0; // x20
  Il2CppObject *v21; // x21
  struct ConstantStrMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216468 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__float___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_float___, v7);
    sub_B0D8A4(&Method_System_Func_string__float___ctor__, v8);
    sub_B0D8A4(&System_Func_string__float__TypeInfo, v9);
    sub_B0D8A4(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v10);
    sub_B0D8A4(&ConstantStrMaster___c_TypeInfo, v11);
    byte_4216468 = 1;
  }
  entity = 0LL;
  v12 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          &entity,
          name,
          (const MethodInfo_266A07C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v12 )
  {
    if ( !entity )
      goto LABEL_19;
    v14 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v14 )
      return 0LL;
    result = (System_Single_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !result )
LABEL_19:
      sub_B0D97C(result);
    if ( !result->max_length )
    {
      v30 = sub_B0D9A8(result);
      sub_B0D948(v30, 0LL);
    }
    LOWORD(result->m_Items[1]) = 44;
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v14,
                                                                 (System_Char_array *)result,
                                                                 0LL);
    v18 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v18 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B0D974(
                                                                     System_Func_string__float__TypeInfo,
                                                                     v15,
                                                                     v16);
      System_Func_WarBoardAIRoute_RouteData__float____ctor(
        _9__7_0,
        v21,
        Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__,
        (const MethodInfo_261A8AC *)Method_System_Func_string__float___ctor__);
      v22 = ConstantStrMaster___c_TypeInfo->static_fields;
      v22->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v22->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                                 v17,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1B522B8 *)Method_System_Linq_Enumerable_Select_string__float___);
    return System_Linq_Enumerable__ToArray_float_(
             v29,
             (const MethodInfo_1B56320 *)Method_System_Linq_Enumerable_ToArray_float___);
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool EntityFromId_ServantVoiceEntity; // w8
  System_String_array *v7; // x0
  System_String_o *v8; // x19
  __int64 v9; // x0
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216469 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___, v5);
    byte_4216469 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1714A80 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  v7 = 0LL;
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      goto LABEL_10;
    v8 = *(System_String_o **)&result->fields.type;
    v7 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_10;
    if ( !v7->max_length )
    {
      v9 = sub_B0D9A8(v7);
      sub_B0D948(v9, 0LL);
    }
    LOWORD(v7->m_Items[0]) = 44;
    if ( !v8 )
LABEL_10:
      sub_B0D97C(v7);
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
      v7 = sub_B0D9A8(ValueFloatArray);
      sub_B0D948(v7, 0LL);
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
  __int64 v4; // x1
  System_String_o *value; // x19
  System_Char_array *v6; // x0
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

  if ( (byte_421646A & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, ent);
    sub_B0D8A4(&string_____TypeInfo, v4);
    byte_421646A = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v6 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_22;
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[2] = 47;
  if ( !value || (v6 = (System_Char_array *)System_String__Split(value, v6, 0LL)) == 0LL )
LABEL_22:
    sub_B0D97C(v6);
  v7 = v6;
  v6 = (System_Char_array *)sub_B0D8BC(string_____TypeInfo, v6->max_length);
  max_length = v7->max_length;
  v9 = (System_String_array_array *)v6;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    for ( i = (BattleServantConfConponent_o *)&v6->m_Items[2];
          (unsigned int)v10 < max_length;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      v12 = *(System_String_o **)&v7->m_Items[4 * v10 + 2];
      v6 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_22;
      if ( !v6->max_length )
        break;
      v6->m_Items[2] = 44;
      if ( !v12 )
        goto LABEL_22;
      v6 = (System_Char_array *)System_String__Split(v12, v6, 0LL);
      if ( !v9 )
        goto LABEL_22;
      v19 = (System_Int32_array **)v6;
      if ( v6 )
      {
        v6 = (System_Char_array *)sub_B0D964(v6, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
          v22 = sub_B0D99C(0LL);
          sub_B0D948(v22, 0LL);
        }
      }
      if ( (unsigned int)v10 >= v9->max_length )
        break;
      i->klass = (BattleServantConfConponent_c *)v19;
      sub_B0D840(i, v19, v13, v14, v15, v16, v17, v18);
      max_length = v7->max_length;
      if ( (int)++v10 >= max_length )
        return v9;
    }
LABEL_23:
    v21 = sub_B0D9A8(v6);
    sub_B0D948(v21, 0LL);
  }
  return v9;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  System_String_o *result; // x0

  if ( (byte_4216463 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4216463 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_1714D50 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421318C & 1) == 0 )
  {
    sub_B0D8A4(&ConstantStrMaster___c_TypeInfo, v1);
    byte_421318C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ConstantStrMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)ConstantStrMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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