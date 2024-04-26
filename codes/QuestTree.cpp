void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_435024C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&MapControl_RootInfo_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree___ctor__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_435024C = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_B70764(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0LL);
  this->fields.mapControlRootInfo = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allQuestInfoList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allSpotInfoList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allSpotRoadInfoList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allMapGimmickInfoList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allMapInfoList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.allWarInfoList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questReleaseEntList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2CE9F98 *)Method_SingletonTemplate_QuestTree___ctor__);
}


bool __fastcall QuestTree__CheckMapGimmickCond(
        QuestTree_o *this,
        int32_t mapGimmickId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_22275788(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_22272832(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  __int64 v7; // x1
  int64_t v8; // x21
  MapGimmickEntity_o *v9; // x20
  MapGimmickReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v11; // x3
  int v12; // w8
  __int64 v13; // x0

  if ( (byte_4350249 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350249 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
    LOBYTE(Mine) = 1;
  }
  else
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !mapGimmickInfo )
      goto LABEL_22;
    v8 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v9 = Mine;
    Time = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapGimmickReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Time,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_B706AC(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_22;
    v12 = *(_DWORD *)(Time + 24);
    if ( !v12 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, v12 == 1) )
    {
      v13 = sub_B70798(Time);
      sub_B70738(v13, 0LL);
    }
    *(_QWORD *)(Time + 40) = v9->fields.endedAt;
    QuestTree__UpdateForceUpdateTime(this, v8, (System_Int64_array *)Time, v11);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_22:
      sub_B7076C(Time, v7);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v9, 0LL)
                && MapGimmickEntity__IsEnableTime(v9, v8, 0LL);
  }
  return (char)Mine;
}


int32_t __fastcall QuestTree__CheckQuestOpen(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        MapControl_QuestInfo_o *questInfo,
        int32_t warId,
        const MethodInfo *method)
{
  QuestTree_o *v8; // x22
  int64_t NoticeAt; // x0
  __int64 v10; // x1
  bool v11; // w24
  int64_t Time; // x23
  System_Int64_array *v13; // x25
  const MethodInfo *v14; // x3
  int32_t v15; // w22
  _BOOL4 v16; // w21
  bool HasFlag; // w0
  WarEntity_o *IsShop; // x0
  const MethodInfo *v19; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantLimitImageMaster_o *v21; // x21
  int32_t id; // w23
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v25; // w8
  MapControl_QuestInfo_o *v26; // x0
  int32_t v27; // w1
  int32_t type; // w2
  int32_t targetId; // w3
  int64_t value; // x4
  int32_t closedMessageId; // w5
  __int64 v33; // x0
  UserQuestEntity_o *v34; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4350245 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350245 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v34 = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_67;
  v11 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)NoticeAt,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Int64_array *)sub_B706AC(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v13 )
    goto LABEL_67;
  if ( !v13->max_length
    || (v13->m_Items[0] = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL), v13->max_length <= 1)
    || (v13->m_Items[1] = NoticeAt, NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL), v13->max_length <= 2) )
  {
    v33 = sub_B70798(NoticeAt);
    sub_B70738(v33, 0LL);
  }
  v13->m_Items[2] = NoticeAt;
  QuestTree__UpdateForceUpdateTime(v8, Time, v13, v14);
  v15 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_13;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v15 = 3;
  else
    v15 = 1;
  if ( v11 || HasFlag )
  {
    v16 = !HasFlag;
    goto LABEL_52;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_67;
    NoticeAt = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_67;
    IsShop = (WarEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)NoticeAt,
                              &entity,
                              warId,
                              (const MethodInfo_21C049C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( questReleaseNG )
    {
      if ( questReleaseNG->fields.closedMessageId )
      {
        IsShop = entity;
        if ( entity )
        {
          IsShop = (WarEntity_o *)WarEntity__IsShop(entity, 0LL);
          if ( ((unsigned __int8)IsShop & 1) != 0 )
          {
            NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_67;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)NoticeAt,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            NoticeAt = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_67;
            if ( UserQuestMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &v34,
                   NoticeAt,
                   questEnt->fields.id,
                   0LL) )
            {
              NoticeAt = (int64_t)v34;
              if ( !v34 )
                goto LABEL_67;
              if ( UserQuestEntity__HasStatus(v34, 8, 0LL) )
                goto LABEL_51;
            }
LABEL_41:
            v16 = 0;
            v15 = 0;
            goto LABEL_52;
          }
        }
      }
    }
    NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v19);
    if ( !NoticeAt )
      goto LABEL_67;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
      || questEnt->fields.afterClear != 5 )
    {
      goto LABEL_41;
    }
LABEL_51:
    v16 = 0;
    v15 = 2;
    goto LABEL_52;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NoticeAt = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_51;
  v21 = (ServantLimitImageMaster_o *)NoticeAt;
  if ( !NoticeAt )
    goto LABEL_67;
  id = questEnt->fields.id;
  v15 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)NoticeAt, id, 0LL) )
  {
LABEL_13:
    v16 = 0;
    goto LABEL_52;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v21, id, 0LL);
  v16 = 0;
  if ( IsCommonReleaseMultiClear )
    v15 = 0;
  else
    v15 = 2;
LABEL_52:
  forceOperation = questEnt->fields.forceOperation;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v25 = 1;
  else
    v25 = forceOperation;
  if ( v25 )
  {
    v15 = v25 != 2;
    v16 = v15;
    goto LABEL_60;
  }
  if ( v15 == 2 && questReleaseNG )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v27 = 2;
      v15 = 2;
      v26 = questInfo;
      goto LABEL_62;
    }
LABEL_67:
    sub_B7076C(NoticeAt, v10);
  }
LABEL_60:
  if ( !questInfo )
    goto LABEL_67;
  v26 = questInfo;
  v27 = v15;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_62:
  MapControl_QuestInfo__SetDispType(v26, v27, type, targetId, value, closedMessageId, 0LL);
  questInfo->fields.touchType = v16;
  return v15;
}


bool __fastcall QuestTree__CheckSpotCond(
        QuestTree_o *this,
        int32_t spotId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_22275788(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckSpotCond_22275788(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  QuestTree_o *v13; // x0
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v16; // x1
  int64_t Instance; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  int v21; // w8
  bool IsExistCommand; // w23
  __int64 v23; // x25
  __int64 v24; // x25
  UnityEngine_Object_o *v25; // x25
  bool IsMissionAchive; // w0
  int64_t v27; // x2
  int32_t v28; // w0
  QuestEntity_o *v29; // x19
  int32_t WarId; // w0
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  int64_t v33; // x20
  int32_t v34; // w22
  unsigned __int64 v35; // x24
  int32_t v36; // w21
  __int64 v37; // x8
  int64_t v38; // x20
  int32_t v39; // w22
  unsigned __int64 v40; // x24
  int32_t v41; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w8
  __int64 v44; // x8
  int64_t v45; // x20
  unsigned __int64 v46; // x24
  int32_t v47; // w21
  int v48; // w21
  int v49; // w20
  int32_t v50; // w0
  int32_t v51; // w8
  bool v52; // cc
  int32_t v53; // w8
  __int64 v55; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4350248 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4350248 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_7:
    LOBYTE(v13) = 1;
    return (unsigned __int8)v13 & 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v14->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_42;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v18 = **(_QWORD **)(Instance + 184);
  if ( !v18 )
    goto LABEL_205;
  if ( !*(_QWORD *)(v18 + 448) )
    goto LABEL_42;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v19 = **(_QWORD **)(Instance + 184);
  if ( !v19 )
    goto LABEL_205;
  v20 = *(_QWORD *)(v19 + 448);
  if ( !v20 )
    goto LABEL_205;
  v21 = *(_DWORD *)(v20 + 16);
  if ( !v21 )
  {
LABEL_42:
    v23 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v24 = **(_QWORD **)(v23 + 192);
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_B08394(v24);
    v25 = **(UnityEngine_Object_o ***)(v24 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v21 = 0;
      IsExistCommand = 1;
      goto LABEL_53;
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v21 = 0;
      goto LABEL_53;
    }
LABEL_205:
    sub_B7076C(Instance, v16);
  }
  IsExistCommand = 0;
LABEL_53:
  v13 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v13 & 1;
    case 2:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_205;
      if ( targetValue )
        LOBYTE(v13) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v13) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v13 & 1;
    case 3:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_205;
      if ( targetValue )
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(
                            (clsQuestCheck_o *)Instance,
                            targetId,
                            targetValue,
                            IsExistCommand,
                            0LL);
      else
        IsMissionAchive = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      goto LABEL_193;
    case 5:
      if ( v21 == targetId )
        goto LABEL_82;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_205;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_7;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v29 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v13) = QuestTree__CheckQuestOpen(this, v29, 0LL, WarId, v31) == 1;
      return (unsigned __int8)v13 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v32 = *(_QWORD *)(Instance + 24);
      v33 = Instance;
      if ( (int)v32 >= 1 )
      {
        v34 = 0;
        v35 = 0LL;
        while ( v35 < (unsigned int)v32 )
        {
          v36 = *(_DWORD *)(v33 + 32 + 4 * v35);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v36, IsExistCommand, 0LL);
          LODWORD(v32) = *(_DWORD *)(v33 + 24);
          ++v35;
          v34 += Instance & 1;
          if ( (__int64)v35 >= (int)v32 )
            goto LABEL_195;
        }
        goto LABEL_206;
      }
      v34 = 0;
LABEL_195:
      if ( targetValue <= 1 )
        v53 = 1;
      else
        v53 = targetValue;
      LOBYTE(v13) = v34 < v53;
      return (unsigned __int8)v13 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v37 = *(_QWORD *)(Instance + 24);
      v38 = Instance;
      if ( (int)v37 < 1 )
        goto LABEL_177;
      v39 = 0;
      v40 = 0LL;
      while ( v40 < (unsigned int)v37 )
      {
        v41 = *(_DWORD *)(v38 + 32 + 4 * v40);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
        if ( !Instance )
          goto LABEL_205;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v41, IsExistCommand, 0LL);
        LODWORD(v37) = *(_DWORD *)(v38 + 24);
        ++v40;
        v39 += Instance & 1;
        if ( (__int64)v40 >= (int)v37 )
          goto LABEL_178;
      }
      goto LABEL_206;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_205;
      Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, targetId, 0LL);
      if ( (Instance & 1) == 0 )
      {
        num = 0;
        goto LABEL_187;
      }
      if ( !entity )
        goto LABEL_205;
      num = entity->fields.num;
LABEL_187:
      v52 = num < targetValue;
LABEL_188:
      LOBYTE(v13) = !v52;
      return (unsigned __int8)v13 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_205;
      LOBYTE(v13) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v13 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v44 = *(_QWORD *)(Instance + 24);
      v45 = Instance;
      if ( (int)v44 >= 1 )
      {
        v39 = 0;
        v46 = 0LL;
        while ( v46 < (unsigned int)v44 )
        {
          v47 = *(_DWORD *)(v45 + 32 + 4 * v46);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v47, IsExistCommand, 0LL);
          LODWORD(v44) = *(_DWORD *)(v45 + 24);
          ++v46;
          v39 += Instance & 1;
          if ( (__int64)v46 >= (int)v44 )
            goto LABEL_178;
        }
LABEL_206:
        v55 = sub_B70798(Instance);
        sub_B70738(v55, 0LL);
      }
LABEL_177:
      v39 = 0;
LABEL_178:
      if ( targetValue <= 1 )
        v51 = 1;
      else
        v51 = targetValue;
      v52 = v39 < v51;
      goto LABEL_188;
    case 12:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 13:
      v48 = targetId / 100;
      v49 = targetId % 100;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventRaceGoalScriptPlayed(v48, v49, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 16:
      if ( v21 == targetId )
        goto LABEL_7;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_193:
      LOBYTE(v13) = !IsMissionAchive;
      return (unsigned __int8)v13 & 1;
    case 17:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 18:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 83;
      goto LABEL_203;
    case 19:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 84;
      goto LABEL_203;
    case 20:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 85;
      goto LABEL_203;
    case 21:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 86;
      goto LABEL_203;
    case 22:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 87;
      goto LABEL_203;
    case 23:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 88;
      goto LABEL_203;
    case 24:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 89;
      goto LABEL_203;
    case 25:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 90;
      goto LABEL_203;
    case 26:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 91;
      goto LABEL_203;
    case 27:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 23;
      goto LABEL_203;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 76;
      goto LABEL_203;
    case 29:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 30:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetValue;
      v28 = 97;
      goto LABEL_203;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_205;
      v50 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v50 & 0x80000000) != 0 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = targetValue;
        v28 = 113;
LABEL_203:
        LOBYTE(v13) = CondType__IsOpen(v28, targetId, v27, 0, 0LL);
      }
      else
      {
        LOBYTE(v13) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v50, 1, 0LL);
      }
      return (unsigned __int8)v13 & 1;
    default:
LABEL_82:
      LOBYTE(v13) = 0;
      return (unsigned __int8)v13 & 1;
  }
}


bool __fastcall QuestTree__CheckSpotRoadCond(
        QuestTree_o *this,
        int32_t spoRoadtId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_22275788(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4350243 & 1) == 0 )
  {
    sub_B70694(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    byte_4350243 = 1;
  }
  v7 = sub_B70764(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__41___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 72), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 64),
    (System_Int32_array **)blankEarthSpotMaster,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v7;
}


int64_t __fastcall QuestTree__GetEndTime(
        QuestTree_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t questId; // w21
  System_Collections_Generic_List_QuestReleaseEntity__o **p_questReleaseEntList; // x19
  EventQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x23
  int64_t v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  __int64 v15; // x1
  EventEntity_o *Entity; // x0
  EventEntity_o *v17; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v19; // x0
  const MethodInfo *v20; // x3
  QuestEntity_o *v21; // x0
  __int64 v22; // x1
  QuestEntity_o *Mine; // x0
  __int64 v24; // x1
  int v25; // w21
  int64_t v26; // x20
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4350246 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4350246 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !questInfo )
    goto LABEL_38;
  questId = questInfo->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_34185736((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_38:
    sub_B7076C(this, questInfo);
  }
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_questReleaseEntList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v29 = v28;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields.current;
    if ( !v29.fields.current )
      sub_B7076C(v10, v11);
    klass_high = HIDWORD(v29.fields.current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_WarQuestSelectionMaster )
          sub_B7076C(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   Master_WarQuestSelectionMaster,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_B7076C(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v17 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v17, 1, 0LL);
LABEL_28:
              v9 = EndTime;
              goto LABEL_29;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_B7076C(0LL, v24);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_28;
      case 13:
        v21 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v21 )
          sub_B7076C(0LL, v22);
        EndTime = QuestEntity__GetEndTime(v21, 1, 0LL);
        goto LABEL_28;
      case 166:
        v19 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v19, v19, (QuestReleaseEntity_o *)current, v20);
        goto LABEL_28;
      default:
LABEL_29:
        if ( v9 >= 1 )
        {
          v25 = 3;
          v26 = v9;
          goto LABEL_32;
        }
        break;
    }
  }
  v26 = 0LL;
  v25 = 1;
LABEL_32:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v25 + 1) >> 2 )
    return v26;
  return v9;
}


