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

  if ( (byte_41872FC & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16788/*"bit_present_get{0}"*/, v8);
    sub_B2C35C(&StringLiteral_5856/*"Effect/Talk/bit_present_get{0}"*/, v9);
    byte_41872FC = 1;
  }
  MissionInfoMaker_TypeInfo->static_fields->NORMAL_ICON_PRIORITY = 0;
  MissionInfoMaker_TypeInfo->static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5856/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5856/*"Effect/Talk/bit_present_get{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->ITEM_GET_ASSET_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = MissionInfoMaker_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16788/*"bit_present_get{0}"*/;
  v12->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_16788/*"bit_present_get{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->ITEM_GET_EFFECT_NAME, v13, v14, v15, v16, v17, v18, v19);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker___c_c *v10; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v13; // x21
  struct MissionInfoMaker___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  EventMissionConditionEntity_o *v23; // x8
  System_String_o **p_closedMessage; // x8

  if ( (byte_41872F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMissionConditionEntity__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v6);
    sub_B2C35C(&Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__, v7);
    sub_B2C35C(&MissionInfoMaker___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_41872F0 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v10 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_0,
        v13,
        Method_MissionInfoMaker___c__GetClosedMessage_b__12_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v14 = MissionInfoMaker___c_TypeInfo->static_fields;
      v14->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v14->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__12_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v23 = entityList->fields._items->m_Items[0];
    if ( !v23 )
      sub_B2C434(v21, v22);
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
  __int64 v15; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  __int64 v18; // x26
  GetCommandCodes_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_41872F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_41872F9 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B2C434(Instance, v15);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v18 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v18 >= max_length )
    {
      v29 = sub_B2C460(Instance);
      sub_B2C400(v29, 0LL);
    }
    v19 = commandCodeList->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v17,
                                  &entity,
                                  v19->fields.userCommandCodeId,
                                  (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v21;
      *(_QWORD *)&v31.fields.fakeValue = v20;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
  *data = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)data, (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker___c_c *v10; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct MissionInfoMaker___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  EventMissionConditionEntity_o *v23; // x8
  System_String_o **p_conditionMessage; // x8

  if ( (byte_41872EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionConditionEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMissionConditionEntity__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v6);
    sub_B2C35C(&Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__, v7);
    sub_B2C35C(&MissionInfoMaker___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_41872EF = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v10 = MissionInfoMaker___c_TypeInfo;
    if ( (BYTE3(MissionInfoMaker___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v13,
        Method_MissionInfoMaker___c__GetConditionMessage_b__11_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
      v14 = MissionInfoMaker___c_TypeInfo->static_fields;
      v14->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v14->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)entityList,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    if ( !entityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v23 = entityList->fields._items->m_Items[0];
    if ( !v23 )
      sub_B2C434(v21, v22);
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
    return dword_31A1620[progressType - 2];
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
  __int64 v20; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x20
  int max_length; // w8
  const MethodInfo_2E649C0 **v24; // x24
  const MethodInfo_2E649C0 **v25; // x26
  const MethodInfo_2E64688 **v26; // x28
  unsigned int v27; // w25
  EventMissionConditionEntity_o *v28; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v30; // x23
  const MethodInfo_2E64688 **v31; // x19
  const MethodInfo_2E649C0 **v32; // x28
  const MethodInfo_2E649C0 **v33; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v36; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x24
  __int64 v39; // x0
  EventMissionConditionEntity_array *v40; // [xsp+8h] [xbp-58h]

  if ( (byte_41872EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v12);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v13);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_41872EC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_21;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v22,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_21;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v24 = (const MethodInfo_2E649C0 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v25 = (const MethodInfo_2E649C0 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v26 = (const MethodInfo_2E64688 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v27 = 0;
    v40 = MissionCondList;
    while ( 1 )
    {
      if ( v27 >= max_length )
      {
        v39 = sub_B2C460(Instance);
        sub_B2C400(v39, 0LL);
      }
      v28 = MissionCondList->m_Items[v27];
      if ( !v28 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v22,
              v28->fields.missionProgressType,
              *v24) )
      {
        missionProgressType = v28->fields.missionProgressType;
        v30 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v30,
          (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v22,
          missionProgressType,
          (WarBoardAIRoute_RouteData_o *)v30,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v22,
                                    v28->fields.missionProgressType,
                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
              v28->fields.condGroup,
              *v25) )
      {
        v31 = v26;
        v32 = v25;
        v33 = v24;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v22,
                 v28->fields.missionProgressType,
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v28->fields.condGroup;
        v36 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item;
        v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v37,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v36 )
          break;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v36,
          condGroup,
          (WarBoardAIRoute_RouteData_o *)v37,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v24 = v33;
        v25 = v32;
        v26 = v31;
        MissionCondList = v40;
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    v22,
                                    v28->fields.missionProgressType,
                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v28->fields.condGroup,
                                    *v26);
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      max_length = MissionCondList->max_length;
      if ( (int)++v27 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v22;
    }
LABEL_21:
    sub_B2C434(Instance, v20);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v22;
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
  if ( (byte_41872F5 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_41872F5 = 1;
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
        v8 = sub_B2C460(entities);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(entities, method);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_41872F2 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
    byte_41872F2 = 1;
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
  __int64 v8; // x1
  ItemEntity_o *v9; // x19
  MissionInfoMaker_c *v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41872F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_20015/*"itemGetEffectId"*/, v6);
    byte_41872F6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v9 = (ItemEntity_o *)entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    if ( v9 )
      return ItemEntity__getScript(
               v9,
               (System_String_o *)StringLiteral_20015/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_16:
    sub_B2C434(Instance, v8);
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
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  v2 = entities;
  if ( (byte_41872ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v4);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_B2C35C(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v5);
    byte_41872ED = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2 )
    sub_B2C434(entities, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v6);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v9.fields.current, 0LL) )
    {
      v7 = 2;
      goto LABEL_10;
    }
  }
  v7 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v7 != 2;
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
  __int64 v24; // x1
  int key; // w24
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x1
  Il2CppObject *currentValue; // x20
  __int64 v30; // x8
  char v31; // w25
  int v32; // w8
  int32_t v33; // w20
  int v34; // w19
  _WORD v36[32]; // [xsp+8h] [xbp-E8h] BYREF
  int v37; // [xsp+48h] [xbp-A8h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v38; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_41872EB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v20);
    byte_41872EB = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
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
         (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v36,
    v22,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v39 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v36;
  v23 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v39,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v39.fields.current.fields.key;
    if ( !v23 || LODWORD(v39.fields.current.fields.key) != 3 )
    {
      if ( !v39.fields.current.fields.value )
        sub_B2C434(0LL, v24);
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v39.fields.current.fields.value,
                 (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_B2C434(0LL, v27);
      System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v36,
        Values,
        (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v38 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v36;
      while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
                &v38,
                (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
      {
        currentValue = v38.fields.currentValue;
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetMissionConditionGroupProgress(
               (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
               v28) )
        {
          v30 = v37;
          v31 = 1;
          goto LABEL_21;
        }
      }
      v30 = v37;
      v31 = 0;
LABEL_21:
      *(_DWORD *)&v36[2 * v30 + 20] = 127;
      ++v37;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
        &v38,
        (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      v32 = v37;
      if ( v37 && *(_DWORD *)&v36[2 * v37 + 18] == 127 )
        v32 = --v37;
      if ( (v31 & 1) == 0 )
      {
        *(_DWORD *)&v36[2 * v32 + 20] = 168;
        v33 = key - 1;
        ++v37;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v39,
          (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        goto LABEL_28;
      }
    }
  }
  *(_DWORD *)&v36[2 * v37++ + 20] = 168;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v39,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  v33 = 4;
LABEL_28:
  if ( v37 && *(_DWORD *)&v36[2 * v37 + 18] == 168 )
    --v37;
  if ( v33 == 4 )
  {
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v36,
      v22,
      (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v39 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v36;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v39,
              (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v39.fields.current.fields.key) == 4 )
      {
        v34 = 1;
        goto LABEL_37;
      }
    }
    v34 = 0;
LABEL_37:
    *(_DWORD *)&v36[2 * v37++ + 20] = 233;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v39,
      (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    if ( v37 && *(_DWORD *)&v36[2 * v37 + 18] == 233 )
      --v37;
    if ( !v34 )
      return 0;
  }
  return v33;
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
  __int64 v12; // x1
  int v13; // w8
  unsigned int v14; // w9
  __int64 v15; // x10
  __int64 v16; // x0

  if ( (byte_41872EE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, *(_QWORD *)&missionId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41872EE = 1;
  }
  if ( progressType == 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_B2C434(Instance, v12);
    }
    v13 = *((_DWORD *)Instance + 6);
    if ( v13 < 1 )
    {
      return 3;
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= v13 )
        {
          v16 = sub_B2C460(Instance);
          sub_B2C400(v16, 0LL);
        }
        v15 = *((_QWORD *)Instance + (int)v14 + 4);
        if ( !v15 )
          goto LABEL_22;
        if ( *(_DWORD *)(v15 + 24) == missionId )
          break;
        if ( (int)++v14 >= v13 )
          return 3;
      }
      if ( *(_DWORD *)(v15 + 32) == 4 )
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
  __int64 v42; // x1
  Il2CppObject *v43; // x20
  Il2CppObject *v44; // x0
  int64_t v46; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-58h] BYREF
  int64_t v48; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_41872F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionConditionEntity___ctor__, *(_QWORD *)&progStatus);
    sub_B2C35C(&System_Comparison_EventMissionConditionEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v12);
    sub_B2C35C(&long_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v17);
    sub_B2C35C(&Method_MissionInfoMaker___c__GetProgressText_b__13_0__, v18);
    sub_B2C35C(&MissionInfoMaker___c_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_23528/*"{0:N0}/{1:N0}"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_41872F1 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v25,
      Method_MissionInfoMaker___c__GetProgressText_b__13_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v26 = MissionInfoMaker___c_TypeInfo->static_fields;
    v26->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B2C2F8(
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
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( !entityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v33 = entityList->fields._items->m_Items[0];
  if ( !v33 )
LABEL_32:
    sub_B2C434(v22, *(_QWORD *)&progStatus);
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  condGroup = v33->fields.condGroup;
  v35 = progStatus - 3;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B2C434(v41, v42);
    if ( HIDWORD(v47.fields.current[2].klass) == condGroup )
    {
      v37 = *progressNum;
      if ( LODWORD(v47.fields.current[2].monitor) == 12 )
      {
        p_monitor = targetNum;
        *progressNum = v37
                     + EventMissionConditionEntity__getProgressNumByDateType(
                         (EventMissionConditionEntity_o *)v47.fields.current,
                         0LL);
        v39 = 1LL;
      }
      else
      {
        if ( v35 >= 2 )
        {
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v47.fields.current,
                      0LL);
          p_monitor = (int64_t *)&current[3].monitor;
        }
        else
        {
          p_monitor = (int64_t *)&v47.fields.current[3].monitor;
          monitor = (int64_t)v47.fields.current[3].monitor;
        }
        *progressNum = monitor + v37;
        v39 = *targetNum;
      }
      *targetNum = *p_monitor + v39;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v48 = *progressNum;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48);
  v46 = *targetNum;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46);
  return System_String__Format_44301068((System_String_o *)StringLiteral_23528/*"{0:N0}/{1:N0}"*/, v43, v44, 0LL);
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
  if ( (byte_41872F3 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_41872F3 = 1;
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
      v8 = sub_B2C460(entities);
      sub_B2C400(v8, 0LL);
    }
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_B2C434(entities, method);
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
  __int64 v15; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  __int64 v18; // x26
  GetSvts_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_41872F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_41872F8 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B2C434(Instance, v15);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v18 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v18 >= max_length )
    {
      v29 = sub_B2C460(Instance);
      sub_B2C400(v29, 0LL);
    }
    v19 = svtList->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                  v17,
                                  &entity,
                                  v19->fields.userSvtId,
                                  (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_21;
      v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v21;
      *(_QWORD *)&v31.fields.fakeValue = v20;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
  *data = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)data, (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
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
  __int64 v8; // x1
  System_String_o *v9; // x21

  if ( (byte_41872FA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_8758/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v6);
    byte_41872FA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8758/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v9 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v8);
  }
  CommonUI__OpenItemDetailDialog_18036692(
    (CommonUI_o *)Instance,
    v9,
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
  __int64 v7; // x1
  CommonUI_o *v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v10; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v12; // x20

  if ( (byte_41872FB & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41872FB = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_9;
  v8 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(name, 0LL);
  detail = equipEntity->fields.detail;
  v12 = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(detail, 0LL);
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v7);
  CommonUI__OpenItemDetailDialog_18036692(v8, v12, Instance, callback, 0LL);
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
  __int64 v39; // x1
  int32_t objectId; // w2
  __int64 *v41; // x8
  WarEntity_o **v42; // x1

  if ( (byte_41872F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_41872F4 = 1;
  }
  *itemEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)itemEntity,
    0LL,
    (System_String_array **)servantEntity,
    (System_String_array **)commandCodeEntity,
    (System_Boolean_array **)servantCostumeEntity,
    (System_Int32_array **)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)servantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  *commandCodeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)commandCodeEntity, 0LL, v26, v27, v28, v29, v30, v31);
  *servantCostumeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)servantCostumeEntity, 0LL, v32, v33, v34, v35, v36, v37);
  if ( !giftEntity )
