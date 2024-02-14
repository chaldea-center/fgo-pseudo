void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  MapControl_RootInfo_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_4212EE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v16);
    sub_B0D8A4(&MapControl_RootInfo_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree___ctor__, v18);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v19);
    byte_4212EE3 = 1;
  }
  v20 = (MapControl_RootInfo_o *)sub_B0D974(MapControl_RootInfo_TypeInfo, method, v2);
  MapControl_RootInfo___ctor(v20, 0LL);
  this->fields.mapControlRootInfo = v20;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allQuestInfoList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allSpotInfoList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v47;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allSpotRoadInfoList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo,
                                                                                                  v54,
                                                                                                  v55);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v56;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allMapGimmickInfoList,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_MapInfo__TypeInfo,
                                                                                                  v63,
                                                                                                  v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allMapInfoList,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                                                                  v72,
                                                                                                  v73);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v74;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allWarInfoList,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v81,
                                                                                                  v82);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v83;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questReleaseEntList,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_21490032(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_21487076(
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
  int64_t v11; // x21
  MapGimmickEntity_o *v12; // x20
  MapGimmickReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v14; // x3
  int v15; // w8
  __int64 v16; // x0

  if ( (byte_4212EE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_B0D8A4(&long___TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4212EE0 = 1;
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
    v11 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v12 = Mine;
    Time = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapGimmickReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Time,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_B0D8BC(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_22;
    v15 = *(_DWORD *)(Time + 24);
    if ( !v15 || (*(_QWORD *)(Time + 32) = v12->fields.startedAt, v15 == 1) )
    {
      v16 = sub_B0D9A8(Time);
      sub_B0D948(v16, 0LL);
    }
    *(_QWORD *)(Time + 40) = v12->fields.endedAt;
    QuestTree__UpdateForceUpdateTime(this, v11, (System_Int64_array *)Time, v14);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_22:
      sub_B0D97C(Time);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v12, 0LL)
                && MapGimmickEntity__IsEnableTime(v12, v11, 0LL);
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
  bool v18; // w24
  int64_t Time; // x23
  System_Int64_array *v20; // x25
  const MethodInfo *v21; // x3
  int32_t v22; // w22
  _BOOL4 v23; // w21
  bool HasFlag; // w0
  WarEntity_o *IsShop; // x0
  const MethodInfo *v26; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantLimitImageMaster_o *v28; // x21
  int32_t id; // w23
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v32; // w8
  MapControl_QuestInfo_o *v33; // x0
  int32_t v34; // w1
  int32_t type; // w2
  int32_t targetId; // w3
  int64_t value; // x4
  int32_t closedMessageId; // w5
  __int64 v40; // x0
  UserQuestEntity_o *v41; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4212EDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&long___TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_4212EDC = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v41 = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_67;
  v18 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
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
  v20 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v20 )
    goto LABEL_67;
  if ( !v20->max_length
    || (v20->m_Items[0] = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL), v20->max_length <= 1)
    || (v20->m_Items[1] = NoticeAt, NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL), v20->max_length <= 2) )
  {
    v40 = sub_B0D9A8(NoticeAt);
    sub_B0D948(v40, 0LL);
  }
  v20->m_Items[2] = NoticeAt;
  QuestTree__UpdateForceUpdateTime(v8, Time, v20, v21);
  v22 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_13;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v22 = 3;
  else
    v22 = 1;
  if ( v18 || HasFlag )
  {
    v23 = !HasFlag;
    goto LABEL_52;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_67;
    NoticeAt = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_67;
    IsShop = (WarEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)NoticeAt,
                              &entity,
                              warId,
                              (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_67;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)NoticeAt,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                   &v41,
                   NoticeAt,
                   questEnt->fields.id,
                   0LL) )
            {
              NoticeAt = (int64_t)v41;
              if ( !v41 )
                goto LABEL_67;
              if ( UserQuestEntity__HasStatus(v41, 8, 0LL) )
                goto LABEL_51;
            }
LABEL_41:
            v23 = 0;
            v22 = 0;
            goto LABEL_52;
          }
        }
      }
    }
    NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v26);
    if ( !NoticeAt )
      goto LABEL_67;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
      || questEnt->fields.afterClear != 5 )
    {
      goto LABEL_41;
    }
LABEL_51:
    v23 = 0;
    v22 = 2;
    goto LABEL_52;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NoticeAt = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_51;
  v28 = (ServantLimitImageMaster_o *)NoticeAt;
  if ( !NoticeAt )
    goto LABEL_67;
  id = questEnt->fields.id;
  v22 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)NoticeAt, id, 0LL) )
  {
LABEL_13:
    v23 = 0;
    goto LABEL_52;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v28, id, 0LL);
  v23 = 0;
  if ( IsCommonReleaseMultiClear )
    v22 = 0;
  else
    v22 = 2;
LABEL_52:
  forceOperation = questEnt->fields.forceOperation;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v32 = 1;
  else
    v32 = forceOperation;
  if ( v32 )
  {
    v22 = v32 != 2;
    v23 = v22;
    goto LABEL_60;
  }
  if ( v22 == 2 && questReleaseNG )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v34 = 2;
      v22 = 2;
      v33 = questInfo;
      goto LABEL_62;
    }
LABEL_67:
    sub_B0D97C(NoticeAt);
  }
LABEL_60:
  if ( !questInfo )
    goto LABEL_67;
  v33 = questInfo;
  v34 = v22;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_62:
  MapControl_QuestInfo__SetDispType(v33, v34, type, targetId, value, closedMessageId, 0LL);
  questInfo->fields.touchType = v23;
  return v22;
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

  return QuestTree__CheckSpotCond_21490032(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_21490032(
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
  const MethodInfo *v43; // x1
  __int64 v44; // x8
  int64_t v45; // x20
  int32_t v46; // w22
  unsigned __int64 v47; // x24
  int32_t v48; // w21
  const MethodInfo *v49; // x1
  __int64 v50; // x8
  int64_t v51; // x20
  int32_t v52; // w22
  unsigned __int64 v53; // x24
  int32_t v54; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w8
  const MethodInfo *v57; // x1
  __int64 v58; // x8
  int64_t v59; // x20
  unsigned __int64 v60; // x24
  int32_t v61; // w21
  int v62; // w21
  int v63; // w20
  int32_t v64; // w0
  int32_t v65; // w8
  bool v66; // cc
  int32_t v67; // w8
  __int64 v69; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4212EDF & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v22);
    byte_4212EDF = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v23);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
    byte_421083D = 1;
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
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v35 = **(_QWORD **)(v34 + 192);
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AA65A4(v35);
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
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v32 = 0;
      goto LABEL_53;
    }
LABEL_205:
    sub_B0D97C(Instance);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v44 = *(_QWORD *)(Instance + 24);
      v45 = Instance;
      if ( (int)v44 >= 1 )
      {
        v46 = 0;
        v47 = 0LL;
        while ( v47 < (unsigned int)v44 )
        {
          v48 = *(_DWORD *)(v45 + 32 + 4 * v47);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v43);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v48, IsExistCommand, 0LL);
          LODWORD(v44) = *(_DWORD *)(v45 + 24);
          ++v47;
          v46 += Instance & 1;
          if ( (__int64)v47 >= (int)v44 )
            goto LABEL_195;
        }
        goto LABEL_206;
      }
      v46 = 0;
LABEL_195:
      if ( targetValue <= 1 )
        v67 = 1;
      else
        v67 = targetValue;
      LOBYTE(v24) = v46 < v67;
      return (unsigned __int8)v24 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v50 = *(_QWORD *)(Instance + 24);
      v51 = Instance;
      if ( (int)v50 < 1 )
        goto LABEL_177;
      v52 = 0;
      v53 = 0LL;
      while ( v53 < (unsigned int)v50 )
      {
        v54 = *(_DWORD *)(v51 + 32 + 4 * v53);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v49);
        if ( !Instance )
          goto LABEL_205;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v54, IsExistCommand, 0LL);
        LODWORD(v50) = *(_DWORD *)(v51 + 24);
        ++v53;
        v52 += Instance & 1;
        if ( (__int64)v53 >= (int)v50 )
          goto LABEL_178;
      }
      goto LABEL_206;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      v66 = num < targetValue;
LABEL_188:
      LOBYTE(v24) = !v66;
      return (unsigned __int8)v24 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_205;
      LOBYTE(v24) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_205;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_205;
      v58 = *(_QWORD *)(Instance + 24);
      v59 = Instance;
      if ( (int)v58 >= 1 )
      {
        v52 = 0;
        v60 = 0LL;
        while ( v60 < (unsigned int)v58 )
        {
          v61 = *(_DWORD *)(v59 + 32 + 4 * v60);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v57);
          if ( !Instance )
            goto LABEL_205;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v61, IsExistCommand, 0LL);
          LODWORD(v58) = *(_DWORD *)(v59 + 24);
          ++v60;
          v52 += Instance & 1;
          if ( (__int64)v60 >= (int)v58 )
            goto LABEL_178;
        }
LABEL_206:
        v69 = sub_B0D9A8(Instance);
        sub_B0D948(v69, 0LL);
      }
LABEL_177:
      v52 = 0;
LABEL_178:
      if ( targetValue <= 1 )
        v65 = 1;
      else
        v65 = targetValue;
      v66 = v52 < v65;
      goto LABEL_188;
    case 12:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 13:
      v62 = targetId / 100;
      v63 = targetId % 100;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventRaceGoalScriptPlayed(v62, v63, targetValue, 0LL);
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
      v64 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v64 & 0x80000000) != 0 )
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
        LOBYTE(v24) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v64, 1, 0LL);
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

  return QuestTree__CheckSpotCond_21490032(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4212EDA & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo, mapInfo);
    byte_4212EDA = 1;
  }
  v7 = sub_B0D974(QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo, mapInfo, blankEarthSpotMaster);
  QuestTree__EnumerateBlankEarthSpotInfo_d__41___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 72) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 72), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)mapInfo, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 64),
    (System_Int32_array **)blankEarthSpotMaster,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v23; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  QuestEntity_o *v27; // x0
  QuestEntity_o *Mine; // x0
  int v29; // w21
  int64_t v30; // x20
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4212EDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_4212EDD = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !questInfo )
    goto LABEL_38;
  questId = questInfo->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_30578992((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_38:
    sub_B0D97C(this);
  }
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_questReleaseEntList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v33 = v32;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B0D97C(v18);
    klass_high = HIDWORD(v33.fields.current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_WarQuestSelectionMaster )
          sub_B0D97C(v18);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   Master_WarQuestSelectionMaster,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_B0D97C(FirstEntityFromQuestId);
          Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v23 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v23, 1, 0LL);
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
          sub_B0D97C(0LL);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_28;
      case 13:
        v27 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v27 )
          sub_B0D97C(0LL);
        EndTime = QuestEntity__GetEndTime(v27, 1, 0LL);
        goto LABEL_28;
      case 166:
        v25 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v25, v25, (QuestReleaseEntity_o *)current, v26);
        goto LABEL_28;
      default:
LABEL_29:
        if ( v17 >= 1 )
        {
          v29 = 3;
          v30 = v17;
          goto LABEL_32;
        }
        break;
    }
  }
  v30 = 0LL;
  v29 = 1;
LABEL_32:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v29 + 1) >> 2 )
    return v30;
  return v17;
}


int64_t __fastcall QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t v7; // x22
  int64_t v8; // x21
  int64_t Time_25503776; // x0
  int64_t value; // x22
  int64_t v11; // x21
  unsigned int v12; // w25
  int64_t v13; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_4212EDE & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, questEnt);
    byte_4212EDE = 1;
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
  v7 = Time;
  v8 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v8;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v8 = 0LL;
  if ( v7 > Time )
    return v8;
  if ( !questReleaseEnt )
