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

  if ( (byte_42AE4F4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_B52984(&MapControl_RootInfo_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree___ctor__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42AE4F4 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_B52A54(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0LL);
  this->fields.mapControlRootInfo = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allQuestInfoList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allSpotInfoList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allSpotRoadInfoList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allMapGimmickInfoList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allMapInfoList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allWarInfoList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_B52920(
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
    (const MethodInfo_2B7641C *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_22031472(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_22028516(
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

  if ( (byte_42AE4F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AE4F1 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapGimmickReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Time,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_B5299C(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_22;
    v12 = *(_DWORD *)(Time + 24);
    if ( !v12 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, v12 == 1) )
    {
      v13 = sub_B52A88(Time);
      sub_B52A28(v13, 0LL);
    }
    *(_QWORD *)(Time + 40) = v9->fields.endedAt;
    QuestTree__UpdateForceUpdateTime(this, v8, (System_Int64_array *)Time, v11);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_22:
      sub_B52A5C(Time, v7);
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
  if ( (byte_42AE4ED & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AE4ED = 1;
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
  v13 = (System_Int64_array *)sub_B5299C(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v13 )
    goto LABEL_67;
  if ( !v13->max_length
    || (v13->m_Items[0] = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL), v13->max_length <= 1)
    || (v13->m_Items[1] = NoticeAt, NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL), v13->max_length <= 2) )
  {
    v33 = sub_B52A88(NoticeAt);
    sub_B52A28(v33, 0LL);
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
    NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_67;
    NoticeAt = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_67;
    IsShop = (WarEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)NoticeAt,
                              &entity,
                              warId,
                              (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_67;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)NoticeAt,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  NoticeAt = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    sub_B52A5C(NoticeAt, v10);
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

  return QuestTree__CheckSpotCond_22031472(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckSpotCond_22031472(
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

  if ( (byte_42AE4F0 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AE4F0 = 1;
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v24 = **(_QWORD **)(v23 + 192);
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_AEB684(v24);
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
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v21 = 0;
      goto LABEL_53;
    }
LABEL_205:
    sub_B52A5C(Instance, v16);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
        v55 = sub_B52A88(Instance);
        sub_B52A28(v55, 0LL);
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

  return QuestTree__CheckSpotCond_22031472(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_42AE4EB & 1) == 0 )
  {
    sub_B52984(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    byte_42AE4EB = 1;
  }
  v7 = sub_B52A54(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__41___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 72), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_B52920(
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
  if ( (byte_42AE4EE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_42AE4EE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !questInfo )
    goto LABEL_38;
  questId = questInfo->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_34120444((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_38:
    sub_B52A5C(this, questInfo);
  }
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_questReleaseEntList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v29 = v28;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields.current;
    if ( !v29.fields.current )
      sub_B52A5C(v10, v11);
    klass_high = HIDWORD(v29.fields.current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_WarQuestSelectionMaster )
          sub_B52A5C(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   Master_WarQuestSelectionMaster,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_B52A5C(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_B52A5C(0LL, v24);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_28;
      case 13:
        v21 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v21 )
          sub_B52A5C(0LL, v22);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_25741128; // x0
  int64_t value; // x22
  int64_t v12; // x21
  unsigned int v13; // w25
  int64_t v14; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_42AE4EF & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE4EF = 1;
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
    sub_B52A5C(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v17.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_25741128 = NetworkManager__getTime_25741128(v17, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_25741128;
  dateData = NetworkManager__getDateTime_25741912(Time_25741128 - 3600 * value, 0LL).fields.dateData;
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
    dateData = NetworkManager__getDateTime_25741912(v14, 0LL).fields.dateData;
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

  if ( (byte_42AE4DC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_B52984(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass22_0_TypeInfo);
    byte_42AE4DC = 1;
  }
  v5 = (QuestTree___c__DisplayClass22_0_o *)sub_B52A54(QuestTree___c__DisplayClass22_0_TypeInfo);
  QuestTree___c__DisplayClass22_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__),
        !allMapGimmickInfoList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_B52A5C(QuestInfo, v5);
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

  if ( (byte_42AE4DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_42AE4DF = 1;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_B52A5C(v10, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v43.fields.current )
      sub_B52A5C(0LL, v12);
    SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v43.fields.current, 0LL);
    if ( !SpotList )
      sub_B52A5C(0LL, v14);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v42.fields.current )
        sub_B52A5C(0LL, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v42.fields.current,
                                                                              0,
                                                                              0LL);
      if ( !v9 )
        sub_B52A5C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    *(_DWORD *)&v39[4 * v40++ + 24] = 108;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 108 )
      --v40;
  }
  *(_DWORD *)&v39[4 * v40++ + 24] = 133;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 133 )
    --v40;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v19, v9, v20);
  v22 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v43.fields.current )
      sub_B52A5C(0LL, v23);
    v24 = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v43.fields.current, 0LL);
    if ( !v24 )
      sub_B52A5C(0LL, v25);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = *(System_Collections_Generic_List_Enumerator_T__o *)v39;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = (MapControl_SpotInfo_o *)v42.fields.current;
      if ( !v42.fields.current )
        sub_B52A5C(v26, v27);
      if ( HIDWORD(v42.fields.current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_B52A5C(0LL, v30);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v31 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v31 )
        sub_B52A5C(0LL, v32);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v39,
        v31,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v38 = 0;
      v41 = *(System_Collections_Generic_List_Enumerator_int__o *)v39;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v41,
                (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_B52A5C(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v41.fields.current,
                 (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v22 )
            sub_B52A5C(Item, v36);
          if ( System_Collections_Generic_List_int___Contains(
                 v22,
                 Item,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            ++v38;
          }
          else
          {
            System_Collections_Generic_List_int___Add(
              v22,
              v37,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      *(_DWORD *)&v39[4 * v40++ + 24] = 320;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v41,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 320 )
        --v40;
      v17 = v17 - v38 + current->fields.questCount;
    }
    *(_DWORD *)&v39[4 * v40++ + 24] = 363;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v40 && *(_DWORD *)&v39[4 * v40 + 20] == 363 )
      --v40;
  }
  *(_DWORD *)&v39[4 * v40++ + 24] = 391;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_42AE4E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_42AE4E2 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  v8 = MapInfoByMapID;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v8, 0LL);
  if ( !SpotList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v45 = v41;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v12 )
      break;
    current = v45.fields.current;
    if ( layer < 1 )
    {
      if ( !v45.fields.current )
        sub_B52A5C(v12, v13);
LABEL_12:
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)current,
                                                                              1,
                                                                              0LL);
      if ( !v9 )
        sub_B52A5C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !v45.fields.current )
        sub_B52A5C(v12, v13);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v45.fields.current, 0LL) == layer )
        goto LABEL_12;
    }
  }
  v42[0] = 98;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  v43 = 0;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
  v19 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v8, 0LL);
  if ( !SpotList )
LABEL_52:
    sub_B52A5C(SpotList, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v39 = 0;
  v45 = v41;
  v20 = 0;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v21 )
      break;
    v23 = (MapControl_SpotInfo_o *)v45.fields.current;
    if ( layer < 1 )
    {
      if ( !v45.fields.current )
        sub_B52A5C(v21, v22);
LABEL_22:
      if ( v23->fields.dispType == 1 )
        goto LABEL_25;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v25);
      if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v23->fields.spotId, 0LL) )
      {
LABEL_25:
        v37 = v20;
        v26 = MapControl_SpotInfo__GetAvailableQuestIdList(v23, 1, 0LL);
        if ( !v26 )
          sub_B52A5C(0LL, v27);
        System_Collections_Generic_List_int___GetEnumerator(
          &v41,
          v26,
          (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v38 = 0;
        v44 = v41;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v44,
                  (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v28 )
            break;
          if ( !ShareQuestIdToGroupIdDict )
            sub_B52A5C(v28, v29);
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   ShareQuestIdToGroupIdDict,
                   (int32_t)v44.fields.current,
                   (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          v32 = Item;
          if ( (_DWORD)Item )
          {
            if ( !v19 )
              sub_B52A5C(Item, v31);
            if ( System_Collections_Generic_List_int___Contains(
                   v19,
                   Item,
                   (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              ++v38;
            }
            else
            {
              System_Collections_Generic_List_int___Add(
                v19,
                v32,
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v42[v39] = 282;
        v40 = ++v43;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v44,
          (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
        sub_B52A5C(v21, v22);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v45.fields.current, 0LL) == layer )
        goto LABEL_22;
    }
  }
  v42[v39] = 323;
  v35 = ++v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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

  if ( (byte_42AE4DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_B52984(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_42AE4DD = 1;
  }
  v5 = (QuestTree___c__DisplayClass23_0_o *)sub_B52A54(QuestTree___c__DisplayClass23_0_TypeInfo);
  QuestTree___c__DisplayClass23_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_42AE4F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_42AE4F2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)allQuestInfoList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B52A5C(v8, v9);
    if ( LODWORD(v11.fields.current[4].klass) == warId )
    {
      if ( !v5 )
        sub_B52A5C(v8, v9);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11.fields.current,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE4E1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
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

  if ( (byte_42AE4DB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B52984(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass21_0_TypeInfo);
    byte_42AE4DB = 1;
  }
  v5 = (QuestTree___c__DisplayClass21_0_o *)sub_B52A54(QuestTree___c__DisplayClass21_0_TypeInfo);
  QuestTree___c__DisplayClass21_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.spotId = spotId,
        allSpotInfoList = this->fields.allSpotInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_SpotInfo___ctor__),
        !allSpotInfoList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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

  if ( (byte_42AE4E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_B52984(&Method_System_Func_MapButtonEntity__int___ctor__);
    sub_B52984(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__);
    sub_B52984(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__);
    sub_B52984(&QuestTree___c__DisplayClass29_0_TypeInfo);
    sub_B52984(&QuestTree___c_TypeInfo);
    byte_42AE4E0 = 1;
  }
  v4 = sub_B52A54(QuestTree___c__DisplayClass29_0_TypeInfo);
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
    Mine = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_27;
    Mine = (WarEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Mine,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Mine )
      goto LABEL_27;
    OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                           (MapButtonMaster_o *)Mine,
                                                                           warInfo,
                                                                           Map,
                                                                           0LL);
    v11 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v4 )
      goto LABEL_27;
    *(_QWORD *)(v4 + 16) = v11;
    sub_B52920((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
        _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_MapButtonEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__29_0,
          v22,
          Method_QuestTree___c__GetUserReachableMapList_b__29_0__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_MapButtonEntity__int___ctor__);
        v23 = QuestTree___c_TypeInfo->static_fields;
        v23->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
        sub_B52920(
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
                              (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
      if ( !v18 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !Map || !v18 )
        goto LABEL_27;
      System_Collections_Generic_List_int___Add(
        *(System_Collections_Generic_List_int__o **)(v4 + 16),
        Map->fields.mapId,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v30,
      (Il2CppObject *)v4,
      Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapInfo___ctor__);
    if ( mapInfoList )
      return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)mapInfoList,
                                                                        (System_Predicate_T__o *)v30,
                                                                        (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
LABEL_27:
    sub_B52A5C(Mine, v6);
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

  if ( (byte_42AE4E4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_B52984(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass33_0_TypeInfo);
    byte_42AE4E4 = 1;
  }
  v5 = (QuestTree___c__DisplayClass33_0_o *)sub_B52A54(QuestTree___c__DisplayClass33_0_TypeInfo);
  QuestTree___c__DisplayClass33_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B52A5C(v6, v7);
  }
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_42AE4D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___68533376);
    sub_B52984(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_42AE4D7 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v4,
    allWarInfoList,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___68533376);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  System_Collections_Generic_List_MapControl_WarInfo___Reverse(
    (System_Collections_Generic_List_MapControl_WarInfo__o *)v4,
    (const MethodInfo_2FF3464 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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

  if ( (byte_42AE4D8 & 1) == 0 )
  {
    sub_B52984(&QuestTree__Init_d__15_TypeInfo);
    byte_42AE4D8 = 1;
  }
  v5 = sub_B52A54(QuestTree__Init_d__15_TypeInfo);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_B52920(
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

  if ( (byte_42AE4EC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_42AE4EC = 1;
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
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotInfoList;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotRoadInfoList;
  if ( !mapControlRootInfo
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapGimmickInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allWarInfoList) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(mapControlRootInfo, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AE4E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4E6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_22026436(this, entity, v7);
}


bool __fastcall QuestTree__IsActiveEventWar_22026436(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_42AE4E7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    this = (QuestTree_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4E7 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_20;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (QuestTree_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_20;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  this = (QuestTree_o *)sub_B5299C(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_20:
    sub_B52A5C(this, warEnt);
  if ( !LODWORD(this->fields.allQuestInfoList) )
  {
    v11 = sub_B52A88(this);
    sub_B52A28(v11, 0LL);
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

  if ( (byte_42AE4D9 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4D9 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
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

  if ( (byte_42AE4E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_42AE4E3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_B52A5C(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v19.fields.current;
    if ( layer < 1 )
    {
      if ( !v19.fields.current )
        sub_B52A5C(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields.current )
      sub_B52A5C(v10, v11);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_B52A5C(this, 0LL);
  return QuestTree__CheckSpotCond_22031472(
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
    sub_B52A5C(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_22031472(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_22031472(
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

  if ( (byte_42AE4F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_42AE4F3 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields.current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_B52A5C(v10, v11);
    if ( !v10 )
      sub_B52A5C(0LL, v11);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_42AE4E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_42AE4E5 = 1;
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
    sub_B52A5C(QuestInfoByWarId, v6);
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
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v17.fields.current )
      sub_B52A5C(v10, v11);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_42AE4E8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&SpotEntity_TypeInfo);
    byte_42AE4E8 = 1;
  }
  v6 = sub_B52A54(SpotEntity_TypeInfo);
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
  sub_B52920((BattleServantConfConponent_o *)(v6 + 32), name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_22;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AEB684(v17);
  v18 = **(UnityEngine_Object_o ***)(v17 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_B52A5C(Instance, v8);
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

  v4 = QuestTree__CheckMapGimmickCond_22028516(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_B52A5C(v4, v5);
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
      sub_B52A5C(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_22031472(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_22031472(
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
    sub_B52A5C(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_22031472(
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
    sub_B52A5C(this, nowTime);
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = *(_QWORD *)&times->max_length;
    if ( !v4 )
    {
LABEL_10:
      v7 = sub_B52A88(this);
      sub_B52A28(v7, 0LL);
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

  if ( (byte_42AE4DA & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4DA = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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
  if ( (byte_42AE4D6 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42AE4D6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  return SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_42AE4E9 & 1) == 0 )
  {
    sub_B52984(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo);
    byte_42AE4E9 = 1;
  }
  v5 = sub_B52A54(QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_B52920(
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

  if ( (byte_42AE4EA & 1) == 0 )
  {
    sub_B52984(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo);
    byte_42AE4EA = 1;
  }
  v7 = sub_B52A54(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_B52920(
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

  if ( (byte_42AE4DE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_B52984(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_42AE4DE = 1;
  }
  v5 = (QuestTree___c__DisplayClass27_0_o *)sub_B52A54(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.mapId = mapId;
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapInfo___ctor__);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_42AF28C & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B52984(&BlankEarthSpotMaster_TypeInfo);
    byte_42AF28C = 1;
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
    sub_B52920((BattleServantConfConponent_o *)&v8->fields.__7__wrap1, v13, v15, v16, v17, v18, v19, v20);
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
      v35 = sub_B52A88(this);
      sub_B52A28(v35, 0LL);
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
          sub_B52920(p__2__current, v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
    }
LABEL_22:
    sub_B52A5C(this, method);
  }
  p__7__wrap1->klass = 0LL;
  sub_B52920(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42AF28D & 1) == 0 )
  {
    sub_B52984(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    byte_42AF28D = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B52A54(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B52A5C(CurrentManagedThreadId, v12);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v10->fields.__4__this = (struct QuestTree_o *)_4__this;
    sub_B52920((BattleServantConfConponent_o *)&v10->fields.__4__this, _4__this, v13, v14, v15, v16, v17, v18);
  }
  _3__mapInfo = (System_Int32_array **)this->fields.__3__mapInfo;
  v10->fields.mapInfo = (struct MapControl_MapInfo_o *)_3__mapInfo;
  sub_B52920((BattleServantConfConponent_o *)&v10->fields.mapInfo, _3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = (System_Int32_array **)this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = (struct BlankEarthSpotMaster_o *)_3__blankEarthSpotMaster;
  sub_B52920(
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__41_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  if ( (byte_42AF28E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestTree__Init_d__15_o *)sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF28E = 1;
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
      if ( !byte_42AC794 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC794 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      isInvisibleConnectAndLoad = v5->static_fields->isInvisibleConnectAndLoad;
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
        v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
        v12 = **(_QWORD **)(v11 + 192);
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_AEB684(v12);
        v13 = **(UnityEngine_Object_o ***)(v12 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
          goto LABEL_44;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_44:
            QuestTree__UpdateMonitoringValue(_4__this, 0LL);
            v14 = (System_Int32_array **)QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v14;
            sub_B52920((BattleServantConfConponent_o *)&v2->fields.__2__current, v14, v15, v16, v17, v18, v19, v20);
            LOBYTE(endCallback) = 1;
            v2->fields.__1__state = 1;
            return (char)endCallback;
          }
        }
      }
LABEL_46:
      sub_B52A5C(this, method);
    }
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v9 = **(_QWORD **)(v8 + 192);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AEB684(v9);
    v10 = **(UnityEngine_Object_o ***)(v9 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_46;
      QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AF288 & 1) == 0 )
  {
    sub_B52984(&QuestTree___c_TypeInfo);
    byte_42AF288 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestTree___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AF289 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42AF289 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_B52A5C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AF28A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_3_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_42AF28A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_B52A5C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AF28B & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_6_o *)sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42AF28B = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_B52A5C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
  MapControl_WarInfo_o *v180; // x22
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  MapControl_MapInfo_o *v187; // x22
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  MapControl_SpotInfo_o *v194; // x22
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  WarEntity_o *v201; // x22
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_Int32_array **v208; // x0
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  bool isSavedMemoryMode; // w0
  bool v216; // zf
  int v217; // w8
  BattleServantConfConponent_o *p__2__current; // x27
  __int64 v219; // x0
  QuestEntity_o *v220; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass39_0_o *_8__1; // x8
  struct QuestTree___c__DisplayClass39_0_o *v225; // x25
  QuestEntity_o *v226; // x21
  int32_t v227; // w22
  int32_t *v228; // x23
  int32_t *v229; // x28
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v230; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__2; // x27
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x0
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  int32_t MapID; // w0
  System_Int32_array **MapInfoByMapID; // x0
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Int32_array **WarInfoByWarID; // x0
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_Int32_array **Mine; // x0
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  int v267; // w25
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  struct MapControl_WarInfo_o *warInfo_5__20; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v275; // x24
  struct EventMaster_o *v276; // x1
  System_Int32_array **spotInfo_5__22; // x1
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v285; // w19
  struct MapControl_SpotInfo_o *v286; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v288; // x9
  struct MapControl_MapInfo_o *v289; // x9
  bool v290; // w8
  Il2CppObject *v291; // x19
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v292; // x21
  unsigned int v293; // w22
  __int64 v294; // x8
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allQuestInfoList; // x21
  struct QuestTree___c_StaticFields *v302; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_1; // x22
  Il2CppObject *v304; // x23
  struct QuestTree___c_StaticFields *v305; // x0
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  System_String_array **v330; // x2
  System_String_array **v331; // x3
  System_Boolean_array **v332; // x4
  System_Int32_array **v333; // x5
  System_Int32_array *v334; // x6
  System_Int32_array *v335; // x7
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  System_String_array **v348; // x2
  System_String_array **v349; // x3
  System_Boolean_array **v350; // x4
  System_Int32_array **v351; // x5
  System_Int32_array *v352; // x6
  System_Int32_array *v353; // x7
  int32_t *p_warCount_5__19; // [xsp+0h] [xbp-C0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v355; // [xsp+10h] [xbp-B0h]
  MapControl_WarInfo_o *v356; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v357; // [xsp+20h] [xbp-A0h]
  unsigned int v358; // [xsp+28h] [xbp-98h]
  struct QuestMaster_o *v359; // [xsp+28h] [xbp-98h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v360; // [xsp+30h] [xbp-90h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+38h] [xbp-88h] BYREF
  UserQuestEntity_o *v362; // [xsp+40h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+48h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+50h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *v366; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_42AF28F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MapControl_WarInfo___ctor__);
    sub_B52984(&Method_System_Comparison_MapControl_QuestInfo___ctor__);
    sub_B52984(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B52984(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_B52984(&MapControl_MapInfo_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&MapControl_SpotInfo_TypeInfo);
    sub_B52984(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__);
    sub_B52984(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__);
    sub_B52984(&Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_B52984(&QuestTree___c__DisplayClass39_0_TypeInfo);
    sub_B52984(&QuestTree___c_TypeInfo);
    sub_B52984(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B52984(&MapControl_WarInfo_TypeInfo);
    byte_42AF28F = 1;
  }
  entity = 0LL;
  spotInfo = 0LL;
  v366 = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v362 = 0LL;
  _4__this = v2->fields.__4__this;
  v360 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_252;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._dataManager_5__2, Instance, v5, v6, v7, v8, v9, v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B52920(
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
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v18;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._spotMaster_5__4, v18, v19, v20, v21, v22, v23, v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v25 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v25;
      sub_B52920(
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
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v32;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._questMaster_5__6, v32, v33, v34, v35, v36, v37, v38);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v39 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v39;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._questPhaseMaster_5__7, v39, v40, v41, v42, v43, v44, v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v46 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v46;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._eventMaster_5__8, v46, v47, v48, v49, v50, v51, v52);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v53 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v53;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._eventDetailMaster_5__9, v53, v54, v55, v56, v57, v58, v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v60 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v60;
      sub_B52920(
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
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_B52920(
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
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v74;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._spotRoadMaster_5__12, v74, v75, v76, v77, v78, v79, v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v81 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v81;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields._mapGimmickMaster_5__13, v81, v82, v83, v84, v85, v86, v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v88 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v88;
      sub_B52920(
        (BattleServantConfConponent_o *)&v2->fields._questPickupMaster_5__14,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v95,
        (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v95;
      sub_B52920(
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
                                                              (const MethodInfo_1A4F418 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_WarMaster__WarEntity;
      sub_B52920(
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
                                                                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
               &v366,
               (int32_t)this,
               (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v366;
          if ( !v366 )
            goto LABEL_252;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v366, 0x2000000LL, 0LL) )
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
                  (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v129 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B5299C(long___TypeInfo, 3LL);
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
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_252;
    v137 = this;
    v357 = this->fields.__2__current;
    if ( (int)v357 >= 1 )
    {
      if ( !(_DWORD)v357 )
        goto LABEL_132;
      v138 = 0;
      v355 = this;
      v356 = v121;
      while ( 1 )
      {
        v139 = *((_QWORD *)&v137->fields.__4__this + (int)v138);
        v358 = v138;
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
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
                                                                   v360->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_252;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotRoadMaster_5__12;
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
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
            if ( (int)++v152 >= (int)v150 )
              break;
            if ( v152 >= LODWORD(v151->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v2 = v360;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._mapGimmickMaster_5__13;
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
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
            if ( (int)++v159 >= (int)v157 )
              break;
            if ( v159 >= LODWORD(v158->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v121 = v356;
        v137 = v355;
        v138 = v358 + 1;
        if ( (int)(v358 + 1) >= (int)v357 )
          goto LABEL_104;
        if ( v138 >= LODWORD(v355->fields.__2__current) )
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
        if ( (int)++v144 >= (int)v142 )
          goto LABEL_79;
      }
      while ( v144 < LODWORD(v143->fields.__2__current) );
LABEL_132:
      v219 = sub_B52A88(this);
      sub_B52A28(v219, 0LL);
    }
LABEL_104:
    warIdx_5__18 = *p_warIdx_5__18;
    if ( (int)*p_warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B52920(p__2__current, 0LL, v131, v132, v133, v134, v135, v136);
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
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v164,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
    v165 = QuestTree___c_TypeInfo->static_fields;
    v165->__9__39_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__39_0;
    sub_B52920(
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
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v172 = (Il2CppObject *)sub_B52A54(QuestTree___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v172, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)v172;
  p__8__1 = &v2->fields.__8__1;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields.__8__1,
    (System_Int32_array **)v172,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  v180 = (MapControl_WarInfo_o *)sub_B52A54(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v180, 0LL);
  v2->fields._warInfo_5__20 = v180;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields._warInfo_5__20,
    (System_Int32_array **)v180,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  v187 = (MapControl_MapInfo_o *)sub_B52A54(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v187, 0LL);
  v2->fields._mapInfo_5__21 = v187;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields._mapInfo_5__21,
    (System_Int32_array **)v187,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193);
  v194 = (MapControl_SpotInfo_o *)sub_B52A54(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v194, 0LL);
  v2->fields._spotInfo_5__22 = v194;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields._spotInfo_5__22,
    (System_Int32_array **)v194,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  v201 = (WarEntity_o *)sub_B52A54(WarEntity_TypeInfo);
  WarEntity___ctor(v201, 0LL);
  v2->fields._warEnt_5__23 = v201;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields._warEnt_5__23,
    (System_Int32_array **)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_252;
  v208 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v208;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields._userQuestMaster_5__24,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
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
  v216 = !isSavedMemoryMode;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v2->fields._questMaster_5__6;
  v217 = v216 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v217;
  if ( !this )
    goto LABEL_252;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  v2->fields._questCount_5__26 = (int)this;
  p_questCount_5__26 = &v2->fields._questCount_5__26;
  method = (const MethodInfo *)(unsigned int)*(p_questCount_5__26 - 1);
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v220 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v362 = 0LL;
    userQuestMaster_5__24 = v360->fields._userQuestMaster_5__24;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_252;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v362, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v362;
      if ( !v362 )
        goto LABEL_252;
      QuestPhase = UserQuestEntity__getQuestPhase(v362, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__getSpotId_25289156(v220, QuestPhase + 1, 0LL);
    _8__1 = v360->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_252;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      v359 = _1__state;
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_252;
      v225 = v360->fields.__8__1;
      if ( !v225 )
        goto LABEL_252;
      v226 = v220;
      v227 = QuestPhase;
      v228 = p_questIdx_5__25;
      v229 = p_questCount_5__26;
      v230 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v225->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__2,
          (Il2CppObject *)v225,
          Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v225->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v225->fields.__9__2,
          (System_Int32_array **)_9__2,
          v232,
          v233,
          v234,
          v235,
          v236,
          v237);
      }
      if ( !v230 )
        goto LABEL_252;
      v238 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v230,
                                      (System_Predicate_T__o *)_9__2,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v360->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v238;
      sub_B52920(
        (BattleServantConfConponent_o *)&v360->fields._spotInfo_5__22,
        v238,
        v239,
        v240,
        v241,
        v242,
        v243,
        v244);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_252;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      p_questCount_5__26 = v229;
      p_questIdx_5__25 = v228;
      QuestPhase = v227;
      v220 = v226;
      _1__state = v359;
      if ( v360->fields._mapInfoNow_5__27 != MapID )
      {
        v360->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = (System_Int32_array **)QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v360->fields._mapInfo_5__21 = (struct MapControl_MapInfo_o *)MapInfoByMapID;
        sub_B52920(
          (BattleServantConfConponent_o *)&v360->fields._mapInfo_5__21,
          MapInfoByMapID,
          v247,
          v248,
          v249,
          v250,
          v251,
          v252);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v360->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v360->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = (System_Int32_array **)QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v360->fields._warInfo_5__20 = (struct MapControl_WarInfo_o *)WarInfoByWarID;
          sub_B52920(
            (BattleServantConfConponent_o *)&v360->fields._warInfo_5__20,
            WarInfoByWarID,
            v254,
            v255,
            v256,
            v257,
            v258,
            v259);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_252;
          Mine = (System_Int32_array **)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v360->fields._warEnt_5__23 = (struct WarEntity_o *)Mine;
          sub_B52920(
            (BattleServantConfConponent_o *)&v360->fields._warEnt_5__23,
            Mine,
            v261,
            v262,
            v263,
            v264,
            v265,
            v266);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    if ( !v362 )
      goto LABEL_178;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v362;
    if ( !v362 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v362, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_163;
    if ( !v362 )
      goto LABEL_252;
    if ( v362->fields.challengeNum >= 1 )
    {
LABEL_163:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v362;
    if ( !v362 )
      goto LABEL_252;
    if ( UserQuestEntity__getClearNum(v362, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
LABEL_178:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v267 = 0;
      goto LABEL_179;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v362 )
      goto LABEL_252;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v362->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v360->fields._warInfo_5__20 )
      goto LABEL_252;
    v267 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetMine(
                                                               v360->fields._warInfo_5__20,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_179:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    warInfo_5__20 = v360->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_252;
    v275 = this;
    if ( !this )
      goto LABEL_252;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    v276 = (struct EventMaster_o *)v360->fields._warInfo_5__20;
    this->fields._eventMaster_5__8 = v276;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._eventMaster_5__8,
      (System_Int32_array **)v276,
      v268,
      v269,
      v270,
      v271,
      v272,
      v273);
    spotInfo_5__22 = (System_Int32_array **)v360->fields._spotInfo_5__22;
    v275->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_B52920(
      (BattleServantConfConponent_o *)&v275->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v278,
      v279,
      v280,
      v281,
      v282,
      v283);
    if ( !_4__this )
      goto LABEL_252;
    v275->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v275,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_252;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_193;
      }
    }
    warEnt_5__23 = v360->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_252;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)value;
      if ( !value )
        goto LABEL_252;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_193:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v275, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v275->fields.__4__this) = 0;
LABEL_197:
        v285 = 1;
        goto LABEL_198;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v220, (MapControl_QuestInfo_o *)v275, v360->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_197;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v285 = 0;
LABEL_198:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v275, 0LL) )
    {
      if ( ((v267 | v285) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v275->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v275, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v275,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v286 = v360->fields._spotInfo_5__22;
          if ( !v286 )
            goto LABEL_252;
          v286->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v360->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_252;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v275,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v288 = v360->fields._spotInfo_5__22;
        if ( !v288 )
          goto LABEL_252;
        v288->fields._IsNext_k__BackingField = 1;
        v289 = v360->fields._mapInfo_5__21;
        if ( !v289 )
          goto LABEL_252;
        v289->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v220, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v362 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v362, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v362 )
          goto LABEL_252;
        v290 = v362->fields.challengeNum == 0;
      }
      else
      {
        v290 = 0;
      }
    }
    else
    {
      v290 = 1;
    }
    LOBYTE(v275->fields.__8__1) = v290;
    HIDWORD(v275->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_252;
    LODWORD(v275->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v360->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v291 = this->fields.__2__current;
    v292 = this;
    if ( (int)v291 >= 1 )
    {
      v293 = 0;
      while ( 1 )
      {
        v294 = *((_QWORD *)&v292->fields.__4__this + (int)v293);
        if ( !v294 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v275,
                                                                   *(_DWORD *)(v294 + 16),
                                                                   *(_DWORD *)(v294 + 20),
                                                                   0LL);
        if ( (int)++v293 >= (int)v291 )
          goto LABEL_232;
        if ( v293 >= LODWORD(v292->fields.__2__current) )
          goto LABEL_132;
      }
LABEL_252:
      sub_B52A5C(this, method);
    }
LABEL_232:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v275,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    questIdx_5__25 = v360->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v360->fields._breakInterval_5__29) )
    {
      v360->fields.__2__current = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v360->fields.__2__current, 0LL, v295, v296, v297, v298, v299, v300);
      v360->fields.__1__state = 2;
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
  v302 = *(struct QuestTree___c_StaticFields **)&this->fields._warIdx_5__18;
  _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v302->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(this[1].fields.endCallback) & 4) != 0 && !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v302 = QuestTree___c_TypeInfo->static_fields;
    }
    v304 = (Il2CppObject *)v302->__9;
    _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_1,
      v304,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v305 = QuestTree___c_TypeInfo->static_fields;
    v305->__9__39_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__39_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v305->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v306,
      v307,
      v308,
      v309,
      v310,
      v311);
  }
  if ( !allQuestInfoList )
    goto LABEL_252;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allQuestInfoList,
    (System_Comparison_T__o *)_9__39_1,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v360->fields.__8__1 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields.__8__1, 0LL, v312, v313, v314, v315, v316, v317);
  v360->fields._warInfo_5__20 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields._warInfo_5__20, 0LL, v318, v319, v320, v321, v322, v323);
  v360->fields._mapInfo_5__21 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields._mapInfo_5__21, 0LL, v324, v325, v326, v327, v328, v329);
  v360->fields._spotInfo_5__22 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields._spotInfo_5__22, 0LL, v330, v331, v332, v333, v334, v335);
  v360->fields._warEnt_5__23 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields._warEnt_5__23, 0LL, v336, v337, v338, v339, v340, v341);
  v360->fields._userQuestMaster_5__24 = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&v360->fields._userQuestMaster_5__24,
    0LL,
    v342,
    v343,
    v344,
    v345,
    v346,
    v347);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_252;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v360->fields.endCallback )
    return 0;
  v360->fields.__2__current = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v360->fields.__2__current, 0LL, v348, v349, v350, v351, v352, v353);
  v360->fields.__1__state = 3;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *v8; // x19
  QuestTree_o *_4__this; // x20
  Il2CppObject *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  System_Int32_array **Instance; // x0
  DataManager_o **p_dataManager_5__2; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x1
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x28
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v90; // x25
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_eventStatusQuestMismatchDictionary_5__10; // x26
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  Il2CppObject *v98; // x24
  Il2CppObject **p__8__1; // x27
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x1
  __int64 Time; // x25
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  Il2CppObject *_8__2; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v111; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v112; // x0
  __int64 v113; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allWarInfoList; // x22
  Il2CppObject *v116; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v117; // x23
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 Index; // x0
  __int64 v121; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v122; // x0
  MapControl_RootInfo_o *v123; // x0
  System_Int32_array **v124; // x0
  MapControl_WarInfo_o **p_warInfo_5__13; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  __int64 v132; // x1
  MapControl_WarInfo_o *warInfo_5__13; // x0
  __int64 v134; // x1
  __int64 EventId; // x0
  __int64 v136; // x1
  _BOOL8 v137; // x0
  __int64 v138; // x1
  int32_t v139; // w2
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  EventStatusEntity_o *NowEntity; // x23
  __int64 v146; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  __int64 v148; // x1
  System_Int64_array *v149; // x0
  __int64 v150; // x1
  unsigned int max_length; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v152; // x0
  __int64 v153; // x0
  __int64 v154; // x1
  System_Int32_array **List; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  __int64 v162; // x0
  __int64 v163; // x1
  struct MapEntity_array *mapList_5__14; // x9
  int mapCount_5__12; // w9
  int v166; // w8
  int32_t v167; // w8
  int32_t *p_mapCount_5__12; // x27
  int32_t *p_mapIdx_5__11; // x28
  struct MapEntity_array *v170; // x9
  MapEntity_o *v171; // x8
  struct QuestTree___c__DisplayClass40_1_o *v172; // x9
  struct MapControl_WarInfo_o *v173; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *mapInfoList; // x21
  struct QuestTree___c__DisplayClass40_1_o *v175; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3; // x22
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  struct MapControl_WarInfo_o *v183; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v184; // x0
  struct QuestTree___c__DisplayClass40_1_o *v185; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapInfoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4; // x22
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  __int64 v194; // x0
  __int64 v195; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v196; // x0
  struct QuestTree___c__DisplayClass40_1_o *v197; // x8
  MapControl_WarInfo_o *v198; // x0
  System_Int32_array **v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  __int64 v206; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v207; // x0
  __int64 v208; // x0
  __int64 v209; // x1
  struct QuestTree___c__DisplayClass40_1_o *v210; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v212; // x0
  __int64 v213; // x1
  SpotEntity_array *v214; // x22
  int v215; // w27
  __int64 v216; // x28
  __int64 v217; // x23
  __int64 v218; // x0
  __int64 v219; // x1
  SpotEntity_o *v220; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v222; // x26
  __int64 v223; // x0
  __int64 v224; // x1
  unsigned int v225; // w0
  __int64 v226; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v227; // x0
  __int64 v228; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v229; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v230; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v231; // x0
  __int64 v232; // x1
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v239; // x21
  __int64 v240; // x22
  QuestTree___c_c *v241; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_6; // x23
  Il2CppObject *v244; // x24
  struct QuestTree___c_StaticFields *v245; // x0
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  System_Collections_Generic_IEnumerable_T__o *v252; // x24
  System_Collections_Generic_HashSet_int__o *v253; // x23
  __int64 v254; // x0
  __int64 v255; // x1
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  System_Collections_Generic_List_T__o *v262; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v263; // x24
  __int64 v264; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v265; // x0
  bool result; // w0
  struct System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__o *p__7__wrap23; // x22
  int32_t *p_cnt_5__22; // x24
  Il2CppObject **p__8__3; // x21
  struct QuestTree___c__DisplayClass40_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v272; // x0
  __int64 v273; // x1
  SpotRoadEntity_array *v274; // x21
  int v275; // w26
  __int64 v276; // x27
  __int64 v277; // x22
  __int64 v278; // x0
  __int64 v279; // x1
  SpotRoadEntity_o *v280; // x23
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotRoadInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v282; // x25
  __int64 v283; // x0
  __int64 v284; // x1
  unsigned int v285; // w0
  __int64 v286; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v287; // x0
  MapControl_MapInfo_o *mapInfo_5__15; // x0
  __int64 v289; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v290; // x0
  struct QuestTree___c__DisplayClass40_1_o *v291; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v293; // x0
  __int64 v294; // x1
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  MapGimmickEntity_array *v301; // x21
  int v302; // w25
  __int64 v303; // x26
  __int64 v304; // x22
  __int64 v305; // x0
  __int64 v306; // x1
  MapGimmickEntity_o *v307; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapGimmickInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v309; // x24
  __int64 v310; // x0
  __int64 v311; // x1
  unsigned int v312; // w0
  __int64 v313; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v314; // x0
  MapControl_MapInfo_o *v315; // x0
  __int64 v316; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v317; // x0
  int v318; // w8
  System_Action_o *endCallback; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v320; // x21
  QuestTree___c_c *v321; // x0
  struct QuestTree___c_StaticFields *v322; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_2; // x22
  Il2CppObject *v324; // x23
  struct QuestTree___c_StaticFields *v325; // x0
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  Il2CppObject *v350; // x23
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  MapControl_WarInfo_o *v357; // x23
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  MapControl_MapInfo_o *v364; // x22
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  MapControl_SpotInfo_o *v371; // x22
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  WarEntity_o *v378; // x22
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  __int64 v385; // x1
  DataManager_o *dataManager_5__2; // x0
  System_Int32_array **v387; // x0
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v395; // x1
  int v396; // w8
  struct QuestTree___c__DisplayClass40_6_o *_8__3; // x22
  System_Collections_Generic_List_int__o *v398; // x23
  __int64 v399; // x0
  __int64 v400; // x1
  System_String_array **v401; // x2
  System_String_array **v402; // x3
  System_Boolean_array **v403; // x4
  System_Int32_array **v404; // x5
  System_Int32_array *v405; // x6
  System_Int32_array *v406; // x7
  __int64 v407; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v408; // x0
  __int128 v409; // q0
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  _BOOL8 v416; // x0
  const MethodInfo *v417; // x1
  MapControl_SpotInfo_o *current; // x23
  SpotEntity_o *Mine; // x0
  __int64 v420; // x1
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  struct QuestTree___c__DisplayClass40_0_o *v427; // x8
  System_Collections_Generic_List_int__o *klass; // x0
  __int64 v429; // x1
  DataMasterBase_o *questMaster_5__5; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  Il2CppObject *v432; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v433; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v434; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v435; // x0
  System_Int32_array **v436; // x0
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  __int64 v443; // x0
  int v444; // w8
  __int64 v445; // x0
  __int64 v446; // x0
  __int64 v447; // x0
  __int64 v448; // x0
  __int64 v449; // x0
  __int64 v450; // x0
  __int64 v451; // x0
  struct QuestEntity_array *questList_5__23; // x9
  QuestEntity_o *v453; // x21
  struct QuestTree___c__DisplayClass40_6_o *v454; // x8
  UserQuestMaster_o *userQuestMaster_5__18; // x22
  int64_t UserId; // x0
  __int64 v457; // x1
  struct QuestTree___c__DisplayClass40_6_o *v458; // x8
  __int64 v459; // x1
  int32_t QuestPhase; // w22
  MapEntity_o *SpotId_25289156; // x0
  __int64 warId; // x1
  struct QuestTree___c__DisplayClass40_6_o *v463; // x9
  struct QuestTree___c__DisplayClass40_6_o *v464; // x26
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v465; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__12; // x24
  System_String_array **v467; // x2
  System_String_array **v468; // x3
  System_Boolean_array **v469; // x4
  System_Int32_array **v470; // x5
  System_Int32_array *v471; // x6
  System_Int32_array *v472; // x7
  System_Int32_array **v473; // x0
  System_String_array **v474; // x2
  System_String_array **v475; // x3
  System_Boolean_array **v476; // x4
  System_Int32_array **v477; // x5
  System_Int32_array *v478; // x6
  System_Int32_array *v479; // x7
  __int64 v480; // x1
  MapControl_SpotInfo_o *spotInfo_5__16; // x0
  System_Int32_array **MapInfoByMapID; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  __int64 v489; // x1
  MapControl_MapInfo_o *v490; // x0
  __int64 v491; // x1
  System_Int32_array **WarInfoByWarID; // x0
  System_String_array **v493; // x2
  System_String_array **v494; // x3
  System_Boolean_array **v495; // x4
  System_Int32_array **v496; // x5
  System_Int32_array *v497; // x6
  System_Int32_array *v498; // x7
  __int64 v499; // x1
  MapControl_WarInfo_o *v500; // x0
  System_Int32_array **v501; // x0
  System_String_array **v502; // x2
  System_String_array **v503; // x3
  System_Boolean_array **v504; // x4
  System_Int32_array **v505; // x5
  System_Int32_array *v506; // x6
  System_Int32_array *v507; // x7
  struct QuestTree___c__DisplayClass40_6_o *v508; // x26
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allQuestInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13; // x24
  System_String_array **v511; // x2
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  unsigned int v517; // w0
  __int64 v518; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v519; // x0
  MapControl_WarInfo_o *v520; // x0
  __int64 v521; // x1
  _BOOL8 HasStatus; // x0
  __int64 v523; // x1
  MapControl_WarInfo_o *v524; // x0
  WarEntity_o *v525; // x0
  __int64 v526; // x1
  int v527; // w24
  __int64 v528; // x1
  int32_t ClearNum; // w8
  struct QuestTree___c__DisplayClass40_6_o *v530; // x8
  MapControl_WarInfo_o *v531; // x0
  struct QuestTree___c__DisplayClass40_6_o *v532; // x8
  MapControl_SpotInfo_o *v533; // x0
  MapControl_QuestInfo_o *v534; // x0
  __int64 v535; // x1
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  struct MapControl_WarInfo_o *v542; // x8
  MapControl_QuestInfo_o *v543; // x23
  System_Int32_array **v544; // x1
  System_Int32_array **v545; // x1
  System_String_array **v546; // x2
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  __int64 v552; // x1
  WarEntity_o *warEnt_5__17; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v555; // x1
  struct WarEntity_o *v556; // x8
  struct QuestTree___c__DisplayClass40_6_o *v557; // x9
  struct WarEntity_o *v558; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *eventStatusQuestMismatchDictionary_5__10; // x0
  _BOOL8 v560; // x0
  __int64 v561; // x1
  struct QuestTree___c__DisplayClass40_6_o *v562; // x8
  __int64 v563; // x1
  MapControl_WarInfo_o *v564; // x0
  int v565; // w25
  __int64 v566; // x1
  MapControl_SpotInfo_o *v567; // x0
  __int64 v568; // x1
  MapControl_SpotInfo_o *v569; // x0
  QuestEntity_o *v570; // x0
  __int64 v571; // x1
  _BOOL8 HasFlag; // x0
  __int64 v573; // x1
  struct MapControl_SpotInfo_o *v574; // x8
  struct MapControl_MapInfo_o *v575; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v577; // x1
  struct MapControl_SpotInfo_o *v578; // x9
  struct MapControl_MapInfo_o *v579; // x9
  MapControl_SpotInfo_o *v580; // x0
  UserQuestEntity_o *v581; // x0
  bool v582; // w8
  struct QuestTree___c__DisplayClass40_6_o *v583; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v586; // x1
  struct QuestTree___c__DisplayClass40_6_o *v587; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v589; // x0
  __int64 v590; // x1
  _QWORD *v591; // x21
  __int64 v592; // x22
  unsigned int v593; // w24
  __int64 v594; // x8
  __int64 v595; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v596; // x0
  System_String_array **v597; // x2
  System_String_array **v598; // x3
  System_Boolean_array **v599; // x4
  System_Int32_array **v600; // x5
  System_Int32_array *v601; // x6
  System_Int32_array *v602; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v603; // x21
  QuestTree___c_c *v604; // x0
  struct QuestTree___c_StaticFields *v605; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_11; // x22
  Il2CppObject *v607; // x23
  struct QuestTree___c_StaticFields *v608; // x0
  System_String_array **v609; // x2
  System_String_array **v610; // x3
  System_Boolean_array **v611; // x4
  System_Int32_array **v612; // x5
  System_Int32_array *v613; // x6
  System_Int32_array *v614; // x7
  System_String_array **v615; // x2
  System_String_array **v616; // x3
  System_Boolean_array **v617; // x4
  System_Int32_array **v618; // x5
  System_Int32_array *v619; // x6
  System_Int32_array *v620; // x7
  System_String_array **v621; // x2
  System_String_array **v622; // x3
  System_Boolean_array **v623; // x4
  System_Int32_array **v624; // x5
  System_Int32_array *v625; // x6
  System_Int32_array *v626; // x7
  System_String_array **v627; // x2
  System_String_array **v628; // x3
  System_Boolean_array **v629; // x4
  System_Int32_array **v630; // x5
  System_Int32_array *v631; // x6
  System_Int32_array *v632; // x7
  System_String_array **v633; // x2
  System_String_array **v634; // x3
  System_Boolean_array **v635; // x4
  System_Int32_array **v636; // x5
  System_Int32_array *v637; // x6
  System_Int32_array *v638; // x7
  System_String_array **v639; // x2
  System_String_array **v640; // x3
  System_Boolean_array **v641; // x4
  System_Int32_array **v642; // x5
  System_Int32_array *v643; // x6
  System_Int32_array *v644; // x7
  System_String_array **v645; // x2
  System_String_array **v646; // x3
  System_Boolean_array **v647; // x4
  System_Int32_array **v648; // x5
  System_Int32_array *v649; // x6
  System_Int32_array *v650; // x7
  System_String_array **v651; // x2
  System_String_array **v652; // x3
  System_Boolean_array **v653; // x4
  System_Int32_array **v654; // x5
  System_Int32_array *v655; // x6
  System_Int32_array *v656; // x7
  CommonUI_o *v657; // x0
  __int64 v658; // x1
  System_String_array **v659; // x2
  System_String_array **v660; // x3
  System_Boolean_array **v661; // x4
  System_Int32_array **v662; // x5
  System_Int32_array *v663; // x6
  System_Int32_array *v664; // x7
  __int64 v665; // x0
  EventStatusQuestMaster_o *v666; // [xsp+8h] [xbp-D8h]
  EventStatusMaster_o *v667; // [xsp+10h] [xbp-D0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v668; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o **p_mapInfo_5__15; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v670; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+58h] [xbp-88h] BYREF
  UserQuestEntity_o *v672; // [xsp+60h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+68h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+70h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+78h] [xbp-68h] BYREF
  WarEntity_o *v676; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_42AF290 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_B52984(&Method_System_Comparison_MapControl_WarInfo___ctor__);
    sub_B52984(&Method_System_Comparison_MapControl_QuestInfo___ctor__);
    sub_B52984(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B52984(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_getEntitys_QuestEntity___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_B52984(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B52984(&Method_System_Func_QuestEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_WarEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_MapControl_SpotInfo__int___ctor__);
    sub_B52984(&Method_System_Func_MapControl_SpotInfo__bool___ctor__);
    sub_B52984(&System_Func_WarEntity__bool__TypeInfo);
    sub_B52984(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_B52984(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_B52984(&System_Func_QuestEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488960);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&MapControl_MapInfo_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B52984(&Method_System_Predicate_MapControl_WarInfo___ctor__);
    sub_B52984(&Method_System_Predicate_MapControl_MapInfo___ctor__);
    sub_B52984(&Method_System_Predicate_MapControl_QuestInfo___ctor__);
    sub_B52984(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
    sub_B52984(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
    sub_B52984(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_B52984(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_B52984(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_B52984(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B52984(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_B52984(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&MapControl_SpotInfo_TypeInfo);
    sub_B52984(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__);
    sub_B52984(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__);
    sub_B52984(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_B52984(&QuestTree___c__DisplayClass40_0_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_B52984(&QuestTree___c__DisplayClass40_1_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_B52984(&QuestTree___c__DisplayClass40_2_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_B52984(&QuestTree___c__DisplayClass40_3_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_B52984(&QuestTree___c__DisplayClass40_4_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_B52984(&QuestTree___c__DisplayClass40_5_TypeInfo);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_B52984(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_B52984(&QuestTree___c__DisplayClass40_6_TypeInfo);
    sub_B52984(&QuestTree___c_TypeInfo);
    sub_B52984(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)sub_B52984(&MapControl_WarInfo_TypeInfo);
    byte_42AF290 = 1;
  }
  v676 = 0LL;
  entity = 0LL;
  spotInfo = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v672 = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B52A54(QuestTree___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__2 = (struct QuestTree___c__DisplayClass40_0_o *)v10;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields.__8__2,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !v8->fields.__8__2 )
        sub_B52A5C(v17, v18);
      v8->fields.__8__2->fields.targetWarId = v8->fields.targetWarId;
      Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v8->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      p_dataManager_5__2 = &v8->fields._dataManager_5__2;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._dataManager_5__2, Instance, v21, v22, v23, v24, v25, v26);
      if ( !v8->fields._dataManager_5__2 )
        sub_B52A5C(0LL, v27);
      MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v8->fields._dataManager_5__2,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v28);
      v30 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotMaster___);
      v8->fields._spotMaster_5__3 = (struct SpotMaster_o *)v30;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._spotMaster_5__3, v30, v31, v32, v33, v34, v35, v36);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v37);
      v38 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v8->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v38;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._blankEarthSpotMaster_5__4,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v45);
      v46 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
      v8->fields._questMaster_5__5 = (struct QuestMaster_o *)v46;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._questMaster_5__5, v46, v47, v48, v49, v50, v51, v52);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v53);
      v54 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v8->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v54;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._questPhaseMaster_5__6, v54, v55, v56, v57, v58, v59, v60);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v61);
      v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             *p_dataManager_5__2,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v62);
      v668 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v64);
      v667 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v65);
      v666 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           *p_dataManager_5__2,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v66);
      v67 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v8->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v67;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._spotRoadMaster_5__7, v67, v68, v69, v70, v71, v72, v73);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v74);
      v75 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v8->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v75;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapGimmickMaster_5__8, v75, v76, v77, v78, v79, v80, v81);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v82);
      v83 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     *p_dataManager_5__2,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v8->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v83;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._questPickupMaster_5__9, v83, v84, v85, v86, v87, v88, v89);
      v90 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v90,
        (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v8->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v90;
      p_eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&v8->fields._eventStatusQuestMismatchDictionary_5__10;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._eventStatusQuestMismatchDictionary_5__10,
        (System_Int32_array **)v90,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      v98 = (Il2CppObject *)sub_B52A54(QuestTree___c__DisplayClass40_1_TypeInfo);
      System_Object___ctor(v98, 0LL);
      v8->fields.__8__1 = (struct QuestTree___c__DisplayClass40_1_o *)v98;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v98,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !*p_dataManager_5__2 )
        sub_B52A5C(0LL, v106);
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_1A4F418 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      _8__2 = (Il2CppObject *)v8->fields.__8__2;
      v110 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarMaster__WarEntity;
      v111 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v111,
        _8__2,
        Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_WarEntity__bool___ctor__);
      v112 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
               v110,
               (System_Func_TSource__bool__o *)v111,
               (const MethodInfo_1B6D488 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v112 )
        sub_B52A5C(0LL, v113);
      if ( !*p__8__1 )
        sub_B52A5C(v112, v113);
      LODWORD((*p__8__1)[1].klass) = v112->fields.m_messageTypeId;
      if ( !_4__this )
        sub_B52A5C(v112, v113);
      if ( !*p__8__1 )
        sub_B52A5C(v112, v113);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_B52A5C(0LL, v113);
      MapControl_RootInfo__Remove(mapControlRootInfo, (int32_t)(*p__8__1)[1].klass, 0LL);
      allWarInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allWarInfoList;
      v116 = *p__8__1;
      v117 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v117,
        v116,
        Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_WarInfo___ctor__);
      if ( !allWarInfoList )
        sub_B52A5C(v118, v119);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v117,
                (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v121 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v122 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allWarInfoList;
        if ( !v122 )
          sub_B52A5C(0LL, v121);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          v122,
          v121,
          (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      if ( !*p__8__1 )
        sub_B52A5C(Index, v121);
      v123 = _4__this->fields.mapControlRootInfo;
      if ( !v123 )
        sub_B52A5C(0LL, v121);
      v124 = (System_Int32_array **)MapControl_RootInfo__AddChild(v123, (int32_t)(*p__8__1)[1].klass, 0LL);
      v8->fields._warInfo_5__13 = (struct MapControl_WarInfo_o *)v124;
      p_warInfo_5__13 = &v8->fields._warInfo_5__13;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._warInfo_5__13, v124, v126, v127, v128, v129, v130, v131);
      warInfo_5__13 = v8->fields._warInfo_5__13;
      if ( !warInfo_5__13 )
        sub_B52A5C(0LL, v132);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__13, 0LL) )
      {
        if ( !*p_warInfo_5__13 )
          sub_B52A5C(0LL, v134);
        EventId = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
        if ( !v63 )
          sub_B52A5C(EventId, v136);
        v137 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v63,
                 &entity,
                 EventId,
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v137 )
        {
          if ( !entity )
            sub_B52A5C(v137, v134);
          if ( Time >= *(_QWORD *)&entity->fields.startType && Time < (__int64)entity->fields.coordinate )
          {
            if ( !*p_warInfo_5__13 )
              sub_B52A5C(0LL, v134);
            MapControl_WarInfo__SetStatusCheckFlag(*p_warInfo_5__13, 1, 0, 0LL);
          }
          if ( !*p_warInfo_5__13 )
            sub_B52A5C(0LL, v134);
          v139 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
          if ( !v668 )
            sub_B52A5C(0LL, v138);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v668,
                 &v676,
                 v139,
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v676 )
              sub_B52A5C(0LL, v140);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v676, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_B52A5C(0LL, v141);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, Time, 0LL) )
              {
                if ( !*p_warInfo_5__13 )
                  sub_B52A5C(0LL, v142);
                v143 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                if ( !v667 )
                  sub_B52A5C(0LL, v143);
                NowEntity = EventStatusMaster__getNowEntity(v667, v143, 0LL);
                if ( NowEntity )
                {
                  if ( !*p_warInfo_5__13 )
                    sub_B52A5C(0LL, v144);
                  v146 = (unsigned int)MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                  if ( !v666 )
                    sub_B52A5C(0LL, v146);
                  MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                     v666,
                                                                                     v146,
                                                                                     NowEntity->fields.statusId,
                                                                                     0LL);
                  if ( !*p__8__1 )
                    sub_B52A5C(MismatchQuestList, v148);
                  if ( !*p_eventStatusQuestMismatchDictionary_5__10 )
                    sub_B52A5C(0LL, v148);
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    *p_eventStatusQuestMismatchDictionary_5__10,
                    (int32_t)(*p__8__1)[1].klass,
                    MismatchQuestList,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v149 = (System_Int64_array *)sub_B5299C(long___TypeInfo, 3LL);
          if ( !entity )
            sub_B52A5C(v149, v150);
          if ( !v149 )
            sub_B52A5C(0LL, v150);
          max_length = v149->max_length;
          if ( !max_length )
          {
            v449 = sub_B52A88(v149);
            sub_B52A28(v449, 0LL);
          }
          v149->m_Items[0] = *(_QWORD *)&entity->fields.startType;
          if ( !entity )
            sub_B52A5C(v149, v150);
          if ( max_length <= 1 )
          {
            v450 = sub_B52A88(v149);
            sub_B52A28(v450, 0LL);
          }
          v149->m_Items[1] = entity->fields.targetId;
          if ( !entity )
            sub_B52A5C(v149, v150);
          if ( max_length <= 2 )
          {
            v451 = sub_B52A88(v149);
            sub_B52A28(v451, 0LL);
          }
          v149->m_Items[2] = (int64_t)entity->fields.coordinate;
          QuestTree__UpdateForceUpdateTime(_4__this, Time, v149, 0LL);
        }
      }
      v152 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
      if ( !v152 )
        sub_B52A5C(0LL, v134);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v152,
        (EventMissionProgressRequest_Argument_ProgressData_o *)*p_warInfo_5__13,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
      if ( !*p_warInfo_5__13 )
        sub_B52A5C(v153, v154);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B52A5C(v153, v154);
      List = (System_Int32_array **)MapMaster__getList(
                                      MasterData_WarQuestSelectionMaster,
                                      (*p_warInfo_5__13)->fields.warId,
                                      0LL);
      v8->fields._mapList_5__14 = (struct MapEntity_array *)List;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapList_5__14, List, v156, v157, v158, v159, v160, v161);
      mapList_5__14 = v8->fields._mapList_5__14;
      v8->fields._mapIdx_5__11 = 0;
      if ( !mapList_5__14 )
        sub_B52A5C(v162, v163);
      mapCount_5__12 = mapList_5__14->max_length;
      v166 = 0;
      v8->fields._mapCount_5__12 = mapCount_5__12;
      goto LABEL_72;
    case 1:
      _8__1 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !_8__1 )
        sub_B52A5C(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_B52A5C(0LL, method);
      v272 = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0LL);
      v274 = v272;
      if ( !v272 )
        sub_B52A5C(0LL, v273);
      v275 = v272->max_length;
      if ( v275 >= 1 )
      {
        v276 = 0LL;
        do
        {
          v277 = sub_B52A54(QuestTree___c__DisplayClass40_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v277, 0LL);
          if ( (unsigned int)v276 >= v274->max_length )
          {
            v445 = sub_B52A88(v278);
            sub_B52A28(v445, 0LL);
          }
          v280 = v274->m_Items[v276];
          if ( !v280 )
            sub_B52A5C(v278, v279);
          if ( !v277 )
            sub_B52A5C(v278, v279);
          *(_DWORD *)(v277 + 16) = v280->fields.id;
          if ( !_4__this )
            sub_B52A5C(v278, v279);
          allSpotRoadInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotRoadInfoList;
          v282 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v282,
            (Il2CppObject *)v277,
            Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
          if ( !allSpotRoadInfoList )
            sub_B52A5C(v283, v284);
          v285 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v282,
                   (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v286 = v285;
          if ( v285 != -1 )
          {
            v287 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v287 )
              sub_B52A5C(0LL, v286);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v287,
              v286,
              (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__15 = v8->fields._mapInfo_5__15;
          if ( !mapInfo_5__15 )
            sub_B52A5C(0LL, v286);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__15, *(_DWORD *)(v277 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v280, &spotRoadInfo, 0LL);
          v290 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v290 )
            sub_B52A5C(0LL, v289);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v290,
            (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
          ++v276;
        }
        while ( (int)v276 < v275 );
      }
      v291 = v8->fields.__8__1;
      if ( !v291 )
        sub_B52A5C(v272, v273);
      mapGimmickMaster_5__8 = v8->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_B52A5C(0LL, v273);
      v293 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v291->fields.mapId, 0LL);
      v301 = v293;
      if ( !v293 )
        sub_B52A5C(0LL, v294);
      v302 = v293->max_length;
      if ( v302 >= 1 )
      {
        v303 = 0LL;
        do
        {
          v304 = sub_B52A54(QuestTree___c__DisplayClass40_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v304, 0LL);
          if ( (unsigned int)v303 >= v301->max_length )
          {
            v447 = sub_B52A88(v305);
            sub_B52A28(v447, 0LL);
          }
          v307 = v301->m_Items[v303];
          if ( !v307 )
            sub_B52A5C(v305, v306);
          if ( !v304 )
            sub_B52A5C(v305, v306);
          *(_DWORD *)(v304 + 16) = v307->fields.id;
          if ( !_4__this )
            sub_B52A5C(v305, v306);
          allMapGimmickInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapGimmickInfoList;
          v309 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v309,
            (Il2CppObject *)v304,
            Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
          if ( !allMapGimmickInfoList )
            sub_B52A5C(v310, v311);
          v312 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v309,
                   (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v313 = v312;
          if ( v312 != -1 )
          {
            v314 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v314 )
              sub_B52A5C(0LL, v313);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v314,
              v313,
              (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v315 = v8->fields._mapInfo_5__15;
          if ( !v315 )
            sub_B52A5C(0LL, v313);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v315, *(_DWORD *)(v304 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v317 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v317 )
            sub_B52A5C(0LL, v316);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v317,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
          ++v303;
        }
        while ( (int)v303 < v302 );
      }
      v8->fields.__2__current = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.__2__current, 0LL, v295, v296, v297, v298, v299, v300);
      v318 = 2;
      goto LABEL_311;
    case 2:
      v8->fields._mapInfo_5__15 = 0LL;
      v8->fields.__1__state = -1;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapInfo_5__15, 0LL, v2, v3, v4, v5, v6, v7);
      mapCount_5__12 = v8->fields._mapCount_5__12;
      v166 = v8->fields._mapIdx_5__11 + 1;
      v8->fields._mapIdx_5__11 = v166;
LABEL_72:
      if ( v166 < mapCount_5__12 )
      {
        v170 = v8->fields._mapList_5__14;
        if ( !v170 )
          sub_B52A5C(v162, v163);
        if ( v166 >= v170->max_length )
        {
          v448 = sub_B52A88(v162);
          sub_B52A28(v448, 0LL);
        }
        v171 = v170->m_Items[v166];
        if ( !v171 )
          sub_B52A5C(v162, v163);
        v172 = v8->fields.__8__1;
        if ( !v172 )
          sub_B52A5C(v162, v163);
        v172->fields.mapId = v171->fields.id;
        v173 = v8->fields._warInfo_5__13;
        if ( !v173 )
          sub_B52A5C(v162, v163);
        mapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v173->fields.mapInfoList;
        if ( mapInfoList )
        {
          v175 = v8->fields.__8__1;
          if ( !v175 )
            sub_B52A5C(v162, v163);
          _9__3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v175->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              _9__3,
              (Il2CppObject *)v175,
              Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapInfo___ctor__);
            v175->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_B52920(
              (BattleServantConfConponent_o *)&v175->fields.__9__3,
              (System_Int32_array **)_9__3,
              v177,
              v178,
              v179,
              v180,
              v181,
              v182);
          }
          v162 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v163 = (unsigned int)v162;
          if ( (_DWORD)v162 != -1 )
          {
            v183 = v8->fields._warInfo_5__13;
            if ( !v183 )
              sub_B52A5C(v162, (unsigned int)v162);
            v184 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v183->fields.mapInfoList;
            if ( !v184 )
              sub_B52A5C(0LL, v163);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v184,
              v163,
              (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_B52A5C(v162, v163);
        v185 = v8->fields.__8__1;
        if ( !v185 )
          sub_B52A5C(v162, v163);
        allMapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v185->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__4,
            (Il2CppObject *)v185,
            Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_MapInfo___ctor__);
          v185->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_B52920(
            (BattleServantConfConponent_o *)&v185->fields.__9__4,
            (System_Int32_array **)_9__4,
            v188,
            v189,
            v190,
            v191,
            v192,
            v193);
        }
        if ( !allMapInfoList )
          sub_B52A5C(v162, v163);
        v194 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v195 = (unsigned int)v194;
        if ( (_DWORD)v194 != -1 )
        {
          v196 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapInfoList;
          if ( !v196 )
            sub_B52A5C(0LL, v195);
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            v196,
            v195,
            (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v197 = v8->fields.__8__1;
        if ( !v197 )
          sub_B52A5C(v194, v195);
        v198 = v8->fields._warInfo_5__13;
        if ( !v198 )
          sub_B52A5C(0LL, v195);
        v199 = (System_Int32_array **)MapControl_WarInfo__AddChild(v198, v197->fields.mapId, 0LL);
        v8->fields._mapInfo_5__15 = (struct MapControl_MapInfo_o *)v199;
        p_mapInfo_5__15 = (EventMissionProgressRequest_Argument_ProgressData_o **)&v8->fields._mapInfo_5__15;
        sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapInfo_5__15, v199, v200, v201, v202, v203, v204, v205);
        v207 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList;
        if ( !v207 )
          sub_B52A5C(0LL, v206);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v207,
          *p_mapInfo_5__15,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        v210 = v8->fields.__8__1;
        if ( !v210 )
          sub_B52A5C(v208, v209);
        spotMaster_5__3 = v8->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_B52A5C(0LL, v209);
        v212 = SpotMaster__getList(spotMaster_5__3, v210->fields.mapId, 0LL);
        v214 = v212;
        if ( !v212 )
          sub_B52A5C(0LL, v213);
        v215 = v212->max_length;
        if ( v215 >= 1 )
        {
          v216 = 0LL;
          do
          {
            v217 = sub_B52A54(QuestTree___c__DisplayClass40_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v217, 0LL);
            if ( (unsigned int)v216 >= v214->max_length )
            {
              v446 = sub_B52A88(v218);
              sub_B52A28(v446, 0LL);
            }
            v220 = v214->m_Items[v216];
            if ( !v220 )
              sub_B52A5C(v218, v219);
            if ( !v217 )
              sub_B52A5C(v218, v219);
            *(_DWORD *)(v217 + 16) = v220->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotInfoList;
            v222 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v222,
              (Il2CppObject *)v217,
              Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            if ( !allSpotInfoList )
              sub_B52A5C(v223, v224);
            v225 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v222,
                     (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v226 = v225;
            if ( v225 != -1 )
            {
              v227 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotInfoList;
              if ( !v227 )
                sub_B52A5C(0LL, v226);
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v227,
                v226,
                (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            if ( !*p_mapInfo_5__15 )
              sub_B52A5C(0LL, v226);
            spotInfo = MapControl_MapInfo__AddChild(
                         (MapControl_MapInfo_o *)*p_mapInfo_5__15,
                         *(_DWORD *)(v217 + 16),
                         0LL);
            QuestTree__SetupSpotInfo(_4__this, v220, &spotInfo, 0LL);
            v229 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
            if ( !v229 )
              sub_B52A5C(0LL, v228);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v229,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
            ++v216;
          }
          while ( (int)v216 < v215 );
        }
        v230 = (System_Collections_Generic_IEnumerable_TSource__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                      _4__this,
                                                                      v8->fields._mapInfo_5__15,
                                                                      v8->fields._blankEarthSpotMaster_5__4,
                                                                      0LL);
        v231 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v230,
                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v239 = (System_Collections_Generic_IEnumerable_TSource__o *)v231;
        if ( !v231 )
          sub_B52A5C(0LL, v232);
        if ( *(_QWORD *)&v231->max_length )
        {
          v240 = sub_B52A54(QuestTree___c__DisplayClass40_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v240, 0LL);
          v241 = QuestTree___c_TypeInfo;
          if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v241 = QuestTree___c_TypeInfo;
          }
          static_fields = v241->static_fields;
          _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__40_6;
          if ( !_9__40_6 )
          {
            if ( (BYTE3(v241->vtable._0_Equals.methodPtr) & 4) != 0 && !v241->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v241);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v244 = (Il2CppObject *)static_fields->__9;
            _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_6,
              v244,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__,
              (const MethodInfo_2BC9C68 *)Method_System_Func_MapControl_SpotInfo__int___ctor__);
            v245 = QuestTree___c_TypeInfo->static_fields;
            v245->__9__40_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__40_6;
            sub_B52920(
              (BattleServantConfConponent_o *)&v245->__9__40_6,
              (System_Int32_array **)_9__40_6,
              v246,
              v247,
              v248,
              v249,
              v250,
              v251);
          }
          v252 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v239,
                                                                  (System_Func_TSource__TResult__o *)_9__40_6,
                                                                  (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v253 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_38639384(
            v253,
            v252,
            (const MethodInfo_24D9718 *)Method_System_Collections_Generic_HashSet_int___ctor___68488960);
          if ( !v240 )
            sub_B52A5C(v254, v255);
          *(_QWORD *)(v240 + 16) = v253;
          sub_B52920(
            (BattleServantConfConponent_o *)(v240 + 16),
            (System_Int32_array **)v253,
            v256,
            v257,
            v258,
            v259,
            v260,
            v261);
          v262 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v263 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v263,
            (Il2CppObject *)v240,
            Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            (const MethodInfo_2BC90BC *)Method_System_Func_MapControl_SpotInfo__bool___ctor__);
          BasicHelper__RemoveElements_MapControl_SpotInfo_(
            v262,
            (System_Func_T__bool__o *)v263,
            (const MethodInfo_1A4467C *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v265 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
          if ( !v265 )
            sub_B52A5C(0LL, v264);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v265,
            (System_Collections_Generic_IEnumerable_T__o *)v239,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v8->fields.__2__current = 0LL;
        sub_B52920((BattleServantConfConponent_o *)&v8->fields.__2__current, 0LL, v233, v234, v235, v236, v237, v238);
        result = 1;
        v8->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_B52A5C(v162, v163);
      v320 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
      v321 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v321 = QuestTree___c_TypeInfo;
      }
      v322 = v321->static_fields;
      _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v322->__9__40_2;
      if ( !_9__40_2 )
      {
        if ( (BYTE3(v321->vtable._0_Equals.methodPtr) & 4) != 0 && !v321->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v321);
          v322 = QuestTree___c_TypeInfo->static_fields;
        }
        v324 = (Il2CppObject *)v322->__9;
        _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__40_2,
          v324,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__,
          (const MethodInfo_2483370 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
        v325 = QuestTree___c_TypeInfo->static_fields;
        v325->__9__40_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__40_2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v325->__9__40_2,
          (System_Int32_array **)_9__40_2,
          v326,
          v327,
          v328,
          v329,
          v330,
          v331);
      }
      if ( !v320 )
        sub_B52A5C(v321, v163);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v320,
        (System_Comparison_T__o *)_9__40_2,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v8->fields.__8__1 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.__8__1, 0LL, v332, v333, v334, v335, v336, v337);
      v8->fields._warInfo_5__13 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._warInfo_5__13, 0LL, v338, v339, v340, v341, v342, v343);
      v8->fields._mapList_5__14 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapList_5__14, 0LL, v344, v345, v346, v347, v348, v349);
      v350 = (Il2CppObject *)sub_B52A54(QuestTree___c__DisplayClass40_6_TypeInfo);
      System_Object___ctor(v350, 0LL);
      v8->fields.__8__3 = (struct QuestTree___c__DisplayClass40_6_o *)v350;
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields.__8__3,
        (System_Int32_array **)v350,
        v351,
        v352,
        v353,
        v354,
        v355,
        v356);
      v357 = (MapControl_WarInfo_o *)sub_B52A54(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v357, 0LL);
      v8->fields._warInfo_5__13 = v357;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._warInfo_5__13,
        (System_Int32_array **)v357,
        v358,
        v359,
        v360,
        v361,
        v362,
        v363);
      v364 = (MapControl_MapInfo_o *)sub_B52A54(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v364, 0LL);
      v8->fields._mapInfo_5__15 = v364;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._mapInfo_5__15,
        (System_Int32_array **)v364,
        v365,
        v366,
        v367,
        v368,
        v369,
        v370);
      v371 = (MapControl_SpotInfo_o *)sub_B52A54(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v371, 0LL);
      v8->fields._spotInfo_5__16 = v371;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._spotInfo_5__16,
        (System_Int32_array **)v371,
        v372,
        v373,
        v374,
        v375,
        v376,
        v377);
      v378 = (WarEntity_o *)sub_B52A54(WarEntity_TypeInfo);
      WarEntity___ctor(v378, 0LL);
      v8->fields._warEnt_5__17 = v378;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._warEnt_5__17,
        (System_Int32_array **)v378,
        v379,
        v380,
        v381,
        v382,
        v383,
        v384);
      dataManager_5__2 = v8->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_B52A5C(0LL, v385);
      v387 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      dataManager_5__2,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v8->fields._userQuestMaster_5__18 = (struct UserQuestMaster_o *)v387;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._userQuestMaster_5__18,
        v387,
        v388,
        v389,
        v390,
        v391,
        v392,
        v393);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      if ( !*p__8__3 )
        sub_B52A5C(Master_WarQuestSelectionMaster, v395);
      LODWORD((*p__8__3)[1].monitor) = -1;
      *(_QWORD *)&v8->fields._nowMapId_5__19 = -1LL;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
        v396 = 500;
      else
        v396 = 5000;
      v8->fields._breakInterval_5__21 = v396;
      _8__3 = v8->fields.__8__3;
      v398 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v398,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !_8__3 )
        sub_B52A5C(v399, v400);
      _8__3->fields.spotInfoList = v398;
      sub_B52920(
        (BattleServantConfConponent_o *)&_8__3->fields,
        (System_Int32_array **)v398,
        v401,
        v402,
        v403,
        v404,
        v405,
        v406);
      v8->fields._cnt_5__22 = 0;
      p_cnt_5__22 = &v8->fields._cnt_5__22;
      v408 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.allSpotInfoList;
      if ( !v408 )
        sub_B52A5C(0LL, v407);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v670,
        v408,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      p__7__wrap23 = &v8->fields.__7__wrap23;
      v409 = *(_OWORD *)&v670.fields.list;
      v8->fields.__7__wrap23.fields.current = (struct MapControl_SpotInfo_o *)v670.fields.current;
      *(_OWORD *)&v8->fields.__7__wrap23.fields.list = v409;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.__7__wrap23, 0LL, v410, v411, v412, v413, v414, v415);
LABEL_186:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v416 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap23,
                 (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        if ( !v416 )
          break;
        current = v8->fields.__7__wrap23.fields.current;
        ++v8->fields._cnt_5__22;
        if ( !current )
          sub_B52A5C(v416, v417);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_B52A5C(0LL, v420);
        v427 = v8->fields.__8__2;
        if ( !v427 )
          sub_B52A5C(Mine, v420);
        if ( Mine->fields.warId == v427->fields.targetWarId )
        {
          if ( !*p__8__3 )
            sub_B52A5C(Mine, v420);
          klass = (System_Collections_Generic_List_int__o *)(*p__8__3)[1].klass;
          if ( !klass )
            sub_B52A5C(0LL, v420);
          System_Collections_Generic_List_int___Add(
            klass,
            current->fields.spotId,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( !(*p_cnt_5__22 % 300) )
        {
          v8->fields.__2__current = 0LL;
          sub_B52920((BattleServantConfConponent_o *)&v8->fields.__2__current, 0LL, v421, v422, v423, v424, v425, v426);
          v318 = 3;
LABEL_311:
          v8->fields.__1__state = v318;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(v8, v417);
      *(_QWORD *)&p__7__wrap23->fields.index = 0LL;
      p__7__wrap23->fields.current = 0LL;
      p__7__wrap23->fields.list = 0LL;
      questMaster_5__5 = (DataMasterBase_o *)v8->fields._questMaster_5__5;
      if ( !questMaster_5__5 )
        sub_B52A5C(0LL, v429);
      Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                          questMaster_5__5,
                                          (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v432 = *p__8__3;
      v433 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarQuestSelectionEntity;
      v434 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v434,
        v432,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        (const MethodInfo_2BC90BC *)Method_System_Func_QuestEntity__bool___ctor__);
      v435 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v433,
               (System_Func_TSource__bool__o *)v434,
               (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v436 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v435,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v8->fields._questList_5__23 = (struct QuestEntity_array *)v436;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._questList_5__23, v436, v437, v438, v439, v440, v441, v442);
      v8->fields._mapCount_5__12 = 0;
      p_mapCount_5__12 = &v8->fields._mapCount_5__12;
      v443 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields._questList_5__23,
               (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8->fields._mapIdx_5__11 = v443;
      p_mapIdx_5__11 = &v8->fields._mapIdx_5__11;
      v444 = v8->fields._mapCount_5__12;
      break;
    case 3:
      p__7__wrap23 = &v8->fields.__7__wrap23;
      p_cnt_5__22 = &v8->fields._cnt_5__22;
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      goto LABEL_186;
    case 4:
      p_mapCount_5__12 = &v8->fields._mapCount_5__12;
      v167 = v8->fields._mapCount_5__12;
      p_mapIdx_5__11 = &v8->fields._mapIdx_5__11;
      v8->fields.__1__state = -1;
      goto LABEL_432;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_B52A5C(0LL, method);
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v444 < (int)v443 )
  {
    questList_5__23 = v8->fields._questList_5__23;
    if ( !questList_5__23 )
      sub_B52A5C(v443, method);
    if ( v444 >= questList_5__23->max_length )
    {
      v665 = sub_B52A88(v443);
      sub_B52A28(v665, 0LL);
    }
    v453 = questList_5__23->m_Items[v444];
    if ( !v453 )
      sub_B52A5C(v443, method);
    v454 = v8->fields.__8__3;
    if ( !v454 )
      sub_B52A5C(v443, method);
    v454->fields.questId = v453->fields.id;
    userQuestMaster_5__18 = v8->fields._userQuestMaster_5__18;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v458 = v8->fields.__8__3;
    if ( !v458 )
      sub_B52A5C(UserId, v457);
    if ( !userQuestMaster_5__18 )
      sub_B52A5C(UserId, v457);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__18, &v672, UserId, v458->fields.questId, 0LL) )
    {
      if ( !v672 )
        sub_B52A5C(0LL, v459);
      QuestPhase = UserQuestEntity__getQuestPhase(v672, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_25289156 = (MapEntity_o *)QuestEntity__getSpotId_25289156(v453, QuestPhase + 1, 0LL);
    v463 = v8->fields.__8__3;
    if ( !v463 )
      sub_B52A5C(SpotId_25289156, warId);
    if ( v463->fields.nowSpotId == (_DWORD)SpotId_25289156 )
    {
      if ( !_4__this )
        sub_B52A5C(SpotId_25289156, warId);
    }
    else
    {
      v463->fields.nowSpotId = (int)SpotId_25289156;
      if ( !_4__this )
        sub_B52A5C(SpotId_25289156, warId);
      v464 = v8->fields.__8__3;
      if ( !v464 )
        sub_B52A5C(SpotId_25289156, warId);
      v465 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v464->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__12,
          (Il2CppObject *)v464,
          Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v464->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_B52920(
          (BattleServantConfConponent_o *)&v464->fields.__9__12,
          (System_Int32_array **)_9__12,
          v467,
          v468,
          v469,
          v470,
          v471,
          v472);
      }
      if ( !v465 )
        sub_B52A5C(SpotId_25289156, warId);
      v473 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v465,
                                      (System_Predicate_T__o *)_9__12,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v8->fields._spotInfo_5__16 = (struct MapControl_SpotInfo_o *)v473;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._spotInfo_5__16, v473, v474, v475, v476, v477, v478, v479);
      spotInfo_5__16 = v8->fields._spotInfo_5__16;
      if ( !spotInfo_5__16 )
        sub_B52A5C(0LL, v480);
      SpotId_25289156 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__16, 0LL);
      warId = (unsigned int)SpotId_25289156;
      if ( v8->fields._nowMapId_5__19 != (_DWORD)SpotId_25289156 )
      {
        v8->fields._nowMapId_5__19 = (int)SpotId_25289156;
        MapInfoByMapID = (System_Int32_array **)QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_25289156, 0LL);
        v8->fields._mapInfo_5__15 = (struct MapControl_MapInfo_o *)MapInfoByMapID;
        sub_B52920(
          (BattleServantConfConponent_o *)&v8->fields._mapInfo_5__15,
          MapInfoByMapID,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488);
        v490 = v8->fields._mapInfo_5__15;
        if ( !v490 )
          sub_B52A5C(0LL, v489);
        SpotId_25289156 = MapControl_MapInfo__GetMine(v490, 0LL);
        if ( !SpotId_25289156 )
          sub_B52A5C(0LL, v491);
        warId = (unsigned int)SpotId_25289156->fields.warId;
        if ( v8->fields._nowWarId_5__20 != (_DWORD)warId )
        {
          v8->fields._nowWarId_5__20 = warId;
          WarInfoByWarID = (System_Int32_array **)QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v8->fields._warInfo_5__13 = (struct MapControl_WarInfo_o *)WarInfoByWarID;
          sub_B52920(
            (BattleServantConfConponent_o *)&v8->fields._warInfo_5__13,
            WarInfoByWarID,
            v493,
            v494,
            v495,
            v496,
            v497,
            v498);
          v500 = v8->fields._warInfo_5__13;
          if ( !v500 )
            sub_B52A5C(0LL, v499);
          v501 = (System_Int32_array **)MapControl_WarInfo__GetMine(v500, 0LL);
          v8->fields._warEnt_5__17 = (struct WarEntity_o *)v501;
          sub_B52920(
            (BattleServantConfConponent_o *)&v8->fields._warEnt_5__17,
            v501,
            v502,
            v503,
            v504,
            v505,
            v506,
            v507);
        }
      }
    }
    v508 = v8->fields.__8__3;
    if ( !v508 )
      sub_B52A5C(SpotId_25289156, warId);
    allQuestInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v508->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13,
        (Il2CppObject *)v508,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_MapControl_QuestInfo___ctor__);
      v508->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_B52920(
        (BattleServantConfConponent_o *)&v508->fields.__9__13,
        (System_Int32_array **)_9__13,
        v511,
        v512,
        v513,
        v514,
        v515,
        v516);
    }
    if ( !allQuestInfoList )
      sub_B52A5C(SpotId_25289156, warId);
    v517 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v518 = v517;
    if ( v517 != -1 )
    {
      v519 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allQuestInfoList;
      if ( !v519 )
        sub_B52A5C(0LL, v518);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v519,
        v518,
        (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v520 = v8->fields._warInfo_5__13;
    if ( !v672 )
    {
      if ( !v520 )
        sub_B52A5C(0LL, v518);
      goto LABEL_358;
    }
    if ( !v520 )
      sub_B52A5C(0LL, v518);
    MapControl_WarInfo__SetStatusCheckFlag(v520, 1, 0, 0LL);
    if ( !v672 )
      sub_B52A5C(0LL, v521);
    HasStatus = UserQuestEntity__HasStatus(v672, 8, 0LL);
    if ( !HasStatus )
    {
      v524 = v8->fields._warInfo_5__13;
      if ( !v524 )
        sub_B52A5C(0LL, v523);
      goto LABEL_360;
    }
    if ( !v672 )
      sub_B52A5C(HasStatus, v523);
    if ( v672->fields.challengeNum >= 1 )
    {
      v524 = v8->fields._warInfo_5__13;
      if ( !v524 )
        sub_B52A5C(0LL, v523);
LABEL_360:
      MapControl_WarInfo__SetStatusCheckFlag(v524, 4, 0, 0LL);
    }
    if ( !v672 )
      sub_B52A5C(0LL, v523);
    ClearNum = UserQuestEntity__getClearNum(v672, 0LL);
    v520 = v8->fields._warInfo_5__13;
    if ( ClearNum < 1 )
    {
      if ( !v520 )
        sub_B52A5C(0LL, v528);
LABEL_358:
      MapControl_WarInfo__SetStatusCheckFlag(v520, 2, 0, 0LL);
      v527 = 0;
      goto LABEL_372;
    }
    if ( !v520 )
      sub_B52A5C(0LL, v528);
    v525 = MapControl_WarInfo__GetMine(v520, 0LL);
    if ( !v525 )
      sub_B52A5C(0LL, v526);
    v530 = v8->fields.__8__3;
    if ( !v530 )
      sub_B52A5C(v525, v526);
    if ( v525->fields.lastQuestId == v530->fields.questId )
    {
      v531 = v8->fields._warInfo_5__13;
      if ( !v531 )
        sub_B52A5C(0LL, v526);
      v527 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v531, 8, 1, 0LL);
    }
    else
    {
      v527 = 1;
    }
LABEL_372:
    v532 = v8->fields.__8__3;
    if ( !v532 )
      sub_B52A5C(v525, v526);
    v533 = v8->fields._spotInfo_5__16;
    if ( !v533 )
      sub_B52A5C(0LL, v526);
    v534 = MapControl_SpotInfo__AddChild(v533, v532->fields.questId, 0LL);
    v542 = v8->fields._warInfo_5__13;
    if ( !v542 )
      sub_B52A5C(v534, v535);
    v543 = v534;
    if ( !v534 )
      sub_B52A5C(0LL, v535);
    v534->fields.warId = v542->fields.warId;
    v544 = (System_Int32_array **)v8->fields._warInfo_5__13;
    v534->fields._WarInfo_k__BackingField = (struct MapControl_WarInfo_o *)v544;
    sub_B52920(
      (BattleServantConfConponent_o *)&v534->fields._WarInfo_k__BackingField,
      v544,
      v536,
      v537,
      v538,
      v539,
      v540,
      v541);
    v545 = (System_Int32_array **)v8->fields._spotInfo_5__16;
    v543->fields._SpotInfo_k__BackingField = (struct MapControl_SpotInfo_o *)v545;
    sub_B52920(
      (BattleServantConfConponent_o *)&v543->fields._SpotInfo_k__BackingField,
      v545,
      v546,
      v547,
      v548,
      v549,
      v550,
      v551);
    v543->fields.endTime = QuestTree__GetEndTime(_4__this, v543, 0LL);
    warEnt_5__17 = v8->fields._warEnt_5__17;
    if ( !warEnt_5__17 )
      sub_B52A5C(0LL, v552);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__17, 0LL);
    if ( IsStartTypeQuest )
    {
      v556 = v8->fields._warEnt_5__17;
      if ( !v556 )
        sub_B52A5C(IsStartTypeQuest, v555);
      v557 = v8->fields.__8__3;
      if ( !v557 )
        sub_B52A5C(IsStartTypeQuest, v555);
      if ( v556->fields.targetId == v557->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v8->fields._warEnt_5__17, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_391;
      }
    }
    v558 = v8->fields._warEnt_5__17;
    if ( !v558 )
      sub_B52A5C(IsStartTypeQuest, v555);
    eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v8->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !eventStatusQuestMismatchDictionary_5__10 )
      sub_B52A5C(0LL, v555);
    v560 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             eventStatusQuestMismatchDictionary_5__10,
             v558->fields.id,
             &value,
             (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v560 )
    {
      v562 = v8->fields.__8__3;
      if ( !v562 )
        sub_B52A5C(v560, v561);
      if ( !value )
        sub_B52A5C(0LL, v561);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v562->fields.questId,
             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_391:
        MapControl_QuestInfo__SetDispType(v543, 0, 0, 0, 0LL, 0, 0LL);
        v543->fields.touchType = 0;
LABEL_392:
        v565 = 1;
        goto LABEL_393;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v453, v543, v8->fields._nowWarId_5__20, 0LL) != 1 )
      goto LABEL_392;
    v564 = v8->fields._warInfo_5__13;
    if ( !v564 )
      sub_B52A5C(0LL, v563);
    MapControl_WarInfo__SetStatusCheckFlag(v564, 1, 0, 0LL);
    v565 = 0;
LABEL_393:
    if ( MapControl_QuestInfo__IsDisaplayable(v543, 0LL) )
    {
      if ( ((v527 | v565) & 1) == 0 )
      {
        v567 = v8->fields._spotInfo_5__16;
        if ( !v567 )
          sub_B52A5C(0LL, v566);
        MapControl_SpotInfo__AddQuestCount(v567, 1, 0LL);
        v569 = v8->fields._spotInfo_5__16;
        if ( !v569 )
          sub_B52A5C(0LL, v568);
        MapControl_SpotInfo__AddAvailableQuestId(v569, v543->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v543, 0LL) == 1 )
      {
        v570 = MapControl_QuestInfo__GetMine(v543, 0LL);
        if ( !v570 )
          sub_B52A5C(0LL, v571);
        HasFlag = QuestEntity__HasFlag(v570, 0x400000000000LL, 0LL);
        if ( !HasFlag )
        {
          v574 = v8->fields._spotInfo_5__16;
          if ( !v574 )
            sub_B52A5C(HasFlag, v573);
          v574->fields._IsNext_k__BackingField = 1;
        }
        v575 = v8->fields._mapInfo_5__15;
        if ( !v575 )
          sub_B52A5C(HasFlag, v573);
        v575->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v543, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v578 = v8->fields._spotInfo_5__16;
        if ( !v578 )
          sub_B52A5C(IsDisplayQuestNextIcon, v577);
        v578->fields._IsNext_k__BackingField = 1;
        v579 = v8->fields._mapInfo_5__15;
        if ( !v579 )
          sub_B52A5C(IsDisplayQuestNextIcon, v577);
        v579->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v453, 0x8000000000LL, 0LL) )
      {
        v580 = v8->fields._spotInfo_5__16;
        if ( !v580 )
          sub_B52A5C(0LL, v566);
        MapControl_SpotInfo__AddFreeQuestCount(v580, 1, 0LL);
      }
    }
    v581 = v672;
    if ( v672 )
    {
      v581 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v672, 8, 0LL);
      if ( ((unsigned __int8)v581 & 1) != 0 )
      {
        if ( !v672 )
          sub_B52A5C(v581, v566);
        v582 = v672->fields.challengeNum == 0;
      }
      else
      {
        v582 = 0;
      }
    }
    else
    {
      v582 = 1;
    }
    v543->fields.isNew = v582;
    v543->fields.questPhase = QuestPhase;
    v583 = v8->fields.__8__3;
    if ( !v583 )
      sub_B52A5C(v581, v566);
    questPickupMaster_5__9 = v8->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_B52A5C(0LL, v566);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v583->fields.questId, 0LL);
    v543->fields.pickupPriority = Priority;
    v587 = v8->fields.__8__3;
    if ( !v587 )
      sub_B52A5C(Priority, v586);
    questPhaseMaster_5__6 = v8->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_B52A5C(0LL, v586);
    v589 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v587->fields.questId, 0LL);
    v591 = v589;
    if ( !v589 )
      sub_B52A5C(0LL, v590);
    v592 = v589[3];
    if ( (int)v592 >= 1 )
    {
      v593 = 0;
      while ( 1 )
      {
        v594 = v591[(int)v593 + 4];
        if ( !v594 )
          sub_B52A5C(v589, v590);
        v589 = MapControl_QuestInfo__AddChild(v543, *(_DWORD *)(v594 + 16), *(_DWORD *)(v594 + 20), 0LL);
        if ( (int)++v593 >= (int)v592 )
          break;
        if ( v593 >= *((_DWORD *)v591 + 6) )
        {
          v595 = sub_B52A88(v589);
          sub_B52A28(v595, 0LL);
        }
      }
    }
    v596 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !v596 )
      sub_B52A5C(0LL, v590);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v596,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v543,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    v167 = v8->fields._mapCount_5__12;
    if ( v167 && !(v167 % v8->fields._breakInterval_5__21) )
    {
      v8->fields.__2__current = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.__2__current, 0LL, v597, v598, v599, v600, v601, v602);
      v318 = 4;
      goto LABEL_311;
    }
LABEL_432:
    v444 = v167 + 1;
    *p_mapCount_5__12 = v444;
    v443 = (unsigned int)*p_mapIdx_5__11;
  }
  if ( !_4__this )
    sub_B52A5C(v443, method);
  v603 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v604 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v604 = QuestTree___c_TypeInfo;
  }
  v605 = v604->static_fields;
  _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v605->__9__40_11;
  if ( !_9__40_11 )
  {
    if ( (BYTE3(v604->vtable._0_Equals.methodPtr) & 4) != 0 && !v604->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v604);
      v605 = QuestTree___c_TypeInfo->static_fields;
    }
    v607 = (Il2CppObject *)v605->__9;
    _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__40_11,
      v607,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v608 = QuestTree___c_TypeInfo->static_fields;
    v608->__9__40_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__40_11;
    sub_B52920(
      (BattleServantConfConponent_o *)&v608->__9__40_11,
      (System_Int32_array **)_9__40_11,
      v609,
      v610,
      v611,
      v612,
      v613,
      v614);
  }
  if ( !v603 )
    sub_B52A5C(v604, method);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v603,
    (System_Comparison_T__o *)_9__40_11,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v8->fields.__8__3 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.__8__3, 0LL, v615, v616, v617, v618, v619, v620);
  v8->fields._warInfo_5__13 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields._warInfo_5__13, 0LL, v621, v622, v623, v624, v625, v626);
  v8->fields._mapInfo_5__15 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields._mapInfo_5__15, 0LL, v627, v628, v629, v630, v631, v632);
  v8->fields._spotInfo_5__16 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields._spotInfo_5__16, 0LL, v633, v634, v635, v636, v637, v638);
  v8->fields._warEnt_5__17 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields._warEnt_5__17, 0LL, v639, v640, v641, v642, v643, v644);
  v8->fields._userQuestMaster_5__18 = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&v8->fields._userQuestMaster_5__18,
    0LL,
    v645,
    v646,
    v647,
    v648,
    v649,
    v650);
  v8->fields._questList_5__23 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields._questList_5__23, 0LL, v651, v652, v653, v654, v655, v656);
  v657 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v657 )
    sub_B52A5C(0LL, v658);
  CommonUI__SetLoadMode(v657, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v8->fields.endCallback )
  {
    v8->fields.__2__current = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v8->fields.__2__current, 0LL, v659, v660, v661, v662, v663, v664);
    v318 = 5;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  if ( (byte_42AF291 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_42AF291 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap23,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}