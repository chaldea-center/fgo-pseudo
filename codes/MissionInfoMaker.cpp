void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  struct MissionInfoMaker_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8749 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16994/*"bit_present_get{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5935/*"Effect/Talk/bit_present_get{0}"*/, v11, v12, v13);
    byte_42E8749 = 1;
  }
  MissionInfoMaker_TypeInfo->static_fields->NORMAL_ICON_PRIORITY = 0;
  MissionInfoMaker_TypeInfo->static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_5935/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5935/*"Effect/Talk/bit_present_get{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->ITEM_GET_ASSET_NAME, v15, v2, v3, v4, v5, v6, v7);
  v16 = MissionInfoMaker_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_16994/*"bit_present_get{0}"*/;
  v16->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_16994/*"bit_present_get{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->ITEM_GET_EFFECT_NAME, v17, v18, v19, v20, v21, v22, v23);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  MissionInfoMaker___c_c *v26; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v29; // x21
  struct MissionInfoMaker___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x1
  EventMissionConditionEntity_o *v39; // x8
  System_String_o **p_closedMessage; // x8

  if ( (byte_42E873D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__, v17, v18, v19);
    sub_B5D5C4(&MissionInfoMaker___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E873D = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v26 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v26 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_0,
        v29,
        Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v30 = MissionInfoMaker___c_TypeInfo->static_fields;
      v30->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v30->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__12_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v39 = entityList->fields._items->m_Items[0];
    if ( !v39 )
      sub_B5D69C(v37, v38);
    p_closedMessage = &v39->fields.closedMessage;
  }
  else
  {
    p_closedMessage = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_closedMessage;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetCommandCodeData(
        GetCommandCodes_array *commandCodeList,
        GetCommandCodes_o **data,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x22
  __int64 v24; // x26
  GetCommandCodes_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v35; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E8746 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)data, commandCodeId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8746 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)data,
    0LL,
    *(System_String_array ***)&commandCodeId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B5D69C(Instance, v21);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v24 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v24 >= max_length )
    {
      v35 = sub_B5D6C8(Instance);
      sub_B5D668(v35, 0LL);
    }
    v25 = commandCodeList->m_Items[v24];
    if ( !v25 || !v23 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v23,
                                  &entity,
                                  v25->fields.userCommandCodeId,
                                  (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v27 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v27;
      *(_QWORD *)&v37.fields.fakeValue = v26;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v24 >= max_length )
      return 0;
  }
  *data = v25;
  sub_B5D560((BattleServantConfConponent_o *)data, (System_Int32_array **)v25, v28, v29, v30, v31, v32, v33);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  MissionInfoMaker___c_c *v26; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v29; // x21
  struct MissionInfoMaker___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x1
  EventMissionConditionEntity_o *v39; // x8
  System_String_o **p_conditionMessage; // x8

  if ( (byte_42E873C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__, v17, v18, v19);
    sub_B5D5C4(&MissionInfoMaker___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E873C = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v26 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v26 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v29,
        Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v30 = MissionInfoMaker___c_TypeInfo->static_fields;
      v30->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v30->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v39 = entityList->fields._items->m_Items[0];
    if ( !v39 )
      sub_B5D69C(v37, v38);
    p_conditionMessage = &v39->fields.conditionMessage;
  }
  else
  {
    p_conditionMessage = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_conditionMessage;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_32A2DF4[progressType - 2];
}


System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v51; // x20
  int max_length; // w8
  const MethodInfo_2F32338 **v53; // x24
  const MethodInfo_2F32338 **v54; // x26
  const MethodInfo_2F32000 **v55; // x28
  unsigned int v56; // w25
  EventMissionConditionEntity_o *v57; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v59; // x23
  const MethodInfo_2F32000 **v60; // x19
  const MethodInfo_2F32338 **v61; // x28
  const MethodInfo_2F32338 **v62; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v65; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x24
  __int64 v68; // x0
  EventMissionConditionEntity_array *v69; // [xsp+8h] [xbp-58h]

  if ( (byte_42E8739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, missionId, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v30,
      v31,
      v32);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    byte_42E8739 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_21;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v51 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v51,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_21;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v53 = (const MethodInfo_2F32338 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v54 = (const MethodInfo_2F32338 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v55 = (const MethodInfo_2F32000 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v56 = 0;
    v69 = MissionCondList;
    while ( 1 )
    {
      if ( v56 >= max_length )
      {
        v68 = sub_B5D6C8(Instance);
        sub_B5D668(v68, 0LL);
      }
      v57 = MissionCondList->m_Items[v56];
      if ( !v57 || !v51 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v51,
              v57->fields.missionProgressType,
              *v53) )
      {
        missionProgressType = v57->fields.missionProgressType;
        v59 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v59,
          (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v51,
          missionProgressType,
          (WarBoardAIRoute_RouteData_o *)v59,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v51,
                                    v57->fields.missionProgressType,
                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
              v57->fields.condGroup,
              *v54) )
      {
        v60 = v55;
        v61 = v54;
        v62 = v53;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v51,
                 v57->fields.missionProgressType,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v57->fields.condGroup;
        v65 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item;
        v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v66,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v65 )
          break;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v65,
          condGroup,
          (WarBoardAIRoute_RouteData_o *)v66,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v53 = v62;
        v54 = v61;
        v55 = v60;
        MissionCondList = v69;
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v51,
                                    v57->fields.missionProgressType,
                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v57->fields.condGroup,
                                    *v55);
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      max_length = MissionCondList->max_length;
      if ( (int)++v56 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v51;
    }
LABEL_21:
    sub_B5D69C(Instance, v49);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v51;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  GiftEntity_array *v4; // x19
  int max_length; // w8
  unsigned int v6; // w21
  GiftEntity_o *v7; // x20
  int32_t priority; // w23
  __int64 v10; // x0

  v4 = entities;
  if ( (byte_42E8742 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8742 = 1;
  }
  if ( !v4 )
    goto LABEL_16;
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v10 = sub_B5D6C8(entities);
        sub_B5D668(v10, 0LL);
      }
      v7 = v4->m_Items[v6];
      if ( !v7 )
        break;
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      priority = v7->fields.priority;
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      }
      if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
        return v7;
      max_length = v4->max_length;
      if ( (int)++v6 >= max_length )
        return 0LL;
    }
LABEL_16:
    sub_B5D69C(entities, method);
  }
  return 0LL;
}


bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E873F & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, progStatus, (_DWORD)method, v3);
    byte_42E873F = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0LL);
}


int32_t __fastcall MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  ItemEntity_o *v19; // x19
  MissionInfoMaker_c *v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8743 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20269/*"itemGetEffectId"*/, v14, v15, v16);
    byte_42E8743 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v19 = (ItemEntity_o *)entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    if ( v19 )
      return ItemEntity__getScript(
               v19,
               (System_String_o *)StringLiteral_20269/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_16:
    sub_B5D69C(Instance, v18);
  }
  v21 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v21 = MissionInfoMaker_TypeInfo;
  }
  return v21->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_EventMissionConditionEntity__o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  int v15; // w19
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  v4 = entities;
  if ( (byte_42E873A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__,
      v8,
      v9,
      v10);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_B5D5C4(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v11,
                                                                                   v12,
                                                                                   v13);
    byte_42E873A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v4 )
    sub_B5D69C(entities, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v14);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v17.fields.current, 0LL) )
    {
      v15 = 2;
      goto LABEL_10;
    }
  }
  v15 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v15 != 2;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetMissionProgressType(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v46; // x19
  bool v47; // w22
  __int64 v48; // x1
  int key; // w24
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x1
  Il2CppObject *currentValue; // x20
  __int64 v54; // x8
  char v55; // w25
  int v56; // w8
  int32_t v57; // w20
  int v58; // w19
  _WORD v60[32]; // [xsp+8h] [xbp-E8h] BYREF
  int v61; // [xsp+48h] [xbp-A8h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v62; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_42E8738 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      missionId,
      isNowMission,
      ignoreStartCondition);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v36,
      v37,
      v38);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v39, v40, v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v42,
      v43,
      v44);
    byte_42E8738 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  v61 = 0;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(
                                 eventId,
                                 missionId,
                                 (const MethodInfo *)isNowMission);
  if ( !EventMissionConditionGroup )
    return 4;
  v46 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)EventMissionConditionGroup,
         (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v60,
    v46,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v63 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v60;
  v47 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v63,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v63.fields.current.fields.key;
    if ( !v47 || LODWORD(v63.fields.current.fields.key) != 3 )
    {
      if ( !v63.fields.current.fields.value )
        sub_B5D69C(0LL, v48);
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v63.fields.current.fields.value,
                 (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_B5D69C(0LL, v51);
      System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v60,
        Values,
        (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v62 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v60;
      while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
                &v62,
                (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
      {
        currentValue = v62.fields.currentValue;
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetMissionConditionGroupProgress(
               (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
               v52) )
        {
          v54 = v61;
          v55 = 1;
          goto LABEL_21;
        }
      }
      v54 = v61;
      v55 = 0;
LABEL_21:
      *(_DWORD *)&v60[2 * v54 + 20] = 127;
      ++v61;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
        &v62,
        (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      v56 = v61;
      if ( v61 && *(_DWORD *)&v60[2 * v61 + 18] == 127 )
        v56 = --v61;
      if ( (v55 & 1) == 0 )
      {
        *(_DWORD *)&v60[2 * v56 + 20] = 168;
        v57 = key - 1;
        ++v61;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v63,
          (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        goto LABEL_28;
      }
    }
  }
  *(_DWORD *)&v60[2 * v61++ + 20] = 168;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v63,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  v57 = 4;
LABEL_28:
  if ( v61 && *(_DWORD *)&v60[2 * v61 + 18] == 168 )
    --v61;
  if ( v57 == 4 )
  {
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v60,
      v46,
      (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v63 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v60;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v63,
              (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v63.fields.current.fields.key) == 4 )
      {
        v58 = 1;
        goto LABEL_37;
      }
    }
    v58 = 0;
LABEL_37:
    *(_DWORD *)&v60[2 * v61++ + 20] = 233;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v63,
      (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    if ( v61 && *(_DWORD *)&v60[2 * v61 + 18] == 233 )
      --v61;
    if ( !v58 )
      return 0;
  }
  return v57;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v14; // x1
  int v15; // w8
  unsigned int v16; // w9
  __int64 v17; // x10
  __int64 v18; // x0

  if ( (byte_42E873B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionId, progressType, isNowMission);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E873B = 1;
  }
  if ( progressType == 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_B5D69C(Instance, v14);
    }
    v15 = *((_DWORD *)Instance + 6);
    if ( v15 < 1 )
    {
      return 3;
    }
    else
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= v15 )
        {
          v18 = sub_B5D6C8(Instance);
          sub_B5D668(v18, 0LL);
        }
        v17 = *((_QWORD *)Instance + (int)v16 + 4);
        if ( !v17 )
          goto LABEL_22;
        if ( *(_DWORD *)(v17 + 24) == missionId )
          break;
        if ( (int)++v16 >= v15 )
          return 3;
      }
      if ( *(_DWORD *)(v17 + 32) == 4 )
        return 3;
      else
        return 4;
    }
  }
  else if ( progressType == 3 )
  {
    if ( isNowMission )
      return 2;
    else
      return 5;
  }
  else
  {
    return progressType == 2;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MissionInfoMaker__GetProgressText(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        int32_t progStatus,
        int64_t *progressNum,
        int64_t *targetNum,
        const MethodInfo *method)
{
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  MissionInfoMaker___c_c *v48; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x23
  Il2CppObject *v51; // x24
  struct MissionInfoMaker___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  EventMissionConditionEntity_o *v59; // x8
  int32_t condGroup; // w23
  unsigned int v61; // w22
  Il2CppObject *current; // x21
  int64_t v63; // x25
  int64_t *p_monitor; // x21
  int64_t v65; // x8
  int64_t monitor; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *v69; // x20
  Il2CppObject *v70; // x0
  int64_t v72; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-58h] BYREF
  int64_t v74; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42E873E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_EventMissionConditionEntity___ctor__,
      progStatus,
      (_DWORD)progressNum,
      targetNum);
    sub_B5D5C4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&long_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v33, v34, v35);
    sub_B5D5C4(&Method_MissionInfoMaker___c__GetProgressText_b__13_0__, v36, v37, v38);
    sub_B5D5C4(&MissionInfoMaker___c_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_23839/*"{0:N0}/{1:N0}"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_1/*""*/, v45, v46, v47);
    byte_42E873E = 1;
  }
  memset(&v73, 0, sizeof(v73));
  *progressNum = 0LL;
  *targetNum = 0LL;
  v48 = MissionInfoMaker___c_TypeInfo;
  if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v48 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v51,
      Method_MissionInfoMaker___c__GetProgressText_b__13_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v52 = MissionInfoMaker___c_TypeInfo->static_fields;
    v52->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v52->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !entityList )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( !entityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v59 = entityList->fields._items->m_Items[0];
  if ( !v59 )
LABEL_32:
    sub_B5D69C(v48, *(_QWORD *)&progStatus);
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  condGroup = v59->fields.condGroup;
  v61 = progStatus - 3;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v73,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v73,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v67 )
      break;
    current = v73.fields.current;
    if ( !v73.fields.current )
      sub_B5D69C(v67, v68);
    if ( HIDWORD(v73.fields.current[2].klass) == condGroup )
    {
      v63 = *progressNum;
      if ( LODWORD(v73.fields.current[2].monitor) == 12 )
      {
        p_monitor = targetNum;
        *progressNum = v63
                     + EventMissionConditionEntity__getProgressNumByDateType(
                         (EventMissionConditionEntity_o *)v73.fields.current,
                         0LL);
        v65 = 1LL;
      }
      else
      {
        if ( v61 >= 2 )
        {
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v73.fields.current,
                      0LL);
          p_monitor = (int64_t *)&current[3].monitor;
        }
        else
        {
          p_monitor = (int64_t *)&v73.fields.current[3].monitor;
          monitor = (int64_t)v73.fields.current[3].monitor;
        }
        *progressNum = monitor + v63;
        v65 = *targetNum;
      }
      *targetNum = *p_monitor + v65;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v73,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v74 = *progressNum;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v74);
  v72 = *targetNum;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v72);
  return System_String__Format_44573324((System_String_o *)StringLiteral_23839/*"{0:N0}/{1:N0}"*/, v69, v70, 0LL);
}


