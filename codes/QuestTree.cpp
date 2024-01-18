void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  MapControl_RootInfo_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_41860D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v15);
    sub_B2C35C(&MapControl_RootInfo_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v18);
    byte_41860D8 = 1;
  }
  v19 = (MapControl_RootInfo_o *)sub_B2C42C(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v19, 0LL);
  this->fields.mapControlRootInfo = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allQuestInfoList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allSpotInfoList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allSpotRoadInfoList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allMapGimmickInfoList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v54;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allMapInfoList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v61;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allWarInfoList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questReleaseEntList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_21875592(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_21872636(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  __int64 v11; // x1
  int64_t v12; // x21
  MapGimmickEntity_o *v13; // x20
  MapGimmickReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v15; // x3
  int v16; // w8
  __int64 v17; // x0

  if ( (byte_41860D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_41860D5 = 1;
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
    v12 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v13 = Mine;
    Time = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapGimmickReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Time,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_B2C374(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_22;
    v16 = *(_DWORD *)(Time + 24);
    if ( !v16 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, v16 == 1) )
    {
      v17 = sub_B2C460(Time);
      sub_B2C400(v17, 0LL);
    }
    *(_QWORD *)(Time + 40) = v13->fields.endedAt;
    QuestTree__UpdateForceUpdateTime(this, v12, (System_Int64_array *)Time, v15);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_22:
      sub_B2C434(Time, v11);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v13, 0LL)
                && MapGimmickEntity__IsEnableTime(v13, v12, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t NoticeAt; // x0
  __int64 v18; // x1
  bool v19; // w24
  int64_t Time; // x23
  System_Int64_array *v21; // x25
  const MethodInfo *v22; // x3
  int32_t v23; // w22
  _BOOL4 v24; // w21
  bool HasFlag; // w0
  WarEntity_o *IsShop; // x0
  const MethodInfo *v27; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantLimitImageMaster_o *v29; // x21
  int32_t id; // w23
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v33; // w8
  MapControl_QuestInfo_o *v34; // x0
  int32_t v35; // w1
  int32_t type; // w2
  int32_t targetId; // w3
  int64_t value; // x4
  int32_t closedMessageId; // w5
  __int64 v41; // x0
  UserQuestEntity_o *v42; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_41860D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&long___TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, v16);
    byte_41860D1 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v42 = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_67;
  v19 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
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
  v21 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v21 )
    goto LABEL_67;
  if ( !v21->max_length
    || (v21->m_Items[0] = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL), v21->max_length <= 1)
    || (v21->m_Items[1] = NoticeAt, NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL), v21->max_length <= 2) )
  {
    v41 = sub_B2C460(NoticeAt);
    sub_B2C400(v41, 0LL);
  }
  v21->m_Items[2] = NoticeAt;
  QuestTree__UpdateForceUpdateTime(v8, Time, v21, v22);
  v23 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_13;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v23 = 3;
  else
    v23 = 1;
  if ( v19 || HasFlag )
  {
    v24 = !HasFlag;
    goto LABEL_52;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_67;
    NoticeAt = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_67;
    IsShop = (WarEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)NoticeAt,
                              &entity,
                              warId,
                              (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_67;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)NoticeAt,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                   &v42,
                   NoticeAt,
                   questEnt->fields.id,
                   0LL) )
            {
              NoticeAt = (int64_t)v42;
              if ( !v42 )
                goto LABEL_67;
              if ( UserQuestEntity__HasStatus(v42, 8, 0LL) )
                goto LABEL_51;
            }
LABEL_41:
            v24 = 0;
            v23 = 0;
            goto LABEL_52;
          }
        }
      }
    }
    NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v27);
    if ( !NoticeAt )
      goto LABEL_67;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
      || questEnt->fields.afterClear != 5 )
    {
      goto LABEL_41;
    }
LABEL_51:
    v24 = 0;
    v23 = 2;
    goto LABEL_52;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NoticeAt = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_51;
  v29 = (ServantLimitImageMaster_o *)NoticeAt;
  if ( !NoticeAt )
    goto LABEL_67;
  id = questEnt->fields.id;
  v23 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)NoticeAt, id, 0LL) )
  {
LABEL_13:
    v24 = 0;
    goto LABEL_52;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v29, id, 0LL);
  v24 = 0;
  if ( IsCommonReleaseMultiClear )
    v23 = 0;
  else
    v23 = 2;
LABEL_52:
  forceOperation = questEnt->fields.forceOperation;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v33 = 1;
  else
    v33 = forceOperation;
  if ( v33 )
  {
    v23 = v33 != 2;
    v24 = v23;
    goto LABEL_60;
  }
  if ( v23 == 2 && questReleaseNG )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v35 = 2;
      v23 = 2;
      v34 = questInfo;
      goto LABEL_62;
    }
LABEL_67:
    sub_B2C434(NoticeAt, v18);
  }
LABEL_60:
  if ( !questInfo )
    goto LABEL_67;
  v34 = questInfo;
  v35 = v23;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_62:
  MapControl_QuestInfo__SetDispType(v34, v35, type, targetId, value, closedMessageId, 0LL);
  questInfo->fields.touchType = v24;
  return v23;
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

  return QuestTree__CheckSpotCond_21875592(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_21875592(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  QuestTree_o *v24; // x0
  TerminalSceneComponent_c *v25; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v27; // x1
  int64_t Instance; // x0
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  int v32; // w8
  bool IsExistCommand; // w23
  __int64 v34; // x25
  __int64 v35; // x25
  UnityEngine_Object_o *v36; // x25
  bool IsMissionAchive; // w0
  int64_t v38; // x2
  int32_t v39; // w0
  QuestEntity_o *v40; // x19
  int32_t WarId; // w0
  const MethodInfo *v42; // x4
  __int64 v43; // x8
  int64_t v44; // x20
  int32_t v45; // w22
  unsigned __int64 v46; // x24
  int32_t v47; // w21
  __int64 v48; // x8
  int64_t v49; // x20
  int32_t v50; // w22
  unsigned __int64 v51; // x24
  int32_t v52; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w8
  __int64 v55; // x8
  int64_t v56; // x20
  unsigned __int64 v57; // x24
  int32_t v58; // w21
  int v59; // w21
  int v60; // w20
  int32_t v61; // w0
  int32_t v62; // w8
  bool v63; // cc
  int32_t v64; // w8
  __int64 v66; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41860D4 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v22);
    byte_41860D4 = 1;
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
    LOBYTE(v24) = 1;
    return (unsigned __int8)v24 & 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v23);
    byte_4183C65 = 1;
  }
  v25 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v25->static_fields->mInstance;
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v27);
    byte_4183C65 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v29 = **(_QWORD **)(Instance + 184);
  if ( !v29 )
    goto LABEL_205;
  if ( !*(_QWORD *)(v29 + 448) )
    goto LABEL_42;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v27);
    byte_4183C65 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v30 = **(_QWORD **)(Instance + 184);
  if ( !v30 )
    goto LABEL_205;
  v31 = *(_QWORD *)(v30 + 448);
  if ( !v31 )
    goto LABEL_205;
  v32 = *(_DWORD *)(v31 + 16);
  if ( !v32 )
  {
LABEL_42:
    v34 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v35 = **(_QWORD **)(v34 + 192);
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AC505C(v35);
    v36 = **(UnityEngine_Object_o ***)(v35 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v32 = 0;
      IsExistCommand = 1;
      goto LABEL_53;
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v32 = 0;
      goto LABEL_53;
    }
LABEL_205:
    sub_B2C434(Instance, v27);
  }
  IsExistCommand = 0;
LABEL_53:
  v24 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v24 & 1;
    case 2:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_205;
      if ( targetValue )
        LOBYTE(v24) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v24) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 3:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
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
      if ( v32 == targetId )
        goto LABEL_82;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_205;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_7;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v40 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v24) = QuestTree__CheckQuestOpen(this, v40, 0LL, WarId, v42) == 1;
      return (unsigned __int8)v24 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v43 = *(_QWORD *)(Instance + 24);
      v44 = Instance;
      if ( (int)v43 >= 1 )
      {
        v45 = 0;
        v46 = 0LL;
        while ( v46 < (unsigned int)v43 )
        {
          v47 = *(_DWORD *)(v44 + 32 + 4 * v46);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v47, IsExistCommand, 0LL);
          LODWORD(v43) = *(_DWORD *)(v44 + 24);
          ++v46;
          v45 += Instance & 1;
          if ( (__int64)v46 >= (int)v43 )
            goto LABEL_195;
        }
        goto LABEL_206;
      }
      v45 = 0;
LABEL_195:
      if ( targetValue <= 1 )
        v64 = 1;
      else
        v64 = targetValue;
      LOBYTE(v24) = v45 < v64;
      return (unsigned __int8)v24 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v48 = *(_QWORD *)(Instance + 24);
      v49 = Instance;
      if ( (int)v48 < 1 )
        goto LABEL_177;
      v50 = 0;
      v51 = 0LL;
      while ( v51 < (unsigned int)v48 )
      {
        v52 = *(_DWORD *)(v49 + 32 + 4 * v51);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
        if ( !Instance )
          goto LABEL_205;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v52, IsExistCommand, 0LL);
        LODWORD(v48) = *(_DWORD *)(v49 + 24);
        ++v51;
        v50 += Instance & 1;
        if ( (__int64)v51 >= (int)v48 )
          goto LABEL_178;
      }
      goto LABEL_206;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      v63 = num < targetValue;
LABEL_188:
      LOBYTE(v24) = !v63;
      return (unsigned __int8)v24 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_205;
      LOBYTE(v24) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v55 = *(_QWORD *)(Instance + 24);
      v56 = Instance;
      if ( (int)v55 >= 1 )
      {
        v50 = 0;
        v57 = 0LL;
        while ( v57 < (unsigned int)v55 )
        {
          v58 = *(_DWORD *)(v56 + 32 + 4 * v57);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v58, IsExistCommand, 0LL);
          LODWORD(v55) = *(_DWORD *)(v56 + 24);
          ++v57;
          v50 += Instance & 1;
          if ( (__int64)v57 >= (int)v55 )
            goto LABEL_178;
        }
LABEL_206:
        v66 = sub_B2C460(Instance);
        sub_B2C400(v66, 0LL);
      }
LABEL_177:
      v50 = 0;
LABEL_178:
      if ( targetValue <= 1 )
        v62 = 1;
      else
        v62 = targetValue;
      v63 = v50 < v62;
      goto LABEL_188;
    case 12:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 13:
      v59 = targetId / 100;
      v60 = targetId % 100;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventRaceGoalScriptPlayed(v59, v60, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 16:
      if ( v32 == targetId )
        goto LABEL_7;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_193:
      LOBYTE(v24) = !IsMissionAchive;
      return (unsigned __int8)v24 & 1;
    case 17:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 18:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 83;
      goto LABEL_203;
    case 19:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 84;
      goto LABEL_203;
    case 20:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 85;
      goto LABEL_203;
    case 21:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 86;
      goto LABEL_203;
    case 22:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 87;
      goto LABEL_203;
    case 23:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 88;
      goto LABEL_203;
    case 24:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 89;
      goto LABEL_203;
    case 25:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 90;
      goto LABEL_203;
    case 26:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 91;
      goto LABEL_203;
    case 27:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 23;
      goto LABEL_203;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 76;
      goto LABEL_203;
    case 29:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 30:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = targetValue;
      v39 = 97;
      goto LABEL_203;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_205;
      v61 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v61 & 0x80000000) != 0 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v38 = targetValue;
        v39 = 113;
LABEL_203:
        LOBYTE(v24) = CondType__IsOpen(v39, targetId, v38, 0, 0LL);
      }
      else
      {
        LOBYTE(v24) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v61, 1, 0LL);
      }
      return (unsigned __int8)v24 & 1;
    default:
LABEL_82:
      LOBYTE(v24) = 0;
      return (unsigned __int8)v24 & 1;
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

  return QuestTree__CheckSpotCond_21875592(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_41860CF & 1) == 0 )
  {
    sub_B2C35C(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo, mapInfo);
    byte_41860CF = 1;
  }
  v7 = sub_B2C42C(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__41___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 72), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t questId; // w21
  System_Collections_Generic_List_QuestReleaseEntity__o **p_questReleaseEntList; // x19
  EventQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x23
  int64_t v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  __int64 v23; // x1
  EventEntity_o *Entity; // x0
  EventEntity_o *v25; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v27; // x0
  const MethodInfo *v28; // x3
  QuestEntity_o *v29; // x0
  __int64 v30; // x1
  QuestEntity_o *Mine; // x0
  __int64 v32; // x1
  int v33; // w21
  int64_t v34; // x20
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_41860D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_B2C35C(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_41860D2 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !questInfo )
    goto LABEL_38;
  questId = questInfo->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_31194596((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_38:
    sub_B2C434(this, questInfo);
  }
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_questReleaseEntList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v37 = v36;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v37.fields.current;
    if ( !v37.fields.current )
      sub_B2C434(v18, v19);
    klass_high = HIDWORD(v37.fields.current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_WarQuestSelectionMaster )
          sub_B2C434(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   Master_WarQuestSelectionMaster,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_B2C434(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v25 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v25, 1, 0LL);
LABEL_28:
              v17 = EndTime;
              goto LABEL_29;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_B2C434(0LL, v32);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_28;
      case 13:
        v29 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v29 )
          sub_B2C434(0LL, v30);
        EndTime = QuestEntity__GetEndTime(v29, 1, 0LL);
        goto LABEL_28;
      case 166:
        v27 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v27, v27, (QuestReleaseEntity_o *)current, v28);
        goto LABEL_28;
      default:
LABEL_29:
        if ( v17 >= 1 )
        {
          v33 = 3;
          v34 = v17;
          goto LABEL_32;
        }
        break;
    }
  }
  v34 = 0LL;
  v33 = 1;