int64_t __fastcall QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int64_t v9; // x21
  int64_t Time_25947024; // x0
  int64_t value; // x22
  int64_t v12; // x21
  unsigned int v13; // w25
  int64_t v14; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_4350247 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4350247 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !questEnt )
    goto LABEL_28;
  v8 = Time;
  v9 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v9;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v9 = 0LL;
  if ( v8 > Time )
    return v9;
  if ( !questReleaseEnt )
LABEL_28:
    sub_B7076C(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v17.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_25947024 = NetworkManager__getTime_25947024(v17, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_25947024;
  dateData = NetworkManager__getDateTime_25947808(Time_25947024 - 3600 * value, 0LL).fields.dateData;
  v18.fields.dateData = (uint64_t)&dateData;
  if ( ((1 << (System_DateTime__get_DayOfWeek(v18, 0LL) + 1)) & questReleaseEnt->fields.targetId) == 0 )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v13 = 0;
  v14 = v12 + 86400 - 3600 * value;
  v9 = NetworkManager__getNextDayStartTime(0LL) + 3600 * questReleaseEnt->fields.value;
  do
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_25947808(v14, 0LL).fields.dateData;
    v19.fields.dateData = (uint64_t)&dateData;
    if ( ((1 << (System_DateTime__get_DayOfWeek(v19, 0LL) + 1)) & questReleaseEnt->fields.targetId) == 0 )
      break;
    ++v13;
    v9 += 86400LL;
    v14 += 86400LL;
  }
  while ( v13 < 6 );
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v9 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v9;
}


MapControl_MapGimmickInfo_o *__fastcall QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass22_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_4350234 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_B70694(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass22_0_TypeInfo);
    byte_4350234 = 1;
  }
  v5 = (QuestTree___c__DisplayClass22_0_o *)sub_B70764(QuestTree___c__DisplayClass22_0_TypeInfo);
  QuestTree___c__DisplayClass22_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__),
        !allMapGimmickInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t __fastcall QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v5; // x1
  int32_t SpotID; // w0
  const MethodInfo *v7; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0LL),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v7)) == 0LL) )
  {
    sub_B7076C(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0LL);
}


int32_t __fastcall QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_MapControl_MapInfo__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v17; // w28
  QuestTree_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v22; // x21
  __int64 v23; // x1
  System_Collections_Generic_List_MapControl_SpotInfo__o *v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  MapControl_SpotInfo_o *current; // x22
  WebViewManager_o *Instance; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_int__o *v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 Item; // x0
  __int64 v36; // x1
  int32_t v37; // w23
  int v38; // [xsp+Ch] [xbp-E4h]
  _BYTE v39[44]; // [xsp+10h] [xbp-E0h] BYREF
  int v40; // [xsp+3Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_4350237 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4350237 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = QuestTree__GetUserReachableMapList((QuestTree_o *)ChildByWarID, ChildByWarID, v7);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_B7076C(v10, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v43.fields.current )
      sub_B7076C(0LL, v12);
    SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v43.fields.current, 0LL);
    if ( !SpotList )
      sub_B7076C(0LL, v14);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v42.fields.current )
        sub_B7076C(0LL, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v42.fields.current,
                                                                              0,
                                                                              0LL);
      if ( !v9 )
        sub_B7076C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    *(_DWORD *)&v39[4 * v40++ + 24] = 108;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 108 )
      --v40;
  }
  *(_DWORD *)&v39[4 * v40++ + 24] = 133;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 133 )
    --v40;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v19, v9, v20);
  v22 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v43.fields.current )
      sub_B7076C(0LL, v23);
    v24 = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v43.fields.current, 0LL);
    if ( !v24 )
      sub_B7076C(0LL, v25);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = (MapControl_SpotInfo_o *)v42.fields.current;
      if ( !v42.fields.current )
        sub_B7076C(v26, v27);
      if ( HIDWORD(v42.fields.current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_B7076C(0LL, v30);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v31 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v31 )
        sub_B7076C(0LL, v32);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v39,
        v31,
        (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v38 = 0;
      v41 = *(System_Collections_Generic_List_Enumerator_int__o *)v39;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v41,
                (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_B7076C(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v41.fields.current,
                 (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v22 )
            sub_B7076C(Item, v36);
          if ( System_Collections_Generic_List_int___Contains(
                 v22,
                 Item,
                 (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            ++v38;
          }
          else
          {
            System_Collections_Generic_List_int___Add(
              v22,
              v37,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      *(_DWORD *)&v39[4 * v40++ + 24] = 320;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v41,
        (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 320 )
        --v40;
      v17 = v17 - v38 + current->fields.questCount;
    }
    *(_DWORD *)&v39[4 * v40++ + 24] = 363;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 363 )
      --v40;
  }
  *(_DWORD *)&v39[4 * v40++ + 24] = 391;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 391 )
    --v40;
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCountForMap(
        QuestTree_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_MapInfo_o *v8; // x20
  System_Collections_Generic_List_int__o *v9; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v19; // x22
  int32_t v20; // w24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  MapControl_SpotInfo_o *v23; // x23
  WebViewManager_o *Instance; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_int__o *v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 Item; // x0
  __int64 v31; // x1
  int32_t v32; // w24
  int v33; // w10
  int32_t v34; // w9
  int v35; // w20
  int32_t v37; // [xsp+8h] [xbp-C8h]
  int v38; // [xsp+10h] [xbp-C0h]
  int v39; // [xsp+14h] [xbp-BCh]
  int v40; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+18h] [xbp-B8h] BYREF
  int v42[3]; // [xsp+30h] [xbp-A0h]
  int v43; // [xsp+3Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_435023A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_435023A = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  v8 = MapInfoByMapID;
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v8, 0LL);
  if ( !SpotList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v45 = v41;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v12 )
      break;
    current = v45.fields.current;
    if ( layer < 1 )
    {
      if ( !v45.fields.current )
        sub_B7076C(v12, v13);
LABEL_12:
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)current,
                                                                              1,
                                                                              0LL);
      if ( !v9 )
        sub_B7076C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !v45.fields.current )
        sub_B7076C(v12, v13);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v45.fields.current, 0LL) == layer )
        goto LABEL_12;
    }
  }
  v42[0] = 98;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  v43 = 0;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
  v19 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v8, 0LL);
  if ( !SpotList )
LABEL_52:
    sub_B7076C(SpotList, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v39 = 0;
  v45 = v41;
  v20 = 0;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v21 )
      break;
    v23 = (MapControl_SpotInfo_o *)v45.fields.current;
    if ( layer < 1 )
    {
      if ( !v45.fields.current )
        sub_B7076C(v21, v22);
LABEL_22:
      if ( v23->fields.dispType == 1 )
        goto LABEL_25;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        sub_B7076C(0LL, v25);
      if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v23->fields.spotId, 0LL) )
      {
LABEL_25:
        v37 = v20;
        v26 = MapControl_SpotInfo__GetAvailableQuestIdList(v23, 1, 0LL);
        if ( !v26 )
          sub_B7076C(0LL, v27);
        System_Collections_Generic_List_int___GetEnumerator(
          &v41,
          v26,
          (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v38 = 0;
        v44 = v41;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v44,
                  (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v28 )
            break;
          if ( !ShareQuestIdToGroupIdDict )
            sub_B7076C(v28, v29);
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   ShareQuestIdToGroupIdDict,
                   (int32_t)v44.fields.current,
                   (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          v32 = Item;
          if ( (_DWORD)Item )
          {
            if ( !v19 )
              sub_B7076C(Item, v31);
            if ( System_Collections_Generic_List_int___Contains(
                   v19,
                   Item,
                   (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              ++v38;
            }
            else
            {
              System_Collections_Generic_List_int___Add(
                v19,
                v32,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v42[v39] = 282;
        v40 = ++v43;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v44,
          (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        v33 = v40;
        if ( v40 )
        {
          v34 = v37;
          if ( v42[v40 - 1] == 282 )
          {
            v33 = v40 - 1;
            v43 = v40 - 1;
          }
        }
        else
        {
          v34 = v37;
        }
        v39 = v33;
        v20 = v34 - v38 + v23->fields.questCount;
      }
    }
    else
    {
      if ( !v45.fields.current )
        sub_B7076C(v21, v22);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v45.fields.current, 0LL) == layer )
        goto LABEL_22;
    }
  }
  v42[v39] = 323;
  v35 = ++v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  if ( v35 && v42[v35 - 1] == 323 )
    v43 = v35 - 1;
  return v20;
}


MapControl_QuestInfo_o *__fastcall QuestTree__GetQuestInfo(
        QuestTree_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass23_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_4350235 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_B70694(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4350235 = 1;
  }
  v5 = (QuestTree___c__DisplayClass23_0_o *)sub_B70764(QuestTree___c__DisplayClass23_0_TypeInfo);
  QuestTree___c__DisplayClass23_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435024A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_435024A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_B7076C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)allQuestInfoList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B7076C(v8, v9);
    if ( LODWORD(v11.fields.current[4].klass) == warId )
    {
      if ( !v5 )
        sub_B7076C(v8, v9);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11.fields.current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4350239 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350239 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass21_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_4350233 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B70694(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass21_0_TypeInfo);
    byte_4350233 = 1;
  }
  v5 = (QuestTree___c__DisplayClass21_0_o *)sub_B70764(QuestTree___c__DisplayClass21_0_TypeInfo);
  QuestTree___c__DisplayClass21_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.spotId = spotId,
        allSpotInfoList = this->fields.allSpotInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__),
        !allSpotInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v4; // x20
  WarEntity_o *Mine; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x21
  System_Collections_Generic_List_int__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x22
  QuestTree___c_c *v19; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_0; // x23
  Il2CppObject *v22; // x24
  struct QuestTree___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x21

  if ( (byte_4350238 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_B70694(&Method_System_Func_MapButtonEntity__int___ctor__);
    sub_B70694(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__);
    sub_B70694(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__);
    sub_B70694(&QuestTree___c__DisplayClass29_0_TypeInfo);
    sub_B70694(&QuestTree___c_TypeInfo);
    byte_4350238 = 1;
  }
  v4 = sub_B70764(QuestTree___c__DisplayClass29_0_TypeInfo);
  QuestTree___c__DisplayClass29_0___ctor((QuestTree___c__DisplayClass29_0_o *)v4, 0LL);
  if ( !warInfo )
    goto LABEL_27;
  mapInfoList = warInfo->fields.mapInfoList;
  if ( MapControl_WarInfo__IsMultiMap(warInfo, 0LL) )
  {
    Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
    if ( !Mine )
      goto LABEL_27;
    BaseMap = WarEntity__GetBaseMap(Mine, 0LL);
    Map = MapControl_WarInfo__GetMap(warInfo, BaseMap, 0LL);
    Mine = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_27;
    Mine = (WarEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Mine,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Mine )
      goto LABEL_27;
    OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                           (MapButtonMaster_o *)Mine,
                                                                           warInfo,
                                                                           Map,
                                                                           0LL);
    v11 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v4 )
      goto LABEL_27;
    *(_QWORD *)(v4 + 16) = v11;
    sub_B70630((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    if ( !OpenedButtons )
      goto LABEL_27;
    v18 = *(System_Collections_Generic_List_int__o **)(v4 + 16);
    if ( OpenedButtons[1].monitor )
    {
      v19 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v19 = QuestTree___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = QuestTree___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_MapButtonEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__29_0,
          v22,
          Method_QuestTree___c__GetUserReachableMapList_b__29_0__,
          (const MethodInfo_29AD124 *)Method_System_Func_MapButtonEntity__int___ctor__);
        v23 = QuestTree___c_TypeInfo->static_fields;
        v23->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v23->__9__29_0,
          (System_Int32_array **)_9__29_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      Mine = (WarEntity_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                              OpenedButtons,
                              (System_Func_TSource__TResult__o *)_9__29_0,
                              (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
      if ( !v18 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !Map || !v18 )
        goto LABEL_27;
      System_Collections_Generic_List_int___Add(
        *(System_Collections_Generic_List_int__o **)(v4 + 16),
        Map->fields.mapId,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v30,
      (Il2CppObject *)v4,
      Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
    if ( mapInfoList )
      return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)mapInfoList,
                                                                        (System_Predicate_T__o *)v30,
                                                                        (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
LABEL_27:
    sub_B7076C(Mine, v6);
  }
  return mapInfoList;
}


int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass33_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20
  peRenderTexture_ChangeLayerObject_o *v10; // x0

  if ( (byte_435023C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_B70694(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass33_0_TypeInfo);
    byte_435023C = 1;
  }
  v5 = (QuestTree___c__DisplayClass33_0_o *)sub_B70764(QuestTree___c__DisplayClass33_0_TypeInfo);
  QuestTree___c__DisplayClass33_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v10 )
    LODWORD(v10) = v10[1].monitor;
  return (int)v10;
}


System_Collections_Generic_List_MapControl_WarInfo__o *__fastcall QuestTree__GetWarInfoAll(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allWarInfoList;
}


System_Collections_Generic_List_MapControl_WarInfo__o *__fastcall QuestTree__GetWarInfoAll_OrderReverse(
        QuestTree_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435022F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___69185784);
    sub_B70694(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_435022F = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v4,
    allWarInfoList,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___69185784);
  if ( !v4 )
    sub_B7076C(v5, v6);
  System_Collections_Generic_List_MapControl_WarInfo___Reverse(
    (System_Collections_Generic_List_MapControl_WarInfo__o *)v4,
    (const MethodInfo_30274E8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v4;
}


MapControl_WarInfo_o *__fastcall QuestTree__GetWarInfoByEventID(
        QuestTree_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByEventID((MapControl_RootInfo_o *)result, eventId, 0LL);
  return result;
}


System_Collections_IEnumerator_o *__fastcall QuestTree__Init(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4350230 & 1) == 0 )
  {
    sub_B70694(&QuestTree__Init_d__15_TypeInfo);
    byte_4350230 = 1;
  }
  v5 = sub_B70764(QuestTree__Init_d__15_TypeInfo);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0

  if ( (byte_4350244 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4350244 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allQuestInfoList;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotInfoList;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotRoadInfoList;
  if ( !mapControlRootInfo
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapGimmickInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allWarInfoList) == 0LL) )
  {
LABEL_11:
    sub_B7076C(mapControlRootInfo, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435023E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435023E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_22270752(this, entity, v7);
}


bool __fastcall QuestTree__IsActiveEventWar_22270752(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t id; // w21
  int64_t Time; // x20
  const MethodInfo *v7; // x2
  bool v8; // w21
  const MethodInfo *v9; // x3
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_435023F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    this = (QuestTree_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435023F = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_20;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (QuestTree_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_20;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v7);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_20;
    v8 = Time < *(_QWORD *)&entity->fields.eventId;
  }
  else
  {
    v8 = 0;
  }
  this = (QuestTree_o *)sub_B706AC(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_20:
    sub_B7076C(this, warEnt);
  if ( !LODWORD(this->fields.allQuestInfoList) )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  this->fields.allSpotInfoList = *(struct System_Collections_Generic_List_MapControl_SpotInfo__o **)&entity->fields.eventId;
  QuestTree__UpdateForceUpdateTime(v4, Time, (System_Int64_array *)this, v9);
  return v8;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w20
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4350231 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350231 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  if ( MonitoringDataMasterRevision != DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL) )
    return 1;
  forceUpdateTime = this->fields.forceUpdateTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return forceUpdateTime <= NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsNextSpotForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  SpotEntity_o *Mine; // x1
  const MethodInfo *v14; // x3
  char v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_435023B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_435023B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_B7076C(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v19.fields.current;
    if ( layer < 1 )
    {
      if ( !v19.fields.current )
        sub_B7076C(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields.current )
      sub_B7076C(v10, v11);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v19.fields.current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v14)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v15 = 1;
        v16 = 2;
        goto LABEL_16;
      }
    }
  }
  v16 = 0;
  v15 = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = (v16 == 2) & v15;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_B7076C(this, 0LL);
  return QuestTree__CheckSpotCond_22275788(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.activeCondType,
           spotEnt->fields.activeTargetId,
           spotEnt->fields.activeTargetValue,
           v3);
}


bool __fastcall QuestTree__IsSpotSatisfyingDisplayCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6
  const MethodInfo *v8; // x6

  if ( !spotEnt )
    sub_B7076C(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_22275788(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_22275788(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


bool __fastcall QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_MapControl_QuestInfo__o *QuestInfoByWarId; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  clsQuestCheck_o *v10; // x0
  __int64 v11; // x1
  int v12; // w19
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435024B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_435024B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_B7076C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields.current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_B7076C(v10, v11);
    if ( !v10 )
      sub_B7076C(0LL, v11);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v10, (int32_t)current[1].klass, 0LL) )
    {
      v12 = 9;
      goto LABEL_11;
    }
  }
  v12 = 7;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 != 9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  clsQuestCheck_o *QuestInfoByWarId; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  _BOOL8 v10; // x0
  __int64 v11; // x1
  char v12; // w19
  int v13; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_435023D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_435023D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v7 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v7 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_B7076C(QuestInfoByWarId, v6);
  if ( clsQuestCheck__IsWarClear(QuestInfoByWarId, warId, 0LL) )
    return 1;
  mapControlRootInfo = v4->fields.mapControlRootInfo;
  if ( mapControlRootInfo )
  {
    ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
    if ( ChildByWarID )
    {
      if ( MapControl_WarInfo__GetStatus(ChildByWarID, 0LL) != 2 )
        return 1;
    }
  }
LABEL_5:
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v9);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v17.fields.current )
      sub_B7076C(v10, v11);
    if ( LODWORD(v17.fields.current[2].klass) == 1 )
    {
      v12 = 1;
      v13 = 17;
      goto LABEL_15;
    }
  }
  v12 = 0;
  v13 = 15;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (v13 == 17) & v12;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  QuestAfterAction_o *Instance; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **name; // x1
  __int64 v16; // x22
  __int64 v17; // x22
  UnityEngine_Object_o *v18; // x22
  bool IsExistCommand; // w21
  int32_t v20; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4350240 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&SpotEntity_TypeInfo);
    byte_4350240 = 1;
  }
  v6 = sub_B70764(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_22;
  if ( !v6 )
    goto LABEL_22;
  *(_DWORD *)(v6 + 16) = blankEarthSpotEnt->fields.id;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_DWORD *)(v6 + 20) = blankEarthSpotEnt->fields.warId;
  name = (System_Int32_array **)blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 32), name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_22;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_B08394(v17);
  v18 = **(UnityEngine_Object_o ***)(v17 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    IsExistCommand = QuestAfterAction__IsExistCommand(Instance, 0, *(_DWORD *)(v6 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_B7076C(Instance, v8);
  v20 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v20, 0, 0LL);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void __fastcall QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  v4 = QuestTree__CheckMapGimmickCond_22272832(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_B7076C(v4, v5);
  (*mapGimmickInfo)->fields.dispType = v4;
}


void __fastcall QuestTree__SetupSpotInfo(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        MapControl_SpotInfo_o **spotInfo,
        const MethodInfo *method)
{
  _BOOL8 IsSpotSatisfyingDisplayCond; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int v10; // w9
  int32_t v11; // w10
  MapControl_SpotInfo_o *v12; // x8

  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method);
  if ( IsSpotSatisfyingDisplayCond )
  {
    IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v9);
    if ( !*spotInfo
      || ((v10 = 1, IsSpotSatisfyingDisplayCond) ? (v11 = 1) : (v11 = 2),
          (*spotInfo)->fields.dispType = v11,
          (v12 = *spotInfo) == 0LL) )
    {
LABEL_12:
      sub_B7076C(IsSpotSatisfyingDisplayCond, v8);
    }
  }
  else
  {
    if ( !*spotInfo )
      goto LABEL_12;
    (*spotInfo)->fields.dispType = 0;
    v12 = *spotInfo;
    if ( !*spotInfo )
      goto LABEL_12;
    v10 = 0;
  }
  v12->fields.touchType = v10;
}


