void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41895F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, method);
    byte_41895F5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    101,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
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
  __int64 v10; // x1
  ConstantStrMaster___c__DisplayClass14_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v16; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_4189601 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, name);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v7);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v8);
    sub_B2C35C(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v9);
    sub_B2C35C(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v10);
    byte_4189601 = 1;
  }
  v11 = (ConstantStrMaster___c__DisplayClass14_0_o *)sub_B2C42C(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  ConstantStrMaster___c__DisplayClass14_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.checkVal = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v14);
  if ( ValueArray )
  {
    v16 = ValueArray;
    v17 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    LOBYTE(ValueArray) = BasicHelper__Any_int__24273940(
                           v16,
                           (System_Func_T__bool__o *)v17,
                           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
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

  if ( (byte_41895FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B2C35C(&StringLiteral_3198/*"COMBINE_SCENE_VOICE_RETURN"*/, v3);
    byte_41895FF = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3198/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_1734194 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
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

  if ( (byte_41895FE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B2C35C(&StringLiteral_3199/*"COMBINE_SCENE_VOICE_WELCOME"*/, v3);
    byte_41895FE = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3199/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_1734194 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
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
  __int64 v11; // x1
  System_String_array *v12; // x8
  System_String_o **m_Items; // x8
  __int64 v15; // x0

  if ( (byte_4189600 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, key);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4189600 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_1734194 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v7);
  if ( VoiceList )
  {
    v9 = VoiceList;
    v10 = UnityEngine_Random__Range_35348680(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v10 >= v9->max_length )
      goto LABEL_10;
    v12 = v9->m_Items[(int)v10];
    if ( !v12 )
      sub_B2C434(v10, v11);
    if ( !v12->max_length )
    {
LABEL_10:
      v15 = sub_B2C460(v10);
      sub_B2C400(v15, 0LL);
    }
    m_Items = v12->m_Items;
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

  if ( (byte_41895F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    byte_41895F9 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_24E4578 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(0LL, v5);
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
  __int64 v15; // x1
  System_String_o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  ConstantStrMaster___c_c *v18; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v21; // x21
  struct ConstantStrMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v31; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41895FA & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v10);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v11);
    sub_B2C35C(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v12);
    sub_B2C35C(&ConstantStrMaster___c_TypeInfo, v13);
    byte_41895FA = 1;
  }
  entity = 0LL;
  v14 = (System_Char_array *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                               (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
                               &entity,
                               name,
                               (const MethodInfo_24E4578 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v16 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v16 )
      return defVal;
    v14 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v14 )
LABEL_18:
      sub_B2C434(v14, v15);
    if ( !v14->max_length )
    {
      v31 = sub_B2C460(v14);
      sub_B2C400(v31, 0LL);
    }
    v14->m_Items[2] = 44;
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v16, v14, 0LL);
    v18 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v18 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v21,
        Method_ConstantStrMaster___c__GetValueArray_b__6_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
      v22 = ConstantStrMaster___c_TypeInfo->static_fields;
      v22->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v22->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v17,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v29,
             (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_41895F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantStrMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41895F8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  return ConstantStrMaster__GetValueArray(Master_WarQuestSelectionMaster, name, 0LL, v6);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_41895F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41895F7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w8
  System_Single_array *result; // x0
  System_String_o *v15; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  ConstantStrMaster___c_c *v17; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__7_0; // x20
  Il2CppObject *v20; // x21
  struct ConstantStrMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41895FB & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__float___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_float___, v7);
    sub_B2C35C(&Method_System_Func_string__float___ctor__, v8);
    sub_B2C35C(&System_Func_string__float__TypeInfo, v9);
    sub_B2C35C(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v10);
    sub_B2C35C(&ConstantStrMaster___c_TypeInfo, v11);
    byte_41895FB = 1;
  }
  entity = 0LL;
  v13 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          &entity,
          name,
          (const MethodInfo_24E4578 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v13 )
  {
    if ( !entity )
      goto LABEL_19;
    v15 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v15 )
      return 0LL;
    result = (System_Single_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !result )
LABEL_19:
      sub_B2C434(result, v12);
    if ( !result->max_length )
    {
      v29 = sub_B2C460(result);
      sub_B2C400(v29, 0LL);
    }
    LOWORD(result->m_Items[1]) = 44;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v15,
                                                                 (System_Char_array *)result,
                                                                 0LL);
    v17 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v17 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B2C42C(System_Func_string__float__TypeInfo);
      System_Func_WarBoardAIRoute_RouteData__float____ctor(
        _9__7_0,
        v20,
        Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__,
        (const MethodInfo_2713AF8 *)Method_System_Func_string__float___ctor__);
      v21 = ConstantStrMaster___c_TypeInfo->static_fields;
      v21->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v21->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                                 v16,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1A96FEC *)Method_System_Linq_Enumerable_Select_string__float___);
    return System_Linq_Enumerable__ToArray_float_(
             v28,
             (const MethodInfo_1A9B054 *)Method_System_Linq_Enumerable_ToArray_float___);
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *v6; // x1
  bool EntityFromId_ServantVoiceEntity; // w8
  System_String_array *v8; // x0
  System_String_o *v9; // x19
  __int64 v10; // x0
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41895FC & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___, v5);
    byte_41895FC = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1733EC4 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  v8 = 0LL;
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      goto LABEL_10;
    v9 = *(System_String_o **)&result->fields.type;
    v8 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_10;
    v6 = v8;
    if ( !v8->max_length )
    {
      v10 = sub_B2C460(v8);
      sub_B2C400(v10, 0LL);
    }
    LOWORD(v8->m_Items[0]) = 44;
    if ( !v9 )
LABEL_10:
      sub_B2C434(v8, v6);
    return System_String__Split(v9, (System_Char_array *)v8, 0LL);
  }
  return v8;
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
      v7 = sub_B2C460(ValueFloatArray);
      sub_B2C400(v7, 0LL);
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
  System_Char_array *v7; // x1
  System_Char_array *v8; // x19
  int max_length; // w8
  System_String_array_array *v10; // x20
  __int64 v11; // x24
  BattleServantConfConponent_o *i; // x21
  System_String_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x22
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_41895FD & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, ent);
    sub_B2C35C(&string_____TypeInfo, v4);
    byte_41895FD = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v6 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_22;
  v7 = v6;
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[2] = 47;
  if ( !value || (v6 = (System_Char_array *)System_String__Split(value, v6, 0LL)) == 0LL )