LABEL_32:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v33 + 1) >> 2 )
    return v34;
  return v17;
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
  int64_t Time_26270684; // x0
  int64_t value; // x22
  int64_t v12; // x21
  unsigned int v13; // w25
  int64_t v14; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_41860D3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, questEnt);
    byte_41860D3 = 1;
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
    sub_B2C434(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v17.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_26270684 = NetworkManager__getTime_26270684(v17, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_26270684;
  dateData = NetworkManager__getDateTime_26271468(Time_26270684 - 3600 * value, 0LL).fields.dateData;
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
    dateData = NetworkManager__getDateTime_26271468(v14, 0LL).fields.dateData;
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


// local variable allocation has failed, the output may be wrong!
MapControl_MapGimmickInfo_o *__fastcall QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestTree___c__DisplayClass22_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41860C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v6);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v7);
    sub_B2C35C(&QuestTree___c__DisplayClass22_0_TypeInfo, v8);
    byte_41860C0 = 1;
  }
  v9 = (QuestTree___c__DisplayClass22_0_o *)sub_B2C42C(QuestTree___c__DisplayClass22_0_TypeInfo);
  QuestTree___c__DisplayClass22_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = this->fields.allMapGimmickInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__),
        !allMapGimmickInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v13,
                                          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_B2C434(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_MapControl_MapInfo__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v35; // w28
  QuestTree_o *v37; // x0
  const MethodInfo *v38; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v40; // x21
  __int64 v41; // x1
  System_Collections_Generic_List_MapControl_SpotInfo__o *v42; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  MapControl_SpotInfo_o *current; // x22
  WebViewManager_o *Instance; // x0
  __int64 v48; // x1
  System_Collections_Generic_List_int__o *v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 Item; // x0
  __int64 v54; // x1
  int32_t v55; // w23
  int v56; // [xsp+Ch] [xbp-E4h]
  _BYTE v57[44]; // [xsp+10h] [xbp-E0h] BYREF
  int v58; // [xsp+3Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_int__o v59; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_41860C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_41860C3 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = QuestTree__GetUserReachableMapList((QuestTree_o *)ChildByWarID, ChildByWarID, v25);
  v27 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_B2C434(v28, v29);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v61 = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v61.fields.current )
      sub_B2C434(0LL, v30);
    SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v61.fields.current, 0LL);
    if ( !SpotList )
      sub_B2C434(0LL, v32);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v60 = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v60,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v60.fields.current )
        sub_B2C434(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v60.fields.current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_B2C434(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    *(_DWORD *)&v57[4 * v58++ + 24] = 108;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v60,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 108 )
      --v58;
  }
  *(_DWORD *)&v57[4 * v58++ + 24] = 133;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 133 )
    --v58;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v37, v27, v38);
  v40 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v61 = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v61.fields.current )
      sub_B2C434(0LL, v41);
    v42 = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v61.fields.current, 0LL);
    if ( !v42 )
      sub_B2C434(0LL, v43);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v60 = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v60,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v44 )
        break;
      current = (MapControl_SpotInfo_o *)v60.fields.current;
      if ( !v60.fields.current )
        sub_B2C434(v44, v45);
      if ( HIDWORD(v60.fields.current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_B2C434(0LL, v48);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v49 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v49 )
        sub_B2C434(0LL, v50);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v57,
        v49,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v56 = 0;
      v59 = *(System_Collections_Generic_List_Enumerator_int__o *)v57;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v59,
                (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_B2C434(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v59.fields.current,
                 (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v40 )
            sub_B2C434(Item, v54);
          if ( System_Collections_Generic_List_int___Contains(
                 v40,
                 Item,
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            ++v56;
          }
          else
          {
            System_Collections_Generic_List_int___Add(
              v40,
              v55,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      *(_DWORD *)&v57[4 * v58++ + 24] = 320;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v59,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 320 )
        --v58;
      v35 = v35 - v56 + current->fields.questCount;
    }
    *(_DWORD *)&v57[4 * v58++ + 24] = 363;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v60,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 363 )
      --v58;
  }
  *(_DWORD *)&v57[4 * v58++ + 24] = 391;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 391 )
    --v58;
  return v35;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCountForMap(
        QuestTree_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_MapInfo_o *v22; // x20
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v33; // x22
  int32_t v34; // w24
  _BOOL8 v35; // x0
  __int64 v36; // x1
  MapControl_SpotInfo_o *v37; // x23
  WebViewManager_o *Instance; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_int__o *v40; // x0
  __int64 v41; // x1
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 Item; // x0
  __int64 v45; // x1
  int32_t v46; // w24
  int v47; // w10
  int32_t v48; // w9
  int v49; // w20
  int32_t v51; // [xsp+8h] [xbp-C8h]
  int v52; // [xsp+10h] [xbp-C0h]
  int v53; // [xsp+14h] [xbp-BCh]
  int v54; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+18h] [xbp-B8h] BYREF
  int v56[3]; // [xsp+30h] [xbp-A0h]
  int v57; // [xsp+3Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_41860C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_41860C6 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  memset(&v58, 0, sizeof(v58));
  v57 = 0;
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  v22 = MapInfoByMapID;
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v22, 0LL);
  if ( !SpotList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v59 = v55;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v26 )
      break;
    current = v59.fields.current;
    if ( layer < 1 )
    {
      if ( !v59.fields.current )
        sub_B2C434(v26, v27);
LABEL_12:
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)current,
                                                                              1,
                                                                              0LL);
      if ( !v23 )
        sub_B2C434(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v23,
        AvailableQuestIdList,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !v59.fields.current )
        sub_B2C434(v26, v27);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v59.fields.current, 0LL) == layer )
        goto LABEL_12;
    }
  }
  v56[0] = 98;
  v57 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  v57 = 0;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
  v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v22, 0LL);
  if ( !SpotList )