LABEL_28:
    sub_B0D97C(Time);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v16.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_25503776 = NetworkManager__getTime_25503776(v16, 0LL);
  value = questReleaseEnt->fields.value;
  v11 = Time_25503776;
  dateData = NetworkManager__getDateTime_25504560(Time_25503776 - 3600 * value, 0LL).fields.dateData;
  v17.fields.dateData = (uint64_t)&dateData;
  if ( ((1 << (System_DateTime__get_DayOfWeek(v17, 0LL) + 1)) & questReleaseEnt->fields.targetId) == 0 )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v12 = 0;
  v13 = v11 + 86400 - 3600 * value;
  v8 = NetworkManager__getNextDayStartTime(0LL) + 3600 * questReleaseEnt->fields.value;
  do
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_25504560(v13, 0LL).fields.dateData;
    v18.fields.dateData = (uint64_t)&dateData;
    if ( ((1 << (System_DateTime__get_DayOfWeek(v18, 0LL) + 1)) & questReleaseEnt->fields.targetId) == 0 )
      break;
    ++v12;
    v8 += 86400LL;
    v13 += 86400LL;
  }
  while ( v12 < 6 );
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v8 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v8;
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212ECB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_B0D8A4(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v7);
    sub_B0D8A4(&QuestTree___c__DisplayClass22_0_TypeInfo, v8);
    byte_4212ECB = 1;
  }
  v9 = (QuestTree___c__DisplayClass22_0_o *)sub_B0D974(
                                              QuestTree___c__DisplayClass22_0_TypeInfo,
                                              *(_QWORD *)&mapGimmickId,
                                              method);
  QuestTree___c__DisplayClass22_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = this->fields.allMapGimmickInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__),
        !allMapGimmickInfoList) )
  {
    sub_B0D97C(v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v14,
                                          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t __fastcall QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  int32_t SpotID; // w0
  const MethodInfo *v6; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0LL),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v6)) == 0LL) )
  {
    sub_B0D97C(QuestInfo);
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
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x20
  __int64 v30; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v33; // w28
  QuestTree_o *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_int__o *v40; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *v41; // x0
  _BOOL8 v42; // x0
  MapControl_SpotInfo_o *current; // x22
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v45; // x0
  _BOOL8 v46; // x0
  __int64 Item; // x0
  int32_t v48; // w23
  int v49; // [xsp+Ch] [xbp-E4h]
  _BYTE v50[44]; // [xsp+10h] [xbp-E0h] BYREF
  int v51; // [xsp+3Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_4212ECE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_4212ECE = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  memset(&v52, 0, sizeof(v52));
  v51 = 0;
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = QuestTree__GetUserReachableMapList((QuestTree_o *)ChildByWarID, ChildByWarID, v25);
  v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_B0D97C(v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v54.fields.current )
      sub_B0D97C(0LL);
    SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v54.fields.current, 0LL);
    if ( !SpotList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v53.fields.current )
        sub_B0D97C(0LL);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v53.fields.current,
                                                                              0,
                                                                              0LL);
      if ( !v29 )
        sub_B0D97C(AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v29,
        AvailableQuestIdList,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    *(_DWORD *)&v50[4 * v51++ + 24] = 108;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 108 )
      --v51;
  }
  *(_DWORD *)&v50[4 * v51++ + 24] = 133;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 133 )
    --v51;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v35, v29, v36);
  v40 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v38, v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v33 = 0;
  v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v54.fields.current )
      sub_B0D97C(0LL);
    v41 = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v54.fields.current, 0LL);
    if ( !v41 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v42 )
        break;
      current = (MapControl_SpotInfo_o *)v53.fields.current;
      if ( !v53.fields.current )
        sub_B0D97C(v42);
      if ( HIDWORD(v53.fields.current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_B0D97C(0LL);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v45 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v45 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v50,
        v45,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v49 = 0;
      v52 = *(System_Collections_Generic_List_Enumerator_int__o *)v50;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v52,
                (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v46 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_B0D97C(v46);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v52.fields.current,
                 (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v48 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v40 )
            sub_B0D97C(Item);
          if ( System_Collections_Generic_List_int___Contains(
                 v40,
                 Item,
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            ++v49;
          }
          else
          {
            System_Collections_Generic_List_int___Add(
              v40,
              v48,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      *(_DWORD *)&v50[4 * v51++ + 24] = 320;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v52,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 320 )
        --v51;
      v33 = v33 - v49 + current->fields.questCount;
    }
    *(_DWORD *)&v50[4 * v51++ + 24] = 363;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 363 )
      --v51;
  }
  *(_DWORD *)&v50[4 * v51++ + 24] = 391;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 391 )
    --v51;
  return v33;
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
  __int64 v22; // x1
  __int64 v23; // x2
  MapControl_MapInfo_o *v24; // x20
  System_Collections_Generic_List_int__o *v25; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  _BOOL8 v27; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x22
  int32_t v36; // w24
  _BOOL8 v37; // x0
  MapControl_SpotInfo_o *v38; // x23
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v40; // x0
  _BOOL8 v41; // x0
  __int64 Item; // x0
  int32_t v43; // w24
  int v44; // w10
  int32_t v45; // w9
  int v46; // w20
  int32_t v48; // [xsp+8h] [xbp-C8h]
  int v49; // [xsp+10h] [xbp-C0h]
  int v50; // [xsp+14h] [xbp-BCh]
  int v51; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+18h] [xbp-B8h] BYREF
  int v53[3]; // [xsp+30h] [xbp-A0h]
  int v54; // [xsp+3Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4212ED1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_4212ED1 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  v24 = MapInfoByMapID;
  v25 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v22, v23);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v24, 0LL);
  if ( !SpotList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v56 = v52;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v27 )
      break;
    current = v56.fields.current;
    if ( layer < 1 )
    {
      if ( !v56.fields.current )
        sub_B0D97C(v27);
LABEL_12:
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)current,
                                                                              1,
                                                                              0LL);
      if ( !v25 )
        sub_B0D97C(AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v25,
        AvailableQuestIdList,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !v56.fields.current )
        sub_B0D97C(v27);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields.current, 0LL) == layer )
        goto LABEL_12;
    }
  }
  v53[0] = 98;
  v54 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  v54 = 0;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v25, v31);
  v35 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v33, v34);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v24, 0LL);
  if ( !SpotList )
LABEL_52:
    sub_B0D97C(SpotList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v50 = 0;
  v56 = v52;
  v36 = 0;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v37 )
      break;
    v38 = (MapControl_SpotInfo_o *)v56.fields.current;
    if ( layer < 1 )
    {
      if ( !v56.fields.current )
        sub_B0D97C(v37);
LABEL_22:
      if ( v38->fields.dispType == 1 )
        goto LABEL_25;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v38->fields.spotId, 0LL) )
      {
LABEL_25:
        v48 = v36;
        v40 = MapControl_SpotInfo__GetAvailableQuestIdList(v38, 1, 0LL);
        if ( !v40 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_int___GetEnumerator(
          &v52,
          v40,
          (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v49 = 0;
        v55 = v52;
        while ( 1 )
        {
          v41 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                  (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v41 )
            break;
          if ( !ShareQuestIdToGroupIdDict )
            sub_B0D97C(v41);
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   ShareQuestIdToGroupIdDict,
                   (int32_t)v55.fields.current,
                   (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          v43 = Item;
          if ( (_DWORD)Item )
          {
            if ( !v35 )
              sub_B0D97C(Item);
            if ( System_Collections_Generic_List_int___Contains(
                   v35,
                   Item,
                   (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              ++v49;
            }
            else
            {
              System_Collections_Generic_List_int___Add(
                v35,
                v43,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v53[v50] = 282;
        v51 = ++v54;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v55,
          (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        v44 = v51;
        if ( v51 )
        {
          v45 = v48;
          if ( v53[v51 - 1] == 282 )
          {
            v44 = v51 - 1;
            v54 = v51 - 1;
          }
        }
        else
        {
          v45 = v48;
        }
        v50 = v44;
        v36 = v45 - v49 + v38->fields.questCount;
      }
    }
    else
    {
      if ( !v56.fields.current )
        sub_B0D97C(v37);
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields.current, 0LL) == layer )
        goto LABEL_22;
    }
  }
  v53[v50] = 323;
  v46 = ++v54;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  if ( v46 && v53[v46 - 1] == 323 )
    v54 = v46 - 1;
  return v36;
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212ECC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v7);
    sub_B0D8A4(&QuestTree___c__DisplayClass23_0_TypeInfo, v8);
    byte_4212ECC = 1;
  }
  v9 = (QuestTree___c__DisplayClass23_0_o *)sub_B0D974(
                                              QuestTree___c__DisplayClass23_0_TypeInfo,
                                              *(_QWORD *)&questId,
                                              method);
  QuestTree___c__DisplayClass23_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B0D97C(v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
                                     (System_Predicate_T__o *)v14,
                                     (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x0
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212EE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_4212EE1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)allQuestInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v15.fields.current )
      sub_B0D97C(v13);
    if ( LODWORD(v15.fields.current[4].klass) == warId )
    {
      if ( !v11 )
        sub_B0D97C(v13);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15.fields.current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v11;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4212ED0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4212ED0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212ECA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v7);
    sub_B0D8A4(&QuestTree___c__DisplayClass21_0_TypeInfo, v8);
    byte_4212ECA = 1;
  }
  v9 = (QuestTree___c__DisplayClass21_0_o *)sub_B0D974(
                                              QuestTree___c__DisplayClass21_0_TypeInfo,
                                              *(_QWORD *)&spotId,
                                              method);
  QuestTree___c__DisplayClass21_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.spotId = spotId,
        allSpotInfoList = this->fields.allSpotInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__),
        !allSpotInfoList) )
  {
    sub_B0D97C(v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allSpotInfoList,
                                    (System_Predicate_T__o *)v14,
                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_int__o *v36; // x22
  QuestTree___c_c *v37; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_0; // x23
  Il2CppObject *v40; // x24
  struct QuestTree___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x21

  if ( (byte_4212ECF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_B0D8A4(&Method_System_Func_MapButtonEntity__int___ctor__, v5);
    sub_B0D8A4(&System_Func_MapButtonEntity__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Predicate_MapControl_MapInfo___ctor__, v12);
    sub_B0D8A4(&System_Predicate_MapControl_MapInfo__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v15);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v16);
    sub_B0D8A4(&QuestTree___c__DisplayClass29_0_TypeInfo, v17);
    sub_B0D8A4(&QuestTree___c_TypeInfo, v18);
    byte_4212ECF = 1;
  }
  v19 = sub_B0D974(QuestTree___c__DisplayClass29_0_TypeInfo, warInfo, method);
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
    Mine = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_27;
    Mine = (WarEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Mine,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Mine )
      goto LABEL_27;
    OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                           (MapButtonMaster_o *)Mine,
                                                                           warInfo,
                                                                           Map,
                                                                           0LL);
    v27 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v19 )
      goto LABEL_27;
    *(_QWORD *)(v19 + 16) = v27;
    sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    if ( !OpenedButtons )
      goto LABEL_27;
    v36 = *(System_Collections_Generic_List_int__o **)(v19 + 16);
    if ( OpenedButtons[1].monitor )
    {
      v37 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v37 = QuestTree___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = QuestTree___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_MapButtonEntity__int__TypeInfo,
                                                                                     v34,
                                                                                     v35);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__29_0,
          v40,
          Method_QuestTree___c__GetUserReachableMapList_b__29_0__,
          (const MethodInfo_2619564 *)Method_System_Func_MapButtonEntity__int___ctor__);
        v41 = QuestTree___c_TypeInfo->static_fields;
        v41->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v41->__9__29_0,
          (System_Int32_array **)_9__29_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      Mine = (WarEntity_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                              OpenedButtons,
                              (System_Func_TSource__TResult__o *)_9__29_0,
                              (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
      if ( !v36 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v36,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !Map || !v36 )
        goto LABEL_27;
      System_Collections_Generic_List_int___Add(
        *(System_Collections_Generic_List_int__o **)(v19 + 16),
        Map->fields.mapId,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                     v48,
                                                                     v49);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v50,
      (Il2CppObject *)v19,
      Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
    if ( mapInfoList )
      return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)mapInfoList,
                                                                        (System_Predicate_T__o *)v50,
                                                                        (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
LABEL_27:
    sub_B0D97C(Mine);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  peRenderTexture_ChangeLayerObject_o *v15; // x0

  if ( (byte_4212ED3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v7);
    sub_B0D8A4(&QuestTree___c__DisplayClass33_0_TypeInfo, v8);
    byte_4212ED3 = 1;
  }
  v9 = (QuestTree___c__DisplayClass33_0_o *)sub_B0D974(
                                              QuestTree___c__DisplayClass33_0_TypeInfo,
                                              *(_QWORD *)&questId,
                                              method);
  QuestTree___c__DisplayClass33_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B0D97C(v10);
  }
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v15 )
    LODWORD(v15) = v15[1].monitor;
  return (int)v15;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v7; // x19
  __int64 v8; // x0

  if ( (byte_4212EC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___67905368, v4);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v5);
    byte_4212EC6 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v7 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                         System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                                         method,
                                                                         v2);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v7,
    allWarInfoList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___67905368);
  if ( !v7 )
    sub_B0D97C(v8);
  System_Collections_Generic_List_MapControl_WarInfo___Reverse(
    (System_Collections_Generic_List_MapControl_WarInfo__o *)v7,
    (const MethodInfo_2FC7548 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v7;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212EC7 & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_4212EC7 = 1;
  }
  v5 = sub_B0D974(QuestTree__Init_d__15_TypeInfo, endCallback, method);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)endCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_4212EDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_4212EDB = 1;
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
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotInfoList;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allSpotRoadInfoList;
  if ( !mapControlRootInfo
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapGimmickInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allMapInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__),
        (mapControlRootInfo = (MapControl_RootInfo_o *)this->fields.allWarInfoList) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(mapControlRootInfo);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapControlRootInfo,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212ED5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212ED5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_21484996(this, entity, v8);
}


bool __fastcall QuestTree__IsActiveEventWar_21484996(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4212ED6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&long___TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4212ED6 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_20;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (QuestTree_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_20;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  this = (QuestTree_o *)sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_20:
    sub_B0D97C(this);
  if ( !LODWORD(this->fields.allQuestInfoList) )
  {
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
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
  int64_t forceUpdateTime; // x19

  if ( (byte_4212EC8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4212EC8 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  SpotEntity_o *Mine; // x1
  const MethodInfo *v15; // x3
  char v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4212ED2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_4212ED2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v12 )
      break;
    current = v20.fields.current;
    if ( layer < 1 )
    {
      if ( !v20.fields.current )
        sub_B0D97C(v12);
      goto LABEL_12;
    }
    if ( !v20.fields.current )
      sub_B0D97C(v12);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v20.fields.current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v15)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v16 = 1;
        v17 = 2;
        goto LABEL_16;
      }
    }
  }
  v17 = 0;
  v16 = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = (v17 == 2) & v16;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_B0D97C(this);
  return QuestTree__CheckSpotCond_21490032(
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
    sub_B0D97C(this);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_21490032(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_21490032(
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
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  clsQuestCheck_o *v12; // x0
  int v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212EE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4212EE2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields.current;
    v12 = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
    if ( !current )
      sub_B0D97C(v12);
    if ( !v12 )
      sub_B0D97C(0LL);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v12, (int32_t)current[1].klass, 0LL) )
    {
      v13 = 9;
      goto LABEL_11;
    }
  }
  v13 = 7;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v13 != 9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  clsQuestCheck_o *QuestInfoByWarId; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x0
  char v13; // w19
  int v14; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4212ED4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4212ED4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v9 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v9 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_B0D97C(QuestInfoByWarId);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v11);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v12 )
      break;
    if ( !v18.fields.current )
      sub_B0D97C(v12);
    if ( LODWORD(v18.fields.current[2].klass) == 1 )
    {
      v13 = 1;
      v14 = 17;
      goto LABEL_15;
    }
  }
  v13 = 0;
  v14 = 15;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (v14 == 17) & v13;
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **name; // x1
  __int64 v20; // x22
  __int64 v21; // x22
  UnityEngine_Object_o *v22; // x22
  bool IsExistCommand; // w21
  int32_t v24; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4212ED7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B0D8A4(&SpotEntity_TypeInfo, v10);
    byte_4212ED7 = 1;
  }
  v11 = sub_B0D974(SpotEntity_TypeInfo, blankEarthSpotEnt, spotInfo);
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
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 32), name, v13, v14, v15, v16, v17, v18);
  if ( !spotInfo )
    goto LABEL_22;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v11, 0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AA65A4(v21);
  v22 = **(UnityEngine_Object_o ***)(v21 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_B0D97C(Instance);
  v24 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v24, 0, 0LL);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void __fastcall QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  v4 = QuestTree__CheckMapGimmickCond_21487076(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_B0D97C(v4);
  (*mapGimmickInfo)->fields.dispType = v4;
}


