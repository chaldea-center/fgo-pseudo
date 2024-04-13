void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA745 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA745 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    102,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ConstantStrMaster___c__DisplayClass14_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v24; // x19
  System_Func_int__bool__o *v25; // x20

  if ( (byte_42EA751 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)name, checkVal, method);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v13, v14, v15);
    sub_B5D5C4(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v16, v17, v18);
    byte_42EA751 = 1;
  }
  v19 = (ConstantStrMaster___c__DisplayClass14_0_o *)sub_B5D694(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  ConstantStrMaster___c__DisplayClass14_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.checkVal = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v22);
  if ( ValueArray )
  {
    v24 = ValueArray;
    v25 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v25,
      (Il2CppObject *)v19,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    LOBYTE(ValueArray) = BasicHelper__Any_int__28142236(
                           v24,
                           (System_Func_T__bool__o *)v25,
                           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42EA74F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3263/*"COMBINE_SCENE_VOICE_RETURN"*/, v5, v6, v7);
    byte_42EA74F = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3263/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_1AE49F4 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v9);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42EA74E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3264/*"COMBINE_SCENE_VOICE_WELCOME"*/, v5, v6, v7);
    byte_42EA74E = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3264/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_1AE49F4 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v9);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v10; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array *v15; // x8
  System_String_o **m_Items; // x8
  __int64 v18; // x0

  if ( (byte_42EA750 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EA750 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_1AE49F4 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v10);
  if ( VoiceList )
  {
    v12 = VoiceList;
    v13 = UnityEngine_Random__Range_35654020(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v13 >= v12->max_length )
      goto LABEL_10;
    v15 = v12->m_Items[(int)v13];
    if ( !v15 )
      sub_B5D69C(v13, v14);
    if ( !v15->max_length )
    {
LABEL_10:
      v18 = sub_B5D6C8(v13);
      sub_B5D668(v18, 0LL);
    }
    m_Items = v15->m_Items;
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
  __int64 v3; // x3
  __int64 v6; // x1
  bool v7; // w8
  System_String_o *result; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA749 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__,
      (_DWORD)name,
      (_DWORD)method,
      v3);
    byte_42EA749 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
         &entity,
         name,
         (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v6);
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
  System_Int32_array *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Char_array *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  ConstantStrMaster___c_c *v32; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v35; // x21
  struct ConstantStrMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v45; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42EA74A & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)defVal, method);
    sub_B5D5C4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v22, v23, v24);
    sub_B5D5C4(&ConstantStrMaster___c_TypeInfo, v25, v26, v27);
    byte_42EA74A = 1;
  }
  entity = 0LL;
  v28 = (System_Char_array *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                               (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
                               &entity,
                               name,
                               (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v30 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v30 )
      return v4;
    v28 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v28 )
LABEL_18:
      sub_B5D69C(v28, v29);
    if ( !v28->max_length )
    {
      v45 = sub_B5D6C8(v28);
      sub_B5D668(v45, 0LL);
    }
    v28->m_Items[2] = 44;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v30, v28, 0LL);
    v32 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v32 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v35,
        Method_ConstantStrMaster___c__GetValueArray_b__6_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
      v36 = ConstantStrMaster___c_TypeInfo->static_fields;
      v36->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v36->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v31,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v43,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return v4;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_42EA748 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EA748 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return ConstantStrMaster__GetValueArray(Master_WarQuestSelectionMaster, name, 0LL, v10);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42EA747 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EA747 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v12);
}