LABEL_52:
    sub_B2C434(SpotList, v25);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v53 = 0;
  v59 = v55;
  v34 = 0;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v35 )
      break;
    v37 = (MapControl_SpotInfo_o *)v59.fields.current;
    if ( layer < 1 )
    {
      if ( !v59.fields.current )
        sub_B2C434(v35, v36);
LABEL_22:
      if ( v37->fields.dispType == 1 )
        goto LABEL_25;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v39);
      if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v37->fields.spotId, 0LL) )
      {
LABEL_25:
        v51 = v34;
        v40 = MapControl_SpotInfo__GetAvailableQuestIdList(v37, 1, 0LL);
        if ( !v40 )
          sub_B2C434(0LL, v41);
        System_Collections_Generic_List_int___GetEnumerator(
          &v55,
          v40,
          (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v52 = 0;
        v58 = v55;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v58,
                  (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v42 )
            break;
          if ( !ShareQuestIdToGroupIdDict )
            sub_B2C434(v42, v43);
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   ShareQuestIdToGroupIdDict,
                   (int32_t)v58.fields.current,
                   (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          v46 = Item;
          if ( (_DWORD)Item )
          {
            if ( !v33 )
              sub_B2C434(Item, v45);
            if ( System_Collections_Generic_List_int___Contains(
                   v33,
                   Item,
                   (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              ++v52;
            }
            else
            {
              System_Collections_Generic_List_int___Add(
                v33,
                v46,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v56[v53] = 282;
        v54 = ++v57;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v58,
          (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        v47 = v54;
        if ( v54 )
        {
          v48 = v51;
          if ( v56[v54 - 1] == 282 )
          {
            v47 = v54 - 1;
            v57 = v54 - 1;
          }
        }
        else
        {
          v48 = v51;
        }
        v53 = v47;
        v34 = v48 - v52 + v37->fields.questCount;
      }
    }
    else
    {
      if ( !v59.fields.current )
        sub_B2C434(v35, v36);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v59.fields.current, 0LL) == layer )
        goto LABEL_22;
    }
  }
  v56[v53] = 323;
  v49 = ++v57;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  if ( v49 && v56[v49 - 1] == 323 )
    v57 = v49 - 1;
  return v34;
}


// local variable allocation has failed, the output may be wrong!
MapControl_QuestInfo_o *__fastcall QuestTree__GetQuestInfo(
        QuestTree_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestTree___c__DisplayClass23_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41860C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v7);
    sub_B2C35C(&QuestTree___c__DisplayClass23_0_TypeInfo, v8);
    byte_41860C1 = 1;
  }
  v9 = (QuestTree___c__DisplayClass23_0_o *)sub_B2C42C(QuestTree___c__DisplayClass23_0_TypeInfo);
  QuestTree___c__DisplayClass23_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
                                     (System_Predicate_T__o *)v13,
                                     (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41860D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_41860D6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)allQuestInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields.current )
      sub_B2C434(v14, v15);
    if ( LODWORD(v17.fields.current[4].klass) == warId )
    {
      if ( !v11 )
        sub_B2C434(v14, v15);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17.fields.current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v11;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_41860C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41860C5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestTree___c__DisplayClass21_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41860BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v6);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v7);
    sub_B2C35C(&QuestTree___c__DisplayClass21_0_TypeInfo, v8);
    byte_41860BF = 1;
  }
  v9 = (QuestTree___c__DisplayClass21_0_o *)sub_B2C42C(QuestTree___c__DisplayClass21_0_TypeInfo);
  QuestTree___c__DisplayClass21_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.spotId = spotId,
        allSpotInfoList = this->fields.allSpotInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__),
        !allSpotInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allSpotInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v19; // x20
  WarEntity_o *Mine; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x21
  System_Collections_Generic_List_int__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x22
  QuestTree___c_c *v34; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_0; // x23
  Il2CppObject *v37; // x24
  struct QuestTree___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x21

  if ( (byte_41860C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_B2C35C(&Method_System_Func_MapButtonEntity__int___ctor__, v5);
    sub_B2C35C(&System_Func_MapButtonEntity__int__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapInfo___ctor__, v12);
    sub_B2C35C(&System_Predicate_MapControl_MapInfo__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v15);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v16);
    sub_B2C35C(&QuestTree___c__DisplayClass29_0_TypeInfo, v17);
    sub_B2C35C(&QuestTree___c_TypeInfo, v18);
    byte_41860C4 = 1;
  }
  v19 = sub_B2C42C(QuestTree___c__DisplayClass29_0_TypeInfo);
  QuestTree___c__DisplayClass29_0___ctor((QuestTree___c__DisplayClass29_0_o *)v19, 0LL);
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
    Mine = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_27;
    Mine = (WarEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Mine,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Mine )
      goto LABEL_27;
    OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                           (MapButtonMaster_o *)Mine,
                                                                           warInfo,
                                                                           Map,
                                                                           0LL);
    v26 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v26,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v19 )
      goto LABEL_27;
    *(_QWORD *)(v19 + 16) = v26;
    sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    if ( !OpenedButtons )
      goto LABEL_27;
    v33 = *(System_Collections_Generic_List_int__o **)(v19 + 16);
    if ( OpenedButtons[1].monitor )
    {
      v34 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v34 = QuestTree___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = QuestTree___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_MapButtonEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__29_0,
          v37,
          Method_QuestTree___c__GetUserReachableMapList_b__29_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_MapButtonEntity__int___ctor__);
        v38 = QuestTree___c_TypeInfo->static_fields;
        v38->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v38->__9__29_0,
          (System_Int32_array **)_9__29_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      Mine = (WarEntity_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                              OpenedButtons,
                              (System_Func_TSource__TResult__o *)_9__29_0,
                              (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
      if ( !v33 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !Map || !v33 )
        goto LABEL_27;
      System_Collections_Generic_List_int___Add(
        *(System_Collections_Generic_List_int__o **)(v19 + 16),
        Map->fields.mapId,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v45,
      (Il2CppObject *)v19,
      Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
    if ( mapInfoList )
      return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)mapInfoList,
                                                                        (System_Predicate_T__o *)v45,
                                                                        (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
LABEL_27:
    sub_B2C434(Mine, v21);
  }
  return mapInfoList;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestTree___c__DisplayClass33_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20
  peRenderTexture_ChangeLayerObject_o *v14; // x0

  if ( (byte_41860C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v7);
    sub_B2C35C(&QuestTree___c__DisplayClass33_0_TypeInfo, v8);
    byte_41860C8 = 1;
  }
  v9 = (QuestTree___c__DisplayClass33_0_o *)sub_B2C42C(QuestTree___c__DisplayClass33_0_TypeInfo);
  QuestTree___c__DisplayClass33_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v14 )
    LODWORD(v14) = v14[1].monitor;
  return (int)v14;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_41860BB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___67331776, v3);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_41860BB = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    allWarInfoList,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___67331776);
  if ( !v6 )
    sub_B2C434(v7, v8);
  System_Collections_Generic_List_MapControl_WarInfo___Reverse(
    (System_Collections_Generic_List_MapControl_WarInfo__o *)v6,
    (const MethodInfo_2EF62C0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v6;
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

  if ( (byte_41860BC & 1) == 0 )
  {
    sub_B2C35C(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_41860BC = 1;
  }
  v5 = sub_B2C42C(QuestTree__Init_d__15_TypeInfo);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0

  if ( (byte_41860D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_41860D0 = 1;
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
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotInfoList;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotRoadInfoList;
  if ( !mapControlRootInfo
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapGimmickInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allWarInfoList) == 0LL) )
  {
LABEL_11:
    sub_B2C434(mapControlRootInfo, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41860CA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41860CA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_21870556(this, entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_21870556(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t id; // w21
  int64_t Time; // x20
  const MethodInfo *v11; // x2
  bool v12; // w21
  const MethodInfo *v13; // x3
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_41860CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&long___TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41860CB = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_20;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (QuestTree_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_20;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v11);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_20;
    v12 = Time < *(_QWORD *)&entity->fields.eventId;
  }
  else
  {
    v12 = 0;
  }
  this = (QuestTree_o *)sub_B2C374(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_20:
    sub_B2C434(this, warEnt);
  if ( !LODWORD(this->fields.allQuestInfoList) )
  {
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
  }
  this->fields.allSpotInfoList = *(struct System_Collections_Generic_List_MapControl_SpotInfo__o **)&entity->fields.eventId;
  QuestTree__UpdateForceUpdateTime(v4, Time, (System_Int64_array *)this, v13);
  return v12;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_41860BD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_41860BD = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  SpotEntity_o *Mine; // x1
  const MethodInfo *v17; // x3
  char v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_41860C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_41860C7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v22.fields.current;
    if ( layer < 1 )
    {
      if ( !v22.fields.current )
        sub_B2C434(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields.current )
      sub_B2C434(v13, v14);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v22.fields.current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v17)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v18 = 1;
        v19 = 2;
        goto LABEL_16;
      }
    }
  }
  v19 = 0;
  v18 = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = (v19 == 2) & v18;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_B2C434(this, 0LL);
  return QuestTree__CheckSpotCond_21875592(
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
    sub_B2C434(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_21875592(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_21875592(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_MapControl_QuestInfo__o *QuestInfoByWarId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  clsQuestCheck_o *v13; // x0
  __int64 v14; // x1
  int v15; // w19
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41860D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_41860D7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields.current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_B2C434(v13, v14);
    if ( !v13 )
      sub_B2C434(0LL, v14);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v13, (int32_t)current[1].klass, 0LL) )
    {
      v15 = 9;
      goto LABEL_11;
    }
  }
  v15 = 7;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v15 != 9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  clsQuestCheck_o *QuestInfoByWarId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  _BOOL8 v13; // x0
  __int64 v14; // x1
  char v15; // w19
  int v16; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_41860C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_41860C9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v10 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v10 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_B2C434(QuestInfoByWarId, v9);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v12);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v20.fields.current )
      sub_B2C434(v13, v14);
    if ( LODWORD(v20.fields.current[2].klass) == 1 )
    {
      v15 = 1;
      v16 = 17;
      goto LABEL_15;
    }
  }
  v15 = 0;
  v16 = 15;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (v16 == 17) & v15;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  QuestAfterAction_o *Instance; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **name; // x1
  __int64 v21; // x22
  __int64 v22; // x22
  UnityEngine_Object_o *v23; // x22
  bool IsExistCommand; // w21
  int32_t v25; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_41860CC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B2C35C(&SpotEntity_TypeInfo, v10);
    byte_41860CC = 1;
  }
  v11 = sub_B2C42C(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v11, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_22;
  if ( !v11 )
    goto LABEL_22;
  *(_DWORD *)(v11 + 16) = blankEarthSpotEnt->fields.id;
  *(_DWORD *)(v11 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_DWORD *)(v11 + 20) = blankEarthSpotEnt->fields.warId;
  name = (System_Int32_array **)blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v11 + 32) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), name, v14, v15, v16, v17, v18, v19);
  if ( !spotInfo )
    goto LABEL_22;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v11, 0LL);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AC505C(v22);
  v23 = **(UnityEngine_Object_o ***)(v22 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    IsExistCommand = QuestAfterAction__IsExistCommand(Instance, 0, *(_DWORD *)(v11 + 16), 0LL);
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
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_B2C434(Instance, v13);
  v25 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v25, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_21872636(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_B2C434(v4, v5);
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
      sub_B2C434(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_21875592(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_21875592(
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
    sub_B2C434(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_21875592(
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
    sub_B2C434(this, nowTime);
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = *(_QWORD *)&times->max_length;
    if ( !v4 )
    {
LABEL_10:
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
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

  if ( (byte_41860BE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_41860BE = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL);
}


clsQuestCheck_o *__fastcall QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_41860BA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v2);
    byte_41860BA = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  return SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_41860CD & 1) == 0 )
  {
    sub_B2C35C(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo, endCallback);
    byte_41860CD = 1;
  }
  v5 = sub_B2C42C(QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_41860CE & 1) == 0 )
  {
    sub_B2C35C(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo, *(_QWORD *)&targetWarId);
    byte_41860CE = 1;
  }
  v7 = sub_B2C42C(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall QuestTree__mfGetMapInfoByMapID(
        QuestTree_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestTree___c__DisplayClass27_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41860C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_MapControl_MapInfo__TypeInfo, v6);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v7);
    sub_B2C35C(&QuestTree___c__DisplayClass27_0_TypeInfo, v8);
    byte_41860C2 = 1;
  }
  v9 = (QuestTree___c__DisplayClass27_0_o *)sub_B2C42C(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.mapId = mapId;
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapInfoList,
                                   (System_Predicate_T__o *)v13,
                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v2; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v7; // x0
  struct BlankEarthSpotEntity_array **p__7__wrap1; // x21
  int32_t v9; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *v11; // x9
  int32_t max_length; // w10
  BlankEarthSpotEntity_o *v13; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v14; // x22
  struct MapControl_SpotInfo_o **p__2__current; // x19
  bool result; // w0
  __int64 v17; // x0

  v2 = this;
  if ( (byte_418563B & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B2C35C(&BlankEarthSpotMaster_TypeInfo, method);
    byte_418563B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v2->fields.__7__wrap2;
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v2->fields.__1__state = -1;
    v9 = _7__wrap2 + 1;
    v2->fields.__7__wrap2 = v9;
  }
  else
  {
    if ( _1__state )
      return 0;
    mapInfo = v2->fields.mapInfo;
    v2->fields.__1__state = -1;
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
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v2->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_22;
    v7 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v2->fields.__7__wrap1 = v7;
    p__7__wrap1 = &v2->fields.__7__wrap1;
    sub_B2C2F8(&v2->fields.__7__wrap1, v7);
    v9 = 0;
    v2->fields.__7__wrap2 = 0;
  }
  v11 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    goto LABEL_22;
  max_length = v11->max_length;
  if ( v9 < max_length )
  {
    if ( v9 >= (unsigned int)max_length )
    {
      v17 = sub_B2C460(this);
      sub_B2C400(v17, 0LL);
    }
    v13 = v11->m_Items[v9];
    if ( v13 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v2->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v13->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v14 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v13, (MapControl_SpotInfo_o *)this, 0LL);
          v2->fields.__2__current = (struct MapControl_SpotInfo_o *)v14;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v14);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_22:
    sub_B2C434(this, method);
  }
  *p__7__wrap1 = 0LL;
  sub_B2C2F8(p__7__wrap1, 0LL);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct QuestTree_o *_4__this; // x1
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1

  if ( (byte_418563C & 1) == 0 )
  {
    sub_B2C35C(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo, method);
    byte_418563C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B2C42C(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_B2C2F8(&v4->fields.__4__this, _4__this);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v4->fields.mapInfo = _3__mapInfo;
  sub_B2C2F8(&v4->fields.mapInfo, _3__mapInfo);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v4->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_B2C2F8(&v4->fields.blankEarthSpotMaster, _3__blankEarthSpotMaster);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v4;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  TerminalPramsManager_c *v9; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  System_Action_o *endCallback; // x0
  __int64 v12; // x20
  __int64 v13; // x20
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x21
  UnityEngine_Object_o *v17; // x21
  System_Collections_IEnumerator_o *v18; // x0

  v2 = this;
  if ( (byte_418563D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (QuestTree__Init_d__15_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418563D = 1;
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
      if ( !byte_4184752 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
        byte_4184752 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
        v15 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
        v16 = **(_QWORD **)(v15 + 192);
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          sub_AC505C(v16);
        v17 = **(UnityEngine_Object_o ***)(v16 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
          goto LABEL_44;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_44:
            QuestTree__UpdateMonitoringValue(_4__this, 0LL);
            v18 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v18;
            sub_B2C2F8(&v2->fields.__2__current, v18);
            LOBYTE(endCallback) = 1;
            v2->fields.__1__state = 1;
            return (char)endCallback;
          }
        }
      }
LABEL_46:
      sub_B2C434(this, method);
    }
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v13 = **(_QWORD **)(v12 + 192);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AC505C(v13);
    v14 = **(UnityEngine_Object_o ***)(v13 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_46;
      QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestTree___c_StaticFields *static_fields; // x0

  if ( (byte_4185637 & 1) == 0 )
  {
    sub_B2C35C(&QuestTree___c_TypeInfo, v1);
    byte_4185637 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestTree___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_4185638 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4185638 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_4185639 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_3_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_4185639 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_418563A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_6_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_418563A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  struct QuestTree_o *_4__this; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  WarQuestSelectionMaster_o *v62; // x0
  WarQuestSelectionMaster_o *v63; // x0
  WarQuestSelectionMaster_o *v64; // x0
  WarQuestSelectionMaster_o *v65; // x0
  WarQuestSelectionMaster_o *v66; // x0
  WarQuestSelectionMaster_o *v67; // x0
  WarQuestSelectionMaster_o *v68; // x0
  WarQuestSelectionMaster_o *v69; // x0
  WarQuestSelectionMaster_o *v70; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v71; // x22
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  unsigned int *p_warIdx_5__18; // x19
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  signed int v76; // w8
  unsigned int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  int32_t *p_questIdx_5__25; // x28
  int32_t *p_questCount_5__26; // x27
  bool result; // w0
  struct WarEntity_array *v82; // x9
  WarEntity_o *v83; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v85; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v92; // x23
  int64_t v93; // x23
  unsigned int _2__current; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v95; // x22
  unsigned int v96; // w9
  __int64 v97; // x8
  int32_t v98; // w24
  MapControl_MapInfo_o *v99; // x23
  Il2CppObject *v100; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v101; // x25
  unsigned int v102; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v103; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v104; // x8
  SpotEntity_o **v105; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v106; // t1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *allSpotInfoList; // x25
  Il2CppObject *v108; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v109; // x25
  unsigned int v110; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v111; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v112; // x8
  SpotRoadEntity_o **v113; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v114; // t1
  Il2CppObject *v115; // x25
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v116; // x24
  unsigned int v117; // w22
  __int64 v118; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allWarInfoList; // x21
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v122; // x23
  struct QuestTree___c_StaticFields *v123; // x0
  Il2CppObject *v124; // x22
  struct QuestTree___c__DisplayClass39_0_o **p__8__1; // x21
  MapControl_WarInfo_o *v126; // x22
  MapControl_MapInfo_o *v127; // x22
  MapControl_SpotInfo_o *v128; // x22
  WarEntity_o *v129; // x22
  WarQuestSelectionMaster_o *v130; // x0
  bool isSavedMemoryMode; // w0
  bool v132; // zf
  int v133; // w8
  Il2CppObject **p__2__current; // x27
  __int64 v135; // x0
  QuestEntity_o *v136; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass39_0_o *_8__1; // x8
  Il2CppObject *v141; // x25
  QuestEntity_o *v142; // x21
  int32_t v143; // w22
  int32_t *v144; // x23
  int32_t *v145; // x28
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v146; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x27
  peRenderTexture_ChangeLayerObject_o *v148; // x0
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int v153; // w25
  struct MapControl_WarInfo_o *warInfo_5__20; // x8
  MapControl_QuestInfo_o *v155; // x24
  struct EventMaster_o *v156; // x1
  struct MapControl_SpotInfo_o *spotInfo_5__22; // x1
  struct WarEntity_o *warEnt_5__23; // x8
  int v159; // w19
  struct MapControl_SpotInfo_o *v160; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v162; // x9
  struct MapControl_MapInfo_o *v163; // x9
  bool v164; // w8
  Il2CppObject *v165; // x19
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v166; // x21
  unsigned int v167; // w22
  __int64 v168; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allQuestInfoList; // x21
  struct QuestTree___c_StaticFields *v170; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_1; // x22
  Il2CppObject *v172; // x23
  struct QuestTree___c_StaticFields *v173; // x0
  int32_t *p_warCount_5__19; // [xsp+0h] [xbp-C0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v175; // [xsp+10h] [xbp-B0h]
  MapControl_WarInfo_o *v176; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v177; // [xsp+20h] [xbp-A0h]
  unsigned int v178; // [xsp+28h] [xbp-98h]
  struct QuestMaster_o *v179; // [xsp+28h] [xbp-98h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v180; // [xsp+30h] [xbp-90h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+38h] [xbp-88h] BYREF
  UserQuestEntity_o *v182; // [xsp+40h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+48h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+50h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *v186; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_418563E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MapControl_WarInfo___ctor__, method);
    sub_B2C35C(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v3);
    sub_B2C35C(&System_Comparison_MapControl_QuestInfo__TypeInfo, v4);
    sub_B2C35C(&System_Comparison_MapControl_WarInfo__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapGimmickMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPickupMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotRoadMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v19);
    sub_B2C35C(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v20);
    sub_B2C35C(&DataManager_TypeInfo, v21);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v26);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v27);
    sub_B2C35C(&long___TypeInfo, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v39);
    sub_B2C35C(&MapControl_MapInfo_TypeInfo, v40);
    sub_B2C35C(&NetworkManager_TypeInfo, v41);
    sub_B2C35C(&OptionManager_TypeInfo, v42);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v43);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v44);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v46);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v47);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v48);
    sub_B2C35C(&MapControl_SpotInfo_TypeInfo, v49);
    sub_B2C35C(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__, v50);
    sub_B2C35C(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__, v51);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__, v52);
    sub_B2C35C(&QuestTree___c__DisplayClass39_0_TypeInfo, v53);
    sub_B2C35C(&QuestTree___c_TypeInfo, v54);
    sub_B2C35C(&WarEntity_TypeInfo, v55);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B2C35C(&MapControl_WarInfo_TypeInfo, v56);
    byte_418563E = 1;
  }
  entity = 0LL;
  spotInfo = 0LL;
  v186 = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v182 = 0LL;
  _4__this = v2->fields.__4__this;
  v180 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_253;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_B2C2F8(&v2->fields._dataManager_5__2, Instance);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B2C2F8(&v2->fields._mapMaster_5__3, MasterData_WarQuestSelectionMaster);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v60 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v60;
      sub_B2C2F8(&v2->fields._spotMaster_5__4, v60);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v61;
      sub_B2C2F8(&v2->fields._blankEarthSpotMaster_5__5, v61);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v62 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v62;
      sub_B2C2F8(&v2->fields._questMaster_5__6, v62);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v63 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v63;
      sub_B2C2F8(&v2->fields._questPhaseMaster_5__7, v63);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v64 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v64;
      sub_B2C2F8(&v2->fields._eventMaster_5__8, v64);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v65 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v65;
      sub_B2C2F8(&v2->fields._eventDetailMaster_5__9, v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v66 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v66;
      sub_B2C2F8(&v2->fields._eventStatusMaster_5__10, v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_B2C2F8(&v2->fields._eventStatusQuestMaster_5__11, v67);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v68 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v68;
      sub_B2C2F8(&v2->fields._spotRoadMaster_5__12, v68);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v69 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v69;
      sub_B2C2F8(&v2->fields._mapGimmickMaster_5__13, v69);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      v70 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v70;
      sub_B2C2F8(&v2->fields._questPickupMaster_5__14, v70);
      v71 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v71,
        (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v71;
      sub_B2C2F8(&v2->fields._eventStatusQuestMismatchDictionary_5__15, v71);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_253;
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = Entitys_WarMaster__WarEntity;
      sub_B2C2F8(&v2->fields._warList_5__16, Entitys_WarMaster__WarEntity);
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
        goto LABEL_253;
      max_length = warList_5__16->max_length;
      v76 = 0;
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
      goto LABEL_236;
    case 3:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_253;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v76 < max_length )
  {
    v82 = v2->fields._warList_5__16;
    if ( !v82 )
      goto LABEL_253;
    if ( v76 >= v82->max_length )
      goto LABEL_132;
    v83 = v82->m_Items[v76];
    if ( !v83 )
      goto LABEL_253;
    if ( !_4__this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_253;
    id = v83->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               0LL);
    if ( !this )
      goto LABEL_253;
    v85 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_WarMaster__WarEntity__int__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v85, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_253;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_253;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= *(_QWORD *)&entity->fields.startType && nowTime_5__17 < (__int64)entity->fields.coordinate )
          MapControl_WarInfo__SetStatusCheckFlag(v85, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_WarMaster__WarEntity__int__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v85, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_253;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v186,
               (int32_t)this,
               (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v186;
          if ( !v186 )
            goto LABEL_253;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v186, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)entity;
            if ( !entity )
              goto LABEL_253;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v85, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_253;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v92 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v85, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_253;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v92->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_253;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)this,
                  (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v93 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B2C374(long___TypeInfo, 3LL);
        if ( !entity || !this )
          goto LABEL_253;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_132;
        this->fields.__4__this = *(struct QuestTree_o **)&entity->fields.startType;
        if ( !entity )
          goto LABEL_253;
        if ( _2__current <= 1 )
          goto LABEL_132;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)entity->fields.targetId;
        if ( !entity )
          goto LABEL_253;
        if ( _2__current <= 2 )
          goto LABEL_132;
        this->fields.endCallback = (struct System_Action_o *)entity->fields.coordinate;
        QuestTree__UpdateForceUpdateTime(_4__this, v93, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_253;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_253;
    v95 = this;
    v177 = this->fields.__2__current;
    if ( (int)v177 >= 1 )
    {
      if ( !(_DWORD)v177 )
        goto LABEL_132;
      v96 = 0;
      v175 = this;
      v176 = v85;
      while ( 1 )
      {
        v97 = *((_QWORD *)&v95->fields.__4__this + (int)v96);
        v178 = v96;
        if ( !v97 )
          goto LABEL_253;
        v98 = *(_DWORD *)(v97 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__AddChild(v85, v98, 0LL);
        if ( !_4__this->fields.allMapInfoList )
          goto LABEL_253;
        v99 = (MapControl_MapInfo_o *)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotMaster__getList((SpotMaster_o *)this, v98, 0LL);
        if ( !this )
          goto LABEL_253;
        v100 = this->fields.__2__current;
        v101 = this;
        if ( (int)v100 >= 1 )
          break;
LABEL_79:
        allSpotInfoList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v99,
                                                                   v180->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_253;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v98,
                                                                   0LL);
        if ( !this )
          goto LABEL_253;
        v108 = this->fields.__2__current;
        v109 = this;
        if ( (int)v108 >= 1 )
        {
          v110 = 0;
          while ( 1 )
          {
            v111 = &v109->klass + (int)v110;
            v114 = v111[4];
            v113 = (SpotRoadEntity_o **)(v111 + 4);
            v112 = v114;
            if ( !v114 || !v99 )
              goto LABEL_253;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v99,
                                                                       (int32_t)v112->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v110 >= LODWORD(v109->fields.__2__current) )
              goto LABEL_132;
            QuestTree__SetupSpotRoadInfo(_4__this, *v113, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_253;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
            if ( (int)++v110 >= (int)v108 )
              break;
            if ( v110 >= LODWORD(v109->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v2 = v180;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v98,
                                                                   0LL);
        if ( !this )
          goto LABEL_253;
        v115 = this->fields.__2__current;
        v116 = this;
        if ( (int)v115 >= 1 )
        {
          v117 = 0;
          while ( 1 )
          {
            v118 = *((_QWORD *)&v116->fields.__4__this + (int)v117);
            if ( !v118 )
              goto LABEL_253;
            if ( !v99 )
              goto LABEL_253;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v99, *(_DWORD *)(v118 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_253;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
            if ( (int)++v117 >= (int)v115 )
              break;
            if ( v117 >= LODWORD(v116->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v85 = v176;
        v95 = v175;
        v96 = v178 + 1;
        if ( (int)(v178 + 1) >= (int)v177 )
          goto LABEL_104;
        if ( v96 >= LODWORD(v175->fields.__2__current) )
          goto LABEL_132;
      }
      v102 = 0;
      do
      {
        v103 = &v101->klass + (int)v102;
        v106 = v103[4];
        v105 = (SpotEntity_o **)(v103 + 4);
        v104 = v106;
        if ( !v106 || !v99 )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddChild(
                                                                   v99,
                                                                   (int32_t)v104->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( v102 >= LODWORD(v101->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v105, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_253;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
        if ( (int)++v102 >= (int)v100 )
          goto LABEL_79;
      }
      while ( v102 < LODWORD(v101->fields.__2__current) );
LABEL_132:
      v135 = sub_B2C460(this);
      sub_B2C400(v135, 0LL);
    }
LABEL_104:
    warIdx_5__18 = *p_warIdx_5__18;
    if ( (int)*p_warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_106:
    v76 = warIdx_5__18 + 1;
    *p_warIdx_5__18 = v76;
    max_length = *p_warCount_5__19;
  }
  if ( !_4__this )
    goto LABEL_253;
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
    v122 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v122,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
    v123 = QuestTree___c_TypeInfo->static_fields;
    v123->__9__39_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__39_0;
    sub_B2C2F8(&v123->__9__39_0, _9__39_0);
  }
  if ( !allWarInfoList )
    goto LABEL_253;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allWarInfoList,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v124 = (Il2CppObject *)sub_B2C42C(QuestTree___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v124, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)v124;
  p__8__1 = &v2->fields.__8__1;
  sub_B2C2F8(&v2->fields.__8__1, v124);
  v126 = (MapControl_WarInfo_o *)sub_B2C42C(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v126, 0LL);
  v2->fields._warInfo_5__20 = v126;
  sub_B2C2F8(&v2->fields._warInfo_5__20, v126);
  v127 = (MapControl_MapInfo_o *)sub_B2C42C(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v127, 0LL);
  v2->fields._mapInfo_5__21 = v127;
  sub_B2C2F8(&v2->fields._mapInfo_5__21, v127);
  v128 = (MapControl_SpotInfo_o *)sub_B2C42C(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v128, 0LL);
  v2->fields._spotInfo_5__22 = v128;
  sub_B2C2F8(&v2->fields._spotInfo_5__22, v128);
  v129 = (WarEntity_o *)sub_B2C42C(WarEntity_TypeInfo);
  WarEntity___ctor(v129, 0LL);
  v2->fields._warEnt_5__23 = v129;
  sub_B2C2F8(&v2->fields._warEnt_5__23, v129);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_253;
  v130 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)this,
           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v130;
  sub_B2C2F8(&v2->fields._userQuestMaster_5__24, v130);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_253;
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
  v132 = !isSavedMemoryMode;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._questMaster_5__6;
  v133 = v132 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v133;
  if ( !this )
    goto LABEL_253;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  v2->fields._questCount_5__26 = (int)this;
  p_questCount_5__26 = &v2->fields._questCount_5__26;
  method = (const MethodInfo *)(unsigned int)*(p_questCount_5__26 - 1);
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_253;
    v136 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v182 = 0LL;
    userQuestMaster_5__24 = v180->fields._userQuestMaster_5__24;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_253;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v182, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v182;
      if ( !v182 )
        goto LABEL_253;
      QuestPhase = UserQuestEntity__getQuestPhase(v182, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__getSpotId_23876464(v136, QuestPhase + 1, 0LL);
    _8__1 = v180->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_253;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      v179 = _1__state;
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_253;
      v141 = (Il2CppObject *)v180->fields.__8__1;
      if ( !v141 )
        goto LABEL_253;
      v142 = v136;
      v143 = QuestPhase;
      v144 = p_questIdx_5__25;
      v145 = p_questCount_5__26;
      v146 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v141[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          monitor,
          v141,
          Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v141[1].monitor = monitor;
        sub_B2C2F8(&v141[1].monitor, monitor);
      }
      if ( !v146 )
        goto LABEL_253;
      v148 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               v146,
               (System_Predicate_T__o *)monitor,
               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v180->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v148;
      sub_B2C2F8(&v180->fields._spotInfo_5__22, v148);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_253;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      p_questCount_5__26 = v145;
      p_questIdx_5__25 = v144;
      QuestPhase = v143;
      v136 = v142;
      _1__state = v179;
      if ( v180->fields._mapInfoNow_5__27 != MapID )
      {
        v180->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v180->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_B2C2F8(&v180->fields._mapInfo_5__21, MapInfoByMapID);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_253;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v180->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v180->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v180->fields._warInfo_5__20 = WarInfoByWarID;
          sub_B2C2F8(&v180->fields._warInfo_5__20, WarInfoByWarID);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_253;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v180->fields._warEnt_5__23 = Mine;
          sub_B2C2F8(&v180->fields._warEnt_5__23, Mine);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_253;
    if ( !v182 )
      goto LABEL_178;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v182;
    if ( !v182 )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v182, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_163;
    if ( !v182 )
      goto LABEL_253;
    if ( v182->fields.challengeNum >= 1 )
    {
LABEL_163:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_253;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v182;
    if ( !v182 )
      goto LABEL_253;
    if ( UserQuestEntity__getClearNum(v182, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_253;
LABEL_178:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v153 = 0;
      goto LABEL_179;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v182 )
      goto LABEL_253;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v182->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v180->fields._warInfo_5__20 )
      goto LABEL_253;
    v153 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetMine(
                                                               v180->fields._warInfo_5__20,
                                                               0LL);
    if ( !this )
      goto LABEL_253;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_253;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_179:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    warInfo_5__20 = v180->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_253;
    v155 = (MapControl_QuestInfo_o *)this;
    if ( !this )
      goto LABEL_253;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    v156 = (struct EventMaster_o *)v180->fields._warInfo_5__20;
    this->fields._eventMaster_5__8 = v156;
    sub_B2C2F8(&this->fields._eventMaster_5__8, v156);
    spotInfo_5__22 = v180->fields._spotInfo_5__22;
    v155->fields._SpotInfo_k__BackingField = spotInfo_5__22;
    sub_B2C2F8(&v155->fields._SpotInfo_k__BackingField, spotInfo_5__22);
    if ( !_4__this )
      goto LABEL_253;
    v155->fields.endTime = QuestTree__GetEndTime(_4__this, v155, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_253;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_193;
      }
    }
    warEnt_5__23 = v180->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_253;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)value;
      if ( !value )
        goto LABEL_253;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_193:
        MapControl_QuestInfo__SetDispType(v155, 0, 0, 0, 0LL, 0, 0LL);
        v155->fields.touchType = 0;
LABEL_197:
        v159 = 1;
        goto LABEL_198;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v136, v155, v180->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_197;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_253;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v159 = 0;
LABEL_198:
    if ( MapControl_QuestInfo__IsDisaplayable(v155, 0LL) )
    {
      if ( ((v153 | v159) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_253;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_253;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v155->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v155, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__GetMine(v155, 0LL);
        if ( !this )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v160 = v180->fields._spotInfo_5__22;
          if ( !v160 )
            goto LABEL_253;
          v160->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v180->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_253;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      if ( MapControl_QuestInfo__GetQuestType(v155, 0LL) == 7 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__IsDisplayWarBoardNextIcon(
                                                                   v155,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v162 = v180->fields._spotInfo_5__22;
          if ( !v162 )
            goto LABEL_253;
          v162->fields._IsNext_k__BackingField = 1;
          v163 = v180->fields._mapInfo_5__21;
          if ( !v163 )
            goto LABEL_253;
          v163->fields._IsNext_k__BackingField = 1;
        }
      }
      if ( QuestEntity__HasFlag(v136, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_253;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v182 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v182, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v182 )
          goto LABEL_253;
        v164 = v182->fields.challengeNum == 0;
      }
      else
      {
        v164 = 0;
      }
    }
    else
    {
      v164 = 1;
    }
    v155->fields.isNew = v164;
    v155->fields.questPhase = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_253;
    v155->fields.pickupPriority = QuestPickupMaster__GetPriority((QuestPickupMaster_o *)this, (int32_t)_1__state, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v180->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_253;
    v165 = this->fields.__2__current;
    v166 = this;
    if ( (int)v165 >= 1 )
    {
      v167 = 0;
      while ( 1 )
      {
        v168 = *((_QWORD *)&v166->fields.__4__this + (int)v167);
        if ( !v168 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__AddChild(
                                                                   v155,
                                                                   *(_DWORD *)(v168 + 16),
                                                                   *(_DWORD *)(v168 + 20),
                                                                   0LL);
        if ( (int)++v167 >= (int)v165 )
          goto LABEL_233;
        if ( v167 >= LODWORD(v166->fields.__2__current) )
          goto LABEL_132;
      }
LABEL_253:
      sub_B2C434(this, method);
    }
LABEL_233:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_253;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v155,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    questIdx_5__25 = v180->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v180->fields._breakInterval_5__29) )
    {
      v180->fields.__2__current = 0LL;
      sub_B2C2F8(&v180->fields.__2__current, 0LL);
      v180->fields.__1__state = 2;
      return 1;
    }
LABEL_236:
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    *p_questIdx_5__25 = (int)method;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)(unsigned int)*p_questCount_5__26;
  }
  if ( !_4__this )
    goto LABEL_253;
  allQuestInfoList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree___c_TypeInfo;
  }
  v170 = *(struct QuestTree___c_StaticFields **)&this->fields._warIdx_5__18;
  _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v170->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(this[1].fields.endCallback) & 4) != 0 && !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v170 = QuestTree___c_TypeInfo->static_fields;
    }
    v172 = (Il2CppObject *)v170->__9;
    _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_1,
      v172,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v173 = QuestTree___c_TypeInfo->static_fields;
    v173->__9__39_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__39_1;
    sub_B2C2F8(&v173->__9__39_1, _9__39_1);
  }
  if ( !allQuestInfoList )
    goto LABEL_253;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allQuestInfoList,
    (System_Comparison_T__o *)_9__39_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v180->fields.__8__1 = 0LL;
  sub_B2C2F8(&v180->fields.__8__1, 0LL);
  v180->fields._warInfo_5__20 = 0LL;
  sub_B2C2F8(&v180->fields._warInfo_5__20, 0LL);
  v180->fields._mapInfo_5__21 = 0LL;
  sub_B2C2F8(&v180->fields._mapInfo_5__21, 0LL);
  v180->fields._spotInfo_5__22 = 0LL;
  sub_B2C2F8(&v180->fields._spotInfo_5__22, 0LL);
  v180->fields._warEnt_5__23 = 0LL;
  sub_B2C2F8(&v180->fields._warEnt_5__23, 0LL);
  v180->fields._userQuestMaster_5__24 = 0LL;
  sub_B2C2F8(&v180->fields._userQuestMaster_5__24, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_253;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v180->fields.endCallback )
    return 0;
  v180->fields.__2__current = 0LL;
  sub_B2C2F8(&v180->fields.__2__current, 0LL);
  v180->fields.__1__state = 3;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  QuestTree_o *_4__this; // x20
  Il2CppObject *v119; // x21
  __int64 v120; // x0
  __int64 v121; // x1
  WebViewManager_o *Instance; // x0
  DataManager_o **p_dataManager_5__2; // x23
  __int64 v124; // x1
  __int64 v125; // x1
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v127; // x0
  __int64 v128; // x1
  WarQuestSelectionMaster_o *v129; // x0
  __int64 v130; // x1
  WarQuestSelectionMaster_o *v131; // x0
  __int64 v132; // x1
  WarQuestSelectionMaster_o *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v136; // x28
  __int64 v137; // x1
  __int64 v138; // x1
  __int64 v139; // x1
  WarQuestSelectionMaster_o *v140; // x0
  __int64 v141; // x1
  WarQuestSelectionMaster_o *v142; // x0
  __int64 v143; // x1
  WarQuestSelectionMaster_o *v144; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v145; // x25
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_eventStatusQuestMismatchDictionary_5__10; // x26
  Il2CppObject *v147; // x24
  Il2CppObject **p__8__1; // x27
  __int64 v149; // x1
  __int64 Time; // x25
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  Il2CppObject *_8__2; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v154; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v155; // x0
  __int64 v156; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allWarInfoList; // x22
  Il2CppObject *v159; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v160; // x23
  __int64 v161; // x0
  __int64 v162; // x1
  __int64 Index; // x0
  __int64 v164; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v165; // x0
  MapControl_RootInfo_o *v166; // x0
  MapControl_WarInfo_o *v167; // x0
  MapControl_WarInfo_o **p_warInfo_5__13; // x22
  __int64 v169; // x1
  MapControl_WarInfo_o *warInfo_5__13; // x0
  __int64 v171; // x1
  __int64 EventId; // x0
  __int64 v173; // x1
  _BOOL8 v174; // x0
  __int64 v175; // x1
  int32_t v176; // w2
  __int64 v177; // x1
  __int64 v178; // x1
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  EventStatusEntity_o *NowEntity; // x23
  __int64 v183; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  __int64 v185; // x1
  System_Int64_array *v186; // x0
  __int64 v187; // x1
  unsigned int max_length; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v189; // x0
  __int64 v190; // x0
  __int64 v191; // x1
  MapEntity_array *List; // x0
  __int64 v193; // x0
  __int64 v194; // x1
  struct MapEntity_array *mapList_5__14; // x9
  int mapCount_5__12; // w9
  int v197; // w8
  int32_t v198; // w8
  int32_t *p_mapCount_5__12; // x27
  int32_t *p_mapIdx_5__11; // x28
  struct MapEntity_array *v201; // x9
  MapEntity_o *v202; // x8
  struct QuestTree___c__DisplayClass40_1_o *v203; // x9
  struct MapControl_WarInfo_o *v204; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *mapInfoList; // x21
  Il2CppObject *v206; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  struct MapControl_WarInfo_o *v208; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v209; // x0
  Il2CppObject *v210; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapInfoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x22
  __int64 v213; // x0
  __int64 v214; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v215; // x0
  struct QuestTree___c__DisplayClass40_1_o *v216; // x8
  MapControl_WarInfo_o *v217; // x0
  MapControl_MapInfo_o *v218; // x0
  __int64 v219; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v220; // x0
  __int64 v221; // x0
  __int64 v222; // x1
  struct QuestTree___c__DisplayClass40_1_o *v223; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v225; // x0
  __int64 v226; // x1
  SpotEntity_array *v227; // x22
  int v228; // w27
  __int64 v229; // x28
  __int64 v230; // x23
  __int64 v231; // x0
  __int64 v232; // x1
  SpotEntity_o *v233; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v235; // x26
  __int64 v236; // x0
  __int64 v237; // x1
  unsigned int v238; // w0
  __int64 v239; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v240; // x0
  __int64 v241; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v242; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v243; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v244; // x0
  __int64 v245; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v246; // x21
  Il2CppObject *v247; // x22
  QuestTree___c_c *v248; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_6; // x23
  Il2CppObject *v251; // x24
  struct QuestTree___c_StaticFields *v252; // x0
  System_Collections_Generic_IEnumerable_T__o *v253; // x24
  System_Collections_Generic_HashSet_int__o *v254; // x23
  __int64 v255; // x0
  __int64 v256; // x1
  System_Collections_Generic_List_T__o *v257; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v258; // x24
  __int64 v259; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v260; // x0
  bool result; // w0
  struct System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__o *p__7__wrap23; // x22
  int32_t *p_cnt_5__22; // x24
  Il2CppObject **p__8__3; // x21
  struct QuestTree___c__DisplayClass40_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v267; // x0
  __int64 v268; // x1
  SpotRoadEntity_array *v269; // x21
  int v270; // w26
  __int64 v271; // x27
  __int64 v272; // x22
  __int64 v273; // x0
  __int64 v274; // x1
  SpotRoadEntity_o *v275; // x23
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotRoadInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v277; // x25
  __int64 v278; // x0
  __int64 v279; // x1
  unsigned int v280; // w0
  __int64 v281; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v282; // x0
  MapControl_MapInfo_o *mapInfo_5__15; // x0
  __int64 v284; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v285; // x0
  struct QuestTree___c__DisplayClass40_1_o *v286; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v288; // x0
  __int64 v289; // x1
  MapGimmickEntity_array *v290; // x21
  int v291; // w25
  __int64 v292; // x26
  __int64 v293; // x22
  __int64 v294; // x0
  __int64 v295; // x1
  MapGimmickEntity_o *v296; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapGimmickInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v298; // x24
  __int64 v299; // x0
  __int64 v300; // x1
  unsigned int v301; // w0
  __int64 v302; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v303; // x0
  MapControl_MapInfo_o *v304; // x0
  __int64 v305; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v306; // x0
  int v307; // w8
  System_Action_o *endCallback; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v309; // x21
  QuestTree___c_c *v310; // x0
  struct QuestTree___c_StaticFields *v311; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_2; // x22
  Il2CppObject *v313; // x23
  struct QuestTree___c_StaticFields *v314; // x0
  Il2CppObject *v315; // x23
  MapControl_WarInfo_o *v316; // x23
  MapControl_MapInfo_o *v317; // x22
  MapControl_SpotInfo_o *v318; // x22
  WarEntity_o *v319; // x22
  __int64 v320; // x1
  DataManager_o *dataManager_5__2; // x0
  WarQuestSelectionMaster_o *v322; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v324; // x1
  int v325; // w8
  struct QuestTree___c__DisplayClass40_6_o *_8__3; // x22
  System_Collections_Generic_List_int__o *v327; // x23
  __int64 v328; // x0
  __int64 v329; // x1
  __int64 v330; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v331; // x0
  __int128 v332; // q0
  _BOOL8 v333; // x0
  const MethodInfo *v334; // x1
  MapControl_SpotInfo_o *current; // x23
  SpotEntity_o *Mine; // x0
  __int64 v337; // x1
  struct QuestTree___c__DisplayClass40_0_o *v338; // x8
  System_Collections_Generic_List_int__o *v339; // x0
  __int64 v340; // x1
  DataMasterBase_o *questMaster_5__5; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  Il2CppObject *v343; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v344; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v345; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v346; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v347; // x0
  __int64 v348; // x0
  int v349; // w8
  __int64 v350; // x0
  __int64 v351; // x0
  __int64 v352; // x0
  __int64 v353; // x0
  __int64 v354; // x0
  __int64 v355; // x0
  __int64 v356; // x0
  struct QuestEntity_array *questList_5__23; // x9
  QuestEntity_o *v358; // x21
  struct QuestTree___c__DisplayClass40_6_o *v359; // x8
  UserQuestMaster_o *userQuestMaster_5__18; // x22
  int64_t UserId; // x0
  __int64 v362; // x1
  struct QuestTree___c__DisplayClass40_6_o *v363; // x8
  __int64 v364; // x1
  int32_t QuestPhase; // w22
  MapEntity_o *SpotId_23876464; // x0
  __int64 warId; // x1
  struct QuestTree___c__DisplayClass40_6_o *v368; // x9
  Il2CppObject *v369; // x26
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v370; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v371; // x24
  peRenderTexture_ChangeLayerObject_o *v372; // x0
  __int64 v373; // x1
  MapControl_SpotInfo_o *spotInfo_5__16; // x0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  __int64 v376; // x1
  MapControl_MapInfo_o *v377; // x0
  __int64 v378; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  __int64 v380; // x1
  MapControl_WarInfo_o *v381; // x0
  WarEntity_o *v382; // x0
  Il2CppObject *v383; // x26
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allQuestInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v385; // x24
  unsigned int v386; // w0
  __int64 v387; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v388; // x0
  MapControl_WarInfo_o *v389; // x0
  __int64 v390; // x1
  _BOOL8 HasStatus; // x0
  __int64 v392; // x1
  MapControl_WarInfo_o *v393; // x0
  WarEntity_o *v394; // x0
  __int64 v395; // x1
  int v396; // w24
  __int64 v397; // x1
  int32_t ClearNum; // w8
  struct QuestTree___c__DisplayClass40_6_o *v399; // x8
  MapControl_WarInfo_o *v400; // x0
  struct QuestTree___c__DisplayClass40_6_o *v401; // x8
  MapControl_SpotInfo_o *v402; // x0
  MapControl_QuestInfo_o *v403; // x0
  __int64 v404; // x1
  struct MapControl_WarInfo_o *v405; // x8
  MapControl_QuestInfo_o *v406; // x23
  struct MapControl_WarInfo_o *v407; // x1
  struct MapControl_SpotInfo_o *v408; // x1
  __int64 v409; // x1
  WarEntity_o *warEnt_5__17; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v412; // x1
  struct WarEntity_o *v413; // x8
  struct QuestTree___c__DisplayClass40_6_o *v414; // x9
  struct WarEntity_o *v415; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *eventStatusQuestMismatchDictionary_5__10; // x0
  _BOOL8 v417; // x0
  __int64 v418; // x1
  struct QuestTree___c__DisplayClass40_6_o *v419; // x8
  __int64 v420; // x1
  MapControl_WarInfo_o *v421; // x0
  int v422; // w25
  __int64 v423; // x1
  MapControl_SpotInfo_o *v424; // x0
  __int64 v425; // x1
  MapControl_SpotInfo_o *v426; // x0
  QuestEntity_o *v427; // x0
  __int64 v428; // x1
  _BOOL8 HasFlag; // x0
  __int64 v430; // x1
  struct MapControl_SpotInfo_o *v431; // x8
  struct MapControl_MapInfo_o *v432; // x8
  _BOOL8 IsDisplayWarBoardNextIcon; // x0
  __int64 v434; // x1
  struct MapControl_SpotInfo_o *v435; // x9
  struct MapControl_MapInfo_o *v436; // x9
  MapControl_SpotInfo_o *v437; // x0
  UserQuestEntity_o *v438; // x0
  bool v439; // w8
  struct QuestTree___c__DisplayClass40_6_o *v440; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v443; // x1
  struct QuestTree___c__DisplayClass40_6_o *v444; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v446; // x0
  __int64 v447; // x1
  _QWORD *v448; // x21
  __int64 v449; // x22
  unsigned int v450; // w24
  __int64 v451; // x8
  __int64 v452; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v453; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v454; // x21
  QuestTree___c_c *v455; // x0
  struct QuestTree___c_StaticFields *v456; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_11; // x22
  Il2CppObject *v458; // x23
  struct QuestTree___c_StaticFields *v459; // x0
  CommonUI_o *v460; // x0
  __int64 v461; // x1
  __int64 v462; // x0
  EventStatusQuestMaster_o *v463; // [xsp+8h] [xbp-D8h]
  EventStatusMaster_o *v464; // [xsp+10h] [xbp-D0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v465; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o **p_mapInfo_5__15; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v467; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+58h] [xbp-88h] BYREF
  UserQuestEntity_o *v469; // [xsp+60h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+68h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+70h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+78h] [xbp-68h] BYREF
  WarEntity_o *v473; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_418563F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_B2C35C(&Method_System_Comparison_MapControl_WarInfo___ctor__, v3);
    sub_B2C35C(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v4);
    sub_B2C35C(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_B2C35C(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v20);
    sub_B2C35C(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v21);
    sub_B2C35C(&DataManager_TypeInfo, v22);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_QuestEntity___, v25);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v28);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v29);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_QuestEntity___, v30);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v31);
    sub_B2C35C(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v32);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v33);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v34);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_QuestEntity___, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v37);
    sub_B2C35C(&Method_System_Func_QuestEntity__bool___ctor__, v38);
    sub_B2C35C(&Method_System_Func_WarEntity__bool___ctor__, v39);
    sub_B2C35C(&Method_System_Func_MapControl_SpotInfo__int___ctor__, v40);
    sub_B2C35C(&Method_System_Func_MapControl_SpotInfo__bool___ctor__, v41);
    sub_B2C35C(&System_Func_WarEntity__bool__TypeInfo, v42);
    sub_B2C35C(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v43);
    sub_B2C35C(&System_Func_MapControl_SpotInfo__int__TypeInfo, v44);
    sub_B2C35C(&System_Func_QuestEntity__bool__TypeInfo, v45);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v46);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v47);
    sub_B2C35C(&long___TypeInfo, v48);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v49);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v50);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v51);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v52);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v53);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v54);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v55);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v56);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v57);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v58);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v59);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v60);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v61);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v62);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v63);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v64);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v65);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v66);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v67);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v68);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v69);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v70);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v71);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v72);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v73);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v74);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v75);
    sub_B2C35C(&MapControl_MapInfo_TypeInfo, v76);
    sub_B2C35C(&NetworkManager_TypeInfo, v77);
    sub_B2C35C(&OptionManager_TypeInfo, v78);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v79);
    sub_B2C35C(&Method_System_Predicate_MapControl_WarInfo___ctor__, v80);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapInfo___ctor__, v81);
    sub_B2C35C(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v82);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__, v83);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v84);
    sub_B2C35C(&System_Predicate_MapControl_MapInfo__TypeInfo, v85);
    sub_B2C35C(&System_Predicate_MapControl_WarInfo__TypeInfo, v86);
    sub_B2C35C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v87);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v88);
    sub_B2C35C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v89);
    sub_B2C35C(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v90);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v91);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v92);
    sub_B2C35C(&MapControl_SpotInfo_TypeInfo, v93);
    sub_B2C35C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__, v94);
    sub_B2C35C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__, v95);
    sub_B2C35C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__, v96);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v97);
    sub_B2C35C(&QuestTree___c__DisplayClass40_0_TypeInfo, v98);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v99);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v100);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v101);
    sub_B2C35C(&QuestTree___c__DisplayClass40_1_TypeInfo, v102);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v103);
    sub_B2C35C(&QuestTree___c__DisplayClass40_2_TypeInfo, v104);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v105);
    sub_B2C35C(&QuestTree___c__DisplayClass40_3_TypeInfo, v106);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v107);
    sub_B2C35C(&QuestTree___c__DisplayClass40_4_TypeInfo, v108);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v109);
    sub_B2C35C(&QuestTree___c__DisplayClass40_5_TypeInfo, v110);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v111);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v112);
    sub_B2C35C(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v113);
    sub_B2C35C(&QuestTree___c__DisplayClass40_6_TypeInfo, v114);
    sub_B2C35C(&QuestTree___c_TypeInfo, v115);
    sub_B2C35C(&WarEntity_TypeInfo, v116);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)sub_B2C35C(&MapControl_WarInfo_TypeInfo, v117);
    byte_418563F = 1;
  }
  v473 = 0LL;
  entity = 0LL;
  spotInfo = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v469 = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v119 = (Il2CppObject *)sub_B2C42C(QuestTree___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor(v119, 0LL);
      v2->fields.__8__2 = (struct QuestTree___c__DisplayClass40_0_o *)v119;
      sub_B2C2F8(&v2->fields.__8__2, v119);
      if ( !v2->fields.__8__2 )
        sub_B2C434(v120, v121);
      v2->fields.__8__2->fields.targetWarId = v2->fields.targetWarId;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      p_dataManager_5__2 = &v2->fields._dataManager_5__2;
      sub_B2C2F8(&v2->fields._dataManager_5__2, Instance);
      if ( !v2->fields._dataManager_5__2 )
        sub_B2C434(0LL, v124);
      MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v2->fields._dataManager_5__2,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v125);
      v127 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__3 = (struct SpotMaster_o *)v127;
      sub_B2C2F8(&v2->fields._spotMaster_5__3, v127);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v128);
      v129 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v129;
      sub_B2C2F8(&v2->fields._blankEarthSpotMaster_5__4, v129);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v130);
      v131 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__5 = (struct QuestMaster_o *)v131;
      sub_B2C2F8(&v2->fields._questMaster_5__5, v131);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v132);
      v133 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v133;
      sub_B2C2F8(&v2->fields._questPhaseMaster_5__6, v133);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v134);
      v136 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v135);
      v465 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v137);
      v464 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v138);
      v463 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           *p_dataManager_5__2,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v139);
      v140 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v140;
      sub_B2C2F8(&v2->fields._spotRoadMaster_5__7, v140);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v141);
      v142 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v142;
      sub_B2C2F8(&v2->fields._mapGimmickMaster_5__8, v142);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v143);
      v144 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v144;
      sub_B2C2F8(&v2->fields._questPickupMaster_5__9, v144);
      v145 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v145,
        (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v145;
      p_eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&v2->fields._eventStatusQuestMismatchDictionary_5__10;
      sub_B2C2F8(&v2->fields._eventStatusQuestMismatchDictionary_5__10, v145);
      v147 = (Il2CppObject *)sub_B2C42C(QuestTree___c__DisplayClass40_1_TypeInfo);
      System_Object___ctor(v147, 0LL);
      v2->fields.__8__1 = (struct QuestTree___c__DisplayClass40_1_o *)v147;
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      sub_B2C2F8(&v2->fields.__8__1, v147);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !*p_dataManager_5__2 )
        sub_B2C434(0LL, v149);
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      _8__2 = (Il2CppObject *)v2->fields.__8__2;
      v153 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarMaster__WarEntity;
      v154 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v154,
        _8__2,
        Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarEntity__bool___ctor__);
      v155 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
               v153,
               (System_Func_TSource__bool__o *)v154,
               (const MethodInfo_1A99ECC *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v155 )
        sub_B2C434(0LL, v156);
      if ( !*p__8__1 )
        sub_B2C434(v155, v156);
      LODWORD((*p__8__1)[1].klass) = v155->fields.m_messageTypeId;
      if ( !_4__this )
        sub_B2C434(v155, v156);
      if ( !*p__8__1 )
        sub_B2C434(v155, v156);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_B2C434(0LL, v156);
      MapControl_RootInfo__Remove(mapControlRootInfo, (int32_t)(*p__8__1)[1].klass, 0LL);
      allWarInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allWarInfoList;
      v159 = *p__8__1;
      v160 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v160,
        v159,
        Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_WarInfo___ctor__);
      if ( !allWarInfoList )
        sub_B2C434(v161, v162);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v160,
                (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v164 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v165 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allWarInfoList;
        if ( !v165 )
          sub_B2C434(0LL, v164);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          v165,
          v164,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      if ( !*p__8__1 )
        sub_B2C434(Index, v164);
      v166 = _4__this->fields.mapControlRootInfo;
      if ( !v166 )
        sub_B2C434(0LL, v164);
      v167 = MapControl_RootInfo__AddChild(v166, (int32_t)(*p__8__1)[1].klass, 0LL);
      v2->fields._warInfo_5__13 = v167;
      p_warInfo_5__13 = &v2->fields._warInfo_5__13;
      sub_B2C2F8(&v2->fields._warInfo_5__13, v167);
      warInfo_5__13 = v2->fields._warInfo_5__13;
      if ( !warInfo_5__13 )
        sub_B2C434(0LL, v169);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__13, 0LL) )
      {
        if ( !*p_warInfo_5__13 )
          sub_B2C434(0LL, v171);
        EventId = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
        if ( !v136 )
          sub_B2C434(EventId, v173);
        v174 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v136,
                 &entity,
                 EventId,
                 (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v174 )
        {
          if ( !entity )
            sub_B2C434(v174, v171);
          if ( Time >= *(_QWORD *)&entity->fields.startType && Time < (__int64)entity->fields.coordinate )
          {
            if ( !*p_warInfo_5__13 )
              sub_B2C434(0LL, v171);
            MapControl_WarInfo__SetStatusCheckFlag(*p_warInfo_5__13, 1, 0, 0LL);
          }
          if ( !*p_warInfo_5__13 )
            sub_B2C434(0LL, v171);
          v176 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
          if ( !v465 )
            sub_B2C434(0LL, v175);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v465,
                 &v473,
                 v176,
                 (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v473 )
              sub_B2C434(0LL, v177);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v473, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_B2C434(0LL, v178);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, Time, 0LL) )
              {
                if ( !*p_warInfo_5__13 )
                  sub_B2C434(0LL, v179);
                v180 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                if ( !v464 )
                  sub_B2C434(0LL, v180);
                NowEntity = EventStatusMaster__getNowEntity(v464, v180, 0LL);
                if ( NowEntity )
                {
                  if ( !*p_warInfo_5__13 )
                    sub_B2C434(0LL, v181);
                  v183 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                  if ( !v463 )
                    sub_B2C434(0LL, v183);
                  MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                     v463,
                                                                                     v183,
                                                                                     NowEntity->fields.statusId,
                                                                                     0LL);
                  if ( !*p__8__1 )
                    sub_B2C434(MismatchQuestList, v185);
                  if ( !*p_eventStatusQuestMismatchDictionary_5__10 )
                    sub_B2C434(0LL, v185);
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    *p_eventStatusQuestMismatchDictionary_5__10,
                    (int32_t)(*p__8__1)[1].klass,
                    MismatchQuestList,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v186 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 3LL);
          if ( !entity )
            sub_B2C434(v186, v187);
          if ( !v186 )
            sub_B2C434(0LL, v187);
          max_length = v186->max_length;
          if ( !max_length )
          {
            v354 = sub_B2C460(v186);
            sub_B2C400(v354, 0LL);
          }
          v186->m_Items[0] = *(_QWORD *)&entity->fields.startType;
          if ( !entity )
            sub_B2C434(v186, v187);
          if ( max_length <= 1 )
          {
            v355 = sub_B2C460(v186);
            sub_B2C400(v355, 0LL);
          }
          v186->m_Items[1] = entity->fields.targetId;
          if ( !entity )
            sub_B2C434(v186, v187);
          if ( max_length <= 2 )
          {
            v356 = sub_B2C460(v186);
            sub_B2C400(v356, 0LL);
          }
          v186->m_Items[2] = (int64_t)entity->fields.coordinate;
          QuestTree__UpdateForceUpdateTime(_4__this, Time, v186, 0LL);
        }
      }
      v189 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
      if ( !v189 )
        sub_B2C434(0LL, v171);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v189,
        (EventMissionProgressRequest_Argument_ProgressData_o *)*p_warInfo_5__13,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
      if ( !*p_warInfo_5__13 )
        sub_B2C434(v190, v191);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(v190, v191);
      List = MapMaster__getList(MasterData_WarQuestSelectionMaster, (*p_warInfo_5__13)->fields.warId, 0LL);
      v2->fields._mapList_5__14 = List;
      sub_B2C2F8(&v2->fields._mapList_5__14, List);
      mapList_5__14 = v2->fields._mapList_5__14;
      v2->fields._mapIdx_5__11 = 0;
      if ( !mapList_5__14 )
        sub_B2C434(v193, v194);
      mapCount_5__12 = mapList_5__14->max_length;
      v197 = 0;
      v2->fields._mapCount_5__12 = mapCount_5__12;
      goto LABEL_72;
    case 1:
      _8__1 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !_8__1 )
        sub_B2C434(this, method);
      spotRoadMaster_5__7 = v2->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_B2C434(0LL, method);
      v267 = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0LL);
      v269 = v267;
      if ( !v267 )
        sub_B2C434(0LL, v268);
      v270 = v267->max_length;
      if ( v270 >= 1 )
      {
        v271 = 0LL;
        do
        {
          v272 = sub_B2C42C(QuestTree___c__DisplayClass40_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v272, 0LL);
          if ( (unsigned int)v271 >= v269->max_length )
          {
            v350 = sub_B2C460(v273);
            sub_B2C400(v350, 0LL);
          }
          v275 = v269->m_Items[v271];
          if ( !v275 )
            sub_B2C434(v273, v274);
          if ( !v272 )
            sub_B2C434(v273, v274);
          *(_DWORD *)(v272 + 16) = v275->fields.id;
          if ( !_4__this )
            sub_B2C434(v273, v274);
          allSpotRoadInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotRoadInfoList;
          v277 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v277,
            (Il2CppObject *)v272,
            Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
          if ( !allSpotRoadInfoList )
            sub_B2C434(v278, v279);
          v280 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v277,
                   (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v281 = v280;
          if ( v280 != -1 )
          {
            v282 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v282 )
              sub_B2C434(0LL, v281);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v282,
              v281,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__15 = v2->fields._mapInfo_5__15;
          if ( !mapInfo_5__15 )
            sub_B2C434(0LL, v281);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__15, *(_DWORD *)(v272 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v275, &spotRoadInfo, 0LL);
          v285 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v285 )
            sub_B2C434(0LL, v284);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v285,
            (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
          ++v271;
        }
        while ( (int)v271 < v270 );
      }
      v286 = v2->fields.__8__1;
      if ( !v286 )
        sub_B2C434(v267, v268);
      mapGimmickMaster_5__8 = v2->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_B2C434(0LL, v268);
      v288 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v286->fields.mapId, 0LL);
      v290 = v288;
      if ( !v288 )
        sub_B2C434(0LL, v289);
      v291 = v288->max_length;
      if ( v291 >= 1 )
      {
        v292 = 0LL;
        do
        {
          v293 = sub_B2C42C(QuestTree___c__DisplayClass40_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v293, 0LL);
          if ( (unsigned int)v292 >= v290->max_length )
          {
            v352 = sub_B2C460(v294);
            sub_B2C400(v352, 0LL);
          }
          v296 = v290->m_Items[v292];
          if ( !v296 )
            sub_B2C434(v294, v295);
          if ( !v293 )
            sub_B2C434(v294, v295);
          *(_DWORD *)(v293 + 16) = v296->fields.id;
          if ( !_4__this )
            sub_B2C434(v294, v295);
          allMapGimmickInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapGimmickInfoList;
          v298 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v298,
            (Il2CppObject *)v293,
            Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
          if ( !allMapGimmickInfoList )
            sub_B2C434(v299, v300);
          v301 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v298,
                   (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v302 = v301;
          if ( v301 != -1 )
          {
            v303 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v303 )
              sub_B2C434(0LL, v302);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v303,
              v302,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v304 = v2->fields._mapInfo_5__15;
          if ( !v304 )
            sub_B2C434(0LL, v302);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v304, *(_DWORD *)(v293 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v306 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v306 )
            sub_B2C434(0LL, v305);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v306,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
          ++v292;
        }
        while ( (int)v292 < v291 );
      }
      v2->fields.__2__current = 0LL;
      sub_B2C2F8(&v2->fields.__2__current, 0LL);
      v307 = 2;
      goto LABEL_311;
    case 2:
      v2->fields._mapInfo_5__15 = 0LL;
      v2->fields.__1__state = -1;
      sub_B2C2F8(&v2->fields._mapInfo_5__15, 0LL);
      mapCount_5__12 = v2->fields._mapCount_5__12;
      v197 = v2->fields._mapIdx_5__11 + 1;
      v2->fields._mapIdx_5__11 = v197;
LABEL_72:
      if ( v197 < mapCount_5__12 )
      {
        v201 = v2->fields._mapList_5__14;
        if ( !v201 )
          sub_B2C434(v193, v194);
        if ( v197 >= v201->max_length )
        {
          v353 = sub_B2C460(v193);
          sub_B2C400(v353, 0LL);
        }
        v202 = v201->m_Items[v197];
        if ( !v202 )
          sub_B2C434(v193, v194);
        v203 = v2->fields.__8__1;
        if ( !v203 )
          sub_B2C434(v193, v194);
        v203->fields.mapId = v202->fields.id;
        v204 = v2->fields._warInfo_5__13;
        if ( !v204 )
          sub_B2C434(v193, v194);
        mapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v204->fields.mapInfoList;
        if ( mapInfoList )
        {
          v206 = (Il2CppObject *)v2->fields.__8__1;
          if ( !v206 )
            sub_B2C434(v193, v194);
          monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v206[1].monitor;
          if ( !monitor )
          {
            monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              monitor,
              v206,
              Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
            v206[1].monitor = monitor;
            sub_B2C2F8(&v206[1].monitor, monitor);
          }
          v193 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)monitor,
                   (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v194 = (unsigned int)v193;
          if ( (_DWORD)v193 != -1 )
          {
            v208 = v2->fields._warInfo_5__13;
            if ( !v208 )
              sub_B2C434(v193, (unsigned int)v193);
            v209 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v208->fields.mapInfoList;
            if ( !v209 )
              sub_B2C434(0LL, v194);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v209,
              v194,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_B2C434(v193, v194);
        v210 = (Il2CppObject *)v2->fields.__8__1;
        if ( !v210 )
          sub_B2C434(v193, v194);
        allMapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapInfoList;
        klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v210[2].klass;
        if ( !klass )
        {
          klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            klass,
            v210,
            Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
          v210[2].klass = (Il2CppClass *)klass;
          sub_B2C2F8(&v210[2], klass);
        }
        if ( !allMapInfoList )
          sub_B2C434(v193, v194);
        v213 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v214 = (unsigned int)v213;
        if ( (_DWORD)v213 != -1 )
        {
          v215 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapInfoList;
          if ( !v215 )
            sub_B2C434(0LL, v214);
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            v215,
            v214,
            (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v216 = v2->fields.__8__1;
        if ( !v216 )
          sub_B2C434(v213, v214);
        v217 = v2->fields._warInfo_5__13;
        if ( !v217 )
          sub_B2C434(0LL, v214);
        v218 = MapControl_WarInfo__AddChild(v217, v216->fields.mapId, 0LL);
        v2->fields._mapInfo_5__15 = v218;
        p_mapInfo_5__15 = (EventMissionProgressRequest_Argument_ProgressData_o **)&v2->fields._mapInfo_5__15;
        sub_B2C2F8(&v2->fields._mapInfo_5__15, v218);
        v220 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList;
        if ( !v220 )
          sub_B2C434(0LL, v219);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v220,
          *p_mapInfo_5__15,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        v223 = v2->fields.__8__1;
        if ( !v223 )
          sub_B2C434(v221, v222);
        spotMaster_5__3 = v2->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_B2C434(0LL, v222);
        v225 = SpotMaster__getList(spotMaster_5__3, v223->fields.mapId, 0LL);
        v227 = v225;
        if ( !v225 )
          sub_B2C434(0LL, v226);
        v228 = v225->max_length;
        if ( v228 >= 1 )
        {
          v229 = 0LL;
          do
          {
            v230 = sub_B2C42C(QuestTree___c__DisplayClass40_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v230, 0LL);
            if ( (unsigned int)v229 >= v227->max_length )
            {
              v351 = sub_B2C460(v231);
              sub_B2C400(v351, 0LL);
            }
            v233 = v227->m_Items[v229];
            if ( !v233 )
              sub_B2C434(v231, v232);
            if ( !v230 )
              sub_B2C434(v231, v232);
            *(_DWORD *)(v230 + 16) = v233->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotInfoList;
            v235 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v235,
              (Il2CppObject *)v230,
              Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            if ( !allSpotInfoList )
              sub_B2C434(v236, v237);
            v238 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v235,
                     (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v239 = v238;
            if ( v238 != -1 )
            {
              v240 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotInfoList;
              if ( !v240 )
                sub_B2C434(0LL, v239);
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v240,
                v239,
                (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            if ( !*p_mapInfo_5__15 )
              sub_B2C434(0LL, v239);
            spotInfo = MapControl_MapInfo__AddChild(
                         (MapControl_MapInfo_o *)*p_mapInfo_5__15,
                         *(_DWORD *)(v230 + 16),
                         0LL);
            QuestTree__SetupSpotInfo(_4__this, v233, &spotInfo, 0LL);
            v242 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
            if ( !v242 )
              sub_B2C434(0LL, v241);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v242,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
            ++v229;
          }
          while ( (int)v229 < v228 );
        }
        v243 = (System_Collections_Generic_IEnumerable_TSource__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                      _4__this,
                                                                      v2->fields._mapInfo_5__15,
                                                                      v2->fields._blankEarthSpotMaster_5__4,
                                                                      0LL);
        v244 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v243,
                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v246 = (System_Collections_Generic_IEnumerable_TSource__o *)v244;
        if ( !v244 )
          sub_B2C434(0LL, v245);
        if ( *(_QWORD *)&v244->max_length )
        {
          v247 = (Il2CppObject *)sub_B2C42C(QuestTree___c__DisplayClass40_3_TypeInfo);
          System_Object___ctor(v247, 0LL);
          v248 = QuestTree___c_TypeInfo;
          if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v248 = QuestTree___c_TypeInfo;
          }
          static_fields = v248->static_fields;
          _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__40_6;
          if ( !_9__40_6 )
          {
            if ( (BYTE3(v248->vtable._0_Equals.methodPtr) & 4) != 0 && !v248->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v248);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v251 = (Il2CppObject *)static_fields->__9;
            _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_6,
              v251,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__,
              (const MethodInfo_27127B0 *)Method_System_Func_MapControl_SpotInfo__int___ctor__);
            v252 = QuestTree___c_TypeInfo->static_fields;
            v252->__9__40_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__40_6;
            sub_B2C2F8(&v252->__9__40_6, _9__40_6);
          }
          v253 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v246,
                                                                  (System_Func_TSource__TResult__o *)_9__40_6,
                                                                  (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v254 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_47731024(
            v254,
            v253,
            (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
          if ( !v247 )
            sub_B2C434(v255, v256);
          v247[1].klass = (Il2CppClass *)v254;
          sub_B2C2F8(&v247[1], v254);
          v257 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v258 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v258,
            v247,
            Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            (const MethodInfo_2711C04 *)Method_System_Func_MapControl_SpotInfo__bool___ctor__);
          BasicHelper__RemoveElements_MapControl_SpotInfo_(
            v257,
            (System_Func_T__bool__o *)v258,
            (const MethodInfo_172909C *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v260 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
          if ( !v260 )
            sub_B2C434(0LL, v259);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v260,
            (System_Collections_Generic_IEnumerable_T__o *)v246,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v2->fields.__2__current = 0LL;
        sub_B2C2F8(&v2->fields.__2__current, 0LL);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_B2C434(v193, v194);
      v309 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
      v310 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v310 = QuestTree___c_TypeInfo;
      }
      v311 = v310->static_fields;
      _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v311->__9__40_2;
      if ( !_9__40_2 )
      {
        if ( (BYTE3(v310->vtable._0_Equals.methodPtr) & 4) != 0 && !v310->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v310);
          v311 = QuestTree___c_TypeInfo->static_fields;
        }
        v313 = (Il2CppObject *)v311->__9;
        _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__40_2,
          v313,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
        v314 = QuestTree___c_TypeInfo->static_fields;
        v314->__9__40_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__40_2;
        sub_B2C2F8(&v314->__9__40_2, _9__40_2);
      }
      if ( !v309 )
        sub_B2C434(v310, v194);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v309,
        (System_Comparison_T__o *)_9__40_2,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v2->fields.__8__1 = 0LL;
      sub_B2C2F8(&v2->fields.__8__1, 0LL);
      v2->fields._warInfo_5__13 = 0LL;
      sub_B2C2F8(&v2->fields._warInfo_5__13, 0LL);
      v2->fields._mapList_5__14 = 0LL;
      sub_B2C2F8(&v2->fields._mapList_5__14, 0LL);
      v315 = (Il2CppObject *)sub_B2C42C(QuestTree___c__DisplayClass40_6_TypeInfo);
      System_Object___ctor(v315, 0LL);
      v2->fields.__8__3 = (struct QuestTree___c__DisplayClass40_6_o *)v315;
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      sub_B2C2F8(&v2->fields.__8__3, v315);
      v316 = (MapControl_WarInfo_o *)sub_B2C42C(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v316, 0LL);
      v2->fields._warInfo_5__13 = v316;
      sub_B2C2F8(&v2->fields._warInfo_5__13, v316);
      v317 = (MapControl_MapInfo_o *)sub_B2C42C(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v317, 0LL);
      v2->fields._mapInfo_5__15 = v317;
      sub_B2C2F8(&v2->fields._mapInfo_5__15, v317);
      v318 = (MapControl_SpotInfo_o *)sub_B2C42C(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v318, 0LL);
      v2->fields._spotInfo_5__16 = v318;
      sub_B2C2F8(&v2->fields._spotInfo_5__16, v318);
      v319 = (WarEntity_o *)sub_B2C42C(WarEntity_TypeInfo);
      WarEntity___ctor(v319, 0LL);
      v2->fields._warEnt_5__17 = v319;
      sub_B2C2F8(&v2->fields._warEnt_5__17, v319);
      dataManager_5__2 = v2->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_B2C434(0LL, v320);
      v322 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               dataManager_5__2,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v2->fields._userQuestMaster_5__18 = (struct UserQuestMaster_o *)v322;
      sub_B2C2F8(&v2->fields._userQuestMaster_5__18, v322);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      if ( !*p__8__3 )
        sub_B2C434(Master_WarQuestSelectionMaster, v324);
      LODWORD((*p__8__3)[1].monitor) = -1;
      *(_QWORD *)&v2->fields._nowMapId_5__19 = -1LL;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
        v325 = 500;
      else
        v325 = 5000;
      v2->fields._breakInterval_5__21 = v325;
      _8__3 = v2->fields.__8__3;
      v327 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v327,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !_8__3 )
        sub_B2C434(v328, v329);
      _8__3->fields.spotInfoList = v327;
      sub_B2C2F8(&_8__3->fields, v327);
      v2->fields._cnt_5__22 = 0;
      p_cnt_5__22 = &v2->fields._cnt_5__22;
      v331 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.allSpotInfoList;
      if ( !v331 )
        sub_B2C434(0LL, v330);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v467,
        v331,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      p__7__wrap23 = &v2->fields.__7__wrap23;
      v332 = *(_OWORD *)&v467.fields.list;
      v2->fields.__7__wrap23.fields.current = (struct MapControl_SpotInfo_o *)v467.fields.current;
      *(_OWORD *)&v2->fields.__7__wrap23.fields.list = v332;
      sub_B2C2F8(&v2->fields.__7__wrap23, 0LL);
LABEL_186:
      v2->fields.__1__state = -3;
      while ( 1 )
      {
        v333 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap23,
                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        if ( !v333 )
          break;
        current = v2->fields.__7__wrap23.fields.current;
        ++v2->fields._cnt_5__22;
        if ( !current )
          sub_B2C434(v333, v334);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_B2C434(0LL, v337);
        v338 = v2->fields.__8__2;
        if ( !v338 )
          sub_B2C434(Mine, v337);
        if ( Mine->fields.warId == v338->fields.targetWarId )
        {
          if ( !*p__8__3 )
            sub_B2C434(Mine, v337);
          v339 = (System_Collections_Generic_List_int__o *)(*p__8__3)[1].klass;
          if ( !v339 )
            sub_B2C434(0LL, v337);
          System_Collections_Generic_List_int___Add(
            v339,
            current->fields.spotId,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( !(*p_cnt_5__22 % 300) )
        {
          v2->fields.__2__current = 0LL;
          sub_B2C2F8(&v2->fields.__2__current, 0LL);
          v307 = 3;
LABEL_311:
          v2->fields.__1__state = v307;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(v2, v334);
      *(_QWORD *)&p__7__wrap23->fields.index = 0LL;
      p__7__wrap23->fields.current = 0LL;
      p__7__wrap23->fields.list = 0LL;
      questMaster_5__5 = (DataMasterBase_o *)v2->fields._questMaster_5__5;
      if ( !questMaster_5__5 )
        sub_B2C434(0LL, v340);
      Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                          questMaster_5__5,
                                          (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v343 = *p__8__3;
      v344 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarQuestSelectionEntity;
      v345 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v345,
        v343,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        (const MethodInfo_2711C04 *)Method_System_Func_QuestEntity__bool___ctor__);
      v346 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v344,
               (System_Func_TSource__bool__o *)v345,
               (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v347 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v346,
               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v2->fields._questList_5__23 = (struct QuestEntity_array *)v347;
      sub_B2C2F8(&v2->fields._questList_5__23, v347);
      v2->fields._mapCount_5__12 = 0;
      p_mapCount_5__12 = &v2->fields._mapCount_5__12;
      v348 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._questList_5__23,
               (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v2->fields._mapIdx_5__11 = v348;
      p_mapIdx_5__11 = &v2->fields._mapIdx_5__11;
      v349 = v2->fields._mapCount_5__12;
      break;
    case 3:
      p__7__wrap23 = &v2->fields.__7__wrap23;
      p_cnt_5__22 = &v2->fields._cnt_5__22;
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      goto LABEL_186;
    case 4:
      p_mapCount_5__12 = &v2->fields._mapCount_5__12;
      v198 = v2->fields._mapCount_5__12;
      p_mapIdx_5__11 = &v2->fields._mapIdx_5__11;
      v2->fields.__1__state = -1;
      goto LABEL_433;
    case 5:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        sub_B2C434(0LL, method);
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v349 < (int)v348 )
  {
    questList_5__23 = v2->fields._questList_5__23;
    if ( !questList_5__23 )
      sub_B2C434(v348, method);
    if ( v349 >= questList_5__23->max_length )
    {
      v462 = sub_B2C460(v348);
      sub_B2C400(v462, 0LL);
    }
    v358 = questList_5__23->m_Items[v349];
    if ( !v358 )
      sub_B2C434(v348, method);
    v359 = v2->fields.__8__3;
    if ( !v359 )
      sub_B2C434(v348, method);
    v359->fields.questId = v358->fields.id;
    userQuestMaster_5__18 = v2->fields._userQuestMaster_5__18;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v363 = v2->fields.__8__3;
    if ( !v363 )
      sub_B2C434(UserId, v362);
    if ( !userQuestMaster_5__18 )
      sub_B2C434(UserId, v362);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__18, &v469, UserId, v363->fields.questId, 0LL) )
    {
      if ( !v469 )
        sub_B2C434(0LL, v364);
      QuestPhase = UserQuestEntity__getQuestPhase(v469, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_23876464 = (MapEntity_o *)QuestEntity__getSpotId_23876464(v358, QuestPhase + 1, 0LL);
    v368 = v2->fields.__8__3;
    if ( !v368 )
      sub_B2C434(SpotId_23876464, warId);
    if ( v368->fields.nowSpotId == (_DWORD)SpotId_23876464 )
    {
      if ( !_4__this )
        sub_B2C434(SpotId_23876464, warId);
    }
    else
    {
      v368->fields.nowSpotId = (int)SpotId_23876464;
      if ( !_4__this )
        sub_B2C434(SpotId_23876464, warId);
      v369 = (Il2CppObject *)v2->fields.__8__3;
      if ( !v369 )
        sub_B2C434(SpotId_23876464, warId);
      v370 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      v371 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v369[2].klass;
      if ( !v371 )
      {
        v371 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v371,
          v369,
          Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v369[2].klass = (Il2CppClass *)v371;
        sub_B2C2F8(&v369[2], v371);
      }
      if ( !v370 )
        sub_B2C434(SpotId_23876464, warId);
      v372 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               v370,
               (System_Predicate_T__o *)v371,
               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2->fields._spotInfo_5__16 = (struct MapControl_SpotInfo_o *)v372;
      sub_B2C2F8(&v2->fields._spotInfo_5__16, v372);
      spotInfo_5__16 = v2->fields._spotInfo_5__16;
      if ( !spotInfo_5__16 )
        sub_B2C434(0LL, v373);
      SpotId_23876464 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__16, 0LL);
      warId = (unsigned int)SpotId_23876464;
      if ( v2->fields._nowMapId_5__19 != (_DWORD)SpotId_23876464 )
      {
        v2->fields._nowMapId_5__19 = (int)SpotId_23876464;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_23876464, 0LL);
        v2->fields._mapInfo_5__15 = MapInfoByMapID;
        sub_B2C2F8(&v2->fields._mapInfo_5__15, MapInfoByMapID);
        v377 = v2->fields._mapInfo_5__15;
        if ( !v377 )
          sub_B2C434(0LL, v376);
        SpotId_23876464 = MapControl_MapInfo__GetMine(v377, 0LL);
        if ( !SpotId_23876464 )
          sub_B2C434(0LL, v378);
        warId = (unsigned int)SpotId_23876464->fields.warId;
        if ( v2->fields._nowWarId_5__20 != (_DWORD)warId )
        {
          v2->fields._nowWarId_5__20 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v2->fields._warInfo_5__13 = WarInfoByWarID;
          sub_B2C2F8(&v2->fields._warInfo_5__13, WarInfoByWarID);
          v381 = v2->fields._warInfo_5__13;
          if ( !v381 )
            sub_B2C434(0LL, v380);
          v382 = MapControl_WarInfo__GetMine(v381, 0LL);
          v2->fields._warEnt_5__17 = v382;
          sub_B2C2F8(&v2->fields._warEnt_5__17, v382);
        }
      }
    }
    v383 = (Il2CppObject *)v2->fields.__8__3;
    if ( !v383 )
      sub_B2C434(SpotId_23876464, warId);
    allQuestInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allQuestInfoList;
    v385 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v383[2].monitor;
    if ( !v385 )
    {
      v385 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v385,
        v383,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_QuestInfo___ctor__);
      v383[2].monitor = v385;
      sub_B2C2F8(&v383[2].monitor, v385);
    }
    if ( !allQuestInfoList )
      sub_B2C434(SpotId_23876464, warId);
    v386 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)v385,
             (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v387 = v386;
    if ( v386 != -1 )
    {
      v388 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allQuestInfoList;
      if ( !v388 )
        sub_B2C434(0LL, v387);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v388,
        v387,
        (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v389 = v2->fields._warInfo_5__13;
    if ( !v469 )
    {
      if ( !v389 )
        sub_B2C434(0LL, v387);
      goto LABEL_358;
    }
    if ( !v389 )
      sub_B2C434(0LL, v387);
    MapControl_WarInfo__SetStatusCheckFlag(v389, 1, 0, 0LL);
    if ( !v469 )
      sub_B2C434(0LL, v390);
    HasStatus = UserQuestEntity__HasStatus(v469, 8, 0LL);
    if ( !HasStatus )
    {
      v393 = v2->fields._warInfo_5__13;
      if ( !v393 )
        sub_B2C434(0LL, v392);
      goto LABEL_360;
    }
    if ( !v469 )
      sub_B2C434(HasStatus, v392);
    if ( v469->fields.challengeNum >= 1 )
    {
      v393 = v2->fields._warInfo_5__13;
      if ( !v393 )
        sub_B2C434(0LL, v392);
LABEL_360:
      MapControl_WarInfo__SetStatusCheckFlag(v393, 4, 0, 0LL);
    }
    if ( !v469 )
      sub_B2C434(0LL, v392);
    ClearNum = UserQuestEntity__getClearNum(v469, 0LL);
    v389 = v2->fields._warInfo_5__13;
    if ( ClearNum < 1 )
    {
      if ( !v389 )
        sub_B2C434(0LL, v397);
LABEL_358:
      MapControl_WarInfo__SetStatusCheckFlag(v389, 2, 0, 0LL);
      v396 = 0;
      goto LABEL_372;
    }
    if ( !v389 )
      sub_B2C434(0LL, v397);
    v394 = MapControl_WarInfo__GetMine(v389, 0LL);
    if ( !v394 )
      sub_B2C434(0LL, v395);
    v399 = v2->fields.__8__3;
    if ( !v399 )
      sub_B2C434(v394, v395);
    if ( v394->fields.lastQuestId == v399->fields.questId )
    {
      v400 = v2->fields._warInfo_5__13;
      if ( !v400 )
        sub_B2C434(0LL, v395);
      v396 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v400, 8, 1, 0LL);
    }
    else
    {
      v396 = 1;
    }
LABEL_372:
    v401 = v2->fields.__8__3;
    if ( !v401 )
      sub_B2C434(v394, v395);
    v402 = v2->fields._spotInfo_5__16;
    if ( !v402 )
      sub_B2C434(0LL, v395);
    v403 = MapControl_SpotInfo__AddChild(v402, v401->fields.questId, 0LL);
    v405 = v2->fields._warInfo_5__13;
    if ( !v405 )
      sub_B2C434(v403, v404);
    v406 = v403;
    if ( !v403 )
      sub_B2C434(0LL, v404);
    v403->fields.warId = v405->fields.warId;
    v407 = v2->fields._warInfo_5__13;
    v403->fields._WarInfo_k__BackingField = v407;
    sub_B2C2F8(&v403->fields._WarInfo_k__BackingField, v407);
    v408 = v2->fields._spotInfo_5__16;
    v406->fields._SpotInfo_k__BackingField = v408;
    sub_B2C2F8(&v406->fields._SpotInfo_k__BackingField, v408);
    v406->fields.endTime = QuestTree__GetEndTime(_4__this, v406, 0LL);
    warEnt_5__17 = v2->fields._warEnt_5__17;
    if ( !warEnt_5__17 )
      sub_B2C434(0LL, v409);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__17, 0LL);
    if ( IsStartTypeQuest )
    {
      v413 = v2->fields._warEnt_5__17;
      if ( !v413 )
        sub_B2C434(IsStartTypeQuest, v412);
      v414 = v2->fields.__8__3;
      if ( !v414 )
        sub_B2C434(IsStartTypeQuest, v412);
      if ( v413->fields.targetId == v414->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v2->fields._warEnt_5__17, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_391;
      }
    }
    v415 = v2->fields._warEnt_5__17;
    if ( !v415 )
      sub_B2C434(IsStartTypeQuest, v412);
    eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v2->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !eventStatusQuestMismatchDictionary_5__10 )
      sub_B2C434(0LL, v412);
    v417 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             eventStatusQuestMismatchDictionary_5__10,
             v415->fields.id,
             &value,
             (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v417 )
    {
      v419 = v2->fields.__8__3;
      if ( !v419 )
        sub_B2C434(v417, v418);
      if ( !value )
        sub_B2C434(0LL, v418);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v419->fields.questId,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_391:
        MapControl_QuestInfo__SetDispType(v406, 0, 0, 0, 0LL, 0, 0LL);
        v406->fields.touchType = 0;
LABEL_392:
        v422 = 1;
        goto LABEL_393;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v358, v406, v2->fields._nowWarId_5__20, 0LL) != 1 )
      goto LABEL_392;
    v421 = v2->fields._warInfo_5__13;
    if ( !v421 )
      sub_B2C434(0LL, v420);
    MapControl_WarInfo__SetStatusCheckFlag(v421, 1, 0, 0LL);
    v422 = 0;
LABEL_393:
    if ( MapControl_QuestInfo__IsDisaplayable(v406, 0LL) )
    {
      if ( ((v396 | v422) & 1) == 0 )
      {
        v424 = v2->fields._spotInfo_5__16;
        if ( !v424 )
          sub_B2C434(0LL, v423);
        MapControl_SpotInfo__AddQuestCount(v424, 1, 0LL);
        v426 = v2->fields._spotInfo_5__16;
        if ( !v426 )
          sub_B2C434(0LL, v425);
        MapControl_SpotInfo__AddAvailableQuestId(v426, v406->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v406, 0LL) == 1 )
      {
        v427 = MapControl_QuestInfo__GetMine(v406, 0LL);
        if ( !v427 )
          sub_B2C434(0LL, v428);
        HasFlag = QuestEntity__HasFlag(v427, 0x400000000000LL, 0LL);
        if ( !HasFlag )
        {
          v431 = v2->fields._spotInfo_5__16;
          if ( !v431 )
            sub_B2C434(HasFlag, v430);
          v431->fields._IsNext_k__BackingField = 1;
        }
        v432 = v2->fields._mapInfo_5__15;
        if ( !v432 )
          sub_B2C434(HasFlag, v430);
        v432->fields._IsNext_k__BackingField = 1;
      }
      if ( MapControl_QuestInfo__GetQuestType(v406, 0LL) == 7 )
      {
        IsDisplayWarBoardNextIcon = MapControl_QuestInfo__IsDisplayWarBoardNextIcon(v406, 0LL);
        if ( IsDisplayWarBoardNextIcon )
        {
          v435 = v2->fields._spotInfo_5__16;
          if ( !v435 )
            sub_B2C434(IsDisplayWarBoardNextIcon, v434);
          v435->fields._IsNext_k__BackingField = 1;
          v436 = v2->fields._mapInfo_5__15;
          if ( !v436 )
            sub_B2C434(IsDisplayWarBoardNextIcon, v434);
          v436->fields._IsNext_k__BackingField = 1;
        }
      }
      if ( QuestEntity__HasFlag(v358, 0x8000000000LL, 0LL) )
      {
        v437 = v2->fields._spotInfo_5__16;
        if ( !v437 )
          sub_B2C434(0LL, v423);
        MapControl_SpotInfo__AddFreeQuestCount(v437, 1, 0LL);
      }
    }
    v438 = v469;
    if ( v469 )
    {
      v438 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v469, 8, 0LL);
      if ( ((unsigned __int8)v438 & 1) != 0 )
      {
        if ( !v469 )
          sub_B2C434(v438, v423);
        v439 = v469->fields.challengeNum == 0;
      }
      else
      {
        v439 = 0;
      }
    }
    else
    {
      v439 = 1;
    }
    v406->fields.isNew = v439;
    v406->fields.questPhase = QuestPhase;
    v440 = v2->fields.__8__3;
    if ( !v440 )
      sub_B2C434(v438, v423);
    questPickupMaster_5__9 = v2->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_B2C434(0LL, v423);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v440->fields.questId, 0LL);
    v406->fields.pickupPriority = Priority;
    v444 = v2->fields.__8__3;
    if ( !v444 )
      sub_B2C434(Priority, v443);
    questPhaseMaster_5__6 = v2->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_B2C434(0LL, v443);
    v446 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v444->fields.questId, 0LL);
    v448 = v446;
    if ( !v446 )
      sub_B2C434(0LL, v447);
    v449 = v446[3];
    if ( (int)v449 >= 1 )
    {
      v450 = 0;
      while ( 1 )
      {
        v451 = v448[(int)v450 + 4];
        if ( !v451 )
          sub_B2C434(v446, v447);
        v446 = MapControl_QuestInfo__AddChild(v406, *(_DWORD *)(v451 + 16), *(_DWORD *)(v451 + 20), 0LL);
        if ( (int)++v450 >= (int)v449 )
          break;
        if ( v450 >= *((_DWORD *)v448 + 6) )
        {
          v452 = sub_B2C460(v446);
          sub_B2C400(v452, 0LL);
        }
      }
    }
    v453 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !v453 )
      sub_B2C434(0LL, v447);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v453,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v406,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    v198 = v2->fields._mapCount_5__12;
    if ( v198 && !(v198 % v2->fields._breakInterval_5__21) )
    {
      v2->fields.__2__current = 0LL;
      sub_B2C2F8(&v2->fields.__2__current, 0LL);
      v307 = 4;
      goto LABEL_311;
    }
LABEL_433:
    v349 = v198 + 1;
    *p_mapCount_5__12 = v349;
    v348 = (unsigned int)*p_mapIdx_5__11;
  }
  if ( !_4__this )
    sub_B2C434(v348, method);
  v454 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v455 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v455 = QuestTree___c_TypeInfo;
  }
  v456 = v455->static_fields;
  _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v456->__9__40_11;
  if ( !_9__40_11 )
  {
    if ( (BYTE3(v455->vtable._0_Equals.methodPtr) & 4) != 0 && !v455->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v455);
      v456 = QuestTree___c_TypeInfo->static_fields;
    }
    v458 = (Il2CppObject *)v456->__9;
    _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__40_11,
      v458,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v459 = QuestTree___c_TypeInfo->static_fields;
    v459->__9__40_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__40_11;
    sub_B2C2F8(&v459->__9__40_11, _9__40_11);
  }
  if ( !v454 )
    sub_B2C434(v455, method);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v454,
    (System_Comparison_T__o *)_9__40_11,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__3 = 0LL;
  sub_B2C2F8(&v2->fields.__8__3, 0LL);
  v2->fields._warInfo_5__13 = 0LL;
  sub_B2C2F8(&v2->fields._warInfo_5__13, 0LL);
  v2->fields._mapInfo_5__15 = 0LL;
  sub_B2C2F8(&v2->fields._mapInfo_5__15, 0LL);
  v2->fields._spotInfo_5__16 = 0LL;
  sub_B2C2F8(&v2->fields._spotInfo_5__16, 0LL);
  v2->fields._warEnt_5__17 = 0LL;
  sub_B2C2F8(&v2->fields._warEnt_5__17, 0LL);
  v2->fields._userQuestMaster_5__18 = 0LL;
  sub_B2C2F8(&v2->fields._userQuestMaster_5__18, 0LL);
  v2->fields._questList_5__23 = 0LL;
  sub_B2C2F8(&v2->fields._questList_5__23, 0LL);
  v460 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v460 )
    sub_B2C434(0LL, v461);
  CommonUI__SetLoadMode(v460, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    sub_B2C2F8(&v2->fields.__2__current, 0LL);
    v307 = 5;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4185640 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4185640 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap23,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}