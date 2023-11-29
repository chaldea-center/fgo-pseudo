void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  struct MissionInfoMaker_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7BDA & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16722, v8);
    sub_B16FFC(&StringLiteral_5839, v9);
    byte_40F7BDA = 1;
  }
  MissionInfoMaker_TypeInfo->static_fields->NORMAL_ICON_PRIORITY = 0;
  MissionInfoMaker_TypeInfo->static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5839;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5839;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->ITEM_GET_ASSET_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = MissionInfoMaker_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16722;
  v12->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_16722;
  sub_B16F98((BattleServantConfConponent_o *)&v12->ITEM_GET_EFFECT_NAME, v13, v14, v15, v16, v17, v18, v19);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MissionInfoMaker___c_c *v13; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v16; // x21
  struct MissionInfoMaker___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  EventMissionConditionEntity_o *v24; // x8
  System_String_o **p_closedMessage; // x8

  if ( (byte_40F7BCE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v9);
    sub_B16FFC(&Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__, v10);
    sub_B16FFC(&MissionInfoMaker___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F7BCE = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v13 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v13 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_0,
        v16,
        Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v17 = MissionInfoMaker___c_TypeInfo->static_fields;
      v17->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__12_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v24 = entityList->fields._items->m_Items[0];
    if ( !v24 )
      sub_B170D4();
    p_closedMessage = &v24->fields.closedMessage;
  }
  else
  {
    p_closedMessage = (System_String_o **)&StringLiteral_1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x22
  __int64 v20; // x26
  GetCommandCodes_o *v21; // x23
  __int64 v22; // x24
  __int64 v23; // x25
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40F7BD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F7BD7 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  v20 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
      sub_B170A0();
    }
    v21 = commandCodeList->m_Items[v20];
    if ( !v21 || !v19 )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                        v19,
                                                                        &entity,
                                                                        v21->fields.userCommandCodeId,
                                                                        (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v23 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v23;
      *(_QWORD *)&v31.fields.fakeValue = v22;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                          v31,
                                                                          0LL);
      if ( (_DWORD)MasterData_WarQuestSelectionMaster == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v20 >= max_length )
      return 0;
  }
  *data = v21;
  sub_B16F98((BattleServantConfConponent_o *)data, (System_Int32_array **)v21, v17, v24, v25, v26, v27, v28);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MissionInfoMaker___c_c *v13; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v16; // x21
  struct MissionInfoMaker___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  EventMissionConditionEntity_o *v24; // x8
  System_String_o **p_conditionMessage; // x8

  if ( (byte_40F7BCD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v9);
    sub_B16FFC(&Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__, v10);
    sub_B16FFC(&MissionInfoMaker___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F7BCD = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v13 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v13 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v16,
        Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v17 = MissionInfoMaker___c_TypeInfo->static_fields;
      v17->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v24 = entityList->fields._items->m_Items[0];
    if ( !v24 )
      sub_B170D4();
    p_conditionMessage = &v24->fields.conditionMessage;
  }
  else
  {
    p_conditionMessage = (System_String_o **)&StringLiteral_1;
  }
  return *p_conditionMessage;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_3133804[progressType - 2];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionConditionEntity_array *MissionCondList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  const MethodInfo_2DE9630 **v31; // x24
  const MethodInfo_2DE9630 **v32; // x26
  const MethodInfo_2DE92F8 **v33; // x28
  unsigned int v34; // w25
  EventMissionConditionEntity_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  const MethodInfo_2DE92F8 **v43; // x19
  const MethodInfo_2DE9630 **v44; // x28
  const MethodInfo_2DE9630 **v45; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *v46; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x24
  WarBoardEvalValueSquare_EvalValueSquare_o *v54; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v55; // x0
  EventMissionConditionEntity_array *v57; // [xsp+8h] [xbp-58h]

  if ( (byte_40F7BCA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v12);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v13);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F7BCA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      MasterData_WarQuestSelectionMaster,
                      eventId,
                      missionId,
                      0LL);
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
                                                                                                   v22,
                                                                                                   v23,
                                                                                                   v24,
                                                                                                   v25);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_21;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v31 = (const MethodInfo_2DE9630 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v32 = (const MethodInfo_2DE9630 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v33 = (const MethodInfo_2DE92F8 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v34 = 0;
    v57 = MissionCondList;
    while ( 1 )
    {
      if ( v34 >= max_length )
      {
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      v35 = MissionCondList->m_Items[v34];
      if ( !v35 || !v26 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
              v35->fields.missionProgressType,
              *v31) )
      {
        missionProgressType = v35->fields.missionProgressType;
        v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v36, v37, v38, v39);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v41,
          (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
          missionProgressType,
          (WarBoardAIRoute_RouteData_o *)v41,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v26,
               v35->fields.missionProgressType,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Item )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item,
              v35->fields.condGroup,
              *v32) )
      {
        v43 = v33;
        v44 = v32;
        v45 = v31;
        v46 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                v26,
                v35->fields.missionProgressType,
                (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v35->fields.condGroup;
        v48 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v46;
        v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v49, v50, v51, v52);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v53,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v48 )
          break;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v48,
          condGroup,
          (WarBoardAIRoute_RouteData_o *)v53,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v31 = v45;
        v32 = v44;
        v33 = v43;
        MissionCondList = v57;
      }
      v54 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v26,
              v35->fields.missionProgressType,
              (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !v54 )
        break;
      v55 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v54,
              v35->fields.condGroup,
              *v33);
      if ( !v55 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      max_length = MissionCondList->max_length;
      if ( (int)++v34 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v26;
    }
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v26;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  __int64 v2; // x2
  GiftEntity_array *v3; // x19
  int max_length; // w8
  unsigned int v5; // w21
  GiftEntity_o *v6; // x20
  int32_t priority; // w23

  v3 = entities;
  if ( (byte_40F7BD3 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BD3 = 1;
  }
  if ( !v3 )
    goto LABEL_16;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(entities, method, v2);
        sub_B170A0();
      }
      v6 = v3->m_Items[v5];
      if ( !v6 )
        break;
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      priority = v6->fields.priority;
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      }
      if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
        return v6;
      max_length = v3->max_length;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_16:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_40F7BD0 & 1) == 0 )
  {
    sub_B16FFC(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
    byte_40F7BD0 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *v9; // x19
  MissionInfoMaker_c *v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7BD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_19933, v6);
    byte_40F7BD4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v9 = (ItemEntity_o *)entity;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    if ( v9 )
      return ItemEntity__getScript(
               v9,
               (System_String_o *)StringLiteral_19933,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_16:
    sub_B170D4();
  }
  v11 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v11 = MissionInfoMaker_TypeInfo;
  }
  return v11->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int v6; // w19
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7BCB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v5);
    byte_40F7BCB = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !entities )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v8.fields.current, 0LL) )
    {
      v6 = 2;
      goto LABEL_10;
    }
  }
  v6 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v6 != 2;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetMissionProgressType(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v22; // x19
  bool v23; // w22
  int key; // w24
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *currentValue; // x20
  __int64 v28; // x8
  char v29; // w25
  int v30; // w8
  int32_t v31; // w20
  int v32; // w19
  _WORD v34[32]; // [xsp+8h] [xbp-E8h] BYREF
  int v35; // [xsp+48h] [xbp-A8h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_40F7BC9 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v20);
    byte_40F7BC9 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
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
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)EventMissionConditionGroup,
         (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
    v22,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v37 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34;
  v23 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v37,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v37.fields.current.fields.key;
    if ( !v23 || LODWORD(v37.fields.current.fields.key) != 3 )
    {
      if ( !v37.fields.current.fields.value )
        sub_B170D4();
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v37.fields.current.fields.value,
                 (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_B170D4();
      System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v34,
        Values,
        (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v36 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v34;
      while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
                &v36,
                (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
      {
        currentValue = v36.fields.currentValue;
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetMissionConditionGroupProgress(
               (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
               v26) )
        {
          v28 = v35;
          v29 = 1;
          goto LABEL_21;
        }
      }
      v28 = v35;
      v29 = 0;
LABEL_21:
      *(_DWORD *)&v34[2 * v28 + 20] = 127;
      ++v35;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
        &v36,
        (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      v30 = v35;
      if ( v35 && *(_DWORD *)&v34[2 * v35 + 18] == 127 )
        v30 = --v35;
      if ( (v29 & 1) == 0 )
      {
        *(_DWORD *)&v34[2 * v30 + 20] = 168;
        v31 = key - 1;
        ++v35;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v37,
          (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        goto LABEL_28;
      }
    }
  }
  *(_DWORD *)&v34[2 * v35++ + 20] = 168;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v37,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  v31 = 4;
LABEL_28:
  if ( v35 && *(_DWORD *)&v34[2 * v35 + 18] == 168 )
    --v35;
  if ( v31 == 4 )
  {
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
      v22,
      (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v37 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v37,
              (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v37.fields.current.fields.key) == 4 )
      {
        v32 = 1;
        goto LABEL_37;
      }
    }
    v32 = 0;
LABEL_37:
    *(_DWORD *)&v34[2 * v35++ + 20] = 233;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v37,
      (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    if ( v35 && *(_DWORD *)&v34[2 * v35 + 18] == 233 )
      --v35;
    if ( !v32 )
      return 0;
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventMissionEntity_array *UserEventMissionList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  unsigned int v17; // w9
  UserEventMissionEntity_o *v18; // x10

  if ( (byte_40F7BCC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, *(_QWORD *)&missionId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F7BCC = 1;
  }
  if ( progressType == 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(
                                   MasterData_WarQuestSelectionMaster,
                                   eventId,
                                   0LL)) == 0LL )
    {
LABEL_22:
      sub_B170D4();
    }
    max_length = UserEventMissionList->max_length;
    if ( max_length < 1 )
    {
      return 3;
    }
    else
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
        {
          sub_B17100(UserEventMissionList, v14, v15);
          sub_B170A0();
        }
        v18 = UserEventMissionList->m_Items[v17];
        if ( !v18 )
          goto LABEL_22;
        if ( v18->fields.missionId == missionId )
          break;
        if ( (int)++v17 >= max_length )
          return 3;
      }
      if ( v18->fields.missionProgressType == 4 )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  MissionInfoMaker___c_c *v22; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x23
  Il2CppObject *v25; // x24
  struct MissionInfoMaker___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  EventMissionConditionEntity_o *v33; // x8
  int32_t condGroup; // w23
  unsigned int v35; // w22
  Il2CppObject *current; // x21
  int64_t v37; // x25
  int64_t *p_monitor; // x21
  int64_t v39; // x8
  int64_t monitor; // x0
  Il2CppObject *v41; // x20
  Il2CppObject *v42; // x0
  int64_t v44; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-58h] BYREF
  int64_t v46; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40F7BCF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionConditionEntity___ctor__, *(_QWORD *)&progStatus);
    sub_B16FFC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v17);
    sub_B16FFC(&Method_MissionInfoMaker___c__GetProgressText_b__13_0__, v18);
    sub_B16FFC(&MissionInfoMaker___c_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_23434, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40F7BCF = 1;
  }
  memset(&v45, 0, sizeof(v45));
  *progressNum = 0LL;
  *targetNum = 0LL;
  v22 = MissionInfoMaker___c_TypeInfo;
  if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v22 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                           *(_QWORD *)&progStatus,
                                                                           progressNum,
                                                                           targetNum,
                                                                           method);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v25,
      Method_MissionInfoMaker___c__GetProgressText_b__13_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v26 = MissionInfoMaker___c_TypeInfo->static_fields;
    v26->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !entityList )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( !entityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v33 = entityList->fields._items->m_Items[0];
  if ( !v33 )
LABEL_32:
    sub_B170D4();
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1;
  condGroup = v33->fields.condGroup;
  v35 = progStatus - 3;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B170D4();
    if ( HIDWORD(v45.fields.current[2].klass) == condGroup )
    {
      v37 = *progressNum;
      if ( LODWORD(v45.fields.current[2].monitor) == 12 )
      {
        p_monitor = targetNum;
        *progressNum = v37
                     + EventMissionConditionEntity__getProgressNumByDateType(
                         (EventMissionConditionEntity_o *)v45.fields.current,
                         0LL);
        v39 = 1LL;
      }
      else
      {
        if ( v35 >= 2 )
        {
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v45.fields.current,
                      0LL);
          p_monitor = (int64_t *)&current[3].monitor;
        }
        else
        {
          p_monitor = (int64_t *)&v45.fields.current[3].monitor;
          monitor = (int64_t)v45.fields.current[3].monitor;
        }
        *progressNum = monitor + v37;
        v39 = *targetNum;
      }
      *targetNum = *p_monitor + v39;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v46 = *progressNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46);
  v44 = *targetNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44);
  return System_String__Format_43739268((System_String_o *)StringLiteral_23434, v41, v42, 0LL);
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
  __int64 v2; // x2
  GiftEntity_array *v3; // x19
  int max_length; // w8
  __int64 v5; // x21
  GiftEntity_o *v6; // x20
  int32_t priority; // w24

  v3 = entities;
  if ( (byte_40F7BD1 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BD1 = 1;
  }
  if ( !v3 )
    return 0LL;
  max_length = v3->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(entities, method, v2);
      sub_B170A0();
    }
    v6 = v3->m_Items[v5];
    if ( !v6 )
      sub_B170D4();
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v6->fields.priority;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( priority == HIDWORD(entities->m_Items[19]->klass) )
      break;
    max_length = v3->max_length;
    if ( (int)++v5 >= max_length )
      return 0LL;
  }
  return v6;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x22
  __int64 v20; // x26
  GetSvts_o *v21; // x23
  __int64 v22; // x24
  __int64 v23; // x25
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40F7BD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F7BD6 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  v20 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
      sub_B170A0();
    }
    v21 = svtList->m_Items[v20];
    if ( !v21 || !v19 )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                        v19,
                                                                        &entity,
                                                                        v21->fields.userSvtId,
                                                                        (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v23 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v23;
      *(_QWORD *)&v31.fields.fakeValue = v22;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                          v31,
                                                                          0LL);
      if ( (_DWORD)MasterData_WarQuestSelectionMaster == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v20 >= max_length )
      return 0;
  }
  *data = v21;
  sub_B16F98((BattleServantConfConponent_o *)data, (System_Int32_array **)v21, v17, v24, v25, v26, v27, v28);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  CommonUI_o *Instance; // x0

  if ( (byte_40F7BD8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_8729, v6);
    byte_40F7BD8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8729, 0LL);
  if ( !costumeEntity
    || (v8 = System_String__Format(v7, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__OpenItemDetailDialog_18297320(Instance, v8, costumeEntity->fields.costumeReleaseDetail, callback, 0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0

  if ( (byte_40F7BD9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F7BD9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(detail, 0LL);
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  CommonUI__OpenItemDetailDialog_18297320(v7, v11, v12, callback, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t objectId; // w2
  __int64 *v41; // x8
  WarEntity_o **v42; // x1
  WebViewManager_o *v43; // x0
  WebViewManager_o *v44; // x0
  WebViewManager_o *v45; // x0
  ServantCostumeMaster_o *v46; // x0

  if ( (byte_40F7BD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40F7BD2 = 1;
  }
  *itemEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)itemEntity,
    0LL,
    (System_String_array **)servantEntity,
    (System_String_array **)commandCodeEntity,
    (System_Boolean_array **)servantCostumeEntity,
    (System_Int32_array **)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)servantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  *commandCodeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)commandCodeEntity, 0LL, v26, v27, v28, v29, v30, v31);
  *servantCostumeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)servantCostumeEntity, 0LL, v32, v33, v34, v35, v36, v37);
  if ( !giftEntity )
LABEL_18:
    sub_B170D4();
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)servantEntity;
      goto LABEL_14;
    case 2:
      v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v44 )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)v44,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)itemEntity;
      goto LABEL_14;
    case 9:
      v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v45 )
        goto LABEL_18;
      v46 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v45,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v46 )
        goto LABEL_18;
      ServantCostumeMaster__TryGetEntity(
        v46,
        servantCostumeEntity,
        giftEntity->fields.objectId / 100,
        giftEntity->fields.objectId % 100,
        0LL);
      return;
    case 0xB:
      v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v43 )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)v43,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)commandCodeEntity;
