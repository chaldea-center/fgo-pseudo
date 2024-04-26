void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct MissionInfoMaker_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43504E3 & 1) == 0 )
  {
    sub_B70694(&MissionInfoMaker_TypeInfo);
    sub_B70694(&StringLiteral_17039/*"bit_present_get{0}"*/);
    sub_B70694(&StringLiteral_5948/*"Effect/Talk/bit_present_get{0}"*/);
    byte_43504E3 = 1;
  }
  MissionInfoMaker_TypeInfo->static_fields->NORMAL_ICON_PRIORITY = 0;
  MissionInfoMaker_TypeInfo->static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5948/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5948/*"Effect/Talk/bit_present_get{0}"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->ITEM_GET_ASSET_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = MissionInfoMaker_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17039/*"bit_present_get{0}"*/;
  v9->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17039/*"bit_present_get{0}"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->ITEM_GET_EFFECT_NAME, v10, v11, v12, v13, v14, v15, v16);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct MissionInfoMaker___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  EventMissionConditionEntity_o *v16; // x8
  System_String_o **p_closedMessage; // x8

  if ( (byte_43504D7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventMissionConditionEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B70694(&Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__);
    sub_B70694(&MissionInfoMaker___c_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43504D7 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_0,
        v6,
        Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v7 = MissionInfoMaker___c_TypeInfo->static_fields;
      v7->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v7->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__12_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v16 = entityList->fields._items->m_Items[0];
    if ( !v16 )
      sub_B7076C(v14, v15);
    p_closedMessage = &v16->fields.closedMessage;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x22
  __int64 v15; // x26
  GetCommandCodes_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v26; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_43504E0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504E0 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B70630(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B7076C(Instance, v12);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
    {
      v26 = sub_B70798(Instance);
      sub_B70738(v26, 0LL);
    }
    v16 = commandCodeList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v14,
                                  &entity,
                                  v16->fields.userCommandCodeId,
                                  (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v18 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v18;
      *(_QWORD *)&v28.fields.fakeValue = v17;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v28, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_B70630((BattleServantConfConponent_o *)data, (System_Int32_array **)v16, v19, v20, v21, v22, v23, v24);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v6; // x21
  struct MissionInfoMaker___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  EventMissionConditionEntity_o *v16; // x8
  System_String_o **p_conditionMessage; // x8

  if ( (byte_43504D6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventMissionConditionEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B70694(&Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__);
    sub_B70694(&MissionInfoMaker___c_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43504D6 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v6,
        Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v7 = MissionInfoMaker___c_TypeInfo->static_fields;
      v7->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v7->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v16 = entityList->fields._items->m_Items[0];
    if ( !v16 )
      sub_B7076C(v14, v15);
    p_conditionMessage = &v16->fields.conditionMessage;
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
    return dword_32E9634[progressType - 2];
}


System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  int max_length; // w8
  const MethodInfo_2FC67DC **v10; // x24
  const MethodInfo_2FC67DC **v11; // x26
  const MethodInfo_2FC64A4 **v12; // x28
  unsigned int v13; // w25
  EventMissionConditionEntity_o *v14; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x23
  const MethodInfo_2FC64A4 **v17; // x19
  const MethodInfo_2FC67DC **v18; // x28
  const MethodInfo_2FC67DC **v19; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v22; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  __int64 v25; // x0
  EventMissionConditionEntity_array *v26; // [xsp+8h] [xbp-58h]

  if ( (byte_43504D3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504D3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_21;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_21;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (const MethodInfo_2FC67DC **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v11 = (const MethodInfo_2FC67DC **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v12 = (const MethodInfo_2FC64A4 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v13 = 0;
    v26 = MissionCondList;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v25 = sub_B70798(Instance);
        sub_B70738(v25, 0LL);
      }
      v14 = MissionCondList->m_Items[v13];
      if ( !v14 || !v8 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v8,
              v14->fields.missionProgressType,
              *v10) )
      {
        missionProgressType = v14->fields.missionProgressType;
        v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v16,
          (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v8,
          missionProgressType,
          (WarBoardAIRoute_RouteData_o *)v16,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v8,
                                    v14->fields.missionProgressType,
                                    (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
              v14->fields.condGroup,
              *v11) )
      {
        v17 = v12;
        v18 = v11;
        v19 = v10;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v8,
                 v14->fields.missionProgressType,
                 (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v14->fields.condGroup;
        v22 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item;
        v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v23,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v22 )
          break;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v22,
          condGroup,
          (WarBoardAIRoute_RouteData_o *)v23,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v10 = v19;
        v11 = v18;
        v12 = v17;
        MissionCondList = v26;
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v8,
                                    v14->fields.missionProgressType,
                                    (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v14->fields.condGroup,
                                    *v12);
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      max_length = MissionCondList->max_length;
      if ( (int)++v13 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
    }
LABEL_21:
    sub_B7076C(Instance, v6);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  GiftEntity_array *v2; // x19
  int max_length; // w8
  unsigned int v4; // w21
  GiftEntity_o *v5; // x20
  int32_t priority; // w23
  __int64 v8; // x0

  v2 = entities;
  if ( (byte_43504DC & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B70694(&MissionInfoMaker_TypeInfo);
    byte_43504DC = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  max_length = v2->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v8 = sub_B70798(entities);
        sub_B70738(v8, 0LL);
      }
      v5 = v2->m_Items[v4];
      if ( !v5 )
        break;
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      priority = v5->fields.priority;
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      }
      if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
        return v5;
      max_length = v2->max_length;
      if ( (int)++v4 >= max_length )
        return 0LL;
    }
LABEL_16:
    sub_B7076C(entities, method);
  }
  return 0LL;
}


bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_43504D9 & 1) == 0 )
  {
    sub_B70694(&UserMissionNewManager_TypeInfo);
    byte_43504D9 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ItemEntity_o *v5; // x19
  MissionInfoMaker_c *v7; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43504DD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&MissionInfoMaker_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_20328/*"itemGetEffectId"*/);
    byte_43504DD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v5 = (ItemEntity_o *)entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    if ( v5 )
      return ItemEntity__getScript(
               v5,
               (System_String_o *)StringLiteral_20328/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_16:
    sub_B7076C(Instance, v4);
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v7 = MissionInfoMaker_TypeInfo;
  }
  return v7->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  int v4; // w19
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  v2 = entities;
  if ( (byte_43504D4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_43504D4 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2 )
    sub_B7076C(entities, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7076C(0LL, v3);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v6.fields.current, 0LL) )
    {
      v4 = 2;
      goto LABEL_10;
    }
  }
  v4 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v4 != 2;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetMissionProgressType(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v10; // x19
  bool v11; // w22
  __int64 v12; // x1
  int key; // w24
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  Il2CppObject *currentValue; // x20
  __int64 v18; // x8
  char v19; // w25
  int v20; // w8
  int32_t v21; // w20
  int v22; // w19
  _WORD v24[32]; // [xsp+8h] [xbp-E8h] BYREF
  int v25; // [xsp+48h] [xbp-A8h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_43504D2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_B70694(&MissionInfoMaker_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_43504D2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
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
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)EventMissionConditionGroup,
         (const MethodInfo_2FC6164 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24,
    v10,
    (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v27 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24;
  v11 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v27,
            (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v27.fields.current.fields.key;
    if ( !v11 || LODWORD(v27.fields.current.fields.key) != 3 )
    {
      if ( !v27.fields.current.fields.value )
        sub_B7076C(0LL, v12);
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v27.fields.current.fields.value,
                 (const MethodInfo_2FC630C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_B7076C(0LL, v15);
      System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v24,
        Values,
        (const MethodInfo_25F5400 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v26 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v24;
      while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
                &v26,
                (const MethodInfo_2833E74 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
      {
        currentValue = v26.fields.currentValue;
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetMissionConditionGroupProgress(
               (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
               v16) )
        {
          v18 = v25;
          v19 = 1;
          goto LABEL_21;
        }
      }
      v18 = v25;
      v19 = 0;
LABEL_21:
      *(_DWORD *)&v24[2 * v18 + 20] = 127;
      ++v25;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
        &v26,
        (const MethodInfo_2833E70 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      v20 = v25;
      if ( v25 && *(_DWORD *)&v24[2 * v25 + 18] == 127 )
        v20 = --v25;
      if ( (v19 & 1) == 0 )
      {
        *(_DWORD *)&v24[2 * v20 + 20] = 168;
        v21 = key - 1;
        ++v25;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v27,
          (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        goto LABEL_28;
      }
    }
  }
  *(_DWORD *)&v24[2 * v25++ + 20] = 168;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v27,
    (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  v21 = 4;
LABEL_28:
  if ( v25 && *(_DWORD *)&v24[2 * v25 + 18] == 168 )
    --v25;
  if ( v21 == 4 )
  {
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24,
      v10,
      (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v27 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v27,
              (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v27.fields.current.fields.key) == 4 )
      {
        v22 = 1;
        goto LABEL_37;
      }
    }
    v22 = 0;
LABEL_37:
    *(_DWORD *)&v24[2 * v25++ + 20] = 233;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v27,
      (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    if ( v25 && *(_DWORD *)&v24[2 * v25 + 18] == 233 )
      --v25;
    if ( !v22 )
      return 0;
  }
  return v21;
}


int32_t __fastcall MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v11; // x1
  int v12; // w8
  unsigned int v13; // w9
  __int64 v14; // x10
  __int64 v15; // x0

  if ( (byte_43504D5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504D5 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_B7076C(Instance, v11);
    }
    v12 = *((_DWORD *)Instance + 6);
    if ( v12 < 1 )
    {
      return 3;
    }
    else
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v12 )
        {
          v15 = sub_B70798(Instance);
          sub_B70738(v15, 0LL);
        }
        v14 = *((_QWORD *)Instance + (int)v13 + 4);
        if ( !v14 )
          goto LABEL_22;
        if ( *(_DWORD *)(v14 + 24) == missionId )
          break;
        if ( (int)++v13 >= v12 )
          return 3;
      }
      if ( *(_DWORD *)(v14 + 32) == 4 )
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
  MissionInfoMaker___c_c *v9; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x23
  Il2CppObject *v12; // x24
  struct MissionInfoMaker___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventMissionConditionEntity_o *v20; // x8
  int32_t condGroup; // w23
  unsigned int v22; // w22
  Il2CppObject *current; // x21
  int64_t v24; // x25
  int64_t *p_monitor; // x21
  int64_t v26; // x8
  int64_t monitor; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  __int64 v32; // x2
  Il2CppObject *v33; // x0
  int64_t v35; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF
  int64_t v37; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_43504D8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventMissionConditionEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B70694(&Method_MissionInfoMaker___c__GetProgressText_b__13_0__);
    sub_B70694(&MissionInfoMaker___c_TypeInfo);
    sub_B70694(&StringLiteral_23911/*"{0:N0}/{1:N0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43504D8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  *progressNum = 0LL;
  *targetNum = 0LL;
  v9 = MissionInfoMaker___c_TypeInfo;
  if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v9 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v12,
      Method_MissionInfoMaker___c__GetProgressText_b__13_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v13 = MissionInfoMaker___c_TypeInfo->static_fields;
    v13->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !entityList )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( !entityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v20 = entityList->fields._items->m_Items[0];
  if ( !v20 )
LABEL_32:
    sub_B7076C(v9, *(_QWORD *)&progStatus);
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  condGroup = v20->fields.condGroup;
  v22 = progStatus - 3;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v28 )
      break;
    current = v36.fields.current;
    if ( !v36.fields.current )
      sub_B7076C(v28, v29);
    if ( HIDWORD(v36.fields.current[2].klass) == condGroup )
    {
      v24 = *progressNum;
      if ( LODWORD(v36.fields.current[2].monitor) == 12 )
      {
        p_monitor = targetNum;
        *progressNum = v24
                     + EventMissionConditionEntity__getProgressNumByDateType(
                         (EventMissionConditionEntity_o *)v36.fields.current,
                         0LL);
        v26 = 1LL;
      }
      else
      {
        if ( v22 >= 2 )
        {
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v36.fields.current,
                      0LL);
          p_monitor = (int64_t *)&current[3].monitor;
        }
        else
        {
          p_monitor = (int64_t *)&v36.fields.current[3].monitor;
          monitor = (int64_t)v36.fields.current[3].monitor;
        }
        *progressNum = monitor + v24;
        v26 = *targetNum;
      }
      *targetNum = *p_monitor + v26;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v37 = *progressNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v37, v30);
  v35 = *targetNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v32);
  return System_String__Format_44753704((System_String_o *)StringLiteral_23911/*"{0:N0}/{1:N0}"*/, v31, v33, 0LL);
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
  GiftEntity_array *v2; // x19
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x20
  int32_t priority; // w24
  __int64 v8; // x0

  v2 = entities;
  if ( (byte_43504DA & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B70694(&MissionInfoMaker_TypeInfo);
    byte_43504DA = 1;
  }
  if ( !v2 )
    return 0LL;
  max_length = v2->max_length;
  if ( max_length < 1 )
    return 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
    {
      v8 = sub_B70798(entities);
      sub_B70738(v8, 0LL);
    }
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_B7076C(entities, method);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v5->fields.priority;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( priority == HIDWORD(entities->m_Items[19]->klass) )
      break;
    max_length = v2->max_length;
    if ( (int)++v4 >= max_length )
      return 0LL;
  }
  return v5;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x22
  __int64 v15; // x26
  GetSvts_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v26; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_43504DF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504DF = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B70630(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B7076C(Instance, v12);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
    {
      v26 = sub_B70798(Instance);
      sub_B70738(v26, 0LL);
    }
    v16 = svtList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v14,
                                  &entity,
                                  v16->fields.userSvtId,
                                  (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v18 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v18;
      *(_QWORD *)&v28.fields.fakeValue = v17;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v28, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_B70630((BattleServantConfConponent_o *)data, (System_Int32_array **)v16, v19, v20, v21, v22, v23, v24);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21

  if ( (byte_43504E1 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_8863/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_43504E1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8863/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v7 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_17969836(
    (CommonUI_o *)Instance,
    v7,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v11; // x20

  if ( (byte_43504E2 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43504E2 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(detail, 0LL);
  if ( !v7 )
LABEL_9:
    sub_B7076C(Instance, v6);
  CommonUI__OpenItemDetailDialog_17969836(v7, v11, Instance, callback, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int32_t objectId; // w2
  __int64 *v34; // x8
  WarEntity_o **v35; // x1

  if ( (byte_43504DB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504DB = 1;
  }
  *itemEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)itemEntity,
    0LL,
    (System_String_array **)servantEntity,
    (System_String_array **)commandCodeEntity,
    (System_Boolean_array **)servantCostumeEntity,
    (System_Int32_array **)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)servantEntity, 0LL, v13, v14, v15, v16, v17, v18);
  *commandCodeEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)commandCodeEntity, 0LL, v19, v20, v21, v22, v23, v24);
  *servantCostumeEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)servantCostumeEntity, 0LL, v25, v26, v27, v28, v29, v30);
  if ( !giftEntity )
LABEL_18:
    sub_B7076C(Instance, v32);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v35 = (WarEntity_o **)servantEntity;
      goto LABEL_14;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v35 = (WarEntity_o **)itemEntity;
      goto LABEL_14;
    case 9:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v35 = (WarEntity_o **)commandCodeEntity;
LABEL_14:
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        v35,
        objectId,
        (const MethodInfo_21C049C *)*v34);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x23
  __int64 v15; // x27
  bool v16; // w20
  GetSvts_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // x0
  int32_t type; // [xsp+0h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_43504DE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504DE = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B70630(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_31:
      sub_B7076C(Instance, v12);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
      v15 = 0LL;
      v16 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
        {
          v27 = sub_B70798(Instance);
          sub_B70738(v27, 0LL);
        }
        v17 = svtList->m_Items[v15];
        if ( !v17 || !v14 )
          goto LABEL_31;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      v14,
                                      &entity,
                                      v17->fields.userSvtId,
                                      (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          v19 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v18 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v31.fields.currentCryptoKey = v19;
          *(_QWORD *)&v31.fields.fakeValue = v18;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v31, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v17;
            sub_B70630((BattleServantConfConponent_o *)data, (System_Int32_array **)v17, v20, v21, v22, v23, v24, v25);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v16 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v16;
            }
            else if ( type == 1 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v16 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v16;
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
        if ( (int)++v15 >= max_length )
          return v16;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0

  if ( (byte_434F3EE & 1) == 0 )
  {
    sub_B70694(&MissionInfoMaker___c_TypeInfo);
    byte_434F3EE = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__11_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}