LABEL_22:
    sub_B2C434(v6, v7);
  v8 = v6;
  v6 = (System_Char_array *)sub_B2C374(string_____TypeInfo, v6->max_length);
  max_length = v8->max_length;
  v10 = (System_String_array_array *)v6;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    for ( i = (BattleServantConfConponent_o *)&v6->m_Items[2];
          (unsigned int)v11 < max_length;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      v13 = *(System_String_o **)&v8->m_Items[4 * v11 + 2];
      v6 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_22;
      v7 = v6;
      if ( !v6->max_length )
        break;
      v6->m_Items[2] = 44;
      if ( !v13 )
        goto LABEL_22;
      v6 = (System_Char_array *)System_String__Split(v13, v6, 0LL);
      if ( !v10 )
        goto LABEL_22;
      v20 = (System_Int32_array **)v6;
      if ( v6 )
      {
        v6 = (System_Char_array *)sub_B2C41C(v6, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
          v23 = sub_B2C454(0LL);
          sub_B2C400(v23, 0LL);
        }
      }
      if ( (unsigned int)v11 >= v10->max_length )
        break;
      i->klass = (BattleServantConfConponent_c *)v20;
      sub_B2C2F8(i, v20, v14, v15, v16, v17, v18, v19);
      max_length = v8->max_length;
      if ( (int)++v11 >= max_length )
        return v10;
    }
LABEL_23:
    v22 = sub_B2C460(v6);
    sub_B2C400(v22, 0LL);
  }
  return v10;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *result; // x0

  if ( (byte_41895F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41895F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_1734194 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864A3 & 1) == 0 )
  {
    sub_B2C35C(&ConstantStrMaster___c_TypeInfo, v1);
    byte_41864A3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)ConstantStrMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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