void __fastcall QuestTree__SetupSpotInfo(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        MapControl_SpotInfo_o **spotInfo,
        const MethodInfo *method)
{
  _BOOL8 IsSpotSatisfyingDisplayCond; // x0
  const MethodInfo *v8; // x2
  int v9; // w9
  int32_t v10; // w10
  MapControl_SpotInfo_o *v11; // x8

  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method);
  if ( IsSpotSatisfyingDisplayCond )
  {
    IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v8);
    if ( !*spotInfo
      || ((v9 = 1, IsSpotSatisfyingDisplayCond) ? (v10 = 1) : (v10 = 2),
          (*spotInfo)->fields.dispType = v10,
          (v11 = *spotInfo) == 0LL) )
    {
LABEL_12:
      sub_B0D97C(IsSpotSatisfyingDisplayCond);
    }
  }
  else
  {
    if ( !*spotInfo )
      goto LABEL_12;
    (*spotInfo)->fields.dispType = 0;
    v11 = *spotInfo;
    if ( !*spotInfo )
      goto LABEL_12;
    v9 = 0;
  }
  v11->fields.touchType = v9;
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_21490032(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_21490032(
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
    sub_B0D97C(this);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_21490032(
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
    sub_B0D97C(this);
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = *(_QWORD *)&times->max_length;
    if ( !v4 )
    {
LABEL_10:
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
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

  if ( (byte_4212EC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_4212EC9 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL);
}


clsQuestCheck_o *__fastcall QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4212EC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v2);
    byte_4212EC5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  return SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212ED8 & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo, endCallback);
    byte_4212ED8 = 1;
  }
  v5 = sub_B0D974(QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_TypeInfo, endCallback, method);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 48),
    (System_Int32_array **)endCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4212ED9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo, *(_QWORD *)&targetWarId);
    byte_4212ED9 = 1;
  }
  v7 = sub_B0D974(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_TypeInfo, *(_QWORD *)&targetWarId, endCallback);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 72),
    (System_Int32_array **)endCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212ECD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Predicate_MapControl_MapInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_MapControl_MapInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v7);
    sub_B0D8A4(&QuestTree___c__DisplayClass27_0_TypeInfo, v8);
    byte_4212ECD = 1;
  }
  v9 = (QuestTree___c__DisplayClass27_0_o *)sub_B0D974(
                                              QuestTree___c__DisplayClass27_0_TypeInfo,
                                              *(_QWORD *)&mapId,
                                              method);
  QuestTree___c__DisplayClass27_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.mapId = mapId;
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                   v11,
                                                                   v12);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapInfoList,
                                   (System_Predicate_T__o *)v14,
                                   (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_421250C & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B0D8A4(&BlankEarthSpotMaster_TypeInfo, method);
    byte_421250C = 1;
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
    sub_B0D840(&v2->fields.__7__wrap1, v7);
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
      v17 = sub_B0D9A8(this);
      sub_B0D948(v17, 0LL);
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
          sub_B0D840(p__2__current, v14);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  *p__7__wrap1 = 0LL;
  sub_B0D840(p__7__wrap1, 0LL);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__41__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  struct QuestTree_o *_4__this; // x1
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1

  if ( (byte_421250D & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo, method);
    byte_421250D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (QuestTree__EnumerateBlankEarthSpotInfo_d__41_o *)sub_B0D974(
                                                             QuestTree__EnumerateBlankEarthSpotInfo_d__41_TypeInfo,
                                                             method,
                                                             v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = this->fields.__4__this;
    v5->fields.__4__this = _4__this;
    sub_B0D840(&v5->fields.__4__this, _4__this);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v5->fields.mapInfo = _3__mapInfo;
  sub_B0D840(&v5->fields.mapInfo, _3__mapInfo);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v5->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_B0D840(&v5->fields.blankEarthSpotMaster, _3__blankEarthSpotMaster);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__41_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_421250E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (QuestTree__Init_d__15_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_421250E = 1;
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
      if ( !byte_4210D2A )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
        byte_4210D2A = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
        v15 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
        v16 = **(_QWORD **)(v15 + 192);
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          sub_AA65A4(v16);
        v17 = **(UnityEngine_Object_o ***)(v16 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
          goto LABEL_44;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_44:
            QuestTree__UpdateMonitoringValue(_4__this, 0LL);
            v18 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v18;
            sub_B0D840(&v2->fields.__2__current, v18);
            LOBYTE(endCallback) = 1;
            v2->fields.__1__state = 1;
            return (char)endCallback;
          }
        }
      }
LABEL_46:
      sub_B0D97C(this);
    }
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v13 = **(_QWORD **)(v12 + 192);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AA65A4(v13);
    v14 = **(UnityEngine_Object_o ***)(v13 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_46;
      QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
      this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestTree___c_StaticFields *static_fields; // x0

  if ( (byte_4212508 & 1) == 0 )
  {
    sub_B0D8A4(&QuestTree___c_TypeInfo, v1);
    byte_4212508 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestTree___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestTree___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestTree___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__40_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4212509 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4212509 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass40_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass40_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_421250A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_3_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_421250A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_421250B & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass40_6_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_421250B = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass40_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass40_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass40_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
  __int64 v2; // x2
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v3; // x27
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
  struct QuestTree_o *_4__this; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
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
  WarQuestSelectionMaster_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v74; // x22
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  unsigned int *p_warIdx_5__18; // x19
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  signed int v79; // w8
  unsigned int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  int32_t *p_questIdx_5__25; // x28
  int32_t *p_questCount_5__26; // x27
  bool result; // w0
  struct WarEntity_array *v85; // x9
  WarEntity_o *v86; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v88; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v95; // x23
  int64_t v96; // x23
  unsigned int _2__current; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v98; // x22
  unsigned int v99; // w9
  __int64 v100; // x8
  int32_t v101; // w24
  MapControl_MapInfo_o *v102; // x23
  Il2CppObject *v103; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v104; // x25
  unsigned int v105; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v106; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v107; // x8
  SpotEntity_o **v108; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v109; // t1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *allSpotInfoList; // x25
  Il2CppObject *v111; // x28
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v112; // x25
  unsigned int v113; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c **v114; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v115; // x8
  SpotRoadEntity_o **v116; // x27
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_c *v117; // t1
  Il2CppObject *v118; // x25
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v119; // x24
  unsigned int v120; // w22
  __int64 v121; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allWarInfoList; // x21
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v125; // x23
  struct QuestTree___c_StaticFields *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  Il2CppObject *v129; // x22
  struct QuestTree___c__DisplayClass39_0_o **p__8__1; // x21
  __int64 v131; // x1
  __int64 v132; // x2
  MapControl_WarInfo_o *v133; // x22
  __int64 v134; // x1
  __int64 v135; // x2
  MapControl_MapInfo_o *v136; // x22
  __int64 v137; // x1
  __int64 v138; // x2
  MapControl_SpotInfo_o *v139; // x22
  __int64 v140; // x1
  __int64 v141; // x2
  WarEntity_o *v142; // x22
  WarQuestSelectionMaster_o *v143; // x0
  bool isSavedMemoryMode; // w0
  bool v145; // zf
  int v146; // w8
  __int64 v147; // x1
  Il2CppObject **p__2__current; // x27
  __int64 v149; // x0
  QuestEntity_o *v150; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  __int64 v154; // x1
  __int64 v155; // x2
  struct QuestTree___c__DisplayClass39_0_o *_8__1; // x8
  Il2CppObject *v157; // x25
  QuestEntity_o *v158; // x21
  int32_t v159; // w22
  int32_t *v160; // x23
  int32_t *v161; // x28
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v162; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x27
  peRenderTexture_ChangeLayerObject_o *v164; // x0
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v167; // w1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int v170; // w25
  struct MapControl_WarInfo_o *warInfo_5__20; // x8
  MapControl_QuestInfo_o *v172; // x24
  struct EventMaster_o *v173; // x1
  struct MapControl_SpotInfo_o *spotInfo_5__22; // x1
  struct WarEntity_o *warEnt_5__23; // x8
  int v176; // w19
  struct MapControl_SpotInfo_o *v177; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v179; // x9
  struct MapControl_MapInfo_o *v180; // x9
  bool v181; // w8
  Il2CppObject *v182; // x19
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v183; // x21
  unsigned int v184; // w22
  __int64 v185; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *allQuestInfoList; // x21
  struct QuestTree___c_StaticFields *v187; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_1; // x22
  Il2CppObject *v189; // x23
  struct QuestTree___c_StaticFields *v190; // x0
  int32_t *p_warCount_5__19; // [xsp+0h] [xbp-C0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v192; // [xsp+10h] [xbp-B0h]
  MapControl_WarInfo_o *v193; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v194; // [xsp+20h] [xbp-A0h]
  unsigned int v195; // [xsp+28h] [xbp-98h]
  struct QuestMaster_o *v196; // [xsp+28h] [xbp-98h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *v197; // [xsp+30h] [xbp-90h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+38h] [xbp-88h] BYREF
  UserQuestEntity_o *v199; // [xsp+40h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+48h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+50h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *v203; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_421250F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_MapControl_WarInfo___ctor__, method);
    sub_B0D8A4(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v4);
    sub_B0D8A4(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_B0D8A4(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v20);
    sub_B0D8A4(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v21);
    sub_B0D8A4(&DataManager_TypeInfo, v22);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v23);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v27);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v28);
    sub_B0D8A4(&long___TypeInfo, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v40);
    sub_B0D8A4(&MapControl_MapInfo_TypeInfo, v41);
    sub_B0D8A4(&NetworkManager_TypeInfo, v42);
    sub_B0D8A4(&OptionManager_TypeInfo, v43);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v44);
    sub_B0D8A4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v45);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v48);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v49);
    sub_B0D8A4(&MapControl_SpotInfo_TypeInfo, v50);
    sub_B0D8A4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__, v51);
    sub_B0D8A4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__, v52);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__, v53);
    sub_B0D8A4(&QuestTree___c__DisplayClass39_0_TypeInfo, v54);
    sub_B0D8A4(&QuestTree___c_TypeInfo, v55);
    sub_B0D8A4(&WarEntity_TypeInfo, v56);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B0D8A4(&MapControl_WarInfo_TypeInfo, v57);
    byte_421250F = 1;
  }
  entity = 0LL;
  spotInfo = 0LL;
  v203 = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v199 = 0LL;
  _4__this = v3->fields.__4__this;
  v197 = v3;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_252;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v3->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_B0D840(&v3->fields._dataManager_5__2, Instance);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapMaster___);
      v3->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B0D840(&v3->fields._mapMaster_5__3, MasterData_WarQuestSelectionMaster);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v3->fields._spotMaster_5__4 = (struct SpotMaster_o *)v61;
      sub_B0D840(&v3->fields._spotMaster_5__4, v61);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v62 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v3->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v62;
      sub_B0D840(&v3->fields._blankEarthSpotMaster_5__5, v62);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v63 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v3->fields._questMaster_5__6 = (struct QuestMaster_o *)v63;
      sub_B0D840(&v3->fields._questMaster_5__6, v63);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v64 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v3->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v64;
      sub_B0D840(&v3->fields._questPhaseMaster_5__7, v64);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v65 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      v3->fields._eventMaster_5__8 = (struct EventMaster_o *)v65;
      sub_B0D840(&v3->fields._eventMaster_5__8, v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v66 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v3->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v66;
      sub_B0D840(&v3->fields._eventDetailMaster_5__9, v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v3->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v67;
      sub_B0D840(&v3->fields._eventStatusMaster_5__10, v67);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v68 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v3->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v68;
      sub_B0D840(&v3->fields._eventStatusQuestMaster_5__11, v68);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v69 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v3->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v69;
      sub_B0D840(&v3->fields._spotRoadMaster_5__12, v69);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v70 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v3->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v70;
      sub_B0D840(&v3->fields._mapGimmickMaster_5__13, v70);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)this,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v3->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v71;
      sub_B0D840(&v3->fields._questPickupMaster_5__14, v71);
      v74 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v72, v73);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v74,
        (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v3->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v74;
      sub_B0D840(&v3->fields._eventStatusQuestMismatchDictionary_5__15, v74);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_252;
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_171483C *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v3->fields._warList_5__16 = Entitys_WarMaster__WarEntity;
      sub_B0D840(&v3->fields._warList_5__16, Entitys_WarMaster__WarEntity);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__getTime(0LL);
      v3->fields._warIdx_5__18 = 0;
      p_warIdx_5__18 = (unsigned int *)&v3->fields._warIdx_5__18;
      warList_5__16 = v3->fields._warList_5__16;
      v3->fields._nowTime_5__17 = (int64_t)this;
      if ( !warList_5__16 )
        goto LABEL_252;
      max_length = warList_5__16->max_length;
      v79 = 0;
      v3->fields._warCount_5__19 = max_length;
      p_warCount_5__19 = &v3->fields._warCount_5__19;
      break;
    case 1:
      p_warIdx_5__18 = (unsigned int *)&v3->fields._warIdx_5__18;
      warIdx_5__18 = v3->fields._warIdx_5__18;
      v3->fields.__1__state = -1;
      p_warCount_5__19 = &v3->fields._warCount_5__19;
      goto LABEL_106;
    case 2:
      p_questIdx_5__25 = &v3->fields._questIdx_5__25;
      questIdx_5__25 = v3->fields._questIdx_5__25;
      p_questCount_5__26 = &v3->fields._questCount_5__26;
      *(p_questIdx_5__25 - 54) = -1;
      goto LABEL_235;
    case 3:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields.endCallback;
      v3->fields.__1__state = -1;
      if ( !this )
        goto LABEL_252;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v79 < max_length )
  {
    v85 = v3->fields._warList_5__16;
    if ( !v85 )
      goto LABEL_252;
    if ( v79 >= v85->max_length )
      goto LABEL_132;
    v86 = v85->m_Items[v79];
    if ( !v86 )
      goto LABEL_252;
    if ( !_4__this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_252;
    id = v86->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v88 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_WarMaster__WarEntity__int__o *)v3->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v88, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_252;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_252;
        nowTime_5__17 = v3->fields._nowTime_5__17;
        if ( nowTime_5__17 >= *(_QWORD *)&entity->fields.startType && nowTime_5__17 < (__int64)entity->fields.coordinate )
          MapControl_WarInfo__SetStatusCheckFlag(v88, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_WarMaster__WarEntity__int__o *)v3->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v88, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_252;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v203,
               (int32_t)this,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v203;
          if ( !v203 )
            goto LABEL_252;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v203, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)entity;
            if ( !entity )
              goto LABEL_252;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v3->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v3->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v88, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_252;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v3->fields._eventStatusQuestMaster_5__11;
                v95 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetEventId(v88, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_252;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v95->fields.statusId,
                                                                           0LL);
                if ( !v3->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_252;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v3->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)this,
                  (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v96 = v3->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)sub_B0D8BC(long___TypeInfo, 3LL);
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
        QuestTree__UpdateForceUpdateTime(_4__this, v96, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_252;
    v98 = this;
    v194 = this->fields.__2__current;
    if ( (int)v194 >= 1 )
    {
      if ( !(_DWORD)v194 )
        goto LABEL_132;
      v99 = 0;
      v192 = this;
      v193 = v88;
      while ( 1 )
      {
        v100 = *((_QWORD *)&v98->fields.__4__this + (int)v99);
        v195 = v99;
        if ( !v100 )
          goto LABEL_252;
        v101 = *(_DWORD *)(v100 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__AddChild(v88, v101, 0LL);
        if ( !_4__this->fields.allMapInfoList )
          goto LABEL_252;
        v102 = (MapControl_MapInfo_o *)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotMaster__getList((SpotMaster_o *)this, v101, 0LL);
        if ( !this )
          goto LABEL_252;
        v103 = this->fields.__2__current;
        v104 = this;
        if ( (int)v103 >= 1 )
          break;
LABEL_79:
        allSpotInfoList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v102,
                                                                   v197->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_252;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v101,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        v111 = this->fields.__2__current;
        v112 = this;
        if ( (int)v111 >= 1 )
        {
          v113 = 0;
          while ( 1 )
          {
            v114 = &v112->klass + (int)v113;
            v117 = v114[4];
            v116 = (SpotRoadEntity_o **)(v114 + 4);
            v115 = v117;
            if ( !v117 || !v102 )
              goto LABEL_252;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v102,
                                                                       (int32_t)v115->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v113 >= LODWORD(v112->fields.__2__current) )
              goto LABEL_132;
            QuestTree__SetupSpotRoadInfo(_4__this, *v116, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
            if ( (int)++v113 >= (int)v111 )
              break;
            if ( v113 >= LODWORD(v112->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v3 = v197;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v101,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        v118 = this->fields.__2__current;
        v119 = this;
        if ( (int)v118 >= 1 )
        {
          v120 = 0;
          while ( 1 )
          {
            v121 = *((_QWORD *)&v119->fields.__4__this + (int)v120);
            if ( !v121 )
              goto LABEL_252;
            if ( !v102 )
              goto LABEL_252;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v102, *(_DWORD *)(v121 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
            if ( (int)++v120 >= (int)v118 )
              break;
            if ( v120 >= LODWORD(v119->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v88 = v193;
        v98 = v192;
        v99 = v195 + 1;
        if ( (int)(v195 + 1) >= (int)v194 )
          goto LABEL_104;
        if ( v99 >= LODWORD(v192->fields.__2__current) )
          goto LABEL_132;
      }
      v105 = 0;
      do
      {
        v106 = &v104->klass + (int)v105;
        v109 = v106[4];
        v108 = (SpotEntity_o **)(v106 + 4);
        v107 = v109;
        if ( !v109 || !v102 )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__AddChild(
                                                                   v102,
                                                                   (int32_t)v107->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( v105 >= LODWORD(v104->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v108, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_252;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
        if ( (int)++v105 >= (int)v103 )
          goto LABEL_79;
      }
      while ( v105 < LODWORD(v104->fields.__2__current) );
LABEL_132:
      v149 = sub_B0D9A8(this);
      sub_B0D948(v149, 0LL);
    }
LABEL_104:
    warIdx_5__18 = *p_warIdx_5__18;
    if ( (int)*p_warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_106:
    v79 = warIdx_5__18 + 1;
    *p_warIdx_5__18 = v79;
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
    v125 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_MapControl_WarInfo__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v125,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
    v126 = QuestTree___c_TypeInfo->static_fields;
    v126->__9__39_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__39_0;
    sub_B0D840(&v126->__9__39_0, _9__39_0);
  }
  if ( !allWarInfoList )
    goto LABEL_252;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allWarInfoList,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v129 = (Il2CppObject *)sub_B0D974(QuestTree___c__DisplayClass39_0_TypeInfo, v127, v128);
  System_Object___ctor(v129, 0LL);
  v3->fields.__8__1 = (struct QuestTree___c__DisplayClass39_0_o *)v129;
  p__8__1 = &v3->fields.__8__1;
  sub_B0D840(&v3->fields.__8__1, v129);
  v133 = (MapControl_WarInfo_o *)sub_B0D974(MapControl_WarInfo_TypeInfo, v131, v132);
  MapControl_WarInfo___ctor(v133, 0LL);
  v3->fields._warInfo_5__20 = v133;
  sub_B0D840(&v3->fields._warInfo_5__20, v133);
  v136 = (MapControl_MapInfo_o *)sub_B0D974(MapControl_MapInfo_TypeInfo, v134, v135);
  MapControl_MapInfo___ctor(v136, 0LL);
  v3->fields._mapInfo_5__21 = v136;
  sub_B0D840(&v3->fields._mapInfo_5__21, v136);
  v139 = (MapControl_SpotInfo_o *)sub_B0D974(MapControl_SpotInfo_TypeInfo, v137, v138);
  MapControl_SpotInfo___ctor(v139, 0LL);
  v3->fields._spotInfo_5__22 = v139;
  sub_B0D840(&v3->fields._spotInfo_5__22, v139);
  v142 = (WarEntity_o *)sub_B0D974(WarEntity_TypeInfo, v140, v141);
  WarEntity___ctor(v142, 0LL);
  v3->fields._warEnt_5__23 = v142;
  sub_B0D840(&v3->fields._warEnt_5__23, v142);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_252;
  v143 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)this,
           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v3->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v143;
  sub_B0D840(&v3->fields._userQuestMaster_5__24, v143);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_252;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v3->fields._mapInfoNow_5__27 = -1LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v3->fields._questIdx_5__25 = 0;
  p_questIdx_5__25 = &v3->fields._questIdx_5__25;
  v145 = !isSavedMemoryMode;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v3->fields._questMaster_5__6;
  v146 = v145 ? 5000 : 500;
  v3->fields._breakInterval_5__29 = v146;
  if ( !this )
    goto LABEL_252;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  v3->fields._questCount_5__26 = (int)this;
  p_questCount_5__26 = &v3->fields._questCount_5__26;
  v147 = (unsigned int)*(p_questCount_5__26 - 1);
  while ( (int)v147 < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               v147,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v150 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v199 = 0LL;
    userQuestMaster_5__24 = v197->fields._userQuestMaster_5__24;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_252;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v199, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v199;
      if ( !v199 )
        goto LABEL_252;
      QuestPhase = UserQuestEntity__getQuestPhase(v199, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__getSpotId_23241352(v150, QuestPhase + 1, 0LL);
    _8__1 = v197->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_252;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      v196 = _1__state;
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_252;
      v157 = (Il2CppObject *)v197->fields.__8__1;
      if ( !v157 )
        goto LABEL_252;
      v158 = v150;
      v159 = QuestPhase;
      v160 = p_questIdx_5__25;
      v161 = p_questCount_5__26;
      v162 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v157[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                             v154,
                                                                             v155);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          monitor,
          v157,
          Method_QuestTree___c__DisplayClass39_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v157[1].monitor = monitor;
        sub_B0D840(&v157[1].monitor, monitor);
      }
      if ( !v162 )
        goto LABEL_252;
      v164 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               v162,
               (System_Predicate_T__o *)monitor,
               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v197->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v164;
      sub_B0D840(&v197->fields._spotInfo_5__22, v164);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_252;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      p_questCount_5__26 = v161;
      p_questIdx_5__25 = v160;
      QuestPhase = v159;
      v150 = v158;
      _1__state = v196;
      if ( v197->fields._mapInfoNow_5__27 != MapID )
      {
        v197->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v197->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_B0D840(&v197->fields._mapInfo_5__21, MapInfoByMapID);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_252;
        v167 = *(&this->fields.__1__state + 1);
        if ( v197->fields._warInfoNow_5__28 != v167 )
        {
          v197->fields._warInfoNow_5__28 = v167;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, v167, 0LL);
          v197->fields._warInfo_5__20 = WarInfoByWarID;
          sub_B0D840(&v197->fields._warInfo_5__20, WarInfoByWarID);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_252;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v197->fields._warEnt_5__23 = Mine;
          sub_B0D840(&v197->fields._warEnt_5__23, Mine);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    if ( !v199 )
      goto LABEL_178;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v199;
    if ( !v199 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v199, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_163;
    if ( !v199 )
      goto LABEL_252;
    if ( v199->fields.challengeNum >= 1 )
    {
LABEL_163:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v199;
    if ( !v199 )
      goto LABEL_252;
    if ( UserQuestEntity__getClearNum(v199, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
LABEL_178:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v170 = 0;
      goto LABEL_179;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v199 )
      goto LABEL_252;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v199->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v197->fields._warInfo_5__20 )
      goto LABEL_252;
    v170 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_WarInfo__GetMine(
                                                               v197->fields._warInfo_5__20,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_252;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_179:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    warInfo_5__20 = v197->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_252;
    v172 = (MapControl_QuestInfo_o *)this;
    if ( !this )
      goto LABEL_252;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    v173 = (struct EventMaster_o *)v197->fields._warInfo_5__20;
    this->fields._eventMaster_5__8 = v173;
    sub_B0D840(&this->fields._eventMaster_5__8, v173);
    spotInfo_5__22 = v197->fields._spotInfo_5__22;
    v172->fields._SpotInfo_k__BackingField = spotInfo_5__22;
    sub_B0D840(&v172->fields._SpotInfo_k__BackingField, spotInfo_5__22);
    if ( !_4__this )
      goto LABEL_252;
    v172->fields.endTime = QuestTree__GetEndTime(_4__this, v172, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_252;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_193;
      }
    }
    warEnt_5__23 = v197->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_252;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)value;
      if ( !value )
        goto LABEL_252;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_193:
        MapControl_QuestInfo__SetDispType(v172, 0, 0, 0, 0LL, 0, 0LL);
        v172->fields.touchType = 0;
LABEL_197:
        v176 = 1;
        goto LABEL_198;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v150, v172, v197->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_197;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_252;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v176 = 0;
LABEL_198:
    if ( MapControl_QuestInfo__IsDisaplayable(v172, 0LL) )
    {
      if ( ((v170 | v176) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v172->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v172, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__GetMine(v172, 0LL);
        if ( !this )
          goto LABEL_252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v177 = v197->fields._spotInfo_5__22;
          if ( !v177 )
            goto LABEL_252;
          v177->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v197->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_252;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(v172, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v179 = v197->fields._spotInfo_5__22;
        if ( !v179 )
          goto LABEL_252;
        v179->fields._IsNext_k__BackingField = 1;
        v180 = v197->fields._mapInfo_5__21;
        if ( !v180 )
          goto LABEL_252;
        v180->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v150, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_252;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v199 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)UserQuestEntity__HasStatus(v199, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v199 )
          goto LABEL_252;
        v181 = v199->fields.challengeNum == 0;
      }
      else
      {
        v181 = 0;
      }
    }
    else
    {
      v181 = 1;
    }
    v172->fields.isNew = v181;
    v172->fields.questPhase = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_252;
    v172->fields.pickupPriority = QuestPickupMaster__GetPriority((QuestPickupMaster_o *)this, (int32_t)_1__state, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)v197->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_252;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_252;
    v182 = this->fields.__2__current;
    v183 = this;
    if ( (int)v182 >= 1 )
    {
      v184 = 0;
      while ( 1 )
      {
        v185 = *((_QWORD *)&v183->fields.__4__this + (int)v184);
        if ( !v185 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)MapControl_QuestInfo__AddChild(
                                                                   v172,
                                                                   *(_DWORD *)(v185 + 16),
                                                                   *(_DWORD *)(v185 + 20),
                                                                   0LL);
        if ( (int)++v184 >= (int)v182 )
          goto LABEL_232;
        if ( v184 >= LODWORD(v183->fields.__2__current) )
          goto LABEL_132;
      }
LABEL_252:
      sub_B0D97C(this);
    }
LABEL_232:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v172,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    questIdx_5__25 = v197->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v197->fields._breakInterval_5__29) )
    {
      v197->fields.__2__current = 0LL;
      sub_B0D840(&v197->fields.__2__current, 0LL);
      v197->fields.__1__state = 2;
      return 1;
    }
LABEL_235:
    v147 = (unsigned int)(questIdx_5__25 + 1);
    *p_questIdx_5__25 = v147;
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
  v187 = *(struct QuestTree___c_StaticFields **)&this->fields._warIdx_5__18;
  _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v187->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(this[1].fields.endCallback) & 4) != 0 && !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v187 = QuestTree___c_TypeInfo->static_fields;
    }
    v189 = (Il2CppObject *)v187->__9;
    _9__39_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_MapControl_QuestInfo__TypeInfo,
                                                                           v147,
                                                                           v2);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_1,
      v189,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__39_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v190 = QuestTree___c_TypeInfo->static_fields;
    v190->__9__39_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__39_1;
    sub_B0D840(&v190->__9__39_1, _9__39_1);
  }
  if ( !allQuestInfoList )
    goto LABEL_252;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    allQuestInfoList,
    (System_Comparison_T__o *)_9__39_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v197->fields.__8__1 = 0LL;
  sub_B0D840(&v197->fields.__8__1, 0LL);
  v197->fields._warInfo_5__20 = 0LL;
  sub_B0D840(&v197->fields._warInfo_5__20, 0LL);
  v197->fields._mapInfo_5__21 = 0LL;
  sub_B0D840(&v197->fields._mapInfo_5__21, 0LL);
  v197->fields._spotInfo_5__22 = 0LL;
  sub_B0D840(&v197->fields._spotInfo_5__22, 0LL);
  v197->fields._warEnt_5__23 = 0LL;
  sub_B0D840(&v197->fields._warEnt_5__23, 0LL);
  v197->fields._userQuestMaster_5__24 = 0LL;
  sub_B0D840(&v197->fields._userQuestMaster_5__24, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_252;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v197->fields.endCallback )
    return 0;
  v197->fields.__2__current = 0LL;
  sub_B0D840(&v197->fields.__2__current, 0LL);
  v197->fields.__1__state = 3;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__39_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *v3; // x19
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
  __int64 v118; // x1
  QuestTree_o *_4__this; // x20
  Il2CppObject *v120; // x21
  __int64 v121; // x0
  WebViewManager_o *Instance; // x0
  DataManager_o **p_dataManager_5__2; // x23
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v125; // x0
  WarQuestSelectionMaster_o *v126; // x0
  WarQuestSelectionMaster_o *v127; // x0
  WarQuestSelectionMaster_o *v128; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v129; // x28
  WarQuestSelectionMaster_o *v130; // x0
  WarQuestSelectionMaster_o *v131; // x0
  WarQuestSelectionMaster_o *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v135; // x25
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_eventStatusQuestMismatchDictionary_5__10; // x26
  __int64 v137; // x1
  __int64 v138; // x2
  Il2CppObject *v139; // x24
  Il2CppObject **p__8__1; // x27
  __int64 Time; // x25
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  Il2CppObject *_8__2; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x23
  __int64 v145; // x1
  __int64 v146; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v147; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v148; // x0
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allWarInfoList; // x22
  Il2CppObject *v151; // x24
  __int64 v152; // x1
  __int64 v153; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v154; // x23
  __int64 v155; // x0
  __int64 Index; // x0
  int32_t v157; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v158; // x0
  MapControl_RootInfo_o *v159; // x0
  MapControl_WarInfo_o *v160; // x0
  MapControl_WarInfo_o **p_warInfo_5__13; // x22
  MapControl_WarInfo_o *warInfo_5__13; // x0
  __int64 EventId; // x0
  _BOOL8 v164; // x0
  int32_t v165; // w2
  int32_t v166; // w1
  EventStatusEntity_o *NowEntity; // x23
  int32_t v168; // w1
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  System_Int64_array *v170; // x0
  unsigned int max_length; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v172; // x0
  __int64 v173; // x0
  MapEntity_array *List; // x0
  __int64 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x2
  struct MapEntity_array *mapList_5__14; // x9
  int mapCount_5__12; // w9
  int v180; // w8
  int32_t v181; // w8
  int32_t *p_mapCount_5__12; // x27
  int32_t *p_mapIdx_5__11; // x28
  struct MapEntity_array *v184; // x9
  MapEntity_o *v185; // x8
  struct QuestTree___c__DisplayClass40_1_o *v186; // x9
  struct MapControl_WarInfo_o *v187; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *mapInfoList; // x21
  Il2CppObject *v189; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  struct MapControl_WarInfo_o *v191; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v192; // x0
  Il2CppObject *v193; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapInfoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x22
  __int64 v196; // x0
  int32_t v197; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v198; // x0
  struct QuestTree___c__DisplayClass40_1_o *v199; // x8
  MapControl_WarInfo_o *v200; // x0
  MapControl_MapInfo_o *v201; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v202; // x0
  __int64 v203; // x0
  struct QuestTree___c__DisplayClass40_1_o *v204; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v206; // x0
  __int64 v207; // x1
  __int64 v208; // x2
  SpotEntity_array *v209; // x22
  int v210; // w27
  __int64 v211; // x28
  __int64 v212; // x23
  __int64 v213; // x0
  __int64 v214; // x1
  __int64 v215; // x2
  SpotEntity_o *v216; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v218; // x26
  __int64 v219; // x0
  int32_t v220; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v221; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v222; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v223; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v224; // x0
  __int64 v225; // x1
  __int64 v226; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v227; // x21
  Il2CppObject *v228; // x22
  __int64 v229; // x1
  __int64 v230; // x2
  QuestTree___c_c *v231; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_6; // x23
  Il2CppObject *v234; // x24
  struct QuestTree___c_StaticFields *v235; // x0
  System_Collections_Generic_IEnumerable_T__o *v236; // x24
  __int64 v237; // x1
  __int64 v238; // x2
  System_Collections_Generic_HashSet_int__o *v239; // x23
  __int64 v240; // x0
  System_Collections_Generic_List_T__o *v241; // x23
  __int64 v242; // x1
  __int64 v243; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v244; // x24
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v245; // x0
  bool result; // w0
  struct System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__o *p__7__wrap23; // x22
  int32_t *p_cnt_5__22; // x24
  Il2CppObject **p__8__3; // x21
  struct QuestTree___c__DisplayClass40_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v252; // x0
  __int64 v253; // x1
  __int64 v254; // x2
  SpotRoadEntity_array *v255; // x21
  int v256; // w26
  __int64 v257; // x27
  __int64 v258; // x22
  __int64 v259; // x0
  __int64 v260; // x1
  __int64 v261; // x2
  SpotRoadEntity_o *v262; // x23
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotRoadInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v264; // x25
  __int64 v265; // x0
  int32_t v266; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v267; // x0
  MapControl_MapInfo_o *mapInfo_5__15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v269; // x0
  struct QuestTree___c__DisplayClass40_1_o *v270; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v272; // x0
  __int64 v273; // x1
  __int64 v274; // x2
  MapGimmickEntity_array *v275; // x21
  int v276; // w25
  __int64 v277; // x26
  __int64 v278; // x22
  __int64 v279; // x0
  __int64 v280; // x1
  __int64 v281; // x2
  MapGimmickEntity_o *v282; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapGimmickInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v284; // x24
  __int64 v285; // x0
  int32_t v286; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v287; // x0
  MapControl_MapInfo_o *v288; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v289; // x0
  int v290; // w8
  System_Action_o *endCallback; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v292; // x21
  QuestTree___c_c *v293; // x0
  struct QuestTree___c_StaticFields *v294; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_2; // x22
  Il2CppObject *v296; // x23
  struct QuestTree___c_StaticFields *v297; // x0
  __int64 v298; // x1
  __int64 v299; // x2
  Il2CppObject *v300; // x23
  __int64 v301; // x1
  __int64 v302; // x2
  MapControl_WarInfo_o *v303; // x23
  __int64 v304; // x1
  __int64 v305; // x2
  MapControl_MapInfo_o *v306; // x22
  __int64 v307; // x1
  __int64 v308; // x2
  MapControl_SpotInfo_o *v309; // x22
  __int64 v310; // x1
  __int64 v311; // x2
  WarEntity_o *v312; // x22
  DataManager_o *dataManager_5__2; // x0
  WarQuestSelectionMaster_o *v314; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v316; // x1
  __int64 v317; // x2
  int v318; // w8
  struct QuestTree___c__DisplayClass40_6_o *_8__3; // x22
  System_Collections_Generic_List_int__o *v320; // x23
  __int64 v321; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v322; // x0
  __int128 v323; // q0
  _BOOL8 v324; // x0
  const MethodInfo *v325; // x1
  MapControl_SpotInfo_o *current; // x23
  SpotEntity_o *Mine; // x0
  struct QuestTree___c__DisplayClass40_0_o *v328; // x8
  System_Collections_Generic_List_int__o *v329; // x0
  DataMasterBase_o *questMaster_5__5; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  Il2CppObject *v332; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v333; // x22
  __int64 v334; // x1
  __int64 v335; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v336; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v337; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v338; // x0
  __int64 v339; // x0
  int v340; // w8
  __int64 v341; // x0
  __int64 v342; // x0
  __int64 v343; // x0
  __int64 v344; // x0
  __int64 v345; // x0
  __int64 v346; // x0
  __int64 v347; // x0
  struct QuestEntity_array *questList_5__23; // x9
  QuestEntity_o *v349; // x21
  struct QuestTree___c__DisplayClass40_6_o *v350; // x8
  UserQuestMaster_o *userQuestMaster_5__18; // x22
  int64_t UserId; // x0
  struct QuestTree___c__DisplayClass40_6_o *v353; // x8
  int32_t QuestPhase; // w22
  MapEntity_o *SpotId_23241352; // x0
  __int64 warId; // x1
  __int64 v357; // x2
  struct QuestTree___c__DisplayClass40_6_o *v358; // x9
  Il2CppObject *v359; // x26
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v360; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v361; // x24
  peRenderTexture_ChangeLayerObject_o *v362; // x0
  MapControl_SpotInfo_o *spotInfo_5__16; // x0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_MapInfo_o *v365; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v367; // x0
  WarEntity_o *v368; // x0
  Il2CppObject *v369; // x26
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allQuestInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v371; // x24
  int32_t v372; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v373; // x0
  MapControl_WarInfo_o *v374; // x0
  _BOOL8 HasStatus; // x0
  MapControl_WarInfo_o *v376; // x0
  WarEntity_o *v377; // x0
  int v378; // w24
  int32_t ClearNum; // w8
  struct QuestTree___c__DisplayClass40_6_o *v380; // x8
  MapControl_WarInfo_o *v381; // x0
  struct QuestTree___c__DisplayClass40_6_o *v382; // x8
  MapControl_SpotInfo_o *v383; // x0
  MapControl_QuestInfo_o *v384; // x0
  struct MapControl_WarInfo_o *v385; // x8
  MapControl_QuestInfo_o *v386; // x23
  struct MapControl_WarInfo_o *v387; // x1
  struct MapControl_SpotInfo_o *v388; // x1
  WarEntity_o *warEnt_5__17; // x0
  _BOOL8 IsStartTypeQuest; // x0
  struct WarEntity_o *v391; // x8
  struct QuestTree___c__DisplayClass40_6_o *v392; // x9
  struct WarEntity_o *v393; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *eventStatusQuestMismatchDictionary_5__10; // x0
  _BOOL8 v395; // x0
  struct QuestTree___c__DisplayClass40_6_o *v396; // x8
  MapControl_WarInfo_o *v397; // x0
  int v398; // w25
  MapControl_SpotInfo_o *v399; // x0
  MapControl_SpotInfo_o *v400; // x0
  QuestEntity_o *v401; // x0
  _BOOL8 HasFlag; // x0
  struct MapControl_SpotInfo_o *v403; // x8
  struct MapControl_MapInfo_o *v404; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  struct MapControl_SpotInfo_o *v406; // x9
  struct MapControl_MapInfo_o *v407; // x9
  MapControl_SpotInfo_o *v408; // x0
  UserQuestEntity_o *v409; // x0
  bool v410; // w8
  struct QuestTree___c__DisplayClass40_6_o *v411; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  struct QuestTree___c__DisplayClass40_6_o *v414; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v416; // x0
  _QWORD *v417; // x21
  __int64 v418; // x22
  unsigned int v419; // w24
  __int64 v420; // x8
  __int64 v421; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v422; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v423; // x21
  QuestTree___c_c *v424; // x0
  struct QuestTree___c_StaticFields *v425; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_11; // x22
  Il2CppObject *v427; // x23
  struct QuestTree___c_StaticFields *v428; // x0
  CommonUI_o *v429; // x0
  __int64 v430; // x0
  EventStatusQuestMaster_o *v431; // [xsp+8h] [xbp-D8h]
  EventStatusMaster_o *v432; // [xsp+10h] [xbp-D0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v433; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o **p_mapInfo_5__15; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v435; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+58h] [xbp-88h] BYREF
  UserQuestEntity_o *v437; // [xsp+60h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+68h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+70h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+78h] [xbp-68h] BYREF
  WarEntity_o *v441; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4212510 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_B0D8A4(&Method_System_Comparison_MapControl_WarInfo___ctor__, v4);
    sub_B0D8A4(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v5);
    sub_B0D8A4(&System_Comparison_MapControl_QuestInfo__TypeInfo, v6);
    sub_B0D8A4(&System_Comparison_MapControl_WarInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventStatusMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapGimmickMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPickupMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotRoadMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v21);
    sub_B0D8A4(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v22);
    sub_B0D8A4(&DataManager_TypeInfo, v23);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v24);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v25);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_QuestEntity___, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v29);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v30);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_QuestEntity___, v31);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v32);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v33);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v34);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v35);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_QuestEntity___, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v38);
    sub_B0D8A4(&Method_System_Func_QuestEntity__bool___ctor__, v39);
    sub_B0D8A4(&Method_System_Func_WarEntity__bool___ctor__, v40);
    sub_B0D8A4(&Method_System_Func_MapControl_SpotInfo__int___ctor__, v41);
    sub_B0D8A4(&Method_System_Func_MapControl_SpotInfo__bool___ctor__, v42);
    sub_B0D8A4(&System_Func_WarEntity__bool__TypeInfo, v43);
    sub_B0D8A4(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v44);
    sub_B0D8A4(&System_Func_MapControl_SpotInfo__int__TypeInfo, v45);
    sub_B0D8A4(&System_Func_QuestEntity__bool__TypeInfo, v46);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, v47);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v48);
    sub_B0D8A4(&long___TypeInfo, v49);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v50);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v51);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v52);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v53);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v54);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v55);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v56);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v57);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v58);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v59);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v60);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v61);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v62);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v63);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v64);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v65);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v66);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v67);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v68);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v69);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v70);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v71);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v72);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v73);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v74);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v75);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v76);
    sub_B0D8A4(&MapControl_MapInfo_TypeInfo, v77);
    sub_B0D8A4(&NetworkManager_TypeInfo, v78);
    sub_B0D8A4(&OptionManager_TypeInfo, v79);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v80);
    sub_B0D8A4(&Method_System_Predicate_MapControl_WarInfo___ctor__, v81);
    sub_B0D8A4(&Method_System_Predicate_MapControl_MapInfo___ctor__, v82);
    sub_B0D8A4(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v83);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__, v84);
    sub_B0D8A4(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v85);
    sub_B0D8A4(&System_Predicate_MapControl_MapInfo__TypeInfo, v86);
    sub_B0D8A4(&System_Predicate_MapControl_WarInfo__TypeInfo, v87);
    sub_B0D8A4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v88);
    sub_B0D8A4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v89);
    sub_B0D8A4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v90);
    sub_B0D8A4(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v91);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v92);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v93);
    sub_B0D8A4(&MapControl_SpotInfo_TypeInfo, v94);
    sub_B0D8A4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__, v95);
    sub_B0D8A4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__, v96);
    sub_B0D8A4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__, v97);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v98);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_0_TypeInfo, v99);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v100);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v101);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v102);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_1_TypeInfo, v103);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v104);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_2_TypeInfo, v105);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v106);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_3_TypeInfo, v107);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v108);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_4_TypeInfo, v109);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v110);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_5_TypeInfo, v111);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v112);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v113);
    sub_B0D8A4(&Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v114);
    sub_B0D8A4(&QuestTree___c__DisplayClass40_6_TypeInfo, v115);
    sub_B0D8A4(&QuestTree___c_TypeInfo, v116);
    sub_B0D8A4(&WarEntity_TypeInfo, v117);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_o *)sub_B0D8A4(&MapControl_WarInfo_TypeInfo, v118);
    byte_4212510 = 1;
  }
  v441 = 0LL;
  entity = 0LL;
  spotInfo = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v437 = 0LL;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v120 = (Il2CppObject *)sub_B0D974(QuestTree___c__DisplayClass40_0_TypeInfo, method, v2);
      System_Object___ctor(v120, 0LL);
      v3->fields.__8__2 = (struct QuestTree___c__DisplayClass40_0_o *)v120;
      sub_B0D840(&v3->fields.__8__2, v120);
      if ( !v3->fields.__8__2 )
        sub_B0D97C(v121);
      v3->fields.__8__2->fields.targetWarId = v3->fields.targetWarId;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v3->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      p_dataManager_5__2 = &v3->fields._dataManager_5__2;
      sub_B0D840(&v3->fields._dataManager_5__2, Instance);
      if ( !v3->fields._dataManager_5__2 )
        sub_B0D97C(0LL);
      MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v3->fields._dataManager_5__2,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v125 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v3->fields._spotMaster_5__3 = (struct SpotMaster_o *)v125;
      sub_B0D840(&v3->fields._spotMaster_5__3, v125);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v126 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v3->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v126;
      sub_B0D840(&v3->fields._blankEarthSpotMaster_5__4, v126);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v127 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v3->fields._questMaster_5__5 = (struct QuestMaster_o *)v127;
      sub_B0D840(&v3->fields._questMaster_5__5, v127);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v128 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v3->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v128;
      sub_B0D840(&v3->fields._questPhaseMaster_5__6, v128);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v129 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v433 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v432 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v431 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           *p_dataManager_5__2,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v130 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v3->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v130;
      sub_B0D840(&v3->fields._spotRoadMaster_5__7, v130);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v131 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v3->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v131;
      sub_B0D840(&v3->fields._mapGimmickMaster_5__8, v131);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      v132 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               *p_dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v3->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v132;
      sub_B0D840(&v3->fields._questPickupMaster_5__9, v132);
      v135 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v133, v134);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v135,
        (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v3->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v135;
      p_eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&v3->fields._eventStatusQuestMismatchDictionary_5__10;
      sub_B0D840(&v3->fields._eventStatusQuestMismatchDictionary_5__10, v135);
      v139 = (Il2CppObject *)sub_B0D974(QuestTree___c__DisplayClass40_1_TypeInfo, v137, v138);
      System_Object___ctor(v139, 0LL);
      v3->fields.__8__1 = (struct QuestTree___c__DisplayClass40_1_o *)v139;
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      sub_B0D840(&v3->fields.__8__1, v139);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !*p_dataManager_5__2 )
        sub_B0D97C(0LL);
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_171483C *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      _8__2 = (Il2CppObject *)v3->fields.__8__2;
      v144 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarMaster__WarEntity;
      v147 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_WarEntity__bool__TypeInfo,
                                                                                  v145,
                                                                                  v146);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v147,
        _8__2,
        Method_QuestTree___c__DisplayClass40_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarEntity__bool___ctor__);
      v148 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
               v144,
               (System_Func_TSource__bool__o *)v147,
               (const MethodInfo_1B55198 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v148 )
        sub_B0D97C(0LL);
      if ( !*p__8__1 )
        sub_B0D97C(v148);
      LODWORD((*p__8__1)[1].klass) = v148->fields.m_messageTypeId;
      if ( !_4__this )
        sub_B0D97C(v148);
      if ( !*p__8__1 )
        sub_B0D97C(v148);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_B0D97C(0LL);
      MapControl_RootInfo__Remove(mapControlRootInfo, (int32_t)(*p__8__1)[1].klass, 0LL);
      allWarInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allWarInfoList;
      v151 = *p__8__1;
      v154 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                        System_Predicate_MapControl_WarInfo__TypeInfo,
                                                                        v152,
                                                                        v153);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v154,
        v151,
        Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_WarInfo___ctor__);
      if ( !allWarInfoList )
        sub_B0D97C(v155);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v154,
                (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v157 = Index;
      if ( (_DWORD)Index != -1 )
      {
        v158 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allWarInfoList;
        if ( !v158 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          v158,
          v157,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      if ( !*p__8__1 )
        sub_B0D97C(Index);
      v159 = _4__this->fields.mapControlRootInfo;
      if ( !v159 )
        sub_B0D97C(0LL);
      v160 = MapControl_RootInfo__AddChild(v159, (int32_t)(*p__8__1)[1].klass, 0LL);
      v3->fields._warInfo_5__13 = v160;
      p_warInfo_5__13 = &v3->fields._warInfo_5__13;
      sub_B0D840(&v3->fields._warInfo_5__13, v160);
      warInfo_5__13 = v3->fields._warInfo_5__13;
      if ( !warInfo_5__13 )
        sub_B0D97C(0LL);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__13, 0LL) )
      {
        if ( !*p_warInfo_5__13 )
          sub_B0D97C(0LL);
        EventId = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
        if ( !v129 )
          sub_B0D97C(EventId);
        v164 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v129,
                 &entity,
                 EventId,
                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v164 )
        {
          if ( !entity )
            sub_B0D97C(v164);
          if ( Time >= *(_QWORD *)&entity->fields.startType && Time < (__int64)entity->fields.coordinate )
          {
            if ( !*p_warInfo_5__13 )
              sub_B0D97C(0LL);
            MapControl_WarInfo__SetStatusCheckFlag(*p_warInfo_5__13, 1, 0, 0LL);
          }
          if ( !*p_warInfo_5__13 )
            sub_B0D97C(0LL);
          v165 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
          if ( !v433 )
            sub_B0D97C(0LL);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v433,
                 &v441,
                 v165,
                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v441 )
              sub_B0D97C(0LL);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v441, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_B0D97C(0LL);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, Time, 0LL) )
              {
                if ( !*p_warInfo_5__13 )
                  sub_B0D97C(0LL);
                v166 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                if ( !v432 )
                  sub_B0D97C(0LL);
                NowEntity = EventStatusMaster__getNowEntity(v432, v166, 0LL);
                if ( NowEntity )
                {
                  if ( !*p_warInfo_5__13 )
                    sub_B0D97C(0LL);
                  v168 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                  if ( !v431 )
                    sub_B0D97C(0LL);
                  MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                     v431,
                                                                                     v168,
                                                                                     NowEntity->fields.statusId,
                                                                                     0LL);
                  if ( !*p__8__1 )
                    sub_B0D97C(MismatchQuestList);
                  if ( !*p_eventStatusQuestMismatchDictionary_5__10 )
                    sub_B0D97C(0LL);
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    *p_eventStatusQuestMismatchDictionary_5__10,
                    (int32_t)(*p__8__1)[1].klass,
                    MismatchQuestList,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v170 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 3LL);
          if ( !entity )
            sub_B0D97C(v170);
          if ( !v170 )
            sub_B0D97C(0LL);
          max_length = v170->max_length;
          if ( !max_length )
          {
            v345 = sub_B0D9A8(v170);
            sub_B0D948(v345, 0LL);
          }
          v170->m_Items[0] = *(_QWORD *)&entity->fields.startType;
          if ( !entity )
            sub_B0D97C(v170);
          if ( max_length <= 1 )
          {
            v346 = sub_B0D9A8(v170);
            sub_B0D948(v346, 0LL);
          }
          v170->m_Items[1] = entity->fields.targetId;
          if ( !entity )
            sub_B0D97C(v170);
          if ( max_length <= 2 )
          {
            v347 = sub_B0D9A8(v170);
            sub_B0D948(v347, 0LL);
          }
          v170->m_Items[2] = (int64_t)entity->fields.coordinate;
          QuestTree__UpdateForceUpdateTime(_4__this, Time, v170, 0LL);
        }
      }
      v172 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
      if ( !v172 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v172,
        (EventMissionProgressRequest_Argument_ProgressData_o *)*p_warInfo_5__13,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
      if ( !*p_warInfo_5__13 )
        sub_B0D97C(v173);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(v173);
      List = MapMaster__getList(MasterData_WarQuestSelectionMaster, (*p_warInfo_5__13)->fields.warId, 0LL);
      v3->fields._mapList_5__14 = List;
      sub_B0D840(&v3->fields._mapList_5__14, List);
      mapList_5__14 = v3->fields._mapList_5__14;
      v3->fields._mapIdx_5__11 = 0;
      if ( !mapList_5__14 )
        sub_B0D97C(v175);
      mapCount_5__12 = mapList_5__14->max_length;
      v180 = 0;
      v3->fields._mapCount_5__12 = mapCount_5__12;
      goto LABEL_72;
    case 1:
      _8__1 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !_8__1 )
        sub_B0D97C(this);
      spotRoadMaster_5__7 = v3->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_B0D97C(0LL);
      v252 = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0LL);
      v255 = v252;
      if ( !v252 )
        sub_B0D97C(0LL);
      v256 = v252->max_length;
      if ( v256 >= 1 )
      {
        v257 = 0LL;
        do
        {
          v258 = sub_B0D974(QuestTree___c__DisplayClass40_4_TypeInfo, v253, v254);
          System_Object___ctor((Il2CppObject *)v258, 0LL);
          if ( (unsigned int)v257 >= v255->max_length )
          {
            v341 = sub_B0D9A8(v259);
            sub_B0D948(v341, 0LL);
          }
          v262 = v255->m_Items[v257];
          if ( !v262 )
            sub_B0D97C(v259);
          if ( !v258 )
            sub_B0D97C(v259);
          *(_DWORD *)(v258 + 16) = v262->fields.id;
          if ( !_4__this )
            sub_B0D97C(v259);
          allSpotRoadInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotRoadInfoList;
          v264 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                            System_Predicate_MapControl_SpotRoadInfo__TypeInfo,
                                                                            v260,
                                                                            v261);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v264,
            (Il2CppObject *)v258,
            Method_QuestTree___c__DisplayClass40_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
          if ( !allSpotRoadInfoList )
            sub_B0D97C(v265);
          v266 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v264,
                   (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          if ( v266 != -1 )
          {
            v267 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v267 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v267,
              v266,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__15 = v3->fields._mapInfo_5__15;
          if ( !mapInfo_5__15 )
            sub_B0D97C(0LL);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__15, *(_DWORD *)(v258 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v262, &spotRoadInfo, 0LL);
          v269 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v269 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v269,
            (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
          ++v257;
        }
        while ( (int)v257 < v256 );
      }
      v270 = v3->fields.__8__1;
      if ( !v270 )
        sub_B0D97C(v252);
      mapGimmickMaster_5__8 = v3->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_B0D97C(0LL);
      v272 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v270->fields.mapId, 0LL);
      v275 = v272;
      if ( !v272 )
        sub_B0D97C(0LL);
      v276 = v272->max_length;
      if ( v276 >= 1 )
      {
        v277 = 0LL;
        do
        {
          v278 = sub_B0D974(QuestTree___c__DisplayClass40_5_TypeInfo, v273, v274);
          System_Object___ctor((Il2CppObject *)v278, 0LL);
          if ( (unsigned int)v277 >= v275->max_length )
          {
            v343 = sub_B0D9A8(v279);
            sub_B0D948(v343, 0LL);
          }
          v282 = v275->m_Items[v277];
          if ( !v282 )
            sub_B0D97C(v279);
          if ( !v278 )
            sub_B0D97C(v279);
          *(_DWORD *)(v278 + 16) = v282->fields.id;
          if ( !_4__this )
            sub_B0D97C(v279);
          allMapGimmickInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapGimmickInfoList;
          v284 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                            System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                                            v280,
                                                                            v281);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v284,
            (Il2CppObject *)v278,
            Method_QuestTree___c__DisplayClass40_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
          if ( !allMapGimmickInfoList )
            sub_B0D97C(v285);
          v286 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v284,
                   (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          if ( v286 != -1 )
          {
            v287 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v287 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v287,
              v286,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v288 = v3->fields._mapInfo_5__15;
          if ( !v288 )
            sub_B0D97C(0LL);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v288, *(_DWORD *)(v278 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v289 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v289 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v289,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
          ++v277;
        }
        while ( (int)v277 < v276 );
      }
      v3->fields.__2__current = 0LL;
      sub_B0D840(&v3->fields.__2__current, 0LL);
      v290 = 2;
      goto LABEL_311;
    case 2:
      v3->fields._mapInfo_5__15 = 0LL;
      v3->fields.__1__state = -1;
      sub_B0D840(&v3->fields._mapInfo_5__15, 0LL);
      mapCount_5__12 = v3->fields._mapCount_5__12;
      v180 = v3->fields._mapIdx_5__11 + 1;
      v3->fields._mapIdx_5__11 = v180;
LABEL_72:
      if ( v180 < mapCount_5__12 )
      {
        v184 = v3->fields._mapList_5__14;
        if ( !v184 )
          sub_B0D97C(v175);
        if ( v180 >= v184->max_length )
        {
          v344 = sub_B0D9A8(v175);
          sub_B0D948(v344, 0LL);
        }
        v185 = v184->m_Items[v180];
        if ( !v185 )
          sub_B0D97C(v175);
        v186 = v3->fields.__8__1;
        if ( !v186 )
          sub_B0D97C(v175);
        v186->fields.mapId = v185->fields.id;
        v187 = v3->fields._warInfo_5__13;
        if ( !v187 )
          sub_B0D97C(v175);
        mapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v187->fields.mapInfoList;
        if ( mapInfoList )
        {
          v189 = (Il2CppObject *)v3->fields.__8__1;
          if ( !v189 )
            sub_B0D97C(v175);
          monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v189[1].monitor;
          if ( !monitor )
          {
            monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                 System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                                 v176,
                                                                                 v177);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              monitor,
              v189,
              Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
            v189[1].monitor = monitor;
            sub_B0D840(&v189[1].monitor, monitor);
          }
          v175 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)monitor,
                   (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v176 = (unsigned int)v175;
          if ( (_DWORD)v175 != -1 )
          {
            v191 = v3->fields._warInfo_5__13;
            if ( !v191 )
              sub_B0D97C(v175);
            v192 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v191->fields.mapInfoList;
            if ( !v192 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v192,
              v176,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_B0D97C(v175);
        v193 = (Il2CppObject *)v3->fields.__8__1;
        if ( !v193 )
          sub_B0D97C(v175);
        allMapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapInfoList;
        klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v193[2].klass;
        if ( !klass )
        {
          klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                             v176,
                                                                             v177);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            klass,
            v193,
            Method_QuestTree___c__DisplayClass40_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
          v193[2].klass = (Il2CppClass *)klass;
          sub_B0D840(&v193[2], klass);
        }
        if ( !allMapInfoList )
          sub_B0D97C(v175);
        v196 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v197 = v196;
        if ( (_DWORD)v196 != -1 )
        {
          v198 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapInfoList;
          if ( !v198 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            v198,
            v197,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v199 = v3->fields.__8__1;
        if ( !v199 )
          sub_B0D97C(v196);
        v200 = v3->fields._warInfo_5__13;
        if ( !v200 )
          sub_B0D97C(0LL);
        v201 = MapControl_WarInfo__AddChild(v200, v199->fields.mapId, 0LL);
        v3->fields._mapInfo_5__15 = v201;
        p_mapInfo_5__15 = (EventMissionProgressRequest_Argument_ProgressData_o **)&v3->fields._mapInfo_5__15;
        sub_B0D840(&v3->fields._mapInfo_5__15, v201);
        v202 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList;
        if ( !v202 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v202,
          *p_mapInfo_5__15,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        v204 = v3->fields.__8__1;
        if ( !v204 )
          sub_B0D97C(v203);
        spotMaster_5__3 = v3->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_B0D97C(0LL);
        v206 = SpotMaster__getList(spotMaster_5__3, v204->fields.mapId, 0LL);
        v209 = v206;
        if ( !v206 )
          sub_B0D97C(0LL);
        v210 = v206->max_length;
        if ( v210 >= 1 )
        {
          v211 = 0LL;
          do
          {
            v212 = sub_B0D974(QuestTree___c__DisplayClass40_2_TypeInfo, v207, v208);
            System_Object___ctor((Il2CppObject *)v212, 0LL);
            if ( (unsigned int)v211 >= v209->max_length )
            {
              v342 = sub_B0D9A8(v213);
              sub_B0D948(v342, 0LL);
            }
            v216 = v209->m_Items[v211];
            if ( !v216 )
              sub_B0D97C(v213);
            if ( !v212 )
              sub_B0D97C(v213);
            *(_DWORD *)(v212 + 16) = v216->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotInfoList;
            v218 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                              System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                              v214,
                                                                              v215);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v218,
              (Il2CppObject *)v212,
              Method_QuestTree___c__DisplayClass40_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            if ( !allSpotInfoList )
              sub_B0D97C(v219);
            v220 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v218,
                     (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            if ( v220 != -1 )
            {
              v221 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotInfoList;
              if ( !v221 )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v221,
                v220,
                (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            if ( !*p_mapInfo_5__15 )
              sub_B0D97C(0LL);
            spotInfo = MapControl_MapInfo__AddChild(
                         (MapControl_MapInfo_o *)*p_mapInfo_5__15,
                         *(_DWORD *)(v212 + 16),
                         0LL);
            QuestTree__SetupSpotInfo(_4__this, v216, &spotInfo, 0LL);
            v222 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
            if ( !v222 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v222,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
            ++v211;
          }
          while ( (int)v211 < v210 );
        }
        v223 = (System_Collections_Generic_IEnumerable_TSource__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                      _4__this,
                                                                      v3->fields._mapInfo_5__15,
                                                                      v3->fields._blankEarthSpotMaster_5__4,
                                                                      0LL);
        v224 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v223,
                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v227 = (System_Collections_Generic_IEnumerable_TSource__o *)v224;
        if ( !v224 )
          sub_B0D97C(0LL);
        if ( *(_QWORD *)&v224->max_length )
        {
          v228 = (Il2CppObject *)sub_B0D974(QuestTree___c__DisplayClass40_3_TypeInfo, v225, v226);
          System_Object___ctor(v228, 0LL);
          v231 = QuestTree___c_TypeInfo;
          if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v231 = QuestTree___c_TypeInfo;
          }
          static_fields = v231->static_fields;
          _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__40_6;
          if ( !_9__40_6 )
          {
            if ( (BYTE3(v231->vtable._0_Equals.methodPtr) & 4) != 0 && !v231->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v231);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v234 = (Il2CppObject *)static_fields->__9;
            _9__40_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                         System_Func_MapControl_SpotInfo__int__TypeInfo,
                                                                                         v229,
                                                                                         v230);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__40_6,
              v234,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_6__,
              (const MethodInfo_2619564 *)Method_System_Func_MapControl_SpotInfo__int___ctor__);
            v235 = QuestTree___c_TypeInfo->static_fields;
            v235->__9__40_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__40_6;
            sub_B0D840(&v235->__9__40_6, _9__40_6);
          }
          v236 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v227,
                                                                  (System_Func_TSource__TResult__o *)_9__40_6,
                                                                  (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v239 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v237,
                                                                v238);
          System_Collections_Generic_HashSet_int____ctor_46616780(
            v239,
            v236,
            (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
          if ( !v228 )
            sub_B0D97C(v240);
          v228[1].klass = (Il2CppClass *)v239;
          sub_B0D840(&v228[1], v239);
          v241 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v244 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_MapControl_SpotInfo__bool__TypeInfo,
                                                                                      v242,
                                                                                      v243);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v244,
            v228,
            Method_QuestTree___c__DisplayClass40_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            (const MethodInfo_26189B8 *)Method_System_Func_MapControl_SpotInfo__bool___ctor__);
          BasicHelper__RemoveElements_MapControl_SpotInfo_(
            v241,
            (System_Func_T__bool__o *)v244,
            (const MethodInfo_1709B48 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v245 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
          if ( !v245 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v245,
            (System_Collections_Generic_IEnumerable_T__o *)v227,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v3->fields.__2__current = 0LL;
        sub_B0D840(&v3->fields.__2__current, 0LL);
        result = 1;
        v3->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_B0D97C(v175);
      v292 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
      v293 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v293 = QuestTree___c_TypeInfo;
      }
      v294 = v293->static_fields;
      _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v294->__9__40_2;
      if ( !_9__40_2 )
      {
        if ( (BYTE3(v293->vtable._0_Equals.methodPtr) & 4) != 0 && !v293->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v293);
          v294 = QuestTree___c_TypeInfo->static_fields;
        }
        v296 = (Il2CppObject *)v294->__9;
        _9__40_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                               System_Comparison_MapControl_WarInfo__TypeInfo,
                                                                               v176,
                                                                               v177);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__40_2,
          v296,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_2__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
        v297 = QuestTree___c_TypeInfo->static_fields;
        v297->__9__40_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__40_2;
        sub_B0D840(&v297->__9__40_2, _9__40_2);
      }
      if ( !v292 )
        sub_B0D97C(v293);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v292,
        (System_Comparison_T__o *)_9__40_2,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v3->fields.__8__1 = 0LL;
      sub_B0D840(&v3->fields.__8__1, 0LL);
      v3->fields._warInfo_5__13 = 0LL;
      sub_B0D840(&v3->fields._warInfo_5__13, 0LL);
      v3->fields._mapList_5__14 = 0LL;
      sub_B0D840(&v3->fields._mapList_5__14, 0LL);
      v300 = (Il2CppObject *)sub_B0D974(QuestTree___c__DisplayClass40_6_TypeInfo, v298, v299);
      System_Object___ctor(v300, 0LL);
      v3->fields.__8__3 = (struct QuestTree___c__DisplayClass40_6_o *)v300;
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      sub_B0D840(&v3->fields.__8__3, v300);
      v303 = (MapControl_WarInfo_o *)sub_B0D974(MapControl_WarInfo_TypeInfo, v301, v302);
      MapControl_WarInfo___ctor(v303, 0LL);
      v3->fields._warInfo_5__13 = v303;
      sub_B0D840(&v3->fields._warInfo_5__13, v303);
      v306 = (MapControl_MapInfo_o *)sub_B0D974(MapControl_MapInfo_TypeInfo, v304, v305);
      MapControl_MapInfo___ctor(v306, 0LL);
      v3->fields._mapInfo_5__15 = v306;
      sub_B0D840(&v3->fields._mapInfo_5__15, v306);
      v309 = (MapControl_SpotInfo_o *)sub_B0D974(MapControl_SpotInfo_TypeInfo, v307, v308);
      MapControl_SpotInfo___ctor(v309, 0LL);
      v3->fields._spotInfo_5__16 = v309;
      sub_B0D840(&v3->fields._spotInfo_5__16, v309);
      v312 = (WarEntity_o *)sub_B0D974(WarEntity_TypeInfo, v310, v311);
      WarEntity___ctor(v312, 0LL);
      v3->fields._warEnt_5__17 = v312;
      sub_B0D840(&v3->fields._warEnt_5__17, v312);
      dataManager_5__2 = v3->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_B0D97C(0LL);
      v314 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               dataManager_5__2,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v3->fields._userQuestMaster_5__18 = (struct UserQuestMaster_o *)v314;
      sub_B0D840(&v3->fields._userQuestMaster_5__18, v314);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      if ( !*p__8__3 )
        sub_B0D97C(Master_WarQuestSelectionMaster);
      LODWORD((*p__8__3)[1].monitor) = -1;
      *(_QWORD *)&v3->fields._nowMapId_5__19 = -1LL;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
        v318 = 500;
      else
        v318 = 5000;
      v3->fields._breakInterval_5__21 = v318;
      _8__3 = v3->fields.__8__3;
      v320 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v316,
                                                         v317);
      System_Collections_Generic_List_int____ctor(
        v320,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !_8__3 )
        sub_B0D97C(v321);
      _8__3->fields.spotInfoList = v320;
      sub_B0D840(&_8__3->fields, v320);
      v3->fields._cnt_5__22 = 0;
      p_cnt_5__22 = &v3->fields._cnt_5__22;
      v322 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.allSpotInfoList;
      if ( !v322 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v435,
        v322,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      p__7__wrap23 = &v3->fields.__7__wrap23;
      v323 = *(_OWORD *)&v435.fields.list;
      v3->fields.__7__wrap23.fields.current = (struct MapControl_SpotInfo_o *)v435.fields.current;
      *(_OWORD *)&v3->fields.__7__wrap23.fields.list = v323;
      sub_B0D840(&v3->fields.__7__wrap23, 0LL);
LABEL_186:
      v3->fields.__1__state = -3;
      while ( 1 )
      {
        v324 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap23,
                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        if ( !v324 )
          break;
        current = v3->fields.__7__wrap23.fields.current;
        ++v3->fields._cnt_5__22;
        if ( !current )
          sub_B0D97C(v324);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_B0D97C(0LL);
        v328 = v3->fields.__8__2;
        if ( !v328 )
          sub_B0D97C(Mine);
        if ( Mine->fields.warId == v328->fields.targetWarId )
        {
          if ( !*p__8__3 )
            sub_B0D97C(Mine);
          v329 = (System_Collections_Generic_List_int__o *)(*p__8__3)[1].klass;
          if ( !v329 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_int___Add(
            v329,
            current->fields.spotId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( !(*p_cnt_5__22 % 300) )
        {
          v3->fields.__2__current = 0LL;
          sub_B0D840(&v3->fields.__2__current, 0LL);
          v290 = 3;
LABEL_311:
          v3->fields.__1__state = v290;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40____m__Finally1(v3, v325);
      *(_QWORD *)&p__7__wrap23->fields.index = 0LL;
      p__7__wrap23->fields.current = 0LL;
      p__7__wrap23->fields.list = 0LL;
      questMaster_5__5 = (DataMasterBase_o *)v3->fields._questMaster_5__5;
      if ( !questMaster_5__5 )
        sub_B0D97C(0LL);
      Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                          questMaster_5__5,
                                          (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v332 = *p__8__3;
      v333 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarQuestSelectionEntity;
      v336 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_QuestEntity__bool__TypeInfo,
                                                                                  v334,
                                                                                  v335);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v336,
        v332,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        (const MethodInfo_26189B8 *)Method_System_Func_QuestEntity__bool___ctor__);
      v337 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v333,
               (System_Func_TSource__bool__o *)v336,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v338 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v337,
               (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v3->fields._questList_5__23 = (struct QuestEntity_array *)v338;
      sub_B0D840(&v3->fields._questList_5__23, v338);
      v3->fields._mapCount_5__12 = 0;
      p_mapCount_5__12 = &v3->fields._mapCount_5__12;
      v339 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._questList_5__23,
               (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v3->fields._mapIdx_5__11 = v339;
      p_mapIdx_5__11 = &v3->fields._mapIdx_5__11;
      v340 = v3->fields._mapCount_5__12;
      break;
    case 3:
      p__7__wrap23 = &v3->fields.__7__wrap23;
      p_cnt_5__22 = &v3->fields._cnt_5__22;
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      goto LABEL_186;
    case 4:
      p_mapCount_5__12 = &v3->fields._mapCount_5__12;
      v181 = v3->fields._mapCount_5__12;
      p_mapIdx_5__11 = &v3->fields._mapIdx_5__11;
      v3->fields.__1__state = -1;
      goto LABEL_432;
    case 5:
      endCallback = v3->fields.endCallback;
      v3->fields.__1__state = -1;
      if ( !endCallback )
        sub_B0D97C(0LL);
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v340 < (int)v339 )
  {
    questList_5__23 = v3->fields._questList_5__23;
    if ( !questList_5__23 )
      sub_B0D97C(v339);
    if ( v340 >= questList_5__23->max_length )
    {
      v430 = sub_B0D9A8(v339);
      sub_B0D948(v430, 0LL);
    }
    v349 = questList_5__23->m_Items[v340];
    if ( !v349 )
      sub_B0D97C(v339);
    v350 = v3->fields.__8__3;
    if ( !v350 )
      sub_B0D97C(v339);
    v350->fields.questId = v349->fields.id;
    userQuestMaster_5__18 = v3->fields._userQuestMaster_5__18;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v353 = v3->fields.__8__3;
    if ( !v353 )
      sub_B0D97C(UserId);
    if ( !userQuestMaster_5__18 )
      sub_B0D97C(UserId);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__18, &v437, UserId, v353->fields.questId, 0LL) )
    {
      if ( !v437 )
        sub_B0D97C(0LL);
      QuestPhase = UserQuestEntity__getQuestPhase(v437, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_23241352 = (MapEntity_o *)QuestEntity__getSpotId_23241352(v349, QuestPhase + 1, 0LL);
    v358 = v3->fields.__8__3;
    if ( !v358 )
      sub_B0D97C(SpotId_23241352);
    if ( v358->fields.nowSpotId == (_DWORD)SpotId_23241352 )
    {
      if ( !_4__this )
        sub_B0D97C(SpotId_23241352);
    }
    else
    {
      v358->fields.nowSpotId = (int)SpotId_23241352;
      if ( !_4__this )
        sub_B0D97C(SpotId_23241352);
      v359 = (Il2CppObject *)v3->fields.__8__3;
      if ( !v359 )
        sub_B0D97C(SpotId_23241352);
      v360 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      v361 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v359[2].klass;
      if ( !v361 )
      {
        v361 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                          warId,
                                                                          v357);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v361,
          v359,
          Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v359[2].klass = (Il2CppClass *)v361;
        sub_B0D840(&v359[2], v361);
      }
      if ( !v360 )
        sub_B0D97C(SpotId_23241352);
      v362 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               v360,
               (System_Predicate_T__o *)v361,
               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v3->fields._spotInfo_5__16 = (struct MapControl_SpotInfo_o *)v362;
      sub_B0D840(&v3->fields._spotInfo_5__16, v362);
      spotInfo_5__16 = v3->fields._spotInfo_5__16;
      if ( !spotInfo_5__16 )
        sub_B0D97C(0LL);
      SpotId_23241352 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__16, 0LL);
      warId = (unsigned int)SpotId_23241352;
      if ( v3->fields._nowMapId_5__19 != (_DWORD)SpotId_23241352 )
      {
        v3->fields._nowMapId_5__19 = (int)SpotId_23241352;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_23241352, 0LL);
        v3->fields._mapInfo_5__15 = MapInfoByMapID;
        sub_B0D840(&v3->fields._mapInfo_5__15, MapInfoByMapID);
        v365 = v3->fields._mapInfo_5__15;
        if ( !v365 )
          sub_B0D97C(0LL);
        SpotId_23241352 = MapControl_MapInfo__GetMine(v365, 0LL);
        if ( !SpotId_23241352 )
          sub_B0D97C(0LL);
        warId = (unsigned int)SpotId_23241352->fields.warId;
        if ( v3->fields._nowWarId_5__20 != (_DWORD)warId )
        {
          v3->fields._nowWarId_5__20 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v3->fields._warInfo_5__13 = WarInfoByWarID;
          sub_B0D840(&v3->fields._warInfo_5__13, WarInfoByWarID);
          v367 = v3->fields._warInfo_5__13;
          if ( !v367 )
            sub_B0D97C(0LL);
          v368 = MapControl_WarInfo__GetMine(v367, 0LL);
          v3->fields._warEnt_5__17 = v368;
          sub_B0D840(&v3->fields._warEnt_5__17, v368);
        }
      }
    }
    v369 = (Il2CppObject *)v3->fields.__8__3;
    if ( !v369 )
      sub_B0D97C(SpotId_23241352);
    allQuestInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allQuestInfoList;
    v371 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v369[2].monitor;
    if ( !v371 )
    {
      v371 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                        System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                        warId,
                                                                        v357);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v371,
        v369,
        Method_QuestTree___c__DisplayClass40_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_QuestInfo___ctor__);
      v369[2].monitor = v371;
      sub_B0D840(&v369[2].monitor, v371);
    }
    if ( !allQuestInfoList )
      sub_B0D97C(SpotId_23241352);
    v372 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)v371,
             (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    if ( v372 != -1 )
    {
      v373 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allQuestInfoList;
      if ( !v373 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v373,
        v372,
        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v374 = v3->fields._warInfo_5__13;
    if ( !v437 )
    {
      if ( !v374 )
        sub_B0D97C(0LL);
      goto LABEL_358;
    }
    if ( !v374 )
      sub_B0D97C(0LL);
    MapControl_WarInfo__SetStatusCheckFlag(v374, 1, 0, 0LL);
    if ( !v437 )
      sub_B0D97C(0LL);
    HasStatus = UserQuestEntity__HasStatus(v437, 8, 0LL);
    if ( !HasStatus )
    {
      v376 = v3->fields._warInfo_5__13;
      if ( !v376 )
        sub_B0D97C(0LL);
      goto LABEL_360;
    }
    if ( !v437 )
      sub_B0D97C(HasStatus);
    if ( v437->fields.challengeNum >= 1 )
    {
      v376 = v3->fields._warInfo_5__13;
      if ( !v376 )
        sub_B0D97C(0LL);
LABEL_360:
      MapControl_WarInfo__SetStatusCheckFlag(v376, 4, 0, 0LL);
    }
    if ( !v437 )
      sub_B0D97C(0LL);
    ClearNum = UserQuestEntity__getClearNum(v437, 0LL);
    v374 = v3->fields._warInfo_5__13;
    if ( ClearNum < 1 )
    {
      if ( !v374 )
        sub_B0D97C(0LL);
LABEL_358:
      MapControl_WarInfo__SetStatusCheckFlag(v374, 2, 0, 0LL);
      v378 = 0;
      goto LABEL_372;
    }
    if ( !v374 )
      sub_B0D97C(0LL);
    v377 = MapControl_WarInfo__GetMine(v374, 0LL);
    if ( !v377 )
      sub_B0D97C(0LL);
    v380 = v3->fields.__8__3;
    if ( !v380 )
      sub_B0D97C(v377);
    if ( v377->fields.lastQuestId == v380->fields.questId )
    {
      v381 = v3->fields._warInfo_5__13;
      if ( !v381 )
        sub_B0D97C(0LL);
      v378 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v381, 8, 1, 0LL);
    }
    else
    {
      v378 = 1;
    }
LABEL_372:
    v382 = v3->fields.__8__3;
    if ( !v382 )
      sub_B0D97C(v377);
    v383 = v3->fields._spotInfo_5__16;
    if ( !v383 )
      sub_B0D97C(0LL);
    v384 = MapControl_SpotInfo__AddChild(v383, v382->fields.questId, 0LL);
    v385 = v3->fields._warInfo_5__13;
    if ( !v385 )
      sub_B0D97C(v384);
    v386 = v384;
    if ( !v384 )
      sub_B0D97C(0LL);
    v384->fields.warId = v385->fields.warId;
    v387 = v3->fields._warInfo_5__13;
    v384->fields._WarInfo_k__BackingField = v387;
    sub_B0D840(&v384->fields._WarInfo_k__BackingField, v387);
    v388 = v3->fields._spotInfo_5__16;
    v386->fields._SpotInfo_k__BackingField = v388;
    sub_B0D840(&v386->fields._SpotInfo_k__BackingField, v388);
    v386->fields.endTime = QuestTree__GetEndTime(_4__this, v386, 0LL);
    warEnt_5__17 = v3->fields._warEnt_5__17;
    if ( !warEnt_5__17 )
      sub_B0D97C(0LL);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__17, 0LL);
    if ( IsStartTypeQuest )
    {
      v391 = v3->fields._warEnt_5__17;
      if ( !v391 )
        sub_B0D97C(IsStartTypeQuest);
      v392 = v3->fields.__8__3;
      if ( !v392 )
        sub_B0D97C(IsStartTypeQuest);
      if ( v391->fields.targetId == v392->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v3->fields._warEnt_5__17, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_391;
      }
    }
    v393 = v3->fields._warEnt_5__17;
    if ( !v393 )
      sub_B0D97C(IsStartTypeQuest);
    eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v3->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !eventStatusQuestMismatchDictionary_5__10 )
      sub_B0D97C(0LL);
    v395 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             eventStatusQuestMismatchDictionary_5__10,
             v393->fields.id,
             &value,
             (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v395 )
    {
      v396 = v3->fields.__8__3;
      if ( !v396 )
        sub_B0D97C(v395);
      if ( !value )
        sub_B0D97C(0LL);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v396->fields.questId,
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_391:
        MapControl_QuestInfo__SetDispType(v386, 0, 0, 0, 0LL, 0, 0LL);
        v386->fields.touchType = 0;
LABEL_392:
        v398 = 1;
        goto LABEL_393;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v349, v386, v3->fields._nowWarId_5__20, 0LL) != 1 )
      goto LABEL_392;
    v397 = v3->fields._warInfo_5__13;
    if ( !v397 )
      sub_B0D97C(0LL);
    MapControl_WarInfo__SetStatusCheckFlag(v397, 1, 0, 0LL);
    v398 = 0;
LABEL_393:
    if ( MapControl_QuestInfo__IsDisaplayable(v386, 0LL) )
    {
      if ( ((v378 | v398) & 1) == 0 )
      {
        v399 = v3->fields._spotInfo_5__16;
        if ( !v399 )
          sub_B0D97C(0LL);
        MapControl_SpotInfo__AddQuestCount(v399, 1, 0LL);
        v400 = v3->fields._spotInfo_5__16;
        if ( !v400 )
          sub_B0D97C(0LL);
        MapControl_SpotInfo__AddAvailableQuestId(v400, v386->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v386, 0LL) == 1 )
      {
        v401 = MapControl_QuestInfo__GetMine(v386, 0LL);
        if ( !v401 )
          sub_B0D97C(0LL);
        HasFlag = QuestEntity__HasFlag(v401, 0x400000000000LL, 0LL);
        if ( !HasFlag )
        {
          v403 = v3->fields._spotInfo_5__16;
          if ( !v403 )
            sub_B0D97C(HasFlag);
          v403->fields._IsNext_k__BackingField = 1;
        }
        v404 = v3->fields._mapInfo_5__15;
        if ( !v404 )
          sub_B0D97C(HasFlag);
        v404->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v386, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v406 = v3->fields._spotInfo_5__16;
        if ( !v406 )
          sub_B0D97C(IsDisplayQuestNextIcon);
        v406->fields._IsNext_k__BackingField = 1;
        v407 = v3->fields._mapInfo_5__15;
        if ( !v407 )
          sub_B0D97C(IsDisplayQuestNextIcon);
        v407->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v349, 0x8000000000LL, 0LL) )
      {
        v408 = v3->fields._spotInfo_5__16;
        if ( !v408 )
          sub_B0D97C(0LL);
        MapControl_SpotInfo__AddFreeQuestCount(v408, 1, 0LL);
      }
    }
    v409 = v437;
    if ( v437 )
    {
      v409 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v437, 8, 0LL);
      if ( ((unsigned __int8)v409 & 1) != 0 )
      {
        if ( !v437 )
          sub_B0D97C(v409);
        v410 = v437->fields.challengeNum == 0;
      }
      else
      {
        v410 = 0;
      }
    }
    else
    {
      v410 = 1;
    }
    v386->fields.isNew = v410;
    v386->fields.questPhase = QuestPhase;
    v411 = v3->fields.__8__3;
    if ( !v411 )
      sub_B0D97C(v409);
    questPickupMaster_5__9 = v3->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_B0D97C(0LL);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v411->fields.questId, 0LL);
    v386->fields.pickupPriority = Priority;
    v414 = v3->fields.__8__3;
    if ( !v414 )
      sub_B0D97C(Priority);
    questPhaseMaster_5__6 = v3->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_B0D97C(0LL);
    v416 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v414->fields.questId, 0LL);
    v417 = v416;
    if ( !v416 )
      sub_B0D97C(0LL);
    v418 = v416[3];
    if ( (int)v418 >= 1 )
    {
      v419 = 0;
      while ( 1 )
      {
        v420 = v417[(int)v419 + 4];
        if ( !v420 )
          sub_B0D97C(v416);
        v416 = MapControl_QuestInfo__AddChild(v386, *(_DWORD *)(v420 + 16), *(_DWORD *)(v420 + 20), 0LL);
        if ( (int)++v419 >= (int)v418 )
          break;
        if ( v419 >= *((_DWORD *)v417 + 6) )
        {
          v421 = sub_B0D9A8(v416);
          sub_B0D948(v421, 0LL);
        }
      }
    }
    v422 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !v422 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v422,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v386,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    v181 = v3->fields._mapCount_5__12;
    if ( v181 && !(v181 % v3->fields._breakInterval_5__21) )
    {
      v3->fields.__2__current = 0LL;
      sub_B0D840(&v3->fields.__2__current, 0LL);
      v290 = 4;
      goto LABEL_311;
    }
LABEL_432:
    v340 = v181 + 1;
    *p_mapCount_5__12 = v340;
    v339 = (unsigned int)*p_mapIdx_5__11;
  }
  if ( !_4__this )
    sub_B0D97C(v339);
  v423 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v424 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v424 = QuestTree___c_TypeInfo;
  }
  v425 = v424->static_fields;
  _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v425->__9__40_11;
  if ( !_9__40_11 )
  {
    if ( (BYTE3(v424->vtable._0_Equals.methodPtr) & 4) != 0 && !v424->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v424);
      v425 = QuestTree___c_TypeInfo->static_fields;
    }
    v427 = (Il2CppObject *)v425->__9;
    _9__40_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_MapControl_QuestInfo__TypeInfo,
                                                                            method,
                                                                            v2);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__40_11,
      v427,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__40_11__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v428 = QuestTree___c_TypeInfo->static_fields;
    v428->__9__40_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__40_11;
    sub_B0D840(&v428->__9__40_11, _9__40_11);
  }
  if ( !v423 )
    sub_B0D97C(v424);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v423,
    (System_Comparison_T__o *)_9__40_11,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v3->fields.__8__3 = 0LL;
  sub_B0D840(&v3->fields.__8__3, 0LL);
  v3->fields._warInfo_5__13 = 0LL;
  sub_B0D840(&v3->fields._warInfo_5__13, 0LL);
  v3->fields._mapInfo_5__15 = 0LL;
  sub_B0D840(&v3->fields._mapInfo_5__15, 0LL);
  v3->fields._spotInfo_5__16 = 0LL;
  sub_B0D840(&v3->fields._spotInfo_5__16, 0LL);
  v3->fields._warEnt_5__17 = 0LL;
  sub_B0D840(&v3->fields._warEnt_5__17, 0LL);
  v3->fields._userQuestMaster_5__18 = 0LL;
  sub_B0D840(&v3->fields._userQuestMaster_5__18, 0LL);
  v3->fields._questList_5__23 = 0LL;
  sub_B0D840(&v3->fields._questList_5__23, 0LL);
  v429 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v429 )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(v429, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v3->fields.endCallback )
  {
    v3->fields.__2__current = 0LL;
    sub_B0D840(&v3->fields.__2__current, 0LL);
    v290 = 5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__40_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4212511 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4212511 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}