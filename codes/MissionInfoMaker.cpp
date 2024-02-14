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

  if ( (byte_4214595 & 1) == 0 )
  {
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16837/*"bit_present_get{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_5873/*"Effect/Talk/bit_present_get{0}"*/, v9);
    byte_4214595 = 1;
  }
  MissionInfoMaker_TypeInfo->static_fields->NORMAL_ICON_PRIORITY = 0;
  MissionInfoMaker_TypeInfo->static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5873/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5873/*"Effect/Talk/bit_present_get{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->ITEM_GET_ASSET_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = MissionInfoMaker_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16837/*"bit_present_get{0}"*/;
  v12->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_16837/*"bit_present_get{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->ITEM_GET_EFFECT_NAME, v13, v14, v15, v16, v17, v18, v19);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MissionInfoMaker___c_c *v11; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct MissionInfoMaker___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  EventMissionConditionEntity_o *v23; // x8
  System_String_o **p_closedMessage; // x8

  if ( (byte_4214589 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v7);
    sub_B0D8A4(&Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__, v8);
    sub_B0D8A4(&MissionInfoMaker___c_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4214589 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v11 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v11 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                             method,
                                                                             v2);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_0,
        v14,
        Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v15 = MissionInfoMaker___c_TypeInfo->static_fields;
      v15->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v15->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__12_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v23 = entityList->fields._items->m_Items[0];
    if ( !v23 )
      sub_B0D97C(v22);
    p_closedMessage = &v23->fields.closedMessage;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x22
  __int64 v17; // x26
  GetCommandCodes_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4214592 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4214592 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B0D97C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v17 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= max_length )
    {
      v28 = sub_B0D9A8(Instance);
      sub_B0D948(v28, 0LL);
    }
    v18 = commandCodeList->m_Items[v17];
    if ( !v18 || !v16 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v16,
                                  &entity,
                                  v18->fields.userCommandCodeId,
                                  (const MethodInfo_2669E58 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v20;
      *(_QWORD *)&v30.fields.fakeValue = v19;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v17 >= max_length )
      return 0;
  }
  *data = v18;
  sub_B0D840((BattleServantConfConponent_o *)data, (System_Int32_array **)v18, v21, v22, v23, v24, v25, v26);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MissionInfoMaker___c_c *v11; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v14; // x21
  struct MissionInfoMaker___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  EventMissionConditionEntity_o *v23; // x8
  System_String_o **p_conditionMessage; // x8

  if ( (byte_4214588 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v7);
    sub_B0D8A4(&Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__, v8);
    sub_B0D8A4(&MissionInfoMaker___c_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4214588 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v11 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v11 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                             method,
                                                                             v2);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v14,
        Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v15 = MissionInfoMaker___c_TypeInfo->static_fields;
      v15->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v15->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v23 = entityList->fields._items->m_Items[0];
    if ( !v23 )
      sub_B0D97C(v22);
    p_conditionMessage = &v23->fields.conditionMessage;
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
    return dword_3203920[progressType - 2];
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
  DataManager_o *Instance; // x0
  EventMissionConditionEntity_array *MissionCondList; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v23; // x20
  int max_length; // w8
  const MethodInfo_2E9069C **v25; // x24
  const MethodInfo_2E9069C **v26; // x26
  const MethodInfo_2E90364 **v27; // x28
  unsigned int v28; // w25
  EventMissionConditionEntity_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v33; // x23
  const MethodInfo_2E90364 **v34; // x19
  const MethodInfo_2E9069C **v35; // x28
  const MethodInfo_2E9069C **v36; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x24
  __int64 v44; // x0
  EventMissionConditionEntity_array *v45; // [xsp+8h] [xbp-58h]

  if ( (byte_4214585 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v12);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v13);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4214585 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_21;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
                                                                                                   v21,
                                                                                                   v22);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v23,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_21;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v25 = (const MethodInfo_2E9069C **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v26 = (const MethodInfo_2E9069C **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v27 = (const MethodInfo_2E90364 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v28 = 0;
    v45 = MissionCondList;
    while ( 1 )
    {
      if ( v28 >= max_length )
      {
        v44 = sub_B0D9A8(Instance);
        sub_B0D948(v44, 0LL);
      }
      v29 = MissionCondList->m_Items[v28];
      if ( !v29 || !v23 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v23,
              v29->fields.missionProgressType,
              *v25) )
      {
        missionProgressType = v29->fields.missionProgressType;
        v33 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v30, v31);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v33,
          (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v23,
          missionProgressType,
          (WarBoardAIRoute_RouteData_o *)v33,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v23,
                                    v29->fields.missionProgressType,
                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
              v29->fields.condGroup,
              *v26) )
      {
        v34 = v27;
        v35 = v26;
        v36 = v25;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v23,
                 v29->fields.missionProgressType,
                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v29->fields.condGroup;
        v39 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item;
        v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v40, v41);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v42,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v39 )
          break;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v39,
          condGroup,
          (WarBoardAIRoute_RouteData_o *)v42,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v25 = v36;
        v26 = v35;
        v27 = v34;
        MissionCondList = v45;
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v23,
                                    v29->fields.missionProgressType,
                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v29->fields.condGroup,
                                    *v27);
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      max_length = MissionCondList->max_length;
      if ( (int)++v28 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v23;
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v23;
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
  if ( (byte_421458E & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B0D8A4(&MissionInfoMaker_TypeInfo, method);
    byte_421458E = 1;
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
        v8 = sub_B0D9A8(entities);
        sub_B0D948(v8, 0LL);
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
    sub_B0D97C(entities);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_421458B & 1) == 0 )
  {
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
    byte_421458B = 1;
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
  DataManager_o *Instance; // x0
  ItemEntity_o *v8; // x19
  MissionInfoMaker_c *v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421458F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_20078/*"itemGetEffectId"*/, v6);
    byte_421458F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v8 = (ItemEntity_o *)entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    if ( v8 )
      return ItemEntity__getScript(
               v8,
               (System_String_o *)StringLiteral_20078/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_16:
    sub_B0D97C(Instance);
  }
  v10 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v10 = MissionInfoMaker_TypeInfo;
  }
  return v10->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int v6; // w19
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  v2 = entities;
  if ( (byte_4214586 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v4);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_B0D8A4(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v5);
    byte_4214586 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !v2 )
    sub_B0D97C(entities);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
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
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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

  if ( (byte_4214584 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v19);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v20);
    byte_4214584 = 1;
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
         (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
    v22,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v37 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34;
  v23 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v37,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v37.fields.current.fields.key;
    if ( !v23 || LODWORD(v37.fields.current.fields.key) != 3 )
    {
      if ( !v37.fields.current.fields.value )
        sub_B0D97C(0LL);
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v37.fields.current.fields.value,
                 (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v34,
        Values,
        (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v36 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v34;
      while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
                &v36,
                (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
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
        (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
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
          (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        goto LABEL_28;
      }
    }
  }
  *(_DWORD *)&v34[2 * v35++ + 20] = 168;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v37,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  v31 = 4;
LABEL_28:
  if ( v35 && *(_DWORD *)&v34[2 * v35 + 18] == 168 )
    --v35;
  if ( v31 == 4 )
  {
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
      v22,
      (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v37 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v37,
              (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
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
      (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
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
  void *Instance; // x0
  int v12; // w8
  unsigned int v13; // w9
  __int64 v14; // x10
  __int64 v15; // x0

  if ( (byte_4214587 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, *(_QWORD *)&missionId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4214587 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_B0D97C(Instance);
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
          v15 = sub_B0D9A8(Instance);
          sub_B0D948(v15, 0LL);
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
  _BOOL8 v41; // x0
  Il2CppObject *v42; // x20
  Il2CppObject *v43; // x0
  int64_t v45; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-58h] BYREF
  int64_t v47; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_421458A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, *(_QWORD *)&progStatus);
    sub_B0D8A4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v12);
    sub_B0D8A4(&long_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v17);
    sub_B0D8A4(&Method_MissionInfoMaker___c__GetProgressText_b__13_0__, v18);
    sub_B0D8A4(&MissionInfoMaker___c_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_23606/*"{0:N0}/{1:N0}"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_421458A = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                           *(_QWORD *)&progStatus,
                                                                           progressNum);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v25,
      Method_MissionInfoMaker___c__GetProgressText_b__13_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v26 = MissionInfoMaker___c_TypeInfo->static_fields;
    v26->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B0D840(
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
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( !entityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v33 = entityList->fields._items->m_Items[0];
  if ( !v33 )
LABEL_32:
    sub_B0D97C(v22);
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  condGroup = v33->fields.condGroup;
  v35 = progStatus - 3;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B0D97C(v41);
    if ( HIDWORD(v46.fields.current[2].klass) == condGroup )
    {
      v37 = *progressNum;
      if ( LODWORD(v46.fields.current[2].monitor) == 12 )
      {
        p_monitor = targetNum;
        *progressNum = v37
                     + EventMissionConditionEntity__getProgressNumByDateType(
                         (EventMissionConditionEntity_o *)v46.fields.current,
                         0LL);
        v39 = 1LL;
      }
      else
      {
        if ( v35 >= 2 )
        {
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v46.fields.current,
                      0LL);
          p_monitor = (int64_t *)&current[3].monitor;
        }
        else
        {
          p_monitor = (int64_t *)&v46.fields.current[3].monitor;
          monitor = (int64_t)v46.fields.current[3].monitor;
        }
        *progressNum = monitor + v37;
        v39 = *targetNum;
      }
      *targetNum = *p_monitor + v39;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v47 = *progressNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47);
  v45 = *targetNum;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45);
  return System_String__Format_43845440((System_String_o *)StringLiteral_23606/*"{0:N0}/{1:N0}"*/, v42, v43, 0LL);
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
  if ( (byte_421458C & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B0D8A4(&MissionInfoMaker_TypeInfo, method);
    byte_421458C = 1;
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
      v8 = sub_B0D9A8(entities);
      sub_B0D948(v8, 0LL);
    }
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_B0D97C(entities);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x22
  __int64 v17; // x26
  GetSvts_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4214591 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4214591 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B0D97C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v17 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= max_length )
    {
      v28 = sub_B0D9A8(Instance);
      sub_B0D948(v28, 0LL);
    }
    v18 = svtList->m_Items[v17];
    if ( !v18 || !v16 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v16,
                                  &entity,
                                  v18->fields.userSvtId,
                                  (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v20;
      *(_QWORD *)&v30.fields.fakeValue = v19;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v17 >= max_length )
      return 0;
  }
  *data = v18;
  sub_B0D840((BattleServantConfConponent_o *)data, (System_Int32_array **)v18, v21, v22, v23, v24, v25, v26);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Instance; // x0
  System_String_o *v8; // x21

  if ( (byte_4214593 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_8780/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v6);
    byte_4214593 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8780/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v8 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__OpenItemDetailDialog_17082384(
    (CommonUI_o *)Instance,
    v8,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Instance; // x0
  CommonUI_o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v11; // x20

  if ( (byte_4214594 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4214594 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(detail, 0LL);
  if ( !v7 )
LABEL_9:
    sub_B0D97C(Instance);
  CommonUI__OpenItemDetailDialog_17082384(v7, v11, Instance, callback, 0LL);
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
  DataManager_o *Instance; // x0
  int32_t objectId; // w2
  __int64 *v40; // x8
  WarEntity_o **v41; // x1

  if ( (byte_421458D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_421458D = 1;
  }
  *itemEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)itemEntity,
    0LL,
    (System_String_array **)servantEntity,
    (System_String_array **)commandCodeEntity,
    (System_Boolean_array **)servantCostumeEntity,
    (System_Int32_array **)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)servantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  *commandCodeEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)commandCodeEntity, 0LL, v26, v27, v28, v29, v30, v31);
  *servantCostumeEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)servantCostumeEntity, 0LL, v32, v33, v34, v35, v36, v37);
  if ( !giftEntity )
LABEL_18:
    sub_B0D97C(Instance);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v40 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v41 = (WarEntity_o **)servantEntity;
      goto LABEL_14;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v40 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v41 = (WarEntity_o **)itemEntity;
      goto LABEL_14;
    case 9:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v40 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v41 = (WarEntity_o **)commandCodeEntity;
LABEL_14:
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        v41,
        objectId,
        (const MethodInfo_2669C30 *)*v40);
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
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x23
  __int64 v17; // x27
  bool v18; // w20
  GetSvts_o *v19; // x24
  __int64 v20; // x25
  __int64 v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0
  int32_t type; // [xsp+0h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4214590 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4214590 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B0D840(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_31:
      sub_B0D97C(Instance);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
      v17 = 0LL;
      v18 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= max_length )
        {
          v29 = sub_B0D9A8(Instance);
          sub_B0D948(v29, 0LL);
        }
        v19 = svtList->m_Items[v17];
        if ( !v19 || !v16 )
          goto LABEL_31;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      v16,
                                      &entity,
                                      v19->fields.userSvtId,
                                      (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v33.fields.currentCryptoKey = v21;
          *(_QWORD *)&v33.fields.fakeValue = v20;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v33, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v19;
            sub_B0D840((BattleServantConfConponent_o *)data, (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v18 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v18;
            }
            else if ( type == 1 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v18 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v18;
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
        if ( (int)++v17 >= max_length )
          return v18;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0

  if ( (byte_4212727 & 1) == 0 )
  {
    sub_B0D8A4(&MissionInfoMaker___c_TypeInfo, v1);
    byte_4212727 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MissionInfoMaker___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionInfoMaker___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__11_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}