void __fastcall QuestTree__SetupSpotRoadInfo(
        QuestTree_o *this,
        SpotRoadEntity_o *spotRoadEnt,
        MapControl_SpotRoadInfo_o **spotRoadInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t id; // w21
  QuestTree_o *v8; // x20
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x6
  int32_t v11; // w9

  if ( !spotRoadEnt )
    goto LABEL_11;
  id = spotRoadEnt->fields.id;
  v8 = this;
  this = (QuestTree_o *)QuestTree__CheckSpotCond_22275788(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_22275788(
                                v8,
                                1,
                                id,
                                spotRoadEnt->fields.dispCondType2,
                                spotRoadEnt->fields.dispTargetId2,
                                spotRoadEnt->fields.dispTargetValue2,
                                v9),
        ((unsigned __int8)this & 1) == 0) )
  {
    if ( *spotRoadInfo )
    {
      (*spotRoadInfo)->fields.dispType = 0;
      return;
    }
LABEL_11:
    sub_B7076C(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_22275788(
                          v8,
                          1,
                          id,
                          spotRoadEnt->fields.activeCondType,
                          spotRoadEnt->fields.activeTargetId,
                          spotRoadEnt->fields.activeTargetValue,
                          v10);
  if ( !*spotRoadInfo )
    goto LABEL_11;
  if ( ((unsigned __int8)this & 1) != 0 )
    v11 = 1;
  else
    v11 = 2;
  (*spotRoadInfo)->fields.dispType = v11;
}


void __fastcall QuestTree__UpdateForceUpdateTime(
        QuestTree_o *this,
        int64_t nowTime,
        System_Int64_array *times,
        const MethodInfo *method)
{
  int v4; // w9
  unsigned __int64 v5; // x8
  int64_t v6; // x11
  __int64 v7; // x0

  if ( !times )
    sub_B7076C(this, nowTime);
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = *(_QWORD *)&times->max_length;
    if ( !v4 )
    {
LABEL_10:
      v7 = sub_B70798(this);
      sub_B70738(v7, 0LL);
    }
    v5 = 0LL;
    while ( 1 )
    {
      v6 = times->m_Items[v5];
      if ( v6 > nowTime && this->fields.forceUpdateTime > v6 )
        this->fields.forceUpdateTime = v6;
      if ( (__int64)++v5 >= v4 )
        break;
      if ( v5 >= times->max_length )
        goto LABEL_10;
    }
  }
}


void __fastcall QuestTree__UpdateMonitoringValue(QuestTree_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4350232 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350232 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL);
}


void __fastcall QuestTree__UpdateQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v5; // x20
  QuestEntity_o *Mine; // x0
  QuestEntity_o *v7; // x21
  int32_t WarId; // w3
  const MethodInfo *v9; // x4

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( QuestInfo )
  {
    v5 = QuestInfo;
    Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
    if ( Mine )
    {
      v7 = Mine;
      WarId = QuestEntity__GetWarId(Mine, 0LL);
      QuestTree__CheckQuestOpen(this, v7, v5, WarId, v9);
    }
  }
}


clsQuestCheck_o *__fastcall QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  if ( (byte_435022E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_435022E = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  return SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4350241 & 1) == 0 )
  {
    sub_B70694(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo);
    byte_4350241 = 1;
  }
  v5 = sub_B70764(QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 48),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck(
        QuestTree_o *this,
        int32_t targetWarId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4350242 & 1) == 0 )
  {
    sub_B70694(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo);
    byte_4350242 = 1;
  }
  v7 = sub_B70764(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 72),
    (System_Int32_array **)endCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return (System_Collections_IEnumerator_o *)v7;
}


MapControl_RootInfo_o *__fastcall QuestTree__mfGetMapCtrlP(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.mapControlRootInfo;
}