LABEL_14:
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        MasterData_WarQuestSelectionMaster,
        v42,
        objectId,
        (const MethodInfo_266F3E4 *)*v41);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x23
  __int64 v20; // x27
  bool v21; // w20
  GetSvts_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t type; // [xsp+0h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40F7BD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F7BD5 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B16F98(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_31:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      v20 = 0LL;
      v21 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
        {
          sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
          sub_B170A0();
        }
        v22 = svtList->m_Items[v20];
        if ( !v22 || !v19 )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                            v19,
                                                                            &entity,
                                                                            v22->fields.userSvtId,
                                                                            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          v24 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                              v34,
                                                                              0LL);
          if ( (_DWORD)MasterData_WarQuestSelectionMaster == svtId )
          {
            *data = v22;
            sub_B16F98((BattleServantConfConponent_o *)data, (System_Int32_array **)v22, v17, v25, v26, v27, v28, v29);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              if ( !entity )
                goto LABEL_31;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserServantEntity__IsEventJoin(
                                                                                  entity,
                                                                                  0LL);
              v21 = 1;
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                return v21;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_31;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserServantEntity__IsEventJoin(
                                                                                  entity,
                                                                                  0LL);
              v21 = 1;
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                return v21;
            }
            else
            {
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)Gift__IsServant(type, 0LL);
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                return 1;
            }
          }
        }
        max_length = svtList->max_length;
        if ( (int)++v20 >= max_length )
          return v21;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F861C & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker___c_TypeInfo, v1);
    byte_40F861C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MissionInfoMaker___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionInfoMaker___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__11_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}