System_Single_array *__fastcall ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x1
  bool v28; // w8
  System_Single_array *result; // x0
  System_String_o *v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  ConstantStrMaster___c_c *v32; // x8
  struct ConstantStrMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__7_0; // x20
  Il2CppObject *v35; // x21
  struct ConstantStrMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA74B & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__float___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_float___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_string__float___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_string__float__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v21, v22, v23);
    sub_B5D5C4(&ConstantStrMaster___c_TypeInfo, v24, v25, v26);
    byte_42EA74B = 1;
  }
  entity = 0LL;
  v28 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          &entity,
          name,
          (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v28 )
  {
    if ( !entity )
      goto LABEL_19;
    v30 = *(System_String_o **)&entity->fields.shortCutBannerId;
    if ( !v30 )
      return 0LL;
    result = (System_Single_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !result )
LABEL_19:
      sub_B5D69C(result, v27);
    if ( !result->max_length )
    {
      v44 = sub_B5D6C8(result);
      sub_B5D668(v44, 0LL);
    }
    LOWORD(result->m_Items[1]) = 44;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v30,
                                                                 (System_Char_array *)result,
                                                                 0LL);
    v32 = ConstantStrMaster___c_TypeInfo;
    if ( (BYTE3(ConstantStrMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
      v32 = ConstantStrMaster___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_string__float__TypeInfo);
      System_Func_WarBoardAIRoute_RouteData__float____ctor(
        _9__7_0,
        v35,
        Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__,
        (const MethodInfo_2C30BC4 *)Method_System_Func_string__float___ctor__);
      v36 = ConstantStrMaster___c_TypeInfo->static_fields;
      v36->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v36->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                                 v31,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1CB37F8 *)Method_System_Linq_Enumerable_Select_string__float___);
    return System_Linq_Enumerable__ToArray_float_(
             v43,
             (const MethodInfo_1CB78EC *)Method_System_Linq_Enumerable_ToArray_float___);
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array *v9; // x1
  bool EntityFromId_ServantVoiceEntity; // w8
  System_String_array *v11; // x0
  System_String_o *v12; // x19
  __int64 v13; // x0
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA74C & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___, v6, v7, v8);
    byte_42EA74C = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  v11 = 0LL;
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      goto LABEL_10;
    v12 = *(System_String_o **)&result->fields.type;
    v11 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v11 )
      goto LABEL_10;
    v9 = v11;
    if ( !v11->max_length )
    {
      v13 = sub_B5D6C8(v11);
      sub_B5D668(v13, 0LL);
    }
    LOWORD(v11->m_Items[0]) = 44;
    if ( !v12 )
LABEL_10:
      sub_B5D69C(v11, v9);
    return System_String__Split(v12, (System_Char_array *)v11, 0LL);
  }
  return v11;
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
      v7 = sub_B5D6C8(ValueFloatArray);
      sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *value; // x19
  System_Char_array *v9; // x0
  System_Char_array *v10; // x1
  System_Char_array *v11; // x19
  int max_length; // w8
  System_String_array_array *v13; // x20
  __int64 v14; // x24
  BattleServantConfConponent_o *i; // x21
  System_String_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42EA74D & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&string_____TypeInfo, v5, v6, v7);
    byte_42EA74D = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v9 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_22;
  v10 = v9;
  if ( !v9->max_length )
    goto LABEL_23;
  v9->m_Items[2] = 47;
  if ( !value || (v9 = (System_Char_array *)System_String__Split(value, v9, 0LL)) == 0LL )
LABEL_22:
    sub_B5D69C(v9, v10);
  v11 = v9;
  v9 = (System_Char_array *)sub_B5D5DC(string_____TypeInfo, v9->max_length);
  max_length = v11->max_length;
  v13 = (System_String_array_array *)v9;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    for ( i = (BattleServantConfConponent_o *)&v9->m_Items[2];
          (unsigned int)v14 < max_length;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      v16 = *(System_String_o **)&v11->m_Items[4 * v14 + 2];
      v9 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_22;
      v10 = v9;
      if ( !v9->max_length )
        break;
      v9->m_Items[2] = 44;
      if ( !v16 )
        goto LABEL_22;
      v9 = (System_Char_array *)System_String__Split(v16, v9, 0LL);
      if ( !v13 )
        goto LABEL_22;
      v23 = (System_Int32_array **)v9;
      if ( v9 )
      {
        v9 = (System_Char_array *)sub_B5D684(v9, v13->obj.klass->_1.element_class);
        if ( !v9 )
        {
          v26 = sub_B5D6BC(0LL);
          sub_B5D668(v26, 0LL);
        }
      }
      if ( (unsigned int)v14 >= v13->max_length )
        break;
      i->klass = (BattleServantConfConponent_c *)v23;
      sub_B5D560(i, v23, v17, v18, v19, v20, v21, v22);
      max_length = v11->max_length;
      if ( (int)++v14 >= max_length )
        return v13;
    }
LABEL_23:
    v25 = sub_B5D6C8(v9);
    sub_B5D668(v25, 0LL);
  }
  return v13;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_o *result; // x0

  if ( (byte_42EA746 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA746 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_1AE49F4 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D47 & 1) == 0 )
  {
    sub_B5D5C4(&ConstantStrMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6D47 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)ConstantStrMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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