float __fastcall MissionInfoMaker__GetProgressValue(
        int32_t progStatus,
        int64_t progNum,
        int64_t targetNum,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.0;
  if ( (unsigned int)progStatus >= 2 )
    return (float)progNum / (float)targetNum;
  return result;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetSubGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  GiftEntity_array *v4; // x19
  int max_length; // w8
  __int64 v6; // x21
  GiftEntity_o *v7; // x20
  int32_t priority; // w24
  __int64 v10; // x0

  v4 = entities;
  if ( (byte_42E8740 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8740 = 1;
  }
  if ( !v4 )
    return 0LL;
  max_length = v4->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B5D6C8(entities);
      sub_B5D668(v10, 0LL);
    }
    v7 = v4->m_Items[v6];
    if ( !v7 )
      sub_B5D69C(entities, method);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v7->fields.priority;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( priority == HIDWORD(entities->m_Items[19]->klass) )
      break;
    max_length = v4->max_length;
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x22
  __int64 v24; // x26
  GetSvts_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v35; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E8745 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)data, svtId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8745 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)data,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B5D69C(Instance, v21);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v24 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v24 >= max_length )
    {
      v35 = sub_B5D6C8(Instance);
      sub_B5D668(v35, 0LL);
    }
    v25 = svtList->m_Items[v24];
    if ( !v25 || !v23 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v23,
                                  &entity,
                                  v25->fields.userSvtId,
                                  (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v27 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v27;
      *(_QWORD *)&v37.fields.fakeValue = v26;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v24 >= max_length )
      return 0;
  }
  *data = v25;
  sub_B5D560((BattleServantConfConponent_o *)data, (System_Int32_array **)v25, v28, v29, v30, v31, v32, v33);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *Instance; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21

  if ( (byte_42E8747 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8848/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v9, v10, v11);
    byte_42E8747 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v14 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v13);
  }
  CommonUI__OpenItemDetailDialog_18267660(
    (CommonUI_o *)Instance,
    v14,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v15; // x20

  if ( (byte_42E8748 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    byte_42E8748 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_9;
  v11 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(name, 0LL);
  detail = equipEntity->fields.detail;
  v15 = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(detail, 0LL);
  if ( !v11 )
LABEL_9:
    sub_B5D69C(Instance, v10);
  CommonUI__OpenItemDetailDialog_18267660(v11, v15, Instance, callback, 0LL);
}


void __fastcall MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  int32_t objectId; // w2
  __int64 *v55; // x8
  WarEntity_o **v56; // x1

  if ( (byte_42E8741 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeMaster___,
      (_DWORD)itemEntity,
      (_DWORD)servantEntity,
      commandCodeEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42E8741 = 1;
  }
  *itemEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)itemEntity,
    0LL,
    (System_String_array **)servantEntity,
    (System_String_array **)commandCodeEntity,
    (System_Boolean_array **)servantCostumeEntity,
    (System_Int32_array **)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)servantEntity, 0LL, v34, v35, v36, v37, v38, v39);
  *commandCodeEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)commandCodeEntity, 0LL, v40, v41, v42, v43, v44, v45);
  *servantCostumeEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)servantCostumeEntity, 0LL, v46, v47, v48, v49, v50, v51);
  if ( !giftEntity )
