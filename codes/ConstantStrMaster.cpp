void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBD52 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, method);
    byte_40FBD52 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    101,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ConstantStrMaster___c__DisplayClass14_0_o *v12; // x22
  const MethodInfo *v13; // x3
  System_Int32_array *ValueArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Int32_array *v19; // x19
  System_Func_int__bool__o *v20; // x20

  if ( (byte_40FBD5E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, name);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v10);
    sub_B16FFC(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v11);
    byte_40FBD5E = 1;
  }
  v12 = (ConstantStrMaster___c__DisplayClass14_0_o *)sub_B170CC(
                                                       ConstantStrMaster___c__DisplayClass14_0_TypeInfo,
                                                       name,
                                                       *(_QWORD *)&checkVal,
                                                       method,
                                                       v4);
  ConstantStrMaster___c__DisplayClass14_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.checkVal = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v13);
  if ( ValueArray )
  {
    v19 = ValueArray;
    v20 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v15, v16, v17, v18);
    System_Func_int__bool____ctor(
      v20,
      (Il2CppObject *)v12,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    LOBYTE(ValueArray) = BasicHelper__Any_int__25910576(
                           v19,
                           (System_Func_T__bool__o *)v20,
                           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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

  if ( (byte_40FBD5C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B16FFC(&StringLiteral_3189, v3);
    byte_40FBD5C = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3189,
                           (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
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

  if ( (byte_40FBD5B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method);
    sub_B16FFC(&StringLiteral_3190, v3);
    byte_40FBD5B = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3190,
                           (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
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
  __int64 v12; // x2
  System_String_array *v13; // x8
  System_String_o **m_Items; // x8

  if ( (byte_40FBD5D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, key);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FBD5D = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v7);
  if ( VoiceList )
  {
    v9 = VoiceList;
    v10 = UnityEngine_Random__Range_34843248(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v10 >= v9->max_length )
      goto LABEL_10;
    v13 = v9->m_Items[(int)v10];
    if ( !v13 )
      sub_B170D4();
    if ( !v13->max_length )
    {
LABEL_10:
      sub_B17100(v10, v11, v12);
      sub_B170A0();
    }
    m_Items = v13->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1;
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

  if ( (byte_40FBD56 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name);
    byte_40FBD56 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_266F830 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_B170D4();
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
  __int64 v14; // x2
  System_String_o *v15; // x20
  System_Char_array *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  ConstantStrMaster___c_c *v23; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v26; // x21
  struct ConstantStrMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD57 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v10);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v11);
    sub_B16FFC(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v12);
    sub_B16FFC(&ConstantStrMaster___c_TypeInfo, v13);
    byte_40FBD57 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_266F830 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_18;
    v15 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v15 )
      return defVal;
    v16 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v14);
    if ( !v16 )
LABEL_18:
      sub_B170D4();
    if ( !v16->max_length )
    {
      sub_B17100(v16, v16, v17);
      sub_B170A0();
    }
    v16->m_Items[2] = 44;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v15, v16, 0LL);
    v23 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v23 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_string__int__TypeInfo,
                                                                                  v18,
                                                                                  v19,
                                                                                  v20,
                                                                                  v21);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v26,
        Method_ConstantStrMaster___c__GetValueArray_b__6_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
      v27 = ConstantStrMaster___c_TypeInfo->static_fields;
      v27->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v27->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v34,
             (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x3

  if ( (byte_40FBD55 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FBD55 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return ConstantStrMaster__GetValueArray(Master_WarQuestSelectionMaster, name, 0LL, v5);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x2

  if ( (byte_40FBD54 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBD54 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ConstantStrMaster__GetFloat(MasterData_WarQuestSelectionMaster, name, defVal, v8);
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
  __int64 v12; // x2
  bool v13; // w8
  System_Single_array *result; // x0
  System_String_o *v15; // x19
  System_Char_array *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  ConstantStrMaster___c_c *v23; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__7_0; // x20
  Il2CppObject *v26; // x21
  struct ConstantStrMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD58 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__float___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_float___, v7);
    sub_B16FFC(&Method_System_Func_string__float___ctor__, v8);
    sub_B16FFC(&System_Func_string__float__TypeInfo, v9);
    sub_B16FFC(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v10);
    sub_B16FFC(&ConstantStrMaster___c_TypeInfo, v11);
    byte_40FBD58 = 1;
  }
  entity = 0LL;
  v13 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          &entity,
          name,
          (const MethodInfo_266F830 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v13 )
  {
    if ( !entity )
      goto LABEL_19;
    v15 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v15 )
      return 0LL;
    v16 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v12);
    if ( !v16 )
LABEL_19:
      sub_B170D4();
    if ( !v16->max_length )
    {
      sub_B17100(v16, v16, v17);
      sub_B170A0();
    }
    v16->m_Items[2] = 44;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v15, v16, 0LL);
    v23 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v23 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B170CC(
                                                                     System_Func_string__float__TypeInfo,
                                                                     v18,
                                                                     v19,
                                                                     v20,
                                                                     v21);
      System_Func_WarBoardAIRoute_RouteData__float____ctor(
        _9__7_0,
        v26,
        Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__,
        (const MethodInfo_2B6CA34 *)Method_System_Func_string__float___ctor__);
      v27 = ConstantStrMaster___c_TypeInfo->static_fields;
      v27->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v27->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_19C0DC8 *)Method_System_Linq_Enumerable_Select_string__float___);
    return System_Linq_Enumerable__ToArray_float_(
             v34,
             (const MethodInfo_19C4C58 *)Method_System_Linq_Enumerable_ToArray_float___);
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool EntityFromId_ServantVoiceEntity; // w8
  System_String_array *v8; // x0
  System_String_o *v9; // x19
  System_Char_array *v10; // x0
  __int64 v11; // x2
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD59 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___, v5);
    byte_40FBD59 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  v8 = 0LL;
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      goto LABEL_10;
    v9 = *(System_String_o **)&result->fields.type;
    v10 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
    if ( !v10 )
      goto LABEL_10;
    if ( !v10->max_length )
    {
      sub_B17100(v10, v10, v11);
      sub_B170A0();
    }
    v10->m_Items[2] = 44;
    if ( !v9 )
LABEL_10:
      sub_B170D4();
    return System_String__Split(v9, v10, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( ValueFloatArray->max_length < 3 )
    {
      sub_B17100(ValueFloatArray, v4, v5);
      sub_B170A0();
    }
    v6 = ValueFloatArray->m_Items[1];
    v7 = ValueFloatArray->m_Items[2];
    v8 = ValueFloatArray->m_Items[3];
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v8;
  result.fields.y = v7;
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
  System_String_array **v7; // x2
  System_Char_array *v8; // x1
  System_String_array *v9; // x0
  __int64 v10; // x2
  System_String_array *v11; // x19
  int max_length; // w8
  System_String_array_array *v13; // x20
  __int64 v14; // x24
  BattleServantConfConponent_o *i; // x21
  System_String_o *v16; // x22
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22

  if ( (byte_40FBD5A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, ent);
    sub_B16FFC(&string_____TypeInfo, v4);
    byte_40FBD5A = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v6 )
    goto LABEL_22;
  v8 = v6;
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[2] = 47;
  if ( !value || (v9 = System_String__Split(value, v6, 0LL)) == 0LL )
LABEL_22:
    sub_B170D4();
  v11 = v9;
  v6 = (System_Char_array *)sub_B17014(string_____TypeInfo, v9->max_length, v10);
  max_length = v11->max_length;
  v13 = (System_String_array_array *)v6;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    for ( i = (BattleServantConfConponent_o *)&v6->m_Items[2];
          (unsigned int)v14 < max_length;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      v16 = v11->m_Items[v14];
      v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v7);
      if ( !v6 )
        goto LABEL_22;
      v8 = v6;
      if ( !v6->max_length )
        break;
      v6->m_Items[2] = 44;
      if ( !v16 )
        goto LABEL_22;
      v6 = (System_Char_array *)System_String__Split(v16, v6, 0LL);
      if ( !v13 )
        goto LABEL_22;
      v22 = (System_Int32_array **)v6;
      if ( v6 )
      {
        v6 = (System_Char_array *)sub_B170BC(v6, v13->obj.klass->_1.element_class);
        if ( !v6 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( (unsigned int)v14 >= v13->max_length )
        break;
      i->klass = (BattleServantConfConponent_c *)v22;
      sub_B16F98(i, v22, v7, v17, v18, v19, v20, v21);
      max_length = v11->max_length;
      if ( (int)++v14 >= max_length )
        return v13;
    }
LABEL_23:
    sub_B17100(v6, v8, v7);
    sub_B170A0();
  }
  return v13;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *result; // x0

  if ( (byte_40FBD53 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FBD53 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                MasterData_WarQuestSelectionMaster,
                                name,
                                (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B12 & 1) == 0 )
  {
    sub_B16FFC(&ConstantStrMaster___c_TypeInfo, v1);
    byte_40F8B12 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ConstantStrMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ConstantStrMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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