LABEL_18:
    sub_B2C434(Instance, v39);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)servantEntity;
      goto LABEL_14;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)itemEntity;
      goto LABEL_14;
    case 9:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v41 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v42 = (WarEntity_o **)commandCodeEntity;
LABEL_14:
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        v42,
        objectId,
        (const MethodInfo_24E412C *)*v41);
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
  __int64 v15; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x23
  __int64 v18; // x27
  bool v19; // w20
  GetSvts_o *v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  int32_t type; // [xsp+0h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_41872F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_41872F7 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_B2C2F8(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_31:
      sub_B2C434(Instance, v15);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
      v18 = 0LL;
      v19 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
        {
          v30 = sub_B2C460(Instance);
          sub_B2C400(v30, 0LL);
        }
        v20 = svtList->m_Items[v18];
        if ( !v20 || !v17 )
          goto LABEL_31;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      v17,
                                      &entity,
                                      v20->fields.userSvtId,
                                      (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          v22 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v34.fields.currentCryptoKey = v22;
          *(_QWORD *)&v34.fields.fakeValue = v21;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v20;
            sub_B2C2F8((BattleServantConfConponent_o *)data, (System_Int32_array **)v20, v23, v24, v25, v26, v27, v28);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v19 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v19;
            }
            else if ( type == 1 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_31;
              Instance = (DataManager_o *)UserServantEntity__IsEventJoin(entity, 0LL);
              v19 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v19;
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
        if ( (int)++v18 >= max_length )
          return v19;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
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

  if ( (byte_4185D26 & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker___c_TypeInfo, v1);
    byte_4185D26 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionInfoMaker___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__11_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}