MapControl_MapInfo_o *__fastcall QuestTree__mfGetMapInfoByMapID(
        QuestTree_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass27_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_4350236 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_B70694(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_4350236 = 1;
  }
  v5 = (QuestTree___c__DisplayClass27_0_o *)sub_B70764(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.mapId = mapId;
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__mfGetQuestInfoListP(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allQuestInfoList;
}


WarEntity_o *__fastcall QuestTree__mfGetWarEntityByWarID(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0

  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( mapControlRootInfo
    && (ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL)) != 0LL )
  {
    return MapControl_WarInfo__GetMine(ChildByWarID, 0LL);
  }
  else
  {
    return 0LL;
  }
}


MapControl_WarInfo_o *__fastcall QuestTree__mfGetWarInfoByWarID(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByWarID((MapControl_RootInfo_o *)result, warId, 0LL);
  return result;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  System_Int32_array **v13; // x0
  BattleServantConfConponent_o *p__7__wrap1; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w8
  int32_t _7__wrap2; // w8
  BattleServantConfConponent_c *klass; // x9
  int32_t namespaze; // w10
  BlankEarthSpotEntity_o *v25; // x21
  System_Int32_array **v26; // x22
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  bool result; // w0
  __int64 v35; // x0

  v8 = this;
  if ( (byte_4351B3B & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B70694(&BlankEarthSpotMaster_TypeInfo);
    byte_4351B3B = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v8->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap1;
    v8->fields.__1__state = -1;
    v21 = _7__wrap2 + 1;
    v8->fields.__7__wrap2 = v21;
  }
  else
  {
    if ( _1__state )
      return 0;
    mapInfo = v8->fields.mapInfo;
    v8->fields.__1__state = -1;
    if ( !mapInfo )
      goto LABEL_22;
    mapId = mapInfo->fields.mapId;
    if ( (BYTE3(BlankEarthSpotMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    }
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0LL) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_22;
    v13 = (System_Int32_array **)BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v8->fields.__7__wrap1 = (struct BlankEarthSpotEntity_array *)v13;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap1;
    sub_B70630((BattleServantConfConponent_o *)&v8->fields.__7__wrap1, v13, v15, v16, v17, v18, v19, v20);
    v21 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  klass = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_22;
  namespaze = (int32_t)klass->_1.namespaze;
  if ( v21 < namespaze )
  {
    if ( v21 >= (unsigned int)namespaze )
    {
      v35 = sub_B70798(this);
      sub_B70738(v35, 0LL);
    }
    v25 = (BlankEarthSpotEntity_o *)*((_QWORD *)&klass->_1.byval_arg.data + v21);
    if ( v25 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v25->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v26 = (System_Int32_array **)this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v25, (MapControl_SpotInfo_o *)this, 0LL);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v26;
          p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B70630(p__2__current, v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
    }
LABEL_22:
    sub_B7076C(this, method);
  }
  p__7__wrap1->klass = 0LL;
  sub_B70630(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **_4__this; // x1
  System_Int32_array **_3__mapInfo; // x1
  System_Int32_array **_3__blankEarthSpotMaster; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4351B3C & 1) == 0 )
  {
    sub_B70694(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    byte_4351B3C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B70764(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B7076C(CurrentManagedThreadId, v12);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v10->fields.__4__this = (struct QuestTree_o *)_4__this;
    sub_B70630((BattleServantConfConponent_o *)&v10->fields.__4__this, _4__this, v13, v14, v15, v16, v17, v18);
  }
  _3__mapInfo = (System_Int32_array **)this->fields.__3__mapInfo;
  v10->fields.mapInfo = (struct MapControl_MapInfo_o *)_3__mapInfo;
  sub_B70630((BattleServantConfConponent_o *)&v10->fields.mapInfo, _3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = (System_Int32_array **)this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = (struct BlankEarthSpotMaster_o *)_3__blankEarthSpotMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->fields.blankEarthSpotMaster,
    _3__blankEarthSpotMaster,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__41_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__Init_d__15___ctor(QuestTree__Init_d__15_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__Init_d__15__MoveNext(QuestTree__Init_d__15_o *this, const MethodInfo *method)
{
  QuestTree__Init_d__15_o *v2; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  System_Action_o *endCallback; // x0
  __int64 v8; // x20
  __int64 v9; // x20
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x21
  UnityEngine_Object_o *v13; // x21
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v2 = this;
  if ( (byte_4351B3D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestTree__Init_d__15_o *)sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4351B3D = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    LOBYTE(endCallback) = 0;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
    {
LABEL_32:
      LOBYTE(endCallback) = 0;
      return (char)endCallback;
    }
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_46;
    if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434E569 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434E569 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      isInvisibleConnectAndLoad = v5->static_fields->isInvisibleConnectAndLoad;
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
        v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
        v12 = **(_QWORD **)(v11 + 192);
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B08394(v12);
        v13 = **(UnityEngine_Object_o ***)(v12 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
          goto LABEL_44;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_44:
            QuestTree__UpdateMonitoringValue(_4__this, 0LL);
            v14 = (System_Int32_array **)QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v14;
            sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, v14, v15, v16, v17, v18, v19, v20);
            LOBYTE(endCallback) = 1;
            v2->fields.__1__state = 1;
            return (char)endCallback;
          }
        }
      }
LABEL_46:
      sub_B7076C(this, method);
    }
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v9 = **(_QWORD **)(v8 + 192);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_B08394(v9);
    v10 = **(UnityEngine_Object_o ***)(v9 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_46;
      QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_46;
      QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
    }
    endCallback = v2->fields.endCallback;
    if ( endCallback )
    {
      System_Action__Invoke(endCallback, 0LL);
      goto LABEL_32;
    }
  }
  return (char)endCallback;
}


Il2CppObject *__fastcall QuestTree__Init_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__Init_d__15__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall QuestTree__Init_d__15__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__Init_d__15__System_IDisposable_Dispose(
        QuestTree__Init_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351B37 & 1) == 0 )
  {
    sub_B70694(&QuestTree___c_TypeInfo);
    byte_4351B37 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestTree___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__39_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (klass_high = HIDWORD(this[3].klass), (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B7076C(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__39_1(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0LL)) == 0LL
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B7076C(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_11(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0LL)) == 0LL
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B7076C(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (klass_high = HIDWORD(this[3].klass), (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B7076C(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass21_0___ctor(
        QuestTree___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass21_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass21_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass22_0___ctor(
        QuestTree___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass22_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass22_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass23_0___ctor(
        QuestTree___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass23_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass23_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass27_0___ctor(
        QuestTree___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass27_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass27_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass29_0___ctor(
        QuestTree___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass29_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass29_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass29_0_o *v4; // x20

  v4 = this;
  if ( (byte_4351B38 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4351B38 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_B7076C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass33_0___ctor(
        QuestTree___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass33_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass33_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass33_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass33_0_o *)MapControl_QuestInfo__GetMine(x, 0LL)) == 0LL) )
    sub_B7076C(this, x);
  return this->fields.questId == v3->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass39_0___ctor(
        QuestTree___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass39_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass40_0___ctor(
        QuestTree___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass40_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass40_1___ctor(
        QuestTree___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass40_2___ctor(
        QuestTree___c__DisplayClass40_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass40_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass40_3___ctor(
        QuestTree___c__DisplayClass40_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass40_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass40_3_o *v4; // x20

  v4 = this;
  if ( (byte_4351B39 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_3_o *)sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4351B39 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_B7076C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass40_4___ctor(
        QuestTree___c__DisplayClass40_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass40_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass40_5___ctor(
        QuestTree___c__DisplayClass40_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass40_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass40_6___ctor(
        QuestTree___c__DisplayClass40_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass40_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass40_6_o *v4; // x20

  v4 = this;
  if ( (byte_4351B3A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_6_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4351B3A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_B7076C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__39___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__39__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v2; // x27
  struct QuestTree_o *_4__this; // x20
  System_Int32_array **Instance; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **Entitys_WarMaster__WarEntity; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  unsigned int *p_warIdx_5__18; // x19
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  signed int v112; // w8
  unsigned int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  int32_t *p_questIdx_5__25; // x28
  int32_t *p_questCount_5__26; // x27
  bool result; // w0
  struct WarEntity_array *v118; // x9
  WarEntity_o *v119; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v121; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v128; // x23
  int64_t v129; // x23
  unsigned int _2__current; // w8
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v137; // x22
  unsigned int v138; // w9
  __int64 v139; // x8
  int32_t v140; // w24
  MapControl_MapInfo_o *v141; // x23
  Il2CppObject *v142; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v143; // x25
  unsigned int v144; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v145; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v146; // x8
  SpotEntity_o **v147; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v148; // t1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *allSpotInfoList; // x25
  Il2CppObject *v150; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v151; // x25
  unsigned int v152; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v153; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v154; // x8
  SpotRoadEntity_o **v155; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v156; // t1
  Il2CppObject *v157; // x25
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v158; // x24
  unsigned int v159; // w22
  __int64 v160; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allWarInfoList; // x21
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v164; // x23
  struct QuestTree___c_StaticFields *v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  Il2CppObject *v172; // x22
  struct QuestTree___c__DisplayClass39_0_o **p__8__1; // x21
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  int64_t v180; // x22
  MapControl_WarInfo_o *v181; // x23
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  MapControl_MapInfo_o *v188; // x22
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  MapControl_SpotInfo_o *v195; // x22
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  WarEntity_o *v202; // x22
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  System_Int32_array **v209; // x0
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  bool isSavedMemoryMode; // w0
  bool v217; // zf
  int v218; // w8
  BattleServantConfConponent_o *p__2__current; // x27
  __int64 v220; // x0
  QuestEntity_o *v221; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass39_0_o *_8__1; // x8
  struct QuestTree___c__DisplayClass39_0_o *v226; // x25
  QuestEntity_o *v227; // x21
  int32_t v228; // w22
  int32_t *v229; // x23
  int32_t *v230; // x28
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v231; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__2; // x27
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  System_Int32_array **v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  int32_t MapID; // w0
  System_Int32_array **MapInfoByMapID; // x0
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Int32_array **WarInfoByWarID; // x0
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Int32_array **Mine; // x0
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  int v268; // w25
  System_String_array **v269; // x2
  System_String_array **v270; // x3
  System_Boolean_array **v271; // x4
  System_Int32_array **v272; // x5
  System_Int32_array *v273; // x6
  System_Int32_array *v274; // x7
  struct MapControl_WarInfo_o *warInfo_5__20; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v276; // x24
  struct EventMaster_o *v277; // x1
  System_Int32_array **spotInfo_5__22; // x1
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v286; // w19
  struct MapControl_SpotInfo_o *v287; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v289; // x9
  struct MapControl_MapInfo_o *v290; // x9
  bool v291; // w8
  Il2CppObject *v292; // x19
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v293; // x21
  unsigned int v294; // w22
  __int64 v295; // x8
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allQuestInfoList; // x21
  struct QuestTree___c_StaticFields *v303; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_1; // x22
  Il2CppObject *v305; // x23
  struct QuestTree___c_StaticFields *v306; // x0
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  System_String_array **v319; // x2
  System_String_array **v320; // x3
  System_Boolean_array **v321; // x4
  System_Int32_array **v322; // x5
  System_Int32_array *v323; // x6
  System_Int32_array *v324; // x7
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  int32_t *p_warCount_5__19; // [xsp+0h] [xbp-C0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v356; // [xsp+10h] [xbp-B0h]
  MapControl_WarInfo_o *v357; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v358; // [xsp+20h] [xbp-A0h]
  unsigned int v359; // [xsp+28h] [xbp-98h]
  struct QuestMaster_o *v360; // [xsp+28h] [xbp-98h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v361; // [xsp+30h] [xbp-90h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+38h] [xbp-88h] BYREF
  UserQuestEntity_o *v363; // [xsp+40h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+48h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+50h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *v367; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4351B3E & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_MapControl_WarInfo___ctor__);
    sub_B70694(&Method_System_Comparison_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_B70694(&MapControl_MapInfo_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&MapControl_SpotInfo_TypeInfo);
    sub_B70694(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__);
    sub_B70694(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__);
    sub_B70694(&Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_B70694(&QuestTree___c__DisplayClass39_0_TypeInfo);
    sub_B70694(&QuestTree___c_TypeInfo);
    sub_B70694(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B70694(&MapControl_WarInfo_TypeInfo);
    byte_4351B3E = 1;
  }
  entity = 0LL;
  spotInfo = 0LL;
  v367 = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v363 = 0LL;
  _4__this = v2->fields.__4__this;
  v361 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_252;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._dataManager_5__2, Instance, v5, v6, v7, v8, v9, v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._mapMaster_5__3,
        MasterData_WarQuestSelectionMaster,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v18 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v18;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._spotMaster_5__4, v18, v19, v20, v21, v22, v23, v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v25 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v25;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._blankEarthSpotMaster_5__5,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v32 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v32;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._questMaster_5__6, v32, v33, v34, v35, v36, v37, v38);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v39 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v39;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._questPhaseMaster_5__7, v39, v40, v41, v42, v43, v44, v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v46 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v46;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._eventMaster_5__8, v46, v47, v48, v49, v50, v51, v52);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v53 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v53;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._eventDetailMaster_5__9, v53, v54, v55, v56, v57, v58, v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v60 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v60;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._eventStatusMaster_5__10,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v67 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._eventStatusQuestMaster_5__11,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v74 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v74;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._spotRoadMaster_5__12, v74, v75, v76, v77, v78, v79, v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v81 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v81;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields._mapGimmickMaster_5__13, v81, v82, v83, v84, v85, v86, v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v88 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v88;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._questPickupMaster_5__14,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v95,
        (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v95;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (System_Int32_array **)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      Entitys_WarMaster__WarEntity = (System_Int32_array **)DataManager__getEntitys_WarMaster__WarEntity_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_1CA3834 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_WarMaster__WarEntity;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields._warList_5__16,
        Entitys_WarMaster__WarEntity,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__getTime(0LL);
      v2->fields._warIdx_5__18 = 0;
      p_warIdx_5__18 = (unsigned int *)&v2->fields._warIdx_5__18;
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      if ( !warList_5__16 )
        goto LABEL_252;
      max_length = warList_5__16->max_length;
      v112 = 0;
      v2->fields._warCount_5__19 = max_length;
      p_warCount_5__19 = &v2->fields._warCount_5__19;
      break;
    case 1:
      p_warIdx_5__18 = (unsigned int *)&v2->fields._warIdx_5__18;
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      p_warCount_5__19 = &v2->fields._warCount_5__19;
      goto LABEL_106;
    case 2:
      p_questIdx_5__25 = &v2->fields._questIdx_5__25;
      questIdx_5__25 = v2->fields._questIdx_5__25;
      p_questCount_5__26 = &v2->fields._questCount_5__26;
      *(p_questIdx_5__25 - 54) = -1;
      goto LABEL_235;
    case 3:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_252;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v112 < max_length )
  {
    v118 = v2->fields._warList_5__16;
    if ( !v118 )
      goto LABEL_252;
    if ( v112 >= v118->max_length )
      goto LABEL_132;
    v119 = v118->m_Items[v112];
    if ( !v119 )
      goto LABEL_252;
    if ( !_4__this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_252;
    id = v119->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v121 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_WarMaster__WarEntity__int__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v121, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_252;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_252;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= *(_QWORD *)&entity->fields.startType && nowTime_5__17 < (__int64)entity->fields.coordinate )
          MapControl_WarInfo__SetStatusCheckFlag(v121, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_WarMaster__WarEntity__int__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v121, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_252;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v367,
               (int32_t)this,
               (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v367;
          if ( !v367 )
            goto LABEL_252;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v367, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)entity;
            if ( !entity )
              goto LABEL_252;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v121, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_252;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v128 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v121, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_252;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v128->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_252;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)this,
                  (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v129 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B706AC(long___TypeInfo, 3LL);
        if ( !entity || !this )
          goto LABEL_252;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_132;
        this->fields.__4__this = *(struct QuestTree_o **)&entity->fields.startType;
        if ( !entity )
          goto LABEL_252;
        if ( _2__current <= 1 )
          goto LABEL_132;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)entity->fields.targetId;
        if ( !entity )
          goto LABEL_252;
        if ( _2__current <= 2 )
          goto LABEL_132;
        this->fields.endCallback = (struct System_Action_o *)entity->fields.coordinate;
        QuestTree__UpdateForceUpdateTime(_4__this, v129, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_252;
    v137 = this;
    v358 = this->fields.__2__current;
    if ( (int)v358 >= 1 )
    {
      if ( !(_DWORD)v358 )
        goto LABEL_132;
      v138 = 0;
      v356 = this;
      v357 = v121;
      while ( 1 )
      {
        v139 = *((_QWORD *)&v137->fields.__4__this + (int)v138);
        v359 = v138;
        if ( !v139 )
          goto LABEL_252;
        v140 = *(_DWORD *)(v139 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__AddChild(v121, v140, 0LL);
        if ( !_4__this->fields.allMapInfoList )
          goto LABEL_252;
        v141 = (MapControl_MapInfo_o *)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotMaster__getList((SpotMaster_o *)this, v140, 0LL);
        if ( !this )
          goto LABEL_252;
        v142 = this->fields.__2__current;
        v143 = this;
        if ( (int)v142 >= 1 )
          break;
LABEL_79:
        allSpotInfoList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v141,
                                                                   v361->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_252;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v140,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        v150 = this->fields.__2__current;
        v151 = this;
        if ( (int)v150 >= 1 )
        {
          v152 = 0;
          while ( 1 )
          {
            v153 = &v151->klass + (int)v152;
            v156 = v153[4];
            v155 = (SpotRoadEntity_o **)(v153 + 4);
            v154 = v156;
            if ( !v156 || !v141 )
              goto LABEL_252;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v141,
                                                                       (int32_t)v154->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v152 >= LODWORD(v151->fields.__2__current) )
              goto LABEL_132;
            QuestTree__SetupSpotRoadInfo(_4__this, *v155, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
            if ( (int)++v152 >= (int)v150 )
              break;
            if ( v152 >= LODWORD(v151->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v2 = v361;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v140,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        v157 = this->fields.__2__current;
        v158 = this;
        if ( (int)v157 >= 1 )
        {
          v159 = 0;
          while ( 1 )
          {
            v160 = *((_QWORD *)&v158->fields.__4__this + (int)v159);
            if ( !v160 )
              goto LABEL_252;
            if ( !v141 )
              goto LABEL_252;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v141, *(_DWORD *)(v160 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
            if ( (int)++v159 >= (int)v157 )
              break;
            if ( v159 >= LODWORD(v158->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v121 = v357;
        v137 = v356;
        v138 = v359 + 1;
        if ( (int)(v359 + 1) >= (int)v358 )
          goto LABEL_104;
        if ( v138 >= LODWORD(v356->fields.__2__current) )
          goto LABEL_132;
      }
      v144 = 0;
      do
      {
        v145 = &v143->klass + (int)v144;
        v148 = v145[4];
        v147 = (SpotEntity_o **)(v145 + 4);
        v146 = v148;
        if ( !v148 || !v141 )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddChild(
                                                                   v141,
                                                                   (int32_t)v146->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( v144 >= LODWORD(v143->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v147, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_252;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
        if ( (int)++v144 >= (int)v142 )
          goto LABEL_79;
      }
      while ( v144 < LODWORD(v143->fields.__2__current) );
LABEL_132:
      v220 = sub_B70798(this);
      sub_B70738(v220, 0LL);
    }
LABEL_104:
    warIdx_5__18 = *p_warIdx_5__18;
    if ( (int)*p_warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B70630(p__2__current, 0LL, v131, v132, v133, v134, v135, v136);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_106:
    v112 = warIdx_5__18 + 1;
    *p_warIdx_5__18 = v112;
    max_length = *p_warCount_5__19;
  }
  if ( !_4__this )
    goto LABEL_252;
  allWarInfoList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  }
  static_fields = *(struct QuestTree___c_StaticFields **)&this->fields._warIdx_5__18;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(this[1].fields.endCallback) & 4) != 0 && !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = QuestTree___c_TypeInfo->static_fields;
    }
    v164 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v164,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
    v165 = QuestTree___c_TypeInfo->static_fields;
    v165->__9__39_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__39_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v165->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v166,
      v167,
      v168,
      v169,
      v170,
      v171);
  }
  if ( !allWarInfoList )
    goto LABEL_252;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allWarInfoList,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v172 = (Il2CppObject *)sub_B70764(QuestTree___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v172, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)v172;
  p__8__1 = &v2->fields.__8__1;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.__8__1,
    (System_Int32_array **)v172,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  v180 = v2->fields._nowTime_5__17;
  v181 = (MapControl_WarInfo_o *)sub_B70764(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v181, v180, 0LL);
  v2->fields._warInfo_5__20 = v181;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._warInfo_5__20,
    (System_Int32_array **)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v188 = (MapControl_MapInfo_o *)sub_B70764(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v188, 0LL);
  v2->fields._mapInfo_5__21 = v188;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._mapInfo_5__21,
    (System_Int32_array **)v188,
    v189,
    v190,
    v191,
    v192,
    v193,
    v194);
  v195 = (MapControl_SpotInfo_o *)sub_B70764(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v195, 0LL);
  v2->fields._spotInfo_5__22 = v195;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._spotInfo_5__22,
    (System_Int32_array **)v195,
    v196,
    v197,
    v198,
    v199,
    v200,
    v201);
  v202 = (WarEntity_o *)sub_B70764(WarEntity_TypeInfo);
  WarEntity___ctor(v202, 0LL);
  v2->fields._warEnt_5__23 = v202;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._warEnt_5__23,
    (System_Int32_array **)v202,
    v203,
    v204,
    v205,
    v206,
    v207,
    v208);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_252;
  v209 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v209;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._userQuestMaster_5__24,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214,
    v215);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_252;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v2->fields._questIdx_5__25 = 0;
  p_questIdx_5__25 = &v2->fields._questIdx_5__25;
  v217 = !isSavedMemoryMode;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._questMaster_5__6;
  v218 = v217 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v218;
  if ( !this )
    goto LABEL_252;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  v2->fields._questCount_5__26 = (int)this;
  p_questCount_5__26 = &v2->fields._questCount_5__26;
  method = (const MethodInfo *)(unsigned int)*(p_questCount_5__26 - 1);
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v221 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v363 = 0LL;
    userQuestMaster_5__24 = v361->fields._userQuestMaster_5__24;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_252;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v363, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v363;
      if ( !v363 )
        goto LABEL_252;
      QuestPhase = UserQuestEntity__getQuestPhase(v363, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__getSpotId_26073280(v221, QuestPhase + 1, 0LL);
    _8__1 = v361->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_252;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      v360 = _1__state;
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_252;
      v226 = v361->fields.__8__1;
      if ( !v226 )
        goto LABEL_252;
      v227 = v221;
      v228 = QuestPhase;
      v229 = p_questIdx_5__25;
      v230 = p_questCount_5__26;
      v231 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v226->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__2,
          (Il2CppObject *)v226,
          Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v226->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_B70630(
          (BattleServantConfConponent_o *)&v226->fields.__9__2,
          (System_Int32_array **)_9__2,
          v233,
          v234,
          v235,
          v236,
          v237,
          v238);
      }
      if ( !v231 )
        goto LABEL_252;
      v239 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v231,
                                      (System_Predicate_T__o *)_9__2,
                                      (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v361->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v239;
      sub_B70630(
        (BattleServantConfConponent_o *)&v361->fields._spotInfo_5__22,
        v239,
        v240,
        v241,
        v242,
        v243,
        v244,
        v245);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_252;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      p_questCount_5__26 = v230;
      p_questIdx_5__25 = v229;
      QuestPhase = v228;
      v221 = v227;
      _1__state = v360;
      if ( v361->fields._mapInfoNow_5__27 != MapID )
      {
        v361->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = (System_Int32_array **)QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v361->fields._mapInfo_5__21 = (struct MapControl_MapInfo_o *)MapInfoByMapID;
        sub_B70630(
          (BattleServantConfConponent_o *)&v361->fields._mapInfo_5__21,
          MapInfoByMapID,
          v248,
          v249,
          v250,
          v251,
          v252,
          v253);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v361->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v361->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = (System_Int32_array **)QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v361->fields._warInfo_5__20 = (struct MapControl_WarInfo_o *)WarInfoByWarID;
          sub_B70630(
            (BattleServantConfConponent_o *)&v361->fields._warInfo_5__20,
            WarInfoByWarID,
            v255,
            v256,
            v257,
            v258,
            v259,
            v260);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_252;
          Mine = (System_Int32_array **)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v361->fields._warEnt_5__23 = (struct WarEntity_o *)Mine;
          sub_B70630(
            (BattleServantConfConponent_o *)&v361->fields._warEnt_5__23,
            Mine,
            v262,
            v263,
            v264,
            v265,
            v266,
            v267);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    if ( !v363 )
      goto LABEL_178;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v363;
    if ( !v363 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v363, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_163;
    if ( !v363 )
      goto LABEL_252;
    if ( v363->fields.challengeNum >= 1 )
    {
LABEL_163:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v363;
    if ( !v363 )
      goto LABEL_252;
    if ( UserQuestEntity__getClearNum(v363, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
LABEL_178:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v268 = 0;
      goto LABEL_179;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v363 )
      goto LABEL_252;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v363->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v361->fields._warInfo_5__20 )
      goto LABEL_252;
    v268 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetMine(
                                                               v361->fields._warInfo_5__20,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_179:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    warInfo_5__20 = v361->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_252;
    v276 = this;
    if ( !this )
      goto LABEL_252;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    v277 = (struct EventMaster_o *)v361->fields._warInfo_5__20;
    this->fields._eventMaster_5__8 = v277;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._eventMaster_5__8,
      (System_Int32_array **)v277,
      v269,
      v270,
      v271,
      v272,
      v273,
      v274);
    spotInfo_5__22 = (System_Int32_array **)v361->fields._spotInfo_5__22;
    v276->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_B70630(
      (BattleServantConfConponent_o *)&v276->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v279,
      v280,
      v281,
      v282,
      v283,
      v284);
    if ( !_4__this )
      goto LABEL_252;
    v276->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v276,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_252;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_193;
      }
    }
    warEnt_5__23 = v361->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_252;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)value;
      if ( !value )
        goto LABEL_252;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_193:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v276, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v276->fields.__4__this) = 0;
LABEL_197:
        v286 = 1;
        goto LABEL_198;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v221, (MapControl_QuestInfo_o *)v276, v361->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_197;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v286 = 0;
LABEL_198:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v276, 0LL) )
    {
      if ( ((v268 | v286) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v276->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v276, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v276,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v287 = v361->fields._spotInfo_5__22;
          if ( !v287 )
            goto LABEL_252;
          v287->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v361->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_252;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v276,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v289 = v361->fields._spotInfo_5__22;
        if ( !v289 )
          goto LABEL_252;
        v289->fields._IsNext_k__BackingField = 1;
        v290 = v361->fields._mapInfo_5__21;
        if ( !v290 )
          goto LABEL_252;
        v290->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v221, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v363 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v363, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v363 )
          goto LABEL_252;
        v291 = v363->fields.challengeNum == 0;
      }
      else
      {
        v291 = 0;
      }
    }
    else
    {
      v291 = 1;
    }
    LOBYTE(v276->fields.__8__1) = v291;
    HIDWORD(v276->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_252;
    LODWORD(v276->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v361->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v292 = this->fields.__2__current;
    v293 = this;
    if ( (int)v292 >= 1 )
    {
      v294 = 0;
      while ( 1 )
      {
        v295 = *((_QWORD *)&v293->fields.__4__this + (int)v294);
        if ( !v295 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v276,
                                                                   *(_DWORD *)(v295 + 16),
                                                                   *(_DWORD *)(v295 + 20),
                                                                   0LL);
        if ( (int)++v294 >= (int)v292 )
          goto LABEL_232;
        if ( v294 >= LODWORD(v293->fields.__2__current) )
          goto LABEL_132;
      }
LABEL_252:
      sub_B7076C(this, method);
    }
LABEL_232:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v276,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    questIdx_5__25 = v361->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v361->fields._breakInterval_5__29) )
    {
      v361->fields.__2__current = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v361->fields.__2__current, 0LL, v296, v297, v298, v299, v300, v301);
      v361->fields.__1__state = 2;
      return 1;
    }
LABEL_235:
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    *p_questIdx_5__25 = (int)method;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)(unsigned int)*p_questCount_5__26;
  }
  if ( !_4__this )
    goto LABEL_252;
  allQuestInfoList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  }
  v303 = *(struct QuestTree___c_StaticFields **)&this->fields._warIdx_5__18;
  _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v303->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(this[1].fields.endCallback) & 4) != 0 && !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v303 = QuestTree___c_TypeInfo->static_fields;
    }
    v305 = (Il2CppObject *)v303->__9;
    _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_1,
      v305,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v306 = QuestTree___c_TypeInfo->static_fields;
    v306->__9__39_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__39_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v306->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v307,
      v308,
      v309,
      v310,
      v311,
      v312);
  }
  if ( !allQuestInfoList )
    goto LABEL_252;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allQuestInfoList,
    (System_Comparison_T__o *)_9__39_1,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v361->fields.__8__1 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields.__8__1, 0LL, v313, v314, v315, v316, v317, v318);
  v361->fields._warInfo_5__20 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields._warInfo_5__20, 0LL, v319, v320, v321, v322, v323, v324);
  v361->fields._mapInfo_5__21 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields._mapInfo_5__21, 0LL, v325, v326, v327, v328, v329, v330);
  v361->fields._spotInfo_5__22 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields._spotInfo_5__22, 0LL, v331, v332, v333, v334, v335, v336);
  v361->fields._warEnt_5__23 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields._warEnt_5__23, 0LL, v337, v338, v339, v340, v341, v342);
  v361->fields._userQuestMaster_5__24 = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&v361->fields._userQuestMaster_5__24,
    0LL,
    v343,
    v344,
    v345,
    v346,
    v347,
    v348);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_252;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v361->fields.endCallback )
    return 0;
  v361->fields.__2__current = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v361->fields.__2__current, 0LL, v349, v350, v351, v352, v353, v354);
  v361->fields.__1__state = 3;
  return 1;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__39__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__39__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__39__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *v2; // x19
  QuestTree_o *_4__this; // x20
  QuestTree___c__DisplayClass40_0_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  DataManager_o **p_dataManager_5__2; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x26
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v23; // x27
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_eventStatusQuestMismatchDictionary_5__10; // x25
  QuestTree___c__DisplayClass40_1_o *v25; // x23
  Il2CppObject **p__8__1; // x27
  __int64 v27; // x1
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  Il2CppObject *_8__2; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x28
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v32; // x0
  __int64 v33; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allWarInfoList; // x22
  Il2CppObject *v36; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x28
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 Index; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v42; // x0
  MapControl_RootInfo_o *v43; // x0
  MapControl_WarInfo_o **p_warInfo_5__14; // x22
  __int64 v45; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v47; // x1
  __int64 EventId; // x0
  __int64 v49; // x1
  _BOOL8 v50; // x0
  __int64 nowTime_5__11; // x9
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  EventStatusEntity_o *NowEntity; // x23
  __int64 v60; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  __int64 v62; // x1
  int64_t v63; // x23
  System_Int64_array *v64; // x0
  __int64 v65; // x1
  unsigned int max_length; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x0
  __int64 v71; // x1
  struct MapEntity_array *mapList_5__15; // x9
  int mapCount_5__13; // w9
  int v74; // w8
  int32_t v75; // w8
  int32_t *p_mapCount_5__13; // x27
  int32_t *p_mapIdx_5__12; // x28
  struct MapEntity_array *v78; // x9
  MapEntity_o *v79; // x8
  struct QuestTree___c__DisplayClass40_1_o *v80; // x9
  struct MapControl_WarInfo_o *v81; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *mapInfoList; // x21
  Il2CppObject *v83; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  struct MapControl_WarInfo_o *v85; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v86; // x0
  Il2CppObject *v87; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapInfoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x22
  __int64 v90; // x0
  __int64 v91; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v92; // x0
  struct QuestTree___c__DisplayClass40_1_o *v93; // x8
  MapControl_WarInfo_o *v94; // x0
  __int64 v95; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  struct QuestTree___c__DisplayClass40_1_o *v99; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v101; // x0
  __int64 v102; // x1
  SpotEntity_array *v103; // x22
  int v104; // w27
  __int64 v105; // x28
  QuestTree___c__DisplayClass40_2_o *v106; // x23
  __int64 v107; // x0
  __int64 v108; // x1
  SpotEntity_o *v109; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v111; // x26
  __int64 v112; // x0
  __int64 v113; // x1
  unsigned int v114; // w0
  __int64 v115; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v116; // x0
  __int64 v117; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v118; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v120; // x0
  __int64 v121; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x21
  QuestTree___c__DisplayClass40_3_o *v123; // x22
  QuestTree___c_c *v124; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_6; // x23
  Il2CppObject *v127; // x24
  struct QuestTree___c_StaticFields *v128; // x0
  System_Collections_Generic_IEnumerable_T__o *v129; // x24
  System_Collections_Generic_HashSet_int__o *v130; // x23
  __int64 v131; // x0
  __int64 v132; // x1
  System_Collections_Generic_List_T__o *v133; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v134; // x24
  __int64 v135; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v136; // x0
  bool result; // w0
  struct System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__o *p__7__wrap24; // x22
  int32_t *p_cnt_5__23; // x24
  Il2CppObject **p__8__3; // x21
  struct QuestTree___c__DisplayClass40_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *List; // x0
  __int64 v144; // x1
  SpotRoadEntity_array *v145; // x21
  int v146; // w26
  __int64 v147; // x27
  QuestTree___c__DisplayClass40_4_o *v148; // x22
  __int64 v149; // x0
  __int64 v150; // x1
  SpotRoadEntity_o *v151; // x23
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotRoadInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v153; // x25
  __int64 v154; // x0
  __int64 v155; // x1
  unsigned int v156; // w0
  __int64 v157; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v158; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v160; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v161; // x0
  struct QuestTree___c__DisplayClass40_1_o *v162; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v164; // x0
  __int64 v165; // x1
  MapGimmickEntity_array *v166; // x21
  int v167; // w25
  __int64 v168; // x26
  QuestTree___c__DisplayClass40_5_o *v169; // x22
  __int64 v170; // x0
  __int64 v171; // x1
  MapGimmickEntity_o *v172; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapGimmickInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v174; // x24
  __int64 v175; // x0
  __int64 v176; // x1
  unsigned int v177; // w0
  __int64 v178; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v179; // x0
  MapControl_MapInfo_o *v180; // x0
  __int64 v181; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v182; // x0
  int v183; // w8
  System_Action_o *endCallback; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v185; // x21
  QuestTree___c_c *v186; // x0
  struct QuestTree___c_StaticFields *v187; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_2; // x22
  Il2CppObject *v189; // x23
  struct QuestTree___c_StaticFields *v190; // x0
  QuestTree___c__DisplayClass40_6_o *v191; // x23
  int64_t v192; // x24
  MapControl_WarInfo_o *v193; // x23
  MapControl_MapInfo_o *v194; // x22
  MapControl_SpotInfo_o *v195; // x22
  WarEntity_o *v196; // x22
  __int64 v197; // x1
  DataManager_o *dataManager_5__2; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v200; // x1
  int v201; // w8
  struct QuestTree___c__DisplayClass40_6_o *_8__3; // x22
  System_Collections_Generic_List_int__o *v203; // x23
  __int64 v204; // x0
  __int64 v205; // x1
  __int64 v206; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v207; // x0
  __int128 v208; // q0
  _BOOL8 v209; // x0
  const MethodInfo *v210; // x1
  MapControl_SpotInfo_o *current; // x23
  SpotEntity_o *Mine; // x0
  __int64 v213; // x1
  struct QuestTree___c__DisplayClass40_0_o *v214; // x8
  System_Collections_Generic_List_int__o *v215; // x0
  __int64 v216; // x1
  DataMasterBase_o *questMaster_5__5; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  Il2CppObject *v219; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v220; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v221; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v222; // x0
  __int64 v223; // x0
  int v224; // w8
  __int64 v225; // x0
  __int64 v226; // x0
  __int64 v227; // x0
  __int64 v228; // x0
  __int64 v229; // x0
  __int64 v230; // x0
  __int64 v231; // x0
  struct QuestEntity_array *questList_5__24; // x9
  QuestEntity_o *v233; // x21
  struct QuestTree___c__DisplayClass40_6_o *v234; // x8
  UserQuestMaster_o *userQuestMaster_5__19; // x22
  int64_t UserId; // x0
  __int64 v237; // x1
  struct QuestTree___c__DisplayClass40_6_o *v238; // x8
  __int64 v239; // x1
  int32_t QuestPhase; // w22
  MapEntity_o *SpotId_26073280; // x0
  __int64 warId; // x1
  struct QuestTree___c__DisplayClass40_6_o *v243; // x9
  Il2CppObject *v244; // x26
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v245; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v246; // x24
  __int64 v247; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  __int64 v249; // x1
  MapControl_MapInfo_o *v250; // x0
  __int64 v251; // x1
  __int64 v252; // x1
  MapControl_WarInfo_o *v253; // x0
  Il2CppObject *v254; // x26
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allQuestInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v256; // x24
  unsigned int v257; // w0
  __int64 v258; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v259; // x0
  MapControl_WarInfo_o *v260; // x0
  __int64 v261; // x1
  _BOOL8 HasStatus; // x0
  __int64 v263; // x1
  MapControl_WarInfo_o *v264; // x0
  WarEntity_o *v265; // x0
  __int64 v266; // x1
  int v267; // w24
  __int64 v268; // x1
  int32_t ClearNum; // w8
  struct QuestTree___c__DisplayClass40_6_o *v270; // x8
  MapControl_WarInfo_o *v271; // x0
  struct QuestTree___c__DisplayClass40_6_o *v272; // x8
  MapControl_SpotInfo_o *v273; // x0
  MapControl_QuestInfo_o *v274; // x0
  __int64 v275; // x1
  struct MapControl_WarInfo_o *v276; // x8
  MapControl_QuestInfo_o *v277; // x23
  __int64 v278; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v281; // x1
  struct WarEntity_o *v282; // x8
  struct QuestTree___c__DisplayClass40_6_o *v283; // x9
  struct WarEntity_o *v284; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *eventStatusQuestMismatchDictionary_5__10; // x0
  _BOOL8 v286; // x0
  __int64 v287; // x1
  struct QuestTree___c__DisplayClass40_6_o *v288; // x8
  __int64 v289; // x1
  MapControl_WarInfo_o *v290; // x0
  int v291; // w25
  __int64 v292; // x1
  MapControl_SpotInfo_o *v293; // x0
  __int64 v294; // x1
  MapControl_SpotInfo_o *v295; // x0
  QuestEntity_o *v296; // x0
  __int64 v297; // x1
  _BOOL8 HasFlag; // x0
  __int64 v299; // x1
  struct MapControl_SpotInfo_o *v300; // x8
  struct MapControl_MapInfo_o *v301; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v303; // x1
  struct MapControl_SpotInfo_o *v304; // x9
  struct MapControl_MapInfo_o *v305; // x9
  MapControl_SpotInfo_o *v306; // x0
  UserQuestEntity_o *v307; // x0
  bool v308; // w8
  struct QuestTree___c__DisplayClass40_6_o *v309; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v312; // x1
  struct QuestTree___c__DisplayClass40_6_o *v313; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v315; // x0
  __int64 v316; // x1
  _QWORD *v317; // x21
  __int64 v318; // x22
  unsigned int v319; // w24
  __int64 v320; // x8
  __int64 v321; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v322; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v323; // x21
  QuestTree___c_c *v324; // x0
  struct QuestTree___c_StaticFields *v325; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_11; // x22
  Il2CppObject *v327; // x23
  struct QuestTree___c_StaticFields *v328; // x0
  CommonUI_o *Instance; // x0
  __int64 v330; // x1
  __int64 v331; // x0
  EventStatusQuestMaster_o *v332; // [xsp+0h] [xbp-D0h]
  EventStatusMaster_o *v333; // [xsp+8h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o **p_mapInfo_5__16; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v335; // [xsp+30h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-88h] BYREF
  UserQuestEntity_o *v337; // [xsp+50h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+58h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+60h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v341; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_434F420 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_B70694(&Method_System_Comparison_MapControl_WarInfo___ctor__);
    sub_B70694(&Method_System_Comparison_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_getEntitys_QuestEntity___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_B70694(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B70694(&Method_System_Func_QuestEntity__bool___ctor__);
    sub_B70694(&Method_System_Func_WarEntity__bool___ctor__);
    sub_B70694(&Method_System_Func_MapControl_SpotInfo__int___ctor__);
    sub_B70694(&Method_System_Func_MapControl_SpotInfo__bool___ctor__);
    sub_B70694(&System_Func_WarEntity__bool__TypeInfo);
    sub_B70694(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_B70694(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_B70694(&System_Func_QuestEntity__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140920);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&MapControl_MapInfo_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B70694(&Method_System_Predicate_MapControl_WarInfo___ctor__);
    sub_B70694(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B70694(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B70694(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
    sub_B70694(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&MapControl_SpotInfo_TypeInfo);
    sub_B70694(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__);
    sub_B70694(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__);
    sub_B70694(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_B70694(&QuestTree___c__DisplayClass40_0_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_B70694(&QuestTree___c__DisplayClass40_1_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_B70694(&QuestTree___c__DisplayClass40_2_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_B70694(&QuestTree___c__DisplayClass40_3_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_B70694(&QuestTree___c__DisplayClass40_4_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_B70694(&QuestTree___c__DisplayClass40_5_TypeInfo);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_B70694(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_B70694(&QuestTree___c__DisplayClass40_6_TypeInfo);
    sub_B70694(&QuestTree___c_TypeInfo);
    sub_B70694(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)sub_B70694(&MapControl_WarInfo_TypeInfo);
    byte_434F420 = 1;
  }
  v341 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v337 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (QuestTree___c__DisplayClass40_0_o *)sub_B70764(QuestTree___c__DisplayClass40_0_TypeInfo);
      QuestTree___c__DisplayClass40_0___ctor(v4, 0LL);
      v2->fields.__8__2 = v4;
      sub_B70630(&v2->fields.__8__2);
      if ( !v2->fields.__8__2 )
        sub_B7076C(v5, v6);
      v2->fields.__8__2->fields.targetWarId = v2->fields.targetWarId;
      v2->fields._dataManager_5__2 = (struct DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      p_dataManager_5__2 = &v2->fields._dataManager_5__2;
      sub_B70630(&v2->fields._dataManager_5__2);
      if ( !v2->fields._dataManager_5__2 )
        sub_B7076C(0LL, v8);
      MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v2->fields._dataManager_5__2,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v9);
      v2->fields._spotMaster_5__3 = (struct SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             *p_dataManager_5__2,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotMaster___);
      sub_B70630(&v2->fields._spotMaster_5__3);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v11);
      v2->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 *p_dataManager_5__2,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      sub_B70630(&v2->fields._blankEarthSpotMaster_5__4);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v12);
      v2->fields._questMaster_5__5 = (struct QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               *p_dataManager_5__2,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
      sub_B70630(&v2->fields._questMaster_5__5);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v13);
      v2->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         *p_dataManager_5__2,
                                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      sub_B70630(&v2->fields._questPhaseMaster_5__6);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v14);
      v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             *p_dataManager_5__2,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v15);
      v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             *p_dataManager_5__2,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v17);
      v333 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v19);
      v332 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           *p_dataManager_5__2,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v20);
      v2->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     *p_dataManager_5__2,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      sub_B70630(&v2->fields._spotRoadMaster_5__7);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v21);
      v2->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         *p_dataManager_5__2,
                                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      sub_B70630(&v2->fields._mapGimmickMaster_5__8);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v22);
      v2->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           *p_dataManager_5__2,
                                                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      sub_B70630(&v2->fields._questPickupMaster_5__9);
      v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v23,
        (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v23;
      p_eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&v2->fields._eventStatusQuestMismatchDictionary_5__10;
      sub_B70630(&v2->fields._eventStatusQuestMismatchDictionary_5__10);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v2->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v25 = (QuestTree___c__DisplayClass40_1_o *)sub_B70764(QuestTree___c__DisplayClass40_1_TypeInfo);
      QuestTree___c__DisplayClass40_1___ctor(v25, 0LL);
      v2->fields.__8__1 = v25;
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      sub_B70630(&v2->fields.__8__1);
      if ( !*p_dataManager_5__2 )
        sub_B7076C(0LL, v27);
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_1CA3834 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      _8__2 = (Il2CppObject *)v2->fields.__8__2;
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarMaster__WarEntity;
      v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v31,
        _8__2,
        Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        (const MethodInfo_29AC578 *)Method_System_Func_WarEntity__bool___ctor__);
      v32 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
              v30,
              (System_Func_TSource__bool__o *)v31,
              (const MethodInfo_1CC752C *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v32 )
        sub_B7076C(0LL, v33);
      if ( !*p__8__1 )
        sub_B7076C(v32, v33);
      LODWORD((*p__8__1)[1].klass) = v32->fields.m_messageTypeId;
      if ( !_4__this )
        sub_B7076C(v32, v33);
      if ( !*p__8__1 )
        sub_B7076C(v32, v33);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_B7076C(0LL, v33);
      MapControl_RootInfo__Remove(mapControlRootInfo, (int32_t)(*p__8__1)[1].klass, 0LL);
      allWarInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allWarInfoList;
      v36 = *p__8__1;
      v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v37,
        v36,
        Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_WarInfo___ctor__);
      if ( !allWarInfoList )
        sub_B7076C(v38, v39);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v41 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v42 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allWarInfoList;
        if ( !v42 )
          sub_B7076C(0LL, v41);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          v42,
          v41,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      if ( !*p__8__1 )
        sub_B7076C(Index, v41);
      v43 = _4__this->fields.mapControlRootInfo;
      if ( !v43 )
        sub_B7076C(0LL, v41);
      v2->fields._warInfo_5__14 = MapControl_RootInfo__AddChild(
                                    v43,
                                    (int32_t)(*p__8__1)[1].klass,
                                    v2->fields._nowTime_5__11,
                                    0LL);
      p_warInfo_5__14 = &v2->fields._warInfo_5__14;
      sub_B70630(&v2->fields._warInfo_5__14);
      warInfo_5__14 = v2->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_B7076C(0LL, v45);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        if ( !*p_warInfo_5__14 )
          sub_B7076C(0LL, v47);
        EventId = MapControl_WarInfo__GetEventId(*p_warInfo_5__14, 0LL);
        if ( !v16 )
          sub_B7076C(EventId, v49);
        v50 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v16,
                &entity,
                EventId,
                (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v50 )
        {
          if ( !entity )
            sub_B7076C(v50, v47);
          nowTime_5__11 = v2->fields._nowTime_5__11;
          if ( nowTime_5__11 >= *(_QWORD *)&entity->fields.startType
            && nowTime_5__11 < (__int64)entity->fields.coordinate )
          {
            if ( !*p_warInfo_5__14 )
              sub_B7076C(0LL, v47);
            MapControl_WarInfo__SetStatusCheckFlag(*p_warInfo_5__14, 1, 0, 0LL);
          }
          if ( !*p_warInfo_5__14 )
            sub_B7076C(0LL, v47);
          v52 = MapControl_WarInfo__GetEventId(*p_warInfo_5__14, 0LL);
          if ( !v18 )
            sub_B7076C(v52, v53);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v18,
                 &v341,
                 v52,
                 (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v341 )
              sub_B7076C(0LL, v54);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v341, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_B7076C(0LL, v55);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__11, 0LL) )
              {
                if ( !*p_warInfo_5__14 )
                  sub_B7076C(0LL, v56);
                v57 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__14, 0LL);
                if ( !v333 )
                  sub_B7076C(0LL, v57);
                NowEntity = EventStatusMaster__getNowEntity(v333, v57, 0LL);
                if ( NowEntity )
                {
                  if ( !*p_warInfo_5__14 )
                    sub_B7076C(0LL, v58);
                  v60 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__14, 0LL);
                  if ( !v332 )
                    sub_B7076C(0LL, v60);
                  MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                     v332,
                                                                                     v60,
                                                                                     NowEntity->fields.statusId,
                                                                                     0LL);
                  if ( !*p__8__1 )
                    sub_B7076C(MismatchQuestList, v62);
                  if ( !*p_eventStatusQuestMismatchDictionary_5__10 )
                    sub_B7076C(0LL, v62);
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    *p_eventStatusQuestMismatchDictionary_5__10,
                    (int32_t)(*p__8__1)[1].klass,
                    MismatchQuestList,
                    (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v63 = v2->fields._nowTime_5__11;
          v64 = (System_Int64_array *)sub_B706AC(long___TypeInfo, 3LL);
          if ( !entity )
            sub_B7076C(v64, v65);
          if ( !v64 )
            sub_B7076C(0LL, v65);
          max_length = v64->max_length;
          if ( !max_length )
          {
            v229 = sub_B70798(v64);
            sub_B70738(v229, 0LL);
          }
          v64->m_Items[0] = *(_QWORD *)&entity->fields.startType;
          if ( !entity )
            sub_B7076C(v64, v65);
          if ( max_length <= 1 )
          {
            v230 = sub_B70798(v64);
            sub_B70738(v230, 0LL);
          }
          v64->m_Items[1] = entity->fields.targetId;
          if ( !entity )
            sub_B7076C(v64, v65);
          if ( max_length <= 2 )
          {
            v231 = sub_B70798(v64);
            sub_B70738(v231, 0LL);
          }
          v64->m_Items[2] = (int64_t)entity->fields.coordinate;
          QuestTree__UpdateForceUpdateTime(_4__this, v63, v64, 0LL);
        }
      }
      v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
      if ( !v67 )
        sub_B7076C(0LL, v47);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        (EventMissionProgressRequest_Argument_ProgressData_o *)*p_warInfo_5__14,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
      if ( !*p_warInfo_5__14 )
        sub_B7076C(v68, v69);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v68, v69);
      v2->fields._mapList_5__15 = MapMaster__getList(
                                    MasterData_WarQuestSelectionMaster,
                                    (*p_warInfo_5__14)->fields.warId,
                                    0LL);
      sub_B70630(&v2->fields._mapList_5__15);
      mapList_5__15 = v2->fields._mapList_5__15;
      v2->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_B7076C(v70, v71);
      mapCount_5__13 = mapList_5__15->max_length;
      v74 = 0;
      v2->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_72;
    case 1:
      _8__1 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !_8__1 )
        sub_B7076C(this, method);
      spotRoadMaster_5__7 = v2->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_B7076C(0LL, method);
      List = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0LL);
      v145 = List;
      if ( !List )
        sub_B7076C(0LL, v144);
      v146 = List->max_length;
      if ( v146 >= 1 )
      {
        v147 = 0LL;
        do
        {
          v148 = (QuestTree___c__DisplayClass40_4_o *)sub_B70764(QuestTree___c__DisplayClass40_4_TypeInfo);
          QuestTree___c__DisplayClass40_4___ctor(v148, 0LL);
          if ( (unsigned int)v147 >= v145->max_length )
          {
            v225 = sub_B70798(v149);
            sub_B70738(v225, 0LL);
          }
          v151 = v145->m_Items[v147];
          if ( !v151 )
            sub_B7076C(v149, v150);
          if ( !v148 )
            sub_B7076C(v149, v150);
          v148->fields.spotRoadId = v151->fields.id;
          if ( !_4__this )
            sub_B7076C(v149, v150);
          allSpotRoadInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotRoadInfoList;
          v153 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v153,
            (Il2CppObject *)v148,
            Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
          if ( !allSpotRoadInfoList )
            sub_B7076C(v154, v155);
          v156 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v153,
                   (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v157 = v156;
          if ( v156 != -1 )
          {
            v158 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v158 )
              sub_B7076C(0LL, v157);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v158,
              v157,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v2->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_B7076C(0LL, v157);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, v148->fields.spotRoadId, 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v151, &spotRoadInfo, 0LL);
          v161 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v161 )
            sub_B7076C(0LL, v160);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v161,
            (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
          ++v147;
        }
        while ( (int)v147 < v146 );
      }
      v162 = v2->fields.__8__1;
      if ( !v162 )
        sub_B7076C(List, v144);
      mapGimmickMaster_5__8 = v2->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_B7076C(0LL, v144);
      v164 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v162->fields.mapId, 0LL);
      v166 = v164;
      if ( !v164 )
        sub_B7076C(0LL, v165);
      v167 = v164->max_length;
      if ( v167 >= 1 )
      {
        v168 = 0LL;
        do
        {
          v169 = (QuestTree___c__DisplayClass40_5_o *)sub_B70764(QuestTree___c__DisplayClass40_5_TypeInfo);
          QuestTree___c__DisplayClass40_5___ctor(v169, 0LL);
          if ( (unsigned int)v168 >= v166->max_length )
          {
            v227 = sub_B70798(v170);
            sub_B70738(v227, 0LL);
          }
          v172 = v166->m_Items[v168];
          if ( !v172 )
            sub_B7076C(v170, v171);
          if ( !v169 )
            sub_B7076C(v170, v171);
          v169->fields.mapGimmickId = v172->fields.id;
          if ( !_4__this )
            sub_B7076C(v170, v171);
          allMapGimmickInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapGimmickInfoList;
          v174 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v174,
            (Il2CppObject *)v169,
            Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
          if ( !allMapGimmickInfoList )
            sub_B7076C(v175, v176);
          v177 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v174,
                   (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v178 = v177;
          if ( v177 != -1 )
          {
            v179 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v179 )
              sub_B7076C(0LL, v178);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v179,
              v178,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v180 = v2->fields._mapInfo_5__16;
          if ( !v180 )
            sub_B7076C(0LL, v178);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v180, v169->fields.mapGimmickId, 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v182 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v182 )
            sub_B7076C(0LL, v181);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v182,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
          ++v168;
        }
        while ( (int)v168 < v167 );
      }
      v2->fields.__2__current = 0LL;
      sub_B70630(&v2->fields.__2__current);
      v183 = 2;
      goto LABEL_311;
    case 2:
      v2->fields._mapInfo_5__16 = 0LL;
      v2->fields.__1__state = -1;
      sub_B70630(&v2->fields._mapInfo_5__16);
      mapCount_5__13 = v2->fields._mapCount_5__13;
      v74 = v2->fields._mapIdx_5__12 + 1;
      v2->fields._mapIdx_5__12 = v74;
LABEL_72:
      if ( v74 < mapCount_5__13 )
      {
        v78 = v2->fields._mapList_5__15;
        if ( !v78 )
          sub_B7076C(v70, v71);
        if ( v74 >= v78->max_length )
        {
          v228 = sub_B70798(v70);
          sub_B70738(v228, 0LL);
        }
        v79 = v78->m_Items[v74];
        if ( !v79 )
          sub_B7076C(v70, v71);
        v80 = v2->fields.__8__1;
        if ( !v80 )
          sub_B7076C(v70, v71);
        v80->fields.mapId = v79->fields.id;
        v81 = v2->fields._warInfo_5__14;
        if ( !v81 )
          sub_B7076C(v70, v71);
        mapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v81->fields.mapInfoList;
        if ( mapInfoList )
        {
          v83 = (Il2CppObject *)v2->fields.__8__1;
          if ( !v83 )
            sub_B7076C(v70, v71);
          monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v83[1].monitor;
          if ( !monitor )
          {
            monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              monitor,
              v83,
              Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
            v83[1].monitor = monitor;
            sub_B70630(&v83[1].monitor);
          }
          v70 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                  mapInfoList,
                  (System_Predicate_T__o *)monitor,
                  (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v71 = (unsigned int)v70;
          if ( (_DWORD)v70 != -1 )
          {
            v85 = v2->fields._warInfo_5__14;
            if ( !v85 )
              sub_B7076C(v70, (unsigned int)v70);
            v86 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v85->fields.mapInfoList;
            if ( !v86 )
              sub_B7076C(0LL, v71);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v86,
              v71,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_B7076C(v70, v71);
        v87 = (Il2CppObject *)v2->fields.__8__1;
        if ( !v87 )
          sub_B7076C(v70, v71);
        allMapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapInfoList;
        klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v87[2].klass;
        if ( !klass )
        {
          klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            klass,
            v87,
            Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
          v87[2].klass = (Il2CppClass *)klass;
          sub_B70630(&v87[2]);
        }
        if ( !allMapInfoList )
          sub_B7076C(v70, v71);
        v90 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allMapInfoList,
                (System_Predicate_T__o *)klass,
                (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v91 = (unsigned int)v90;
        if ( (_DWORD)v90 != -1 )
        {
          v92 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapInfoList;
          if ( !v92 )
            sub_B7076C(0LL, v91);
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            v92,
            v91,
            (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v93 = v2->fields.__8__1;
        if ( !v93 )
          sub_B7076C(v90, v91);
        v94 = v2->fields._warInfo_5__14;
        if ( !v94 )
          sub_B7076C(0LL, v91);
        v2->fields._mapInfo_5__16 = MapControl_WarInfo__AddChild(v94, v93->fields.mapId, 0LL);
        p_mapInfo_5__16 = (EventMissionProgressRequest_Argument_ProgressData_o **)&v2->fields._mapInfo_5__16;
        sub_B70630(&v2->fields._mapInfo_5__16);
        v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList;
        if ( !v96 )
          sub_B7076C(0LL, v95);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v96,
          *p_mapInfo_5__16,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        v99 = v2->fields.__8__1;
        if ( !v99 )
          sub_B7076C(v97, v98);
        spotMaster_5__3 = v2->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_B7076C(0LL, v98);
        v101 = SpotMaster__getList(spotMaster_5__3, v99->fields.mapId, 0LL);
        v103 = v101;
        if ( !v101 )
          sub_B7076C(0LL, v102);
        v104 = v101->max_length;
        if ( v104 >= 1 )
        {
          v105 = 0LL;
          do
          {
            v106 = (QuestTree___c__DisplayClass40_2_o *)sub_B70764(QuestTree___c__DisplayClass40_2_TypeInfo);
            QuestTree___c__DisplayClass40_2___ctor(v106, 0LL);
            if ( (unsigned int)v105 >= v103->max_length )
            {
              v226 = sub_B70798(v107);
              sub_B70738(v226, 0LL);
            }
            v109 = v103->m_Items[v105];
            if ( !v109 )
              sub_B7076C(v107, v108);
            if ( !v106 )
              sub_B7076C(v107, v108);
            v106->fields.spotId = v109->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotInfoList;
            v111 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v111,
              (Il2CppObject *)v106,
              Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            if ( !allSpotInfoList )
              sub_B7076C(v112, v113);
            v114 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v111,
                     (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v115 = v114;
            if ( v114 != -1 )
            {
              v116 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotInfoList;
              if ( !v116 )
                sub_B7076C(0LL, v115);
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v116,
                v115,
                (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            if ( !*p_mapInfo_5__16 )
              sub_B7076C(0LL, v115);
            spotInfo = MapControl_MapInfo__AddChild((MapControl_MapInfo_o *)*p_mapInfo_5__16, v106->fields.spotId, 0LL);
            QuestTree__SetupSpotInfo(_4__this, v109, &spotInfo, 0LL);
            v118 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
            if ( !v118 )
              sub_B7076C(0LL, v117);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v118,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
            ++v105;
          }
          while ( (int)v105 < v104 );
        }
        v119 = (System_Collections_Generic_IEnumerable_TSource__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                      _4__this,
                                                                      v2->fields._mapInfo_5__16,
                                                                      v2->fields._blankEarthSpotMaster_5__4,
                                                                      0LL);
        v120 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v119,
                 (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v122 = (System_Collections_Generic_IEnumerable_TSource__o *)v120;
        if ( !v120 )
          sub_B7076C(0LL, v121);
        if ( *(_QWORD *)&v120->max_length )
        {
          v123 = (QuestTree___c__DisplayClass40_3_o *)sub_B70764(QuestTree___c__DisplayClass40_3_TypeInfo);
          QuestTree___c__DisplayClass40_3___ctor(v123, 0LL);
          v124 = QuestTree___c_TypeInfo;
          if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v124 = QuestTree___c_TypeInfo;
          }
          static_fields = v124->static_fields;
          _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__40_6;
          if ( !_9__40_6 )
          {
            if ( (BYTE3(v124->vtable._0_Equals.methodPtr) & 4) != 0 && !v124->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v124);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v127 = (Il2CppObject *)static_fields->__9;
            _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_6,
              v127,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__,
              (const MethodInfo_29AD124 *)Method_System_Func_MapControl_SpotInfo__int___ctor__);
            v128 = QuestTree___c_TypeInfo->static_fields;
            v128->__9__40_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__40_6;
            sub_B70630(&v128->__9__40_6);
          }
          v129 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v122,
                                                                  (System_Func_TSource__TResult__o *)_9__40_6,
                                                                  (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v130 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_48947012(
            v130,
            v129,
            (const MethodInfo_2EADF44 *)Method_System_Collections_Generic_HashSet_int___ctor___69140920);
          if ( !v123 )
            sub_B7076C(v131, v132);
          v123->fields.spotIdHashSet = v130;
          sub_B70630(&v123->fields);
          v133 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v134 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v134,
            (Il2CppObject *)v123,
            Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            (const MethodInfo_29AC578 *)Method_System_Func_MapControl_SpotInfo__bool___ctor__);
          BasicHelper__RemoveElements_MapControl_SpotInfo_(
            v133,
            (System_Func_T__bool__o *)v134,
            (const MethodInfo_1BDF498 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v136 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
          if ( !v136 )
            sub_B7076C(0LL, v135);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v136,
            (System_Collections_Generic_IEnumerable_T__o *)v122,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v2->fields.__2__current = 0LL;
        sub_B70630(&v2->fields.__2__current);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_B7076C(v70, v71);
      v185 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
      v186 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v186 = QuestTree___c_TypeInfo;
      }
      v187 = v186->static_fields;
      _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v187->__9__40_2;
      if ( !_9__40_2 )
      {
        if ( (BYTE3(v186->vtable._0_Equals.methodPtr) & 4) != 0 && !v186->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v186);
          v187 = QuestTree___c_TypeInfo->static_fields;
        }
        v189 = (Il2CppObject *)v187->__9;
        _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__40_2,
          v189,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__,
          (const MethodInfo_2B05B38 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
        v190 = QuestTree___c_TypeInfo->static_fields;
        v190->__9__40_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__40_2;
        sub_B70630(&v190->__9__40_2);
      }
      if ( !v185 )
        sub_B7076C(v186, v71);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v185,
        (System_Comparison_T__o *)_9__40_2,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v2->fields.__8__1 = 0LL;
      sub_B70630(&v2->fields.__8__1);
      v2->fields._warInfo_5__14 = 0LL;
      sub_B70630(&v2->fields._warInfo_5__14);
      v2->fields._mapList_5__15 = 0LL;
      sub_B70630(&v2->fields._mapList_5__15);
      v191 = (QuestTree___c__DisplayClass40_6_o *)sub_B70764(QuestTree___c__DisplayClass40_6_TypeInfo);
      QuestTree___c__DisplayClass40_6___ctor(v191, 0LL);
      v2->fields.__8__3 = v191;
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      sub_B70630(&v2->fields.__8__3);
      v192 = v2->fields._nowTime_5__11;
      v193 = (MapControl_WarInfo_o *)sub_B70764(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v193, v192, 0LL);
      v2->fields._warInfo_5__14 = v193;
      sub_B70630(&v2->fields._warInfo_5__14);
      v194 = (MapControl_MapInfo_o *)sub_B70764(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v194, 0LL);
      v2->fields._mapInfo_5__16 = v194;
      sub_B70630(&v2->fields._mapInfo_5__16);
      v195 = (MapControl_SpotInfo_o *)sub_B70764(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v195, 0LL);
      v2->fields._spotInfo_5__17 = v195;
      sub_B70630(&v2->fields._spotInfo_5__17);
      v196 = (WarEntity_o *)sub_B70764(WarEntity_TypeInfo);
      WarEntity___ctor(v196, 0LL);
      v2->fields._warEnt_5__18 = v196;
      sub_B70630(&v2->fields._warEnt_5__18);
      dataManager_5__2 = v2->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_B7076C(0LL, v197);
      v2->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        dataManager_5__2,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      sub_B70630(&v2->fields._userQuestMaster_5__19);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      if ( !*p__8__3 )
        sub_B7076C(Master_WarQuestSelectionMaster, v200);
      LODWORD((*p__8__3)[1].monitor) = -1;
      *(_QWORD *)&v2->fields._nowMapId_5__20 = -1LL;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
        v201 = 500;
      else
        v201 = 5000;
      v2->fields._breakInterval_5__22 = v201;
      _8__3 = v2->fields.__8__3;
      v203 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v203,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !_8__3 )
        sub_B7076C(v204, v205);
      _8__3->fields.spotInfoList = v203;
      sub_B70630(&_8__3->fields);
      v2->fields._cnt_5__23 = 0;
      p_cnt_5__23 = &v2->fields._cnt_5__23;
      v207 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.allSpotInfoList;
      if ( !v207 )
        sub_B7076C(0LL, v206);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v335,
        v207,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      p__7__wrap24 = &v2->fields.__7__wrap24;
      v208 = *(_OWORD *)&v335.fields.list;
      v2->fields.__7__wrap24.fields.current = (struct MapControl_SpotInfo_o *)v335.fields.current;
      *(_OWORD *)&v2->fields.__7__wrap24.fields.list = v208;
      sub_B70630(&v2->fields.__7__wrap24);
LABEL_186:
      v2->fields.__1__state = -3;
      while ( 1 )
      {
        v209 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap24,
                 (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        if ( !v209 )
          break;
        current = v2->fields.__7__wrap24.fields.current;
        ++v2->fields._cnt_5__23;
        if ( !current )
          sub_B7076C(v209, v210);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_B7076C(0LL, v213);
        v214 = v2->fields.__8__2;
        if ( !v214 )
          sub_B7076C(Mine, v213);
        if ( Mine->fields.warId == v214->fields.targetWarId )
        {
          if ( !*p__8__3 )
            sub_B7076C(Mine, v213);
          v215 = (System_Collections_Generic_List_int__o *)(*p__8__3)[1].klass;
          if ( !v215 )
            sub_B7076C(0LL, v213);
          System_Collections_Generic_List_int___Add(
            v215,
            current->fields.spotId,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( !(*p_cnt_5__23 % 300) )
        {
          v2->fields.__2__current = 0LL;
          sub_B70630(&v2->fields.__2__current);
          v183 = 3;
LABEL_311:
          v2->fields.__1__state = v183;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(v2, v210);
      *(_QWORD *)&p__7__wrap24->fields.index = 0LL;
      p__7__wrap24->fields.current = 0LL;
      p__7__wrap24->fields.list = 0LL;
      questMaster_5__5 = (DataMasterBase_o *)v2->fields._questMaster_5__5;
      if ( !questMaster_5__5 )
        sub_B7076C(0LL, v216);
      Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                          questMaster_5__5,
                                          (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v219 = *p__8__3;
      v220 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarQuestSelectionEntity;
      v221 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v221,
        v219,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        (const MethodInfo_29AC578 *)Method_System_Func_QuestEntity__bool___ctor__);
      v222 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v220,
               (System_Func_TSource__bool__o *)v221,
               (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v2->fields._questList_5__24 = (struct QuestEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                  v222,
                                                                  (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      sub_B70630(&v2->fields._questList_5__24);
      v2->fields._mapCount_5__13 = 0;
      p_mapCount_5__13 = &v2->fields._mapCount_5__13;
      v223 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._questList_5__24,
               (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v2->fields._mapIdx_5__12 = v223;
      p_mapIdx_5__12 = &v2->fields._mapIdx_5__12;
      v224 = v2->fields._mapCount_5__13;
      break;
    case 3:
      p__7__wrap24 = &v2->fields.__7__wrap24;
      p_cnt_5__23 = &v2->fields._cnt_5__23;
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      goto LABEL_186;
    case 4:
      p_mapCount_5__13 = &v2->fields._mapCount_5__13;
      v75 = v2->fields._mapCount_5__13;
      p_mapIdx_5__12 = &v2->fields._mapIdx_5__12;
      v2->fields.__1__state = -1;
      goto LABEL_432;
    case 5:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        sub_B7076C(0LL, method);
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v224 < (int)v223 )
  {
    questList_5__24 = v2->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_B7076C(v223, method);
    if ( v224 >= questList_5__24->max_length )
    {
      v331 = sub_B70798(v223);
      sub_B70738(v331, 0LL);
    }
    v233 = questList_5__24->m_Items[v224];
    if ( !v233 )
      sub_B7076C(v223, method);
    v234 = v2->fields.__8__3;
    if ( !v234 )
      sub_B7076C(v223, method);
    v234->fields.questId = v233->fields.id;
    userQuestMaster_5__19 = v2->fields._userQuestMaster_5__19;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v238 = v2->fields.__8__3;
    if ( !v238 )
      sub_B7076C(UserId, v237);
    if ( !userQuestMaster_5__19 )
      sub_B7076C(UserId, v237);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v337, UserId, v238->fields.questId, 0LL) )
    {
      if ( !v337 )
        sub_B7076C(0LL, v239);
      QuestPhase = UserQuestEntity__getQuestPhase(v337, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_26073280 = (MapEntity_o *)QuestEntity__getSpotId_26073280(v233, QuestPhase + 1, 0LL);
    v243 = v2->fields.__8__3;
    if ( !v243 )
      sub_B7076C(SpotId_26073280, warId);
    if ( v243->fields.nowSpotId == (_DWORD)SpotId_26073280 )
    {
      if ( !_4__this )
        sub_B7076C(SpotId_26073280, warId);
    }
    else
    {
      v243->fields.nowSpotId = (int)SpotId_26073280;
      if ( !_4__this )
        sub_B7076C(SpotId_26073280, warId);
      v244 = (Il2CppObject *)v2->fields.__8__3;
      if ( !v244 )
        sub_B7076C(SpotId_26073280, warId);
      v245 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      v246 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v244[2].klass;
      if ( !v246 )
      {
        v246 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v246,
          v244,
          Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v244[2].klass = (Il2CppClass *)v246;
        sub_B70630(&v244[2]);
      }
      if ( !v245 )
        sub_B7076C(SpotId_26073280, warId);
      v2->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                     v245,
                                                                     (System_Predicate_T__o *)v246,
                                                                     (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      sub_B70630(&v2->fields._spotInfo_5__17);
      spotInfo_5__17 = v2->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_B7076C(0LL, v247);
      SpotId_26073280 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_26073280;
      if ( v2->fields._nowMapId_5__20 != (_DWORD)SpotId_26073280 )
      {
        v2->fields._nowMapId_5__20 = (int)SpotId_26073280;
        v2->fields._mapInfo_5__16 = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_26073280, 0LL);
        sub_B70630(&v2->fields._mapInfo_5__16);
        v250 = v2->fields._mapInfo_5__16;
        if ( !v250 )
          sub_B7076C(0LL, v249);
        SpotId_26073280 = MapControl_MapInfo__GetMine(v250, 0LL);
        if ( !SpotId_26073280 )
          sub_B7076C(0LL, v251);
        warId = (unsigned int)SpotId_26073280->fields.warId;
        if ( v2->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v2->fields._nowWarId_5__21 = warId;
          v2->fields._warInfo_5__14 = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          sub_B70630(&v2->fields._warInfo_5__14);
          v253 = v2->fields._warInfo_5__14;
          if ( !v253 )
            sub_B7076C(0LL, v252);
          v2->fields._warEnt_5__18 = MapControl_WarInfo__GetMine(v253, 0LL);
          sub_B70630(&v2->fields._warEnt_5__18);
        }
      }
    }
    v254 = (Il2CppObject *)v2->fields.__8__3;
    if ( !v254 )
      sub_B7076C(SpotId_26073280, warId);
    allQuestInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allQuestInfoList;
    v256 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v254[2].monitor;
    if ( !v256 )
    {
      v256 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v256,
        v254,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_QuestInfo___ctor__);
      v254[2].monitor = v256;
      sub_B70630(&v254[2].monitor);
    }
    if ( !allQuestInfoList )
      sub_B7076C(SpotId_26073280, warId);
    v257 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)v256,
             (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v258 = v257;
    if ( v257 != -1 )
    {
      v259 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allQuestInfoList;
      if ( !v259 )
        sub_B7076C(0LL, v258);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v259,
        v258,
        (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v260 = v2->fields._warInfo_5__14;
    if ( !v337 )
    {
      if ( !v260 )
        sub_B7076C(0LL, v258);
      goto LABEL_358;
    }
    if ( !v260 )
      sub_B7076C(0LL, v258);
    MapControl_WarInfo__SetStatusCheckFlag(v260, 1, 0, 0LL);
    if ( !v337 )
      sub_B7076C(0LL, v261);
    HasStatus = UserQuestEntity__HasStatus(v337, 8, 0LL);
    if ( !HasStatus )
    {
      v264 = v2->fields._warInfo_5__14;
      if ( !v264 )
        sub_B7076C(0LL, v263);
      goto LABEL_360;
    }
    if ( !v337 )
      sub_B7076C(HasStatus, v263);
    if ( v337->fields.challengeNum >= 1 )
    {
      v264 = v2->fields._warInfo_5__14;
      if ( !v264 )
        sub_B7076C(0LL, v263);
LABEL_360:
      MapControl_WarInfo__SetStatusCheckFlag(v264, 4, 0, 0LL);
    }
    if ( !v337 )
      sub_B7076C(0LL, v263);
    ClearNum = UserQuestEntity__getClearNum(v337, 0LL);
    v260 = v2->fields._warInfo_5__14;
    if ( ClearNum < 1 )
    {
      if ( !v260 )
        sub_B7076C(0LL, v268);
LABEL_358:
      MapControl_WarInfo__SetStatusCheckFlag(v260, 2, 0, 0LL);
      v267 = 0;
      goto LABEL_372;
    }
    if ( !v260 )
      sub_B7076C(0LL, v268);
    v265 = MapControl_WarInfo__GetMine(v260, 0LL);
    if ( !v265 )
      sub_B7076C(0LL, v266);
    v270 = v2->fields.__8__3;
    if ( !v270 )
      sub_B7076C(v265, v266);
    if ( v265->fields.lastQuestId == v270->fields.questId )
    {
      v271 = v2->fields._warInfo_5__14;
      if ( !v271 )
        sub_B7076C(0LL, v266);
      v267 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v271, 8, 1, 0LL);
    }
    else
    {
      v267 = 1;
    }
LABEL_372:
    v272 = v2->fields.__8__3;
    if ( !v272 )
      sub_B7076C(v265, v266);
    v273 = v2->fields._spotInfo_5__17;
    if ( !v273 )
      sub_B7076C(0LL, v266);
    v274 = MapControl_SpotInfo__AddChild(v273, v272->fields.questId, 0LL);
    v276 = v2->fields._warInfo_5__14;
    if ( !v276 )
      sub_B7076C(v274, v275);
    v277 = v274;
    if ( !v274 )
      sub_B7076C(0LL, v275);
    v274->fields.warId = v276->fields.warId;
    v274->fields._WarInfo_k__BackingField = v2->fields._warInfo_5__14;
    sub_B70630(&v274->fields._WarInfo_k__BackingField);
    v277->fields._SpotInfo_k__BackingField = v2->fields._spotInfo_5__17;
    sub_B70630(&v277->fields._SpotInfo_k__BackingField);
    v277->fields.endTime = QuestTree__GetEndTime(_4__this, v277, 0LL);
    warEnt_5__18 = v2->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_B7076C(0LL, v278);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v282 = v2->fields._warEnt_5__18;
      if ( !v282 )
        sub_B7076C(IsStartTypeQuest, v281);
      v283 = v2->fields.__8__3;
      if ( !v283 )
        sub_B7076C(IsStartTypeQuest, v281);
      if ( v282->fields.targetId == v283->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v2->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_391;
      }
    }
    v284 = v2->fields._warEnt_5__18;
    if ( !v284 )
      sub_B7076C(IsStartTypeQuest, v281);
    eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v2->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !eventStatusQuestMismatchDictionary_5__10 )
      sub_B7076C(0LL, v281);
    v286 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             eventStatusQuestMismatchDictionary_5__10,
             v284->fields.id,
             &value,
             (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v286 )
    {
      v288 = v2->fields.__8__3;
      if ( !v288 )
        sub_B7076C(v286, v287);
      if ( !value )
        sub_B7076C(0LL, v287);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v288->fields.questId,
             (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_391:
        MapControl_QuestInfo__SetDispType(v277, 0, 0, 0, 0LL, 0, 0LL);
        v277->fields.touchType = 0;
LABEL_392:
        v291 = 1;
        goto LABEL_393;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v233, v277, v2->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_392;
    v290 = v2->fields._warInfo_5__14;
    if ( !v290 )
      sub_B7076C(0LL, v289);
    MapControl_WarInfo__SetStatusCheckFlag(v290, 1, 0, 0LL);
    v291 = 0;
LABEL_393:
    if ( MapControl_QuestInfo__IsDisaplayable(v277, 0LL) )
    {
      if ( ((v267 | v291) & 1) == 0 )
      {
        v293 = v2->fields._spotInfo_5__17;
        if ( !v293 )
          sub_B7076C(0LL, v292);
        MapControl_SpotInfo__AddQuestCount(v293, 1, 0LL);
        v295 = v2->fields._spotInfo_5__17;
        if ( !v295 )
          sub_B7076C(0LL, v294);
        MapControl_SpotInfo__AddAvailableQuestId(v295, v277->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v277, 0LL) == 1 )
      {
        v296 = MapControl_QuestInfo__GetMine(v277, 0LL);
        if ( !v296 )
          sub_B7076C(0LL, v297);
        HasFlag = QuestEntity__HasFlag(v296, 0x400000000000LL, 0LL);
        if ( !HasFlag )
        {
          v300 = v2->fields._spotInfo_5__17;
          if ( !v300 )
            sub_B7076C(HasFlag, v299);
          v300->fields._IsNext_k__BackingField = 1;
        }
        v301 = v2->fields._mapInfo_5__16;
        if ( !v301 )
          sub_B7076C(HasFlag, v299);
        v301->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v277, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v304 = v2->fields._spotInfo_5__17;
        if ( !v304 )
          sub_B7076C(IsDisplayQuestNextIcon, v303);
        v304->fields._IsNext_k__BackingField = 1;
        v305 = v2->fields._mapInfo_5__16;
        if ( !v305 )
          sub_B7076C(IsDisplayQuestNextIcon, v303);
        v305->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v233, 0x8000000000LL, 0LL) )
      {
        v306 = v2->fields._spotInfo_5__17;
        if ( !v306 )
          sub_B7076C(0LL, v292);
        MapControl_SpotInfo__AddFreeQuestCount(v306, 1, 0LL);
      }
    }
    v307 = v337;
    if ( v337 )
    {
      v307 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v337, 8, 0LL);
      if ( ((unsigned __int8)v307 & 1) != 0 )
      {
        if ( !v337 )
          sub_B7076C(v307, v292);
        v308 = v337->fields.challengeNum == 0;
      }
      else
      {
        v308 = 0;
      }
    }
    else
    {
      v308 = 1;
    }
    v277->fields.isNew = v308;
    v277->fields.questPhase = QuestPhase;
    v309 = v2->fields.__8__3;
    if ( !v309 )
      sub_B7076C(v307, v292);
    questPickupMaster_5__9 = v2->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_B7076C(0LL, v292);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v309->fields.questId, 0LL);
    v277->fields.pickupPriority = Priority;
    v313 = v2->fields.__8__3;
    if ( !v313 )
      sub_B7076C(Priority, v312);
    questPhaseMaster_5__6 = v2->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_B7076C(0LL, v312);
    v315 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v313->fields.questId, 0LL);
    v317 = v315;
    if ( !v315 )
      sub_B7076C(0LL, v316);
    v318 = v315[3];
    if ( (int)v318 >= 1 )
    {
      v319 = 0;
      while ( 1 )
      {
        v320 = v317[(int)v319 + 4];
        if ( !v320 )
          sub_B7076C(v315, v316);
        v315 = MapControl_QuestInfo__AddChild(v277, *(_DWORD *)(v320 + 16), *(_DWORD *)(v320 + 20), 0LL);
        if ( (int)++v319 >= (int)v318 )
          break;
        if ( v319 >= *((_DWORD *)v317 + 6) )
        {
          v321 = sub_B70798(v315);
          sub_B70738(v321, 0LL);
        }
      }
    }
    v322 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !v322 )
      sub_B7076C(0LL, v316);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v322,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v277,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    v75 = v2->fields._mapCount_5__13;
    if ( v75 && !(v75 % v2->fields._breakInterval_5__22) )
    {
      v2->fields.__2__current = 0LL;
      sub_B70630(&v2->fields.__2__current);
      v183 = 4;
      goto LABEL_311;
    }
LABEL_432:
    v224 = v75 + 1;
    *p_mapCount_5__13 = v224;
    v223 = (unsigned int)*p_mapIdx_5__12;
  }
  if ( !_4__this )
    sub_B7076C(v223, method);
  v323 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v324 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v324 = QuestTree___c_TypeInfo;
  }
  v325 = v324->static_fields;
  _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v325->__9__40_11;
  if ( !_9__40_11 )
  {
    if ( (BYTE3(v324->vtable._0_Equals.methodPtr) & 4) != 0 && !v324->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v324);
      v325 = QuestTree___c_TypeInfo->static_fields;
    }
    v327 = (Il2CppObject *)v325->__9;
    _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__40_11,
      v327,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v328 = QuestTree___c_TypeInfo->static_fields;
    v328->__9__40_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__40_11;
    sub_B70630(&v328->__9__40_11);
  }
  if ( !v323 )
    sub_B7076C(v324, method);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v323,
    (System_Comparison_T__o *)_9__40_11,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__3 = 0LL;
  sub_B70630(&v2->fields.__8__3);
  v2->fields._warInfo_5__14 = 0LL;
  sub_B70630(&v2->fields._warInfo_5__14);
  v2->fields._mapInfo_5__16 = 0LL;
  sub_B70630(&v2->fields._mapInfo_5__16);
  v2->fields._spotInfo_5__17 = 0LL;
  sub_B70630(&v2->fields._spotInfo_5__17);
  v2->fields._warEnt_5__18 = 0LL;
  sub_B70630(&v2->fields._warEnt_5__18);
  v2->fields._userQuestMaster_5__19 = 0LL;
  sub_B70630(&v2->fields._userQuestMaster_5__19);
  v2->fields._questList_5__24 = 0LL;
  sub_B70630(&v2->fields._questList_5__24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v330);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    sub_B70630(&v2->fields.__2__current);
    v183 = 5;
    goto LABEL_311;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *this,
        const MethodInfo *method)
{
  if ( (byte_434F421 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_434F421 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap24,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}