LABEL_18:
    sub_B5D69C(Instance, v53);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v55 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v56 = (WarEntity_o **)servantEntity;
      goto LABEL_14;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v55 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v56 = (WarEntity_o **)itemEntity;
      goto LABEL_14;
    case 9:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_18;
      ServantCostumeMaster__TryGetEntity(
        (ServantCostumeMaster_o *)Instance,
        servantCostumeEntity,
        giftEntity->fields.objectId / 100,
        giftEntity->fields.objectId % 100,
        0LL);
      return;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v55 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v56 = (WarEntity_o **)commandCodeEntity;
LABEL_14:
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        v56,
        objectId,
        (const MethodInfo_23FAE6C *)*v55);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__TryGetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        int32_t giftType,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x23
  __int64 v24; // x27
  bool v25; // w20
  GetSvts_o *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0
  int32_t type; // [xsp+0h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42E8744 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)data, svtId, *(_QWORD *)&giftType);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8744 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)data,
    0LL,
    *(System_String_array ***)&svtId,
    *(System_String_array ***)&giftType,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( svtList && *(_QWORD *)&svtList->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_31:
      sub_B5D69C(Instance, v21);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
      v24 = 0LL;
      v25 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v24 >= max_length )
        {
          v36 = sub_B5D6C8(Instance);
          sub_B5D668(v36, 0LL);
        }
        v26 = svtList->m_Items[v24];
        if ( !v26 || !v23 )
          goto LABEL_31;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      v23,
                                      &entity,
                                      v26->fields.userSvtId,
                                      (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          v28 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v40.fields.currentCryptoKey = v28;
          *(_QWORD *)&v40.fields.fakeValue = v27;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v40, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v26;
            sub_B5D560((BattleServantConfConponent_o *)data, (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v25 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v25;
            }
            else if ( type == 1 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v25 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v25;
            }
            else
            {
              Instance = (DataManager_o *)Gift__IsServant(type, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
        }
        max_length = svtList->max_length;
        if ( (int)++v24 >= max_length )
          return v25;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F50 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker___c_TypeInfo, v1, v2, v3);
    byte_42E5F50 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionInfoMaker___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MissionInfoMaker___c___ctor(MissionInfoMaker___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionInfoMaker___c___GetClosedMessage_b__12_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__11_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}