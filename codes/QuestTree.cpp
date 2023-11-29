void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  MapControl_RootInfo_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7

  if ( (byte_40F8282 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v18);
    sub_B16FFC(&MapControl_RootInfo_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree___ctor__, v20);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v21);
    byte_40F8282 = 1;
  }
  v22 = (MapControl_RootInfo_o *)sub_B170CC(MapControl_RootInfo_TypeInfo, method, v2, v3, v4);
  MapControl_RootInfo___ctor(v22, 0LL);
  this->fields.mapControlRootInfo = v22;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allQuestInfoList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allSpotInfoList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo,
                                                                                                  v51,
                                                                                                  v52,
                                                                                                  v53,
                                                                                                  v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allSpotRoadInfoList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo,
                                                                                                  v62,
                                                                                                  v63,
                                                                                                  v64,
                                                                                                  v65);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v66;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allMapGimmickInfoList,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_MapInfo__TypeInfo,
                                                                                                  v73,
                                                                                                  v74,
                                                                                                  v75,
                                                                                                  v76);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allMapInfoList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                                                                  v84,
                                                                                                  v85,
                                                                                                  v86,
                                                                                                  v87);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v88,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v88;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.allWarInfoList,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v95,
                                                                                                  v96,
                                                                                                  v97,
                                                                                                  v98);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v99,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v99;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questReleaseEntList,
    (System_Int32_array **)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_21530448(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_21527492(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MapGimmickEntity_o *Mine; // x0
  int64_t Time; // x0
  int64_t v11; // x21
  MapGimmickEntity_o *v12; // x20
  WebViewManager_o *Instance; // x0
  MapGimmickReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v15; // x2
  System_Int64_array *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40F827F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40F827F = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapGimmickReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    v16 = (System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v15);
    if ( !v16 )
      goto LABEL_22;
    max_length = v16->max_length;
    if ( !max_length || (v16->m_Items[0] = v12->fields.startedAt, max_length == 1) )
    {
      sub_B17100(v16, v17, v16);
      sub_B170A0();
    }
    v16->m_Items[1] = v12->fields.endedAt;
    QuestTree__UpdateForceUpdateTime(this, v11, v16, v18);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_22:
      sub_B170D4();
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
  clsQuestCheck_o *v17; // x0
  bool v18; // w24
  int64_t Time; // x23
  __int64 v20; // x2
  System_Int64_array *v21; // x25
  int64_t NoticeAt; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  int32_t v26; // w22
  _BOOL4 v27; // w21
  bool HasFlag; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *IsShop; // x0
  const MethodInfo *v32; // x1
  WebViewManager_o *v33; // x0
  UserQuestMaster_o *v34; // x21
  int64_t UserId; // x0
  clsQuestCheck_o *v36; // x0
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v38; // x21
  int32_t id; // w23
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v42; // w8
  MapControl_QuestInfo_o *v43; // x0
  int32_t v44; // w1
  int32_t type; // w2
  int32_t targetId; // w3
  int64_t value; // x4
  int32_t closedMessageId; // w5
  UserQuestEntity_o *v50; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_40F827B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&long___TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_B16FFC(&TerminalPramsManager_TypeInfo, v16);
    byte_40F827B = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v50 = 0LL;
  v17 = QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !v17 )
    goto LABEL_67;
  v18 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(v17, questEnt->fields.id, &questReleaseNG, questInfo, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v21 = (System_Int64_array *)sub_B17014(long___TypeInfo, 3LL, v20);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v21 )
    goto LABEL_67;
  if ( !v21->max_length
    || (v21->m_Items[0] = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL), v21->max_length <= 1)
    || (v21->m_Items[1] = NoticeAt, NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL), v21->max_length <= 2) )
  {
    sub_B17100(NoticeAt, v23, v24);
    sub_B170A0();
  }
  v21->m_Items[2] = NoticeAt;
  QuestTree__UpdateForceUpdateTime(v8, Time, v21, v25);
  v26 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_13;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v26 = 3;
  else
    v26 = 1;
  if ( v18 || HasFlag )
  {
    v27 = !HasFlag;
    goto LABEL_52;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_67;
    IsShop = (WarEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                              MasterData_WarQuestSelectionMaster,
                              &entity,
                              warId,
                              (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v33 )
              goto LABEL_67;
            v34 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v33,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v34 )
              goto LABEL_67;
            if ( UserQuestMaster__TryGetEntity(v34, &v50, UserId, questEnt->fields.id, 0LL) )
            {
              if ( !v50 )
                goto LABEL_67;
              if ( UserQuestEntity__HasStatus(v50, 8, 0LL) )
                goto LABEL_51;
            }
LABEL_41:
            v27 = 0;
            v26 = 0;
            goto LABEL_52;
          }
        }
      }
    }
    v36 = QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v32);
    if ( !v36 )
      goto LABEL_67;
    if ( !clsQuestCheck__IsQuestClear(v36, questEnt->fields.id, 0, 0LL) || questEnt->fields.afterClear != 5 )
      goto LABEL_41;
LABEL_51:
    v27 = 0;
    v26 = 2;
    goto LABEL_52;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_51;
  v38 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_67;
  id = questEnt->fields.id;
  v26 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest(Master_WarQuestSelectionMaster, id, 0LL) )
  {
LABEL_13:
    v27 = 0;
    goto LABEL_52;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v38, id, 0LL);
  v27 = 0;
  if ( IsCommonReleaseMultiClear )
    v26 = 0;
  else
    v26 = 2;
LABEL_52:
  forceOperation = questEnt->fields.forceOperation;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    v42 = 1;
  else
    v42 = forceOperation;
  if ( v42 )
  {
    v26 = v42 != 2;
    v27 = v26;
    goto LABEL_60;
  }
  if ( v26 == 2 && questReleaseNG )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v44 = 2;
      v26 = 2;
      v43 = questInfo;
      goto LABEL_62;
    }
LABEL_67:
    sub_B170D4();
  }
LABEL_60:
  if ( !questInfo )
    goto LABEL_67;
  v43 = questInfo;
  v44 = v26;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_62:
  MapControl_QuestInfo__SetDispType(v43, v44, type, targetId, value, closedMessageId, 0LL);
  questInfo->fields.touchType = v27;
  return v26;
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

  return QuestTree__CheckSpotCond_21530448(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_21530448(
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
  TerminalSceneComponent_c *v28; // x0
  struct TerminalSceneComponent_o *v29; // x8
  TerminalSceneComponent_c *v30; // x0
  struct TerminalSceneComponent_o *v31; // x8
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  int32_t missionId; // w8
  bool IsExistCommand; // w23
  __int64 v35; // x25
  __int64 v36; // x25
  UnityEngine_Object_o *v37; // x25
  WebViewManager_o *Instance; // x0
  clsQuestCheck_o *v39; // x0
  bool IsMissionAchive; // w0
  int64_t v41; // x2
  int32_t v42; // w0
  clsQuestCheck_o *v43; // x0
  clsQuestCheck_o *v44; // x0
  WebViewManager_o *v45; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v48; // x19
  int32_t WarId; // w0
  const MethodInfo *v50; // x4
  WebViewManager_o *v51; // x0
  QuestGroupMaster_o *v52; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  const MethodInfo *v54; // x1
  __int64 v55; // x2
  __int64 v56; // x8
  System_Int32_array *v57; // x20
  int32_t v58; // w22
  unsigned __int64 v59; // x24
  int32_t v60; // w21
  clsQuestCheck_o *v61; // x0
  WebViewManager_o *v62; // x0
  QuestGroupMaster_o *v63; // x0
  __int64 v64; // x8
  System_Int32_array *v65; // x20
  int32_t v66; // w22
  unsigned __int64 v67; // x24
  int32_t v68; // w21
  clsQuestCheck_o *v69; // x0
  WebViewManager_o *v70; // x0
  UserItemMaster_o *v71; // x21
  int64_t UserId; // x0
  int32_t num; // w8
  clsQuestCheck_o *v74; // x0
  WebViewManager_o *v75; // x0
  QuestGroupMaster_o *v76; // x0
  __int64 v77; // x8
  System_Int32_array *v78; // x20
  unsigned __int64 v79; // x24
  int32_t v80; // w21
  clsQuestCheck_o *v81; // x0
  int v82; // w21
  int v83; // w20
  clsQuestCheck_o *v84; // x0
  int32_t v85; // w0
  int32_t v86; // w8
  bool v87; // cc
  int32_t v88; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F827E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v21);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v22);
    byte_40F827E = 1;
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
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v23);
    byte_40F6042 = 1;
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
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v27);
    byte_40F6042 = 1;
  }
  v28 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v28 = TerminalSceneComponent_TypeInfo;
  }
  v29 = v28->static_fields->mInstance;
  if ( !v29 )
    goto LABEL_205;
  if ( !v29->fields._TransitionInfo_k__BackingField )
    goto LABEL_42;
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v28);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v27);
    byte_40F6042 = 1;
  }
  v30 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v30 = TerminalSceneComponent_TypeInfo;
  }
  v31 = v30->static_fields->mInstance;
  if ( !v31 )
    goto LABEL_205;
  TransitionInfo_k__BackingField = v31->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    goto LABEL_205;
  missionId = TransitionInfo_k__BackingField->fields.missionId;
  if ( !missionId )
  {
LABEL_42:
    v35 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v36 = **(_QWORD **)(v35 + 192);
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AAFCFC(v36);
    v37 = **(UnityEngine_Object_o ***)(v36 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      missionId = 0;
      IsExistCommand = 1;
      goto LABEL_53;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      missionId = 0;
      goto LABEL_53;
    }
LABEL_205:
    sub_B170D4();
  }
  IsExistCommand = 0;
LABEL_53:
  v24 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v24 & 1;
    case 2:
      v39 = QuestTree__get_QuestCheckInst(v24, v27);
      if ( !v39 )
        goto LABEL_205;
      if ( targetValue )
        LOBYTE(v24) = clsQuestCheck__IsQuestPhaseClear(v39, targetId, targetValue, IsExistCommand, 0LL);
      else
        LOBYTE(v24) = clsQuestCheck__IsQuestClear(v39, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 3:
      v43 = QuestTree__get_QuestCheckInst(v24, v27);
      if ( !v43 )
        goto LABEL_205;
      if ( targetValue )
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(v43, targetId, targetValue, IsExistCommand, 0LL);
      else
        IsMissionAchive = clsQuestCheck__IsQuestClear(v43, targetId, IsExistCommand, 0LL);
      goto LABEL_193;
    case 5:
      if ( missionId == targetId )
        goto LABEL_82;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 6:
      v44 = QuestTree__get_QuestCheckInst(v24, v27);
      if ( !v44 )
        goto LABEL_205;
      if ( clsQuestCheck__IsQuestClear(v44, targetId, IsExistCommand, 0LL) )
        goto LABEL_7;
      v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v45 )
        goto LABEL_205;
      MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v45,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_205;
      QuestEntity = QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, targetId, 0LL);
      if ( !QuestEntity )
        goto LABEL_205;
      v48 = QuestEntity;
      WarId = QuestEntity__GetWarId(QuestEntity, 0LL);
      LOBYTE(v24) = QuestTree__CheckQuestOpen(this, v48, 0LL, WarId, v50) == 1;
      return (unsigned __int8)v24 & 1;
    case 7:
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v51 )
        goto LABEL_205;
      v52 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v51,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !v52 )
        goto LABEL_205;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v52, targetId, 2, 0LL);
      if ( !QuestIdListByGroupId )
        goto LABEL_205;
      v56 = *(_QWORD *)&QuestIdListByGroupId->max_length;
      v57 = QuestIdListByGroupId;
      if ( (int)v56 >= 1 )
      {
        v58 = 0;
        v59 = 0LL;
        while ( v59 < (unsigned int)v56 )
        {
          v60 = v57->m_Items[v59 + 1];
          v61 = QuestTree__get_QuestCheckInst((QuestTree_o *)QuestIdListByGroupId, v54);
          if ( !v61 )
            goto LABEL_205;
          QuestIdListByGroupId = (System_Int32_array *)clsQuestCheck__IsQuestClear(v61, v60, IsExistCommand, 0LL);
          LODWORD(v56) = v57->max_length;
          ++v59;
          v58 += (unsigned __int8)QuestIdListByGroupId & 1;
          if ( (__int64)v59 >= (int)v56 )
            goto LABEL_195;
        }
        goto LABEL_206;
      }
      v58 = 0;
LABEL_195:
      if ( targetValue <= 1 )
        v88 = 1;
      else
        v88 = targetValue;
      LOBYTE(v24) = v58 < v88;
      return (unsigned __int8)v24 & 1;
    case 8:
      v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v62 )
        goto LABEL_205;
      v63 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v62,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !v63 )
        goto LABEL_205;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v63, targetId, 2, 0LL);
      if ( !QuestIdListByGroupId )
        goto LABEL_205;
      v64 = *(_QWORD *)&QuestIdListByGroupId->max_length;
      v65 = QuestIdListByGroupId;
      if ( (int)v64 < 1 )
        goto LABEL_177;
      v66 = 0;
      v67 = 0LL;
      while ( v67 < (unsigned int)v64 )
      {
        v68 = v65->m_Items[v67 + 1];
        v69 = QuestTree__get_QuestCheckInst((QuestTree_o *)QuestIdListByGroupId, v54);
        if ( !v69 )
          goto LABEL_205;
        QuestIdListByGroupId = (System_Int32_array *)clsQuestCheck__IsQuestClear(v69, v68, IsExistCommand, 0LL);
        LODWORD(v64) = v65->max_length;
        ++v67;
        v66 += (unsigned __int8)QuestIdListByGroupId & 1;
        if ( (__int64)v67 >= (int)v64 )
          goto LABEL_178;
      }
      goto LABEL_206;
    case 9:
      v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v70 )
        goto LABEL_205;
      v71 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v70,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v71 )
        goto LABEL_205;
      if ( !UserItemMaster__TryGetEntity(v71, &entity, UserId, targetId, 0LL) )
      {
        num = 0;
        goto LABEL_187;
      }
      if ( !entity )
        goto LABEL_205;
      num = entity->fields.num;
LABEL_187:
      v87 = num < targetValue;
LABEL_188:
      LOBYTE(v24) = !v87;
      return (unsigned __int8)v24 & 1;
    case 10:
      v74 = QuestTree__get_QuestCheckInst(v24, v27);
      if ( !v74 )
        goto LABEL_205;
      LOBYTE(v24) = clsQuestCheck__IsQuestClearRaw(v74, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 11:
      v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v75 )
        goto LABEL_205;
      v76 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v75,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !v76 )
        goto LABEL_205;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v76, targetId, 2, 0LL);
      if ( !QuestIdListByGroupId )
        goto LABEL_205;
      v77 = *(_QWORD *)&QuestIdListByGroupId->max_length;
      v78 = QuestIdListByGroupId;
      if ( (int)v77 >= 1 )
      {
        v66 = 0;
        v79 = 0LL;
        while ( v79 < (unsigned int)v77 )
        {
          v80 = v78->m_Items[v79 + 1];
          v81 = QuestTree__get_QuestCheckInst((QuestTree_o *)QuestIdListByGroupId, v54);
          if ( !v81 )
            goto LABEL_205;
          QuestIdListByGroupId = (System_Int32_array *)clsQuestCheck__IsQuestClearRaw(v81, v80, IsExistCommand, 0LL);
          LODWORD(v77) = v78->max_length;
          ++v79;
          v66 += (unsigned __int8)QuestIdListByGroupId & 1;
          if ( (__int64)v79 >= (int)v77 )
            goto LABEL_178;
        }
LABEL_206:
        sub_B17100(QuestIdListByGroupId, v54, v55);
        sub_B170A0();
      }
LABEL_177:
      v66 = 0;
LABEL_178:
      if ( targetValue <= 1 )
        v86 = 1;
      else
        v86 = targetValue;
      v87 = v66 < v86;
      goto LABEL_188;
    case 12:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 13:
      v82 = targetId / 100;
      v83 = targetId % 100;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventRaceGoalScriptPlayed(v82, v83, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 16:
      if ( missionId == targetId )
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
      v41 = targetValue;
      v42 = 83;
      goto LABEL_203;
    case 19:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 84;
      goto LABEL_203;
    case 20:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 85;
      goto LABEL_203;
    case 21:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 86;
      goto LABEL_203;
    case 22:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 87;
      goto LABEL_203;
    case 23:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 88;
      goto LABEL_203;
    case 24:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 89;
      goto LABEL_203;
    case 25:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 90;
      goto LABEL_203;
    case 26:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 91;
      goto LABEL_203;
    case 27:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 23;
      goto LABEL_203;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 76;
      goto LABEL_203;
    case 29:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 30:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetValue;
      v42 = 97;
      goto LABEL_203;
    case 31:
      v84 = QuestTree__get_QuestCheckInst(v24, v27);
      if ( !v84 )
        goto LABEL_205;
      v85 = clsQuestCheck__GetBeforeClearQuestId(v84, IsExistCommand, 0LL);
      if ( (v85 & 0x80000000) != 0 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v41 = targetValue;
        v42 = 113;
LABEL_203:
        LOBYTE(v24) = CondType__IsOpen(v42, targetId, v41, 0, 0LL);
      }
      else
      {
        LOBYTE(v24) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v85, 1, 0LL);
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

  return QuestTree__CheckSpotCond_21530448(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F8279 & 1) == 0 )
  {
    sub_B16FFC(&QuestTree__EnumerateBlankEarthSpotInfo_d__40_TypeInfo, mapInfo);
    byte_40F8279 = 1;
  }
  v8 = sub_B170CC(QuestTree__EnumerateBlankEarthSpotInfo_d__40_TypeInfo, mapInfo, blankEarthSpotMaster, method, v4);
  QuestTree__EnumerateBlankEarthSpotInfo_d__40___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *)v8, -2, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 72) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 72), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 48) = mapInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)mapInfo, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 64) = blankEarthSpotMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 64),
    (System_Int32_array **)blankEarthSpotMaster,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v8;
}


int64_t __fastcall QuestTree__GetEndTime(
        QuestTree_o *this,
        MapControl_QuestInfo_o *questInfo,
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
  int32_t questId; // w21
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o **p_questReleaseEntList; // x19
  EventQuestMaster_o *v16; // x22
  WarQuestSelectionMaster_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x23
  int64_t v19; // x19
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v24; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v26; // x0
  const MethodInfo *v27; // x3
  QuestEntity_o *v28; // x0
  QuestEntity_o *Mine; // x0
  int v30; // w21
  int64_t v31; // x20
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F827C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_B16FFC(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_40F827C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !questInfo )
    goto LABEL_38;
  questId = questInfo->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (p_questReleaseEntList = &this->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_31211884(
          Master_WarQuestSelectionMaster,
          questId,
          p_questReleaseEntList,
          0LL),
        v16 = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventQuestMaster___),
        v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_38:
    sub_B170D4();
  }
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)v17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_questReleaseEntList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v34 = v33;
  v19 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = v34.fields.current;
    if ( !v34.fields.current )
      sub_B170D4();
    klass_high = HIDWORD(v34.fields.current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !v16 )
          sub_B170D4();
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(v16, questId, 0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v18 )
            sub_B170D4();
          Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v18,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v24 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v24, 1, 0LL);
LABEL_28:
              v19 = EndTime;
              goto LABEL_29;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_B170D4();
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_28;
      case 13:
        v28 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v28 )
          sub_B170D4();
        EndTime = QuestEntity__GetEndTime(v28, 1, 0LL);
        goto LABEL_28;
      case 166:
        v26 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v26, v26, (QuestReleaseEntity_o *)current, v27);
        goto LABEL_28;
      default:
LABEL_29:
        if ( v19 >= 1 )
        {
          v30 = 3;
          v31 = v19;
          goto LABEL_32;
        }
        break;
    }
  }
  v31 = 0LL;
  v30 = 1;
LABEL_32:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v30 + 1) >> 2 )
    return v31;
  return v19;
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
  int64_t Time_23684488; // x0
  int64_t value; // x22
  int64_t v11; // x21
  unsigned int v12; // w25
  int64_t v13; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_40F827D & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, questEnt);
    byte_40F827D = 1;
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
  v8 = 0LL;
  if ( v7 > QuestEntity__getClosedAt(questEnt, 0LL) )
    return v8;
  if ( !questReleaseEnt )
LABEL_28:
    sub_B170D4();
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v16.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_23684488 = NetworkManager__getTime_23684488(v16, 0LL);
  value = questReleaseEnt->fields.value;
  v11 = Time_23684488;
  dateData = NetworkManager__getDateTime_23685272(Time_23684488 - 3600 * value, 0LL).fields.dateData;
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
    dateData = NetworkManager__getDateTime_23685272(v13, 0LL).fields.dateData;
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


int32_t __fastcall QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  int32_t SpotID; // w0
  const MethodInfo *v6; // x2
  MapControl_SpotInfo_o *SpotInfo; // x0

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0LL),
        (SpotInfo = QuestTree__GetSpotInfo(this, SpotID, v6)) == 0LL) )
  {
    sub_B170D4();
  }
  return MapControl_SpotInfo__GetMapID(SpotInfo, 0LL);
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
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x20
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x1
  int32_t v34; // w28
  QuestTree_o *v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_List_int__o *v43; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *v44; // x0
  MapControl_SpotInfo_o *current; // x22
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v47; // x0
  int32_t Item; // w23
  int v49; // [xsp+Ch] [xbp-E4h]
  _BYTE v50[44]; // [xsp+10h] [xbp-E0h] BYREF
  int v51; // [xsp+3Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_40F826D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_40F826D = 1;
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
  v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v54.fields.current )
      sub_B170D4();
    SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v54.fields.current, 0LL);
    if ( !SpotList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v53.fields.current )
        sub_B170D4();
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v53.fields.current,
                                                                              0,
                                                                              0LL);
      if ( !v31 )
        sub_B170D4();
      System_Collections_Generic_List_int___AddRange(
        v31,
        AvailableQuestIdList,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    *(_DWORD *)&v50[4 * v51++ + 24] = 108;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 108 )
      --v51;
  }
  *(_DWORD *)&v50[4 * v51++ + 24] = 133;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 133 )
    --v51;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v31, v37);
  v43 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41,
                                                    v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserReachableMapList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v34 = 0;
  v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v54.fields.current )
      sub_B170D4();
    v44 = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v54.fields.current, 0LL);
    if ( !v44 )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      current = (MapControl_SpotInfo_o *)v53.fields.current;
      if ( !v53.fields.current )
        sub_B170D4();
      if ( HIDWORD(v53.fields.current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_B170D4();
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v47 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v47 )
        sub_B170D4();
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v50,
        v47,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v49 = 0;
      v52 = *(System_Collections_Generic_List_Enumerator_int__o *)v50;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v52,
                (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( !ShareQuestIdToGroupIdDict )
          sub_B170D4();
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v52.fields.current,
                 (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( Item )
        {
          if ( !v43 )
            sub_B170D4();
          if ( System_Collections_Generic_List_int___Contains(
                 v43,
                 Item,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            ++v49;
          }
          else
          {
            System_Collections_Generic_List_int___Add(
              v43,
              Item,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      *(_DWORD *)&v50[4 * v51++ + 24] = 320;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v52,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 320 )
        --v51;
      v34 = v34 - v49 + current->fields.questCount;
    }
    *(_DWORD *)&v50[4 * v51++ + 24] = 363;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 363 )
      --v51;
  }
  *(_DWORD *)&v50[4 * v51++ + 24] = 391;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v51 && *(_DWORD *)&v50[4 * v51 + 20] == 391 )
    --v51;
  return v34;
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
  __int64 v24; // x3
  __int64 v25; // x4
  MapControl_MapInfo_o *v26; // x20
  System_Collections_Generic_List_int__o *v27; // x21
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x1
  QuestTree_o *v31; // x0
  const MethodInfo *v32; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_int__o *v38; // x22
  System_Collections_Generic_List_MapControl_SpotInfo__o *v39; // x0
  int32_t v40; // w24
  MapControl_SpotInfo_o *v41; // x23
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v43; // x0
  int32_t Item; // w24
  int v45; // w10
  int32_t v46; // w9
  int v47; // w20
  int32_t v49; // [xsp+8h] [xbp-C8h]
  int v50; // [xsp+10h] [xbp-C0h]
  int v51; // [xsp+14h] [xbp-BCh]
  int v52; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+18h] [xbp-B8h] BYREF
  int v54[3]; // [xsp+30h] [xbp-A0h]
  int v55; // [xsp+3Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40F8270 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_40F8270 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
  v55 = 0;
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  v26 = MapInfoByMapID;
  v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  SpotList = MapControl_MapInfo__GetSpotList(v26, 0LL);
  if ( !SpotList )
    goto LABEL_52;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v57 = v53;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
  {
    current = v57.fields.current;
    if ( layer < 1 )
    {
      if ( !v57.fields.current )
        sub_B170D4();
LABEL_12:
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)current,
                                                                              1,
                                                                              0LL);
      if ( !v27 )
        sub_B170D4();
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !v57.fields.current )
        sub_B170D4();
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v57.fields.current, 0LL) == layer )
        goto LABEL_12;
    }
  }
  v54[0] = 98;
  v55 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  v55 = 0;
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v31, v27, v32);
  v38 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v34,
                                                    v35,
                                                    v36,
                                                    v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v39 = MapControl_MapInfo__GetSpotList(v26, 0LL);
  if ( !v39 )
LABEL_52:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v39,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v51 = 0;
  v57 = v53;
  v40 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
  {
    v41 = (MapControl_SpotInfo_o *)v57.fields.current;
    if ( layer < 1 )
    {
      if ( !v57.fields.current )
        sub_B170D4();
LABEL_22:
      if ( v41->fields.dispType == 1 )
        goto LABEL_25;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v41->fields.spotId, 0LL) )
      {
LABEL_25:
        v49 = v40;
        v43 = MapControl_SpotInfo__GetAvailableQuestIdList(v41, 1, 0LL);
        if ( !v43 )
          sub_B170D4();
        System_Collections_Generic_List_int___GetEnumerator(
          &v53,
          v43,
          (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v50 = 0;
        v56 = v53;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v56,
                  (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( !ShareQuestIdToGroupIdDict )
            sub_B170D4();
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   ShareQuestIdToGroupIdDict,
                   (int32_t)v56.fields.current,
                   (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          if ( Item )
          {
            if ( !v38 )
              sub_B170D4();
            if ( System_Collections_Generic_List_int___Contains(
                   v38,
                   Item,
                   (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              ++v50;
            }
            else
            {
              System_Collections_Generic_List_int___Add(
                v38,
                Item,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v54[v51] = 282;
        v52 = ++v55;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v56,
          (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        v45 = v52;
        if ( v52 )
        {
          v46 = v49;
          if ( v54[v52 - 1] == 282 )
          {
            v45 = v52 - 1;
            v55 = v52 - 1;
          }
        }
        else
        {
          v46 = v49;
        }
        v51 = v45;
        v40 = v46 - v50 + v41->fields.questCount;
      }
    }
    else
    {
      if ( !v57.fields.current )
        sub_B170D4();
      if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v57.fields.current, 0LL) == layer )
        goto LABEL_22;
    }
  }
  v54[v51] = 323;
  v47 = ++v55;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  if ( v47 && v54[v47 - 1] == 323 )
    v55 = v47 - 1;
  return v40;
}


// local variable allocation has failed, the output may be wrong!
MapControl_QuestInfo_o *__fastcall QuestTree__GetQuestInfo(
        QuestTree_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestTree___c__DisplayClass22_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F826B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_MapControl_QuestInfo__TypeInfo, v8);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass22_0__GetQuestInfo_b__0__, v9);
    sub_B16FFC(&QuestTree___c__DisplayClass22_0_TypeInfo, v10);
    byte_40F826B = 1;
  }
  v11 = (QuestTree___c__DisplayClass22_0_o *)sub_B170CC(
                                               QuestTree___c__DisplayClass22_0_TypeInfo,
                                               *(_QWORD *)&questId,
                                               method,
                                               v3,
                                               v4);
  QuestTree___c__DisplayClass22_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_QuestTree___c__DisplayClass22_0__GetQuestInfo_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B170D4();
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
                                     (System_Predicate_T__o *)v17,
                                     (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8280 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v12);
    byte_40F8280 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)allQuestInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B170D4();
    if ( LODWORD(v16.fields.current[4].klass) == warId )
    {
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16.fields.current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v13;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F826F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F826F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict(MasterData_WarQuestSelectionMaster, questIdList, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestTree___c__DisplayClass21_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F826A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_MapControl_SpotInfo__TypeInfo, v8);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v9);
    sub_B16FFC(&QuestTree___c__DisplayClass21_0_TypeInfo, v10);
    byte_40F826A = 1;
  }
  v11 = (QuestTree___c__DisplayClass21_0_o *)sub_B170CC(
                                               QuestTree___c__DisplayClass21_0_TypeInfo,
                                               *(_QWORD *)&spotId,
                                               method,
                                               v3,
                                               v4);
  QuestTree___c__DisplayClass21_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.spotId = spotId,
        allSpotInfoList = this->fields.allSpotInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__),
        !allSpotInfoList) )
  {
    sub_B170D4();
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allSpotInfoList,
                                    (System_Predicate_T__o *)v17,
                                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x20
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  WarEntity_o *Mine; // x0
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  WebViewManager_o *Instance; // x0
  MapButtonMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_int__o *v44; // x22
  QuestTree___c_c *v45; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x23
  Il2CppObject *v48; // x24
  struct QuestTree___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v61; // x21

  if ( (byte_40F826E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v6);
    sub_B16FFC(&Method_System_Func_MapButtonEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_MapButtonEntity__int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Predicate_MapControl_MapInfo___ctor__, v14);
    sub_B16FFC(&System_Predicate_MapControl_MapInfo__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_QuestTree___c__GetUserReachableMapList_b__28_0__, v17);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass28_0__GetUserReachableMapList_b__1__, v18);
    sub_B16FFC(&QuestTree___c__DisplayClass28_0_TypeInfo, v19);
    sub_B16FFC(&QuestTree___c_TypeInfo, v20);
    byte_40F826E = 1;
  }
  v21 = sub_B170CC(QuestTree___c__DisplayClass28_0_TypeInfo, warInfo, method, v3, v4);
  QuestTree___c__DisplayClass28_0___ctor((QuestTree___c__DisplayClass28_0_o *)v21, 0LL);
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_27;
    OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           warInfo,
                                                                           Map,
                                                                           0LL);
    v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31,
                                                      v32);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v21 )
      goto LABEL_27;
    *(_QWORD *)(v21 + 16) = v33;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    if ( !OpenedButtons )
      goto LABEL_27;
    v44 = *(System_Collections_Generic_List_int__o **)(v21 + 16);
    if ( OpenedButtons[1].monitor )
    {
      v45 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v45 = QuestTree___c_TypeInfo;
      }
      static_fields = v45->static_fields;
      _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          static_fields = QuestTree___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_MapButtonEntity__int__TypeInfo,
                                                                                     v40,
                                                                                     v41,
                                                                                     v42,
                                                                                     v43);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__28_0,
          v48,
          Method_QuestTree___c__GetUserReachableMapList_b__28_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_MapButtonEntity__int___ctor__);
        v49 = QuestTree___c_TypeInfo->static_fields;
        v49->__9__28_0 = (struct System_Func_MapButtonEntity__int__o *)_9__28_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v49->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             OpenedButtons,
                                                             (System_Func_TSource__TResult__o *)_9__28_0,
                                                             (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
      if ( !v44 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v44,
        v56,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    else
    {
      if ( !Map || !v44 )
        goto LABEL_27;
      System_Collections_Generic_List_int___Add(
        *(System_Collections_Generic_List_int__o **)(v21 + 16),
        Map->fields.mapId,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    v61 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59,
                                                                     v60);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v61,
      (Il2CppObject *)v21,
      Method_QuestTree___c__DisplayClass28_0__GetUserReachableMapList_b__1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
    if ( mapInfoList )
      return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)mapInfoList,
                                                                        (System_Predicate_T__o *)v61,
                                                                        (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
LABEL_27:
    sub_B170D4();
  }
  return mapInfoList;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestTree___c__DisplayClass32_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20
  peRenderTexture_ChangeLayerObject_o *v18; // x0

  if ( (byte_40F8272 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_MapControl_QuestInfo__TypeInfo, v8);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass32_0__GetWarID_ByQuestID_b__0__, v9);
    sub_B16FFC(&QuestTree___c__DisplayClass32_0_TypeInfo, v10);
    byte_40F8272 = 1;
  }
  v11 = (QuestTree___c__DisplayClass32_0_o *)sub_B170CC(
                                               QuestTree___c__DisplayClass32_0_TypeInfo,
                                               *(_QWORD *)&questId,
                                               method,
                                               v3,
                                               v4);
  QuestTree___c__DisplayClass32_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.questId = questId,
        allQuestInfoList = this->fields.allQuestInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_QuestTree___c__DisplayClass32_0__GetWarID_ByQuestID_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_QuestInfo___ctor__),
        !allQuestInfoList) )
  {
    sub_B170D4();
  }
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allQuestInfoList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v18 )
    LODWORD(v18) = v18[1].monitor;
  return (int)v18;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v9; // x19

  if ( (byte_40F8266 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___66757392, v6);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v7);
    byte_40F8266 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v9 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                         System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v9,
    allWarInfoList,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___66757392);
  if ( !v9 )
    sub_B170D4();
  System_Collections_Generic_List_MapControl_WarInfo___Reverse(
    (System_Collections_Generic_List_MapControl_WarInfo__o *)v9,
    (const MethodInfo_2F27B38 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v9;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F8267 & 1) == 0 )
  {
    sub_B16FFC(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_40F8267 = 1;
  }
  v7 = sub_B170CC(QuestTree__Init_d__15_TypeInfo, endCallback, method, v3, v4);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x0
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x0
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *allSpotRoadInfoList; // x0
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x0
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x0

  if ( (byte_40F827A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_40F827A = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_11;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allQuestInfoList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allSpotInfoList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)allSpotRoadInfoList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        (allMapGimmickInfoList = this->fields.allMapGimmickInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)allMapGimmickInfoList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__),
        (allMapInfoList = this->fields.allMapInfoList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)allMapInfoList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__),
        (allWarInfoList = this->fields.allWarInfoList) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allWarInfoList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8274 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8274 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    warId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_21525412(this, entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_21525412(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t id; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t Time; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x2
  bool v15; // w21
  System_Int64_array *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8275 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&long___TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F8275 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_20;
  id = warEnt->fields.id;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( QuestTree__IsWarOpen(this, id, v13) )
  {
    if ( !entity )
      goto LABEL_20;
    v15 = Time < *(_QWORD *)&entity->fields.eventId;
  }
  else
  {
    v15 = 0;
  }
  v16 = (System_Int64_array *)sub_B17014(long___TypeInfo, 1LL, v14);
  if ( !entity || !v16 )
LABEL_20:
    sub_B170D4();
  if ( !v16->max_length )
  {
    sub_B17100(v16, v17, v16);
    sub_B170A0();
  }
  v16->m_Items[0] = *(_QWORD *)&entity->fields.eventId;
  QuestTree__UpdateForceUpdateTime(this, Time, v16, v18);
  return v15;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  WebViewManager_o *Instance; // x0
  int64_t forceUpdateTime; // x19

  if ( (byte_40F8268 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F8268 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  Il2CppObject *current; // x21
  SpotEntity_o *Mine; // x1
  const MethodInfo *v14; // x3
  char v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F8271 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_40F8271 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SpotList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
  {
    current = v19.fields.current;
    if ( layer < 1 )
    {
      if ( !v19.fields.current )
        sub_B170D4();
      goto LABEL_12;
    }
    if ( !v19.fields.current )
      sub_B170D4();
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_B170D4();
  return QuestTree__CheckSpotCond_21530448(
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
    sub_B170D4();
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_21530448(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_21530448(
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

  if ( (byte_40F8281 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_40F8281 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields.current;
    v12 = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
    if ( !current )
      sub_B170D4();
    if ( !v12 )
      sub_B170D4();
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v13 != 9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  clsQuestCheck_o *v8; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_MapControl_QuestInfo__o *QuestInfoByWarId; // x0
  char v13; // w19
  int v14; // w20
  clsQuestCheck_o *v15; // x0
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_40F8273 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_40F8273 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v8 = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !v8 )
    goto LABEL_22;
  v9 = clsQuestCheck__IsMainInterlude(v8, warId, 0LL);
  if ( v9 )
    goto LABEL_5;
  v15 = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
  if ( !v15 )
LABEL_22:
    sub_B170D4();
  if ( clsQuestCheck__IsWarClear(v15, warId, 0LL) )
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
  QuestInfoByWarId = QuestTree__GetQuestInfoByWarId(v4, warId, v11);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestInfoByWarId,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B170D4();
    if ( LODWORD(v19.fields.current[2].klass) == 1 )
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
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (v14 == 17) & v13;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
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
  WebViewManager_o *Instance; // x0
  bool IsExistCommand; // w21
  clsQuestCheck_o *v25; // x0
  int32_t v26; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_40F8276 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    sub_B16FFC(&SpotEntity_TypeInfo, v11);
    byte_40F8276 = 1;
  }
  v12 = sub_B170CC(SpotEntity_TypeInfo, blankEarthSpotEnt, spotInfo, method, v4);
  SpotEntity___ctor((SpotEntity_o *)v12, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_22;
  if ( !v12 )
    goto LABEL_22;
  *(_DWORD *)(v12 + 16) = blankEarthSpotEnt->fields.id;
  *(_DWORD *)(v12 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_DWORD *)(v12 + 20) = blankEarthSpotEnt->fields.warId;
  name = (System_Int32_array **)blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v12 + 32) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), name, v13, v14, v15, v16, v17, v18);
  if ( !spotInfo )
    goto LABEL_22;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v12, 0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AAFCFC(v21);
  v22 = **(UnityEngine_Object_o ***)(v21 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v12 + 16), 0LL);
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
  v25 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v25 )
LABEL_22:
    sub_B170D4();
  v26 = clsQuestCheck__GetBeforeClearQuestId(v25, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v26, 0, 0LL);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void __fastcall QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  bool v4; // w0

  v4 = QuestTree__CheckMapGimmickCond_21527492(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_B170D4();
  (*mapGimmickInfo)->fields.dispType = v4;
}


void __fastcall QuestTree__SetupSpotInfo(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        MapControl_SpotInfo_o **spotInfo,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  bool IsSpotSatisfyingActiveCond; // w0
  int v9; // w9
  int32_t v10; // w10
  MapControl_SpotInfo_o *v11; // x8

  if ( QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method) )
  {
    IsSpotSatisfyingActiveCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v7);
    if ( !*spotInfo
      || ((v9 = 1, IsSpotSatisfyingActiveCond) ? (v10 = 1) : (v10 = 2),
          (*spotInfo)->fields.dispType = v10,
          (v11 = *spotInfo) == 0LL) )
    {
LABEL_12:
      sub_B170D4();
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
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x6
  bool v11; // w0
  int32_t v12; // w9

  if ( !spotRoadEnt )
    goto LABEL_11;
  id = spotRoadEnt->fields.id;
  if ( !QuestTree__CheckSpotCond_21530448(
          this,
          1,
          id,
          spotRoadEnt->fields.dispCondType,
          spotRoadEnt->fields.dispTargetId,
          spotRoadEnt->fields.dispTargetValue,
          v4)
    || !QuestTree__CheckSpotCond_21530448(
          this,
          1,
          id,
          spotRoadEnt->fields.dispCondType2,
          spotRoadEnt->fields.dispTargetId2,
          spotRoadEnt->fields.dispTargetValue2,
          v9) )
  {
    if ( *spotRoadInfo )
    {
      (*spotRoadInfo)->fields.dispType = 0;
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  v11 = QuestTree__CheckSpotCond_21530448(
          this,
          1,
          id,
          spotRoadEnt->fields.activeCondType,
          spotRoadEnt->fields.activeTargetId,
          spotRoadEnt->fields.activeTargetValue,
          v10);
  if ( !*spotRoadInfo )
    goto LABEL_11;
  if ( v11 )
    v12 = 1;
  else
    v12 = 2;
  (*spotRoadInfo)->fields.dispType = v12;
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

  if ( !times )
    sub_B170D4();
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = *(_QWORD *)&times->max_length;
    if ( !v4 )
    {
LABEL_10:
      sub_B17100(this, nowTime, times);
      sub_B170A0();
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

  if ( (byte_40F8269 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_40F8269 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL);
}


clsQuestCheck_o *__fastcall QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40F8265 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v2);
    byte_40F8265 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  return SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F8277 & 1) == 0 )
  {
    sub_B16FFC(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_TypeInfo, endCallback);
    byte_40F8277 = 1;
  }
  v7 = sub_B170CC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_TypeInfo, endCallback, method, v3, v4);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck(
        QuestTree_o *this,
        int32_t targetWarId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F8278 & 1) == 0 )
  {
    sub_B16FFC(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_TypeInfo, *(_QWORD *)&targetWarId);
    byte_40F8278 = 1;
  }
  v8 = sub_B170CC(
         QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_TypeInfo,
         *(_QWORD *)&targetWarId,
         endCallback,
         method,
         v4);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 32) = targetWarId;
  *(_QWORD *)(v8 + 72) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 72),
    (System_Int32_array **)endCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v8;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestTree___c__DisplayClass26_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F826C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Predicate_MapControl_MapInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_MapControl_MapInfo__TypeInfo, v8);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass26_0__mfGetMapInfoByMapID_b__0__, v9);
    sub_B16FFC(&QuestTree___c__DisplayClass26_0_TypeInfo, v10);
    byte_40F826C = 1;
  }
  v11 = (QuestTree___c__DisplayClass26_0_o *)sub_B170CC(
                                               QuestTree___c__DisplayClass26_0_TypeInfo,
                                               *(_QWORD *)&mapId,
                                               method,
                                               v3,
                                               v4);
  QuestTree___c__DisplayClass26_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.mapId = mapId;
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_QuestTree___c__DisplayClass26_0__mfGetMapInfoByMapID_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)allMapInfoList,
                                   (System_Predicate_T__o *)v17,
                                   (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotMaster_o *blankEarthSpotMaster; // x0
  System_Int32_array **v14; // x0
  BattleServantConfConponent_o *p__7__wrap1; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w8
  int32_t _7__wrap2; // w8
  BattleServantConfConponent_c *klass; // x9
  int32_t namespaze; // w10
  BlankEarthSpotEntity_o *v26; // x21
  MapControl_MapInfo_o *v27; // x0
  MapControl_SpotInfo_o *v28; // x0
  System_Int32_array **v29; // x22
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_40FA340 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *)sub_B16FFC(&BlankEarthSpotMaster_TypeInfo, method);
    byte_40FA340 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v8->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap1;
    v8->fields.__1__state = -1;
    v22 = _7__wrap2 + 1;
    v8->fields.__7__wrap2 = v22;
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
    blankEarthSpotMaster = v8->fields.blankEarthSpotMaster;
    if ( !blankEarthSpotMaster )
      goto LABEL_22;
    v14 = (System_Int32_array **)BlankEarthSpotMaster__GetByMapId(blankEarthSpotMaster, mapId, 0LL);
    v8->fields.__7__wrap1 = (struct BlankEarthSpotEntity_array *)v14;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap1;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields.__7__wrap1, v14, v16, v17, v18, v19, v20, v21);
    v22 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  klass = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_22;
  namespaze = (int32_t)klass->_1.namespaze;
  if ( v22 < namespaze )
  {
    if ( v22 >= (unsigned int)namespaze )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v26 = (BlankEarthSpotEntity_o *)*((_QWORD *)&klass->_1.byval_arg.data + v22);
    if ( v26 )
    {
      v27 = v8->fields.mapInfo;
      if ( v27 )
      {
        v28 = MapControl_MapInfo__AddChild(v27, v26->fields.id, 0LL);
        if ( _4__this )
        {
          v29 = (System_Int32_array **)v28;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v26, v28, 0LL);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v29;
          p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B16F98(p__2__current, v29, v31, v32, v33, v34, v35, v36);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  p__7__wrap1->klass = 0LL;
  sub_B16F98(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  int32_t l__initialThreadId; // w20
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **_4__this; // x1
  System_Int32_array **_3__mapInfo; // x1
  System_Int32_array **_3__blankEarthSpotMaster; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FA341 & 1) == 0 )
  {
    sub_B16FFC(&QuestTree__EnumerateBlankEarthSpotInfo_d__40_TypeInfo, method);
    byte_40FA341 = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *)sub_B170CC(
                                                              QuestTree__EnumerateBlankEarthSpotInfo_d__40_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v10 )
      sub_B170D4();
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v10->fields.__4__this = (struct QuestTree_o *)_4__this;
    sub_B16F98((BattleServantConfConponent_o *)&v10->fields.__4__this, _4__this, v11, v12, v13, v14, v15, v16);
  }
  _3__mapInfo = (System_Int32_array **)this->fields.__3__mapInfo;
  v10->fields.mapInfo = (struct MapControl_MapInfo_o *)_3__mapInfo;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.mapInfo, _3__mapInfo, v2, v3, v4, v7, v8, v9);
  _3__blankEarthSpotMaster = (System_Int32_array **)this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = (struct BlankEarthSpotMaster_o *)_3__blankEarthSpotMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.blankEarthSpotMaster,
    _3__blankEarthSpotMaster,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__40__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__40_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__40__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__40_o *this,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct QuestTree_o *_4__this; // x20
  TerminalPramsManager_c *v9; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  CommonUI_o *Instance; // x0
  System_Action_o *endCallback; // x0
  __int64 v13; // x20
  __int64 v14; // x20
  UnityEngine_Object_o *v15; // x20
  WebViewManager_o *v16; // x0
  WebViewManager_o *v17; // x0
  __int64 v18; // x21
  __int64 v19; // x21
  UnityEngine_Object_o *v20; // x21
  WebViewManager_o *v21; // x0
  WebViewManager_o *v22; // x0
  Il2CppObject *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40FA342 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40FA342 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    LOBYTE(endCallback) = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
    {
LABEL_32:
      LOBYTE(endCallback) = 0;
      return (char)endCallback;
    }
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_46;
    if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E5F )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
        byte_40F6E5F = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, !isInvisibleConnectAndLoad, 0LL);
        v18 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
        v19 = **(_QWORD **)(v18 + 192);
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AAFCFC(v19);
        v20 = **(UnityEngine_Object_o ***)(v19 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
          goto LABEL_44;
        v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( v21 )
        {
          QuestAfterAction__Init((QuestAfterAction_o *)v21, 0LL);
          v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( v22 )
          {
            QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)v22, 0, 0LL);
LABEL_44:
            QuestTree__UpdateMonitoringValue(_4__this, 0LL);
            v23 = (Il2CppObject *)QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, this->fields.endCallback, 0LL);
            this->fields.__2__current = v23;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            LOBYTE(endCallback) = 1;
            this->fields.__1__state = 1;
            return (char)endCallback;
          }
        }
      }
LABEL_46:
      sub_B170D4();
    }
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
    v14 = **(_QWORD **)(v13 + 192);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AAFCFC(v14);
    v15 = **(UnityEngine_Object_o ***)(v14 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !v16 )
        goto LABEL_46;
      QuestAfterAction__Init((QuestAfterAction_o *)v16, 0LL);
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !v17 )
        goto LABEL_46;
      QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)v17, 0, 0LL);
    }
    endCallback = this->fields.endCallback;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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

  if ( (byte_40FA33C & 1) == 0 )
  {
    sub_B16FFC(&QuestTree___c_TypeInfo, v1);
    byte_40FA33C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestTree___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestTree___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__28_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__38_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  int32_t priority; // w20
  WarEntity_o *v7; // x0

  if ( !b
    || (Mine = MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (priority = Mine->fields.priority, (v7 = MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return priority - v7->fields.priority;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__38_1(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  int32_t Priority; // w0
  int32_t v7; // w20
  QuestEntity_o *v8; // x0

  if ( !b
    || (Mine = MapControl_QuestInfo__GetMine(b, 0LL)) == 0LL
    || (Priority = QuestEntity__getPriority(Mine, 0LL), !a)
    || (v7 = Priority, (v8 = MapControl_QuestInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return v7 - QuestEntity__getPriority(v8, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__39_11(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  int32_t Priority; // w0
  int32_t v7; // w20
  QuestEntity_o *v8; // x0

  if ( !b
    || (Mine = MapControl_QuestInfo__GetMine(b, 0LL)) == 0LL
    || (Priority = QuestEntity__getPriority(Mine, 0LL), !a)
    || (v7 = Priority, (v8 = MapControl_QuestInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return v7 - QuestEntity__getPriority(v8, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__39_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  int32_t priority; // w20
  WarEntity_o *v7; // x0

  if ( !b
    || (Mine = MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (priority = Mine->fields.priority, (v7 = MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return priority - v7->fields.priority;
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__39_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass22_0___ctor(
        QuestTree___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass22_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass22_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass26_0___ctor(
        QuestTree___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass26_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass26_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass28_0___ctor(
        QuestTree___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass28_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass28_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reachableMapIds; // x0

  if ( (byte_40FA33D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_40FA33D = 1;
  }
  if ( !x || (reachableMapIds = this->fields.reachableMapIds) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           reachableMapIds,
           x->fields.mapId,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass32_0___ctor(
        QuestTree___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass32_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass32_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0

  if ( !x || (Mine = MapControl_QuestInfo__GetMine(x, 0LL)) == 0LL )
    sub_B170D4();
  return Mine->fields.id == this->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass38_0___ctor(
        QuestTree___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass38_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass38_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass39_0___ctor(
        QuestTree___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass39_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass39_1___ctor(
        QuestTree___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass39_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass39_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass39_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass39_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass39_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass39_2___ctor(
        QuestTree___c__DisplayClass39_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass39_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass39_3___ctor(
        QuestTree___c__DisplayClass39_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass39_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *spotIdHashSet; // x0

  if ( (byte_40FA33E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    byte_40FA33E = 1;
  }
  if ( !x || (spotIdHashSet = this->fields.spotIdHashSet) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_HashSet_int___Contains(
           spotIdHashSet,
           x->fields.spotId,
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass39_4___ctor(
        QuestTree___c__DisplayClass39_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass39_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass39_5___ctor(
        QuestTree___c__DisplayClass39_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass39_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass39_6___ctor(
        QuestTree___c__DisplayClass39_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass39_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass39_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *spotInfoList; // x0

  if ( (byte_40FA33F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_40FA33F = 1;
  }
  if ( !x || (spotInfoList = this->fields.spotInfoList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           spotInfoList,
           x->fields.spotId,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass39_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass39_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass39_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass39_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__38___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__38__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *v5; // x27
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
  struct QuestTree_o *_4__this; // x20
  System_Int32_array **Instance; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  DataManager_o *dataManager_5__2; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  DataManager_o *v76; // x0
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  DataManager_o *v84; // x0
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  DataManager_o *v92; // x0
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  DataManager_o *v100; // x0
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  DataManager_o *v108; // x0
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  DataManager_o *v116; // x0
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  DataManager_o *v124; // x0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  DataManager_o *v132; // x0
  System_Int32_array **v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  DataManager_o *v140; // x0
  System_Int32_array **v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  DataManager_o *v148; // x0
  System_Int32_array **v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  DataManager_o *v156; // x0
  System_Int32_array **v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x3
  __int64 v167; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v168; // x22
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  DataManager_o *v175; // x0
  System_Int32_array **Entitys_WarMaster__WarEntity; // x0
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  unsigned int *p_warIdx_5__18; // x19
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  signed int v186; // w8
  unsigned int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  int32_t *p_questIdx_5__25; // x28
  int32_t *p_questCount_5__26; // x27
  System_Action_o *endCallback; // x0
  bool result; // w0
  struct WarEntity_array *v193; // x9
  WarEntity_o *v194; // x8
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  int32_t id; // w22
  MapControl_WarInfo_o *v197; // x0
  MapControl_WarInfo_o *v198; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster_5__8; // x23
  int32_t EventId; // w0
  __int64 nowTime_5__17; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *eventDetailMaster_5__9; // x23
  int32_t v203; // w0
  __int64 v204; // x2
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  int32_t v206; // w0
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v209; // x23
  int32_t v210; // w0
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  int64_t v212; // x23
  unsigned int _2__current; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allWarInfoList; // x0
  MapMaster_o *mapMaster_5__3; // x0
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *v219; // x22
  unsigned int v220; // w9
  __int64 v221; // x8
  int32_t v222; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v223; // x0
  MapControl_MapInfo_o *v224; // x23
  SpotMaster_o *spotMaster_5__4; // x0
  SpotEntity_array *List; // x0
  __int64 v227; // x28
  SpotEntity_array *v228; // x25
  il2cpp_array_size_t v229; // w22
  Il2CppClass **v230; // x27
  Il2CppClass *v231; // x8
  SpotEntity_o **v232; // x27
  Il2CppClass *v233; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v234; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *allSpotInfoList; // x25
  System_Collections_Generic_IEnumerable_T__o *v236; // x0
  SpotRoadMaster_o *spotRoadMaster_5__12; // x0
  SpotRoadEntity_array *v238; // x0
  __int64 v239; // x28
  SpotRoadEntity_array *v240; // x25
  il2cpp_array_size_t v241; // w22
  Il2CppClass **v242; // x27
  Il2CppClass *v243; // x8
  SpotRoadEntity_o **v244; // x27
  Il2CppClass *v245; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allSpotRoadInfoList; // x0
  MapGimmickMaster_o *mapGimmickMaster_5__13; // x0
  Il2CppObject *v248; // x25
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *v249; // x24
  unsigned int v250; // w22
  __int64 v251; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allMapGimmickInfoList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v253; // x21
  QuestTree___c_c *v254; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__38_0; // x22
  Il2CppObject *v257; // x23
  struct QuestTree___c_StaticFields *v258; // x0
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  __int64 v265; // x1
  __int64 v266; // x2
  __int64 v267; // x3
  __int64 v268; // x4
  Il2CppObject *v269; // x22
  struct QuestTree___c__DisplayClass38_0_o **p__8__1; // x21
  System_String_array **v271; // x2
  System_String_array **v272; // x3
  System_Boolean_array **v273; // x4
  System_Int32_array **v274; // x5
  System_Int32_array *v275; // x6
  System_Int32_array *v276; // x7
  __int64 v277; // x1
  __int64 v278; // x2
  __int64 v279; // x3
  __int64 v280; // x4
  MapControl_WarInfo_o *v281; // x22
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  __int64 v288; // x1
  __int64 v289; // x2
  __int64 v290; // x3
  __int64 v291; // x4
  MapControl_MapInfo_o *v292; // x22
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  __int64 v299; // x1
  __int64 v300; // x2
  __int64 v301; // x3
  __int64 v302; // x4
  MapControl_SpotInfo_o *v303; // x22
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  __int64 v310; // x1
  __int64 v311; // x2
  __int64 v312; // x3
  __int64 v313; // x4
  WarEntity_o *v314; // x22
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  DataManager_o *v321; // x0
  System_Int32_array **v322; // x0
  System_String_array **v323; // x2
  System_String_array **v324; // x3
  System_Boolean_array **v325; // x4
  System_Int32_array **v326; // x5
  System_Int32_array *v327; // x6
  System_Int32_array *v328; // x7
  bool isSavedMemoryMode; // w0
  bool v330; // zf
  QuestMaster_o *questMaster_5__6; // x0
  int v332; // w8
  int32_t v333; // w0
  __int64 v334; // x1
  BattleServantConfConponent_o *p__2__current; // x27
  QuestMaster_o *v336; // x0
  QuestEntity_o *QuestEntitybyIdx; // x0
  QuestEntity_o *v338; // x22
  __int64 v339; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int64_t UserId; // x0
  int32_t QuestPhase; // w23
  int32_t SpotId_23919224; // w0
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x3
  __int64 v347; // x4
  struct QuestTree___c__DisplayClass38_0_o *_8__1; // x8
  struct QuestTree___c__DisplayClass38_0_o *v349; // x25
  QuestEntity_o *v350; // x21
  int32_t v351; // w22
  int32_t *v352; // x23
  int32_t *v353; // x28
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v354; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__2; // x27
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Int32_array **v362; // x0
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  MapControl_SpotInfo_o *spotInfo_5__22; // x0
  int32_t MapID; // w0
  System_Int32_array **MapInfoByMapID; // x0
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  MapControl_MapInfo_o *mapInfo_5__21; // x0
  MapEntity_o *Mine; // x0
  int32_t warId; // w1
  System_Int32_array **WarInfoByWarID; // x0
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  MapControl_WarInfo_o *warInfo_5__20; // x0
  System_Int32_array **v389; // x0
  System_String_array **v390; // x2
  System_String_array **v391; // x3
  System_Boolean_array **v392; // x4
  System_Int32_array **v393; // x5
  System_Int32_array *v394; // x6
  System_Int32_array *v395; // x7
  MapControl_WarInfo_o *v396; // x0
  MapControl_WarInfo_o *v397; // x0
  clsQuestCheck_o *v398; // x0
  _BOOL4 v399; // w0
  _BOOL4 v400; // w25
  WarEntity_o *v401; // x0
  MapControl_WarInfo_o *v402; // x0
  MapControl_SpotInfo_o *v403; // x0
  MapControl_QuestInfo_o *v404; // x0
  System_String_array **v405; // x2
  System_String_array **v406; // x3
  System_Boolean_array **v407; // x4
  System_Int32_array **v408; // x5
  System_Int32_array *v409; // x6
  System_Int32_array *v410; // x7
  struct MapControl_WarInfo_o *v411; // x8
  MapControl_QuestInfo_o *v412; // x24
  System_Int32_array **v413; // x1
  System_Int32_array **v414; // x1
  System_String_array **v415; // x2
  System_String_array **v416; // x3
  System_Boolean_array **v417; // x4
  System_Int32_array **v418; // x5
  System_Int32_array *v419; // x6
  System_Int32_array *v420; // x7
  WarEntity_o *warEnt_5__23; // x0
  WarEntity_o *v422; // x0
  struct WarEntity_o *v423; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *eventStatusQuestMismatchDictionary_5__15; // x0
  MapControl_WarInfo_o *v425; // x0
  int v426; // w19
  MapControl_SpotInfo_o *v427; // x0
  MapControl_SpotInfo_o *v428; // x0
  QuestEntity_o *v429; // x0
  struct MapControl_SpotInfo_o *v430; // x8
  struct MapControl_MapInfo_o *v431; // x8
  struct MapControl_SpotInfo_o *v432; // x9
  struct MapControl_MapInfo_o *v433; // x9
  MapControl_SpotInfo_o *v434; // x0
  bool v435; // w8
  QuestPickupMaster_o *questPickupMaster_5__14; // x0
  QuestPhaseMaster_o *questPhaseMaster_5__7; // x0
  QuestPhaseEntity_array *v438; // x0
  __int64 v439; // x19
  QuestPhaseEntity_array *v440; // x21
  il2cpp_array_size_t v441; // w22
  QuestPhaseEntity_o *v442; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allQuestInfoList; // x0
  System_Int32_array **v444; // x5
  System_Int32_array *v445; // x6
  System_Int32_array *v446; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v447; // x21
  QuestTree___c_c *v448; // x0
  struct QuestTree___c_StaticFields *v449; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__38_1; // x22
  Il2CppObject *v451; // x23
  struct QuestTree___c_StaticFields *v452; // x0
  System_String_array **v453; // x2
  System_String_array **v454; // x3
  System_Boolean_array **v455; // x4
  System_Int32_array **v456; // x5
  System_Int32_array *v457; // x6
  System_Int32_array *v458; // x7
  System_String_array **v459; // x2
  System_String_array **v460; // x3
  System_Boolean_array **v461; // x4
  System_Int32_array **v462; // x5
  System_Int32_array *v463; // x6
  System_Int32_array *v464; // x7
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  System_String_array **v471; // x2
  System_String_array **v472; // x3
  System_Boolean_array **v473; // x4
  System_Int32_array **v474; // x5
  System_Int32_array *v475; // x6
  System_Int32_array *v476; // x7
  System_String_array **v477; // x2
  System_String_array **v478; // x3
  System_Boolean_array **v479; // x4
  System_Int32_array **v480; // x5
  System_Int32_array *v481; // x6
  System_Int32_array *v482; // x7
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  CommonUI_o *v495; // x0
  System_String_array **v496; // x2
  System_String_array **v497; // x3
  System_Boolean_array **v498; // x4
  System_Int32_array **v499; // x5
  System_Int32_array *v500; // x6
  System_Int32_array *v501; // x7
  int32_t *p_warCount_5__19; // [xsp+0h] [xbp-C0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *v503; // [xsp+10h] [xbp-B0h]
  MapControl_WarInfo_o *v504; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v505; // [xsp+20h] [xbp-A0h]
  unsigned int v506; // [xsp+28h] [xbp-98h]
  __int64 v507; // [xsp+28h] [xbp-98h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *v508; // [xsp+30h] [xbp-90h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+38h] [xbp-88h] BYREF
  UserQuestEntity_o *v510; // [xsp+40h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+48h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+50h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *v514; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_40FA343 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MapControl_WarInfo___ctor__, method);
    sub_B16FFC(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v6);
    sub_B16FFC(&System_Comparison_MapControl_QuestInfo__TypeInfo, v7);
    sub_B16FFC(&System_Comparison_MapControl_WarInfo__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapGimmickMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPickupMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotRoadMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v22);
    sub_B16FFC(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v23);
    sub_B16FFC(&DataManager_TypeInfo, v24);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v25);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v29);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v30);
    sub_B16FFC(&long___TypeInfo, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v42);
    sub_B16FFC(&MapControl_MapInfo_TypeInfo, v43);
    sub_B16FFC(&NetworkManager_TypeInfo, v44);
    sub_B16FFC(&OptionManager_TypeInfo, v45);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v46);
    sub_B16FFC(&System_Predicate_MapControl_SpotInfo__TypeInfo, v47);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v50);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v51);
    sub_B16FFC(&MapControl_SpotInfo_TypeInfo, v52);
    sub_B16FFC(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__38_0__, v53);
    sub_B16FFC(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__38_1__, v54);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass38_0__mfBaseTreeMakeWithOpenCheck_b__2__, v55);
    sub_B16FFC(&QuestTree___c__DisplayClass38_0_TypeInfo, v56);
    sub_B16FFC(&QuestTree___c_TypeInfo, v57);
    sub_B16FFC(&WarEntity_TypeInfo, v58);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)sub_B16FFC(&MapControl_WarInfo_TypeInfo, v59);
    byte_40FA343 = 1;
  }
  entity = 0LL;
  spotInfo = 0LL;
  v514 = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v510 = 0LL;
  _4__this = v5->fields.__4__this;
  v508 = v5;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_253;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v5->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_B16F98((BattleServantConfConponent_o *)&v5->fields._dataManager_5__2, Instance, v62, v63, v64, v65, v66, v67);
      dataManager_5__2 = v5->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_253;
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    dataManager_5__2,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapMaster___);
      v5->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._mapMaster_5__3,
        MasterData_WarQuestSelectionMaster,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      v76 = v5->fields._dataManager_5__2;
      if ( !v76 )
        goto LABEL_253;
      v77 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v76,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
      v5->fields._spotMaster_5__4 = (struct SpotMaster_o *)v77;
      sub_B16F98((BattleServantConfConponent_o *)&v5->fields._spotMaster_5__4, v77, v78, v79, v80, v81, v82, v83);
      v84 = v5->fields._dataManager_5__2;
      if ( !v84 )
        goto LABEL_253;
      v85 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v84,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v5->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v85;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._blankEarthSpotMaster_5__5,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      v92 = v5->fields._dataManager_5__2;
      if ( !v92 )
        goto LABEL_253;
      v93 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v92,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      v5->fields._questMaster_5__6 = (struct QuestMaster_o *)v93;
      sub_B16F98((BattleServantConfConponent_o *)&v5->fields._questMaster_5__6, v93, v94, v95, v96, v97, v98, v99);
      v100 = v5->fields._dataManager_5__2;
      if ( !v100 )
        goto LABEL_253;
      v101 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v100,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v5->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v101;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._questPhaseMaster_5__7,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      v108 = v5->fields._dataManager_5__2;
      if ( !v108 )
        goto LABEL_253;
      v109 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v108,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      v5->fields._eventMaster_5__8 = (struct EventMaster_o *)v109;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._eventMaster_5__8,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      v116 = v5->fields._dataManager_5__2;
      if ( !v116 )
        goto LABEL_253;
      v117 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v116,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v5->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v117;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._eventDetailMaster_5__9,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      v124 = v5->fields._dataManager_5__2;
      if ( !v124 )
        goto LABEL_253;
      v125 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v124,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v5->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v125;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._eventStatusMaster_5__10,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      v132 = v5->fields._dataManager_5__2;
      if ( !v132 )
        goto LABEL_253;
      v133 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v132,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v5->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v133;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._eventStatusQuestMaster_5__11,
        v133,
        v134,
        v135,
        v136,
        v137,
        v138,
        v139);
      v140 = v5->fields._dataManager_5__2;
      if ( !v140 )
        goto LABEL_253;
      v141 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v140,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v5->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v141;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._spotRoadMaster_5__12,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146,
        v147);
      v148 = v5->fields._dataManager_5__2;
      if ( !v148 )
        goto LABEL_253;
      v149 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v148,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v5->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v149;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._mapGimmickMaster_5__13,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154,
        v155);
      v156 = v5->fields._dataManager_5__2;
      if ( !v156 )
        goto LABEL_253;
      v157 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v156,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v5->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v157;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._questPickupMaster_5__14,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162,
        v163);
      v168 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v164, v165, v166, v167);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v168,
        (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v5->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v168;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._eventStatusQuestMismatchDictionary_5__15,
        (System_Int32_array **)v168,
        v169,
        v170,
        v171,
        v172,
        v173,
        v174);
      v175 = v5->fields._dataManager_5__2;
      if ( !v175 )
        goto LABEL_253;
      Entitys_WarMaster__WarEntity = (System_Int32_array **)DataManager__getEntitys_WarMaster__WarEntity_(
                                                              v175,
                                                              (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v5->fields._warList_5__16 = (struct WarEntity_array *)Entitys_WarMaster__WarEntity;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._warList_5__16,
        Entitys_WarMaster__WarEntity,
        v177,
        v178,
        v179,
        v180,
        v181,
        v182);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)NetworkManager__getTime(0LL);
      v5->fields._warIdx_5__18 = 0;
      p_warIdx_5__18 = (unsigned int *)&v5->fields._warIdx_5__18;
      warList_5__16 = v5->fields._warList_5__16;
      v5->fields._nowTime_5__17 = (int64_t)this;
      if ( !warList_5__16 )
        goto LABEL_253;
      max_length = warList_5__16->max_length;
      v186 = 0;
      v5->fields._warCount_5__19 = max_length;
      p_warCount_5__19 = &v5->fields._warCount_5__19;
      break;
    case 1:
      p_warIdx_5__18 = (unsigned int *)&v5->fields._warIdx_5__18;
      warIdx_5__18 = v5->fields._warIdx_5__18;
      v5->fields.__1__state = -1;
      p_warCount_5__19 = &v5->fields._warCount_5__19;
      goto LABEL_106;
    case 2:
      p_questIdx_5__25 = &v5->fields._questIdx_5__25;
      questIdx_5__25 = v5->fields._questIdx_5__25;
      p_questCount_5__26 = &v5->fields._questCount_5__26;
      *(p_questIdx_5__25 - 54) = -1;
      goto LABEL_236;
    case 3:
      endCallback = v5->fields.endCallback;
      v5->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_253;
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v186 < max_length )
  {
    v193 = v5->fields._warList_5__16;
    if ( !v193 )
      goto LABEL_253;
    if ( v186 >= v193->max_length )
      goto LABEL_132;
    v194 = v193->m_Items[v186];
    if ( !v194 )
      goto LABEL_253;
    if ( !_4__this )
      goto LABEL_253;
    mapControlRootInfo = _4__this->fields.mapControlRootInfo;
    if ( !mapControlRootInfo )
      goto LABEL_253;
    id = v194->fields.id;
    v197 = MapControl_RootInfo__AddChild(mapControlRootInfo, id, 0LL);
    if ( !v197 )
      goto LABEL_253;
    v198 = v197;
    if ( MapControl_WarInfo__IsEvent(v197, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_WarMaster__WarEntity__int__o *)v5->fields._eventMaster_5__8;
      EventId = MapControl_WarInfo__GetEventId(v198, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_253;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             eventMaster_5__8,
             &entity,
             EventId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          goto LABEL_253;
        nowTime_5__17 = v5->fields._nowTime_5__17;
        if ( nowTime_5__17 >= *(_QWORD *)&entity->fields.startType && nowTime_5__17 < (__int64)entity->fields.coordinate )
          MapControl_WarInfo__SetStatusCheckFlag(v198, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_WarMaster__WarEntity__int__o *)v5->fields._eventDetailMaster_5__9;
        v203 = MapControl_WarInfo__GetEventId(v198, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_253;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v514,
               v203,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v514 )
            goto LABEL_253;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v514, 0x2000000LL, 0LL) )
          {
            if ( !entity )
              goto LABEL_253;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v5->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v5->fields._eventStatusMaster_5__10;
              v206 = MapControl_WarInfo__GetEventId(v198, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_253;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, v206, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v5->fields._eventStatusQuestMaster_5__11;
                v209 = NowEntity;
                v210 = MapControl_WarInfo__GetEventId(v198, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_253;
                MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                   eventStatusQuestMaster_5__11,
                                                                                   v210,
                                                                                   v209->fields.statusId,
                                                                                   0LL);
                if ( !v5->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_253;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v5->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  MismatchQuestList,
                  (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v212 = v5->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)sub_B17014(long___TypeInfo, 3LL, v204);
        if ( !entity )
          goto LABEL_253;
        v2 = (System_String_array **)this;
        if ( !this )
          goto LABEL_253;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_132;
        this->fields.__4__this = *(struct QuestTree_o **)&entity->fields.startType;
        if ( !entity )
          goto LABEL_253;
        if ( _2__current <= 1 )
          goto LABEL_132;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass38_0_o *)entity->fields.targetId;
        if ( !entity )
          goto LABEL_253;
        if ( _2__current <= 2 )
          goto LABEL_132;
        this->fields.endCallback = (struct System_Action_o *)entity->fields.coordinate;
        QuestTree__UpdateForceUpdateTime(_4__this, v212, (System_Int64_array *)this, 0LL);
      }
    }
    allWarInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
    if ( !allWarInfoList )
      goto LABEL_253;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      allWarInfoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v198,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    mapMaster_5__3 = v5->fields._mapMaster_5__3;
    if ( !mapMaster_5__3 )
      goto LABEL_253;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)MapMaster__getList(mapMaster_5__3, id, 0LL);
    if ( !this )
      goto LABEL_253;
    v219 = this;
    v505 = this->fields.__2__current;
    if ( (int)v505 >= 1 )
    {
      if ( !(_DWORD)v505 )
        goto LABEL_132;
      v220 = 0;
      v503 = this;
      v504 = v198;
      while ( 1 )
      {
        v221 = *((_QWORD *)&v219->fields.__4__this + (int)v220);
        v506 = v220;
        if ( !v221 )
          goto LABEL_253;
        v222 = *(_DWORD *)(v221 + 16);
        v223 = (EventMissionProgressRequest_Argument_ProgressData_o *)MapControl_WarInfo__AddChild(v198, v222, 0LL);
        if ( !_4__this->fields.allMapInfoList )
          goto LABEL_253;
        v224 = (MapControl_MapInfo_o *)v223;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList,
          v223,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        spotMaster_5__4 = v5->fields._spotMaster_5__4;
        if ( !spotMaster_5__4 )
          goto LABEL_253;
        List = SpotMaster__getList(spotMaster_5__4, v222, 0LL);
        if ( !List )
          goto LABEL_253;
        v227 = *(_QWORD *)&List->max_length;
        v228 = List;
        if ( (int)v227 >= 1 )
          break;
LABEL_79:
        allSpotInfoList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
        v236 = (System_Collections_Generic_IEnumerable_T__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                _4__this,
                                                                v224,
                                                                v508->fields._blankEarthSpotMaster_5__5,
                                                                0LL);
        if ( !allSpotInfoList )
          goto LABEL_253;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          allSpotInfoList,
          v236,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        spotRoadMaster_5__12 = v508->fields._spotRoadMaster_5__12;
        if ( !spotRoadMaster_5__12 )
          goto LABEL_253;
        v238 = SpotRoadMaster__getList(spotRoadMaster_5__12, v222, 0LL);
        if ( !v238 )
          goto LABEL_253;
        v239 = *(_QWORD *)&v238->max_length;
        v240 = v238;
        if ( (int)v239 >= 1 )
        {
          v241 = 0;
          while ( 1 )
          {
            v242 = &v240->obj.klass + (int)v241;
            v245 = v242[4];
            v244 = (SpotRoadEntity_o **)(v242 + 4);
            v243 = v245;
            if ( !v245 || !v224 )
              goto LABEL_253;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v224,
                                                                       (int32_t)v243->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v241 >= v240->max_length )
              goto LABEL_132;
            QuestTree__SetupSpotRoadInfo(_4__this, *v244, &spotRoadInfo, 0LL);
            allSpotRoadInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !allSpotRoadInfoList )
              goto LABEL_253;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              allSpotRoadInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
            if ( (int)++v241 >= (int)v239 )
              break;
            if ( v241 >= v240->max_length )
              goto LABEL_132;
          }
        }
        v5 = v508;
        mapGimmickMaster_5__13 = v508->fields._mapGimmickMaster_5__13;
        if ( !mapGimmickMaster_5__13 )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)MapGimmickMaster__getList(
                                                                   mapGimmickMaster_5__13,
                                                                   v222,
                                                                   0LL);
        if ( !this )
          goto LABEL_253;
        v248 = this->fields.__2__current;
        v249 = this;
        if ( (int)v248 >= 1 )
        {
          v250 = 0;
          while ( 1 )
          {
            v251 = *((_QWORD *)&v249->fields.__4__this + (int)v250);
            if ( !v251 )
              goto LABEL_253;
            if ( !v224 )
              goto LABEL_253;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v224, *(_DWORD *)(v251 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            allMapGimmickInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !allMapGimmickInfoList )
              goto LABEL_253;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              allMapGimmickInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
            if ( (int)++v250 >= (int)v248 )
              break;
            if ( v250 >= LODWORD(v249->fields.__2__current) )
              goto LABEL_132;
          }
        }
        v198 = v504;
        v219 = v503;
        v220 = v506 + 1;
        if ( (int)(v506 + 1) >= (int)v505 )
          goto LABEL_104;
        if ( v220 >= LODWORD(v503->fields.__2__current) )
          goto LABEL_132;
      }
      v229 = 0;
      do
      {
        v230 = &v228->obj.klass + (int)v229;
        v233 = v230[4];
        v232 = (SpotEntity_o **)(v230 + 4);
        v231 = v233;
        if ( !v233 || !v224 )
          goto LABEL_253;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)MapControl_MapInfo__AddChild(
                                                                   v224,
                                                                   (int32_t)v231->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( v229 >= v228->max_length )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v232, &spotInfo, 0LL);
        v234 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
        if ( !v234 )
          goto LABEL_253;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v234,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
        if ( (int)++v229 >= (int)v227 )
          goto LABEL_79;
      }
      while ( v229 < v228->max_length );
LABEL_132:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
LABEL_104:
    warIdx_5__18 = *p_warIdx_5__18;
    if ( (int)*p_warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64) )
    {
      v5->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v5->fields.__2__current;
      sub_B16F98(p__2__current, 0LL, v2, v3, v4, v216, v217, v218);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_106:
    v186 = warIdx_5__18 + 1;
    *p_warIdx_5__18 = v186;
    max_length = *p_warCount_5__19;
  }
  if ( !_4__this )
    goto LABEL_253;
  v253 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
  v254 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v254 = QuestTree___c_TypeInfo;
  }
  static_fields = v254->static_fields;
  _9__38_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v254->vtable._0_Equals.methodPtr) & 4) != 0 && !v254->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v254);
      static_fields = QuestTree___c_TypeInfo->static_fields;
    }
    v257 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_MapControl_WarInfo__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__38_0,
      v257,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__38_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
    v258 = QuestTree___c_TypeInfo->static_fields;
    v258->__9__38_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__38_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v258->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v259,
      v260,
      v261,
      v262,
      v263,
      v264);
  }
  if ( !v253 )
    goto LABEL_253;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v253,
    (System_Comparison_T__o *)_9__38_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v269 = (Il2CppObject *)sub_B170CC(QuestTree___c__DisplayClass38_0_TypeInfo, v265, v266, v267, v268);
  System_Object___ctor(v269, 0LL);
  v5->fields.__8__1 = (struct QuestTree___c__DisplayClass38_0_o *)v269;
  p__8__1 = &v5->fields.__8__1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields.__8__1,
    (System_Int32_array **)v269,
    v271,
    v272,
    v273,
    v274,
    v275,
    v276);
  v281 = (MapControl_WarInfo_o *)sub_B170CC(MapControl_WarInfo_TypeInfo, v277, v278, v279, v280);
  MapControl_WarInfo___ctor(v281, 0LL);
  v5->fields._warInfo_5__20 = v281;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields._warInfo_5__20,
    (System_Int32_array **)v281,
    v282,
    v283,
    v284,
    v285,
    v286,
    v287);
  v292 = (MapControl_MapInfo_o *)sub_B170CC(MapControl_MapInfo_TypeInfo, v288, v289, v290, v291);
  MapControl_MapInfo___ctor(v292, 0LL);
  v5->fields._mapInfo_5__21 = v292;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields._mapInfo_5__21,
    (System_Int32_array **)v292,
    v293,
    v294,
    v295,
    v296,
    v297,
    v298);
  v303 = (MapControl_SpotInfo_o *)sub_B170CC(MapControl_SpotInfo_TypeInfo, v299, v300, v301, v302);
  MapControl_SpotInfo___ctor(v303, 0LL);
  v5->fields._spotInfo_5__22 = v303;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields._spotInfo_5__22,
    (System_Int32_array **)v303,
    v304,
    v305,
    v306,
    v307,
    v308,
    v309);
  v314 = (WarEntity_o *)sub_B170CC(WarEntity_TypeInfo, v310, v311, v312, v313);
  WarEntity___ctor(v314, 0LL);
  v5->fields._warEnt_5__23 = v314;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields._warEnt_5__23,
    (System_Int32_array **)v314,
    v315,
    v316,
    v317,
    v318,
    v319,
    v320);
  v321 = v5->fields._dataManager_5__2;
  if ( !v321 )
    goto LABEL_253;
  v322 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v321,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v5->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v322;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v5->fields._userQuestMaster_5__24,
    v322,
    v323,
    v324,
    v325,
    v326,
    v327,
    v328);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_253;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v5->fields._mapInfoNow_5__27 = -1LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v5->fields._questIdx_5__25 = 0;
  p_questIdx_5__25 = &v5->fields._questIdx_5__25;
  v330 = !isSavedMemoryMode;
  questMaster_5__6 = v5->fields._questMaster_5__6;
  v332 = v330 ? 5000 : 500;
  v5->fields._breakInterval_5__29 = v332;
  if ( !questMaster_5__6 )
    goto LABEL_253;
  v333 = QuestMaster__Count(questMaster_5__6, 0LL);
  v5->fields._questCount_5__26 = v333;
  p_questCount_5__26 = &v5->fields._questCount_5__26;
  v334 = (unsigned int)*(p_questCount_5__26 - 1);
  while ( (int)v334 < v333 )
  {
    v336 = v508->fields._questMaster_5__6;
    if ( !v336 )
      goto LABEL_253;
    QuestEntitybyIdx = QuestMaster__GetQuestEntitybyIdx(v336, v334, 0LL);
    if ( !QuestEntitybyIdx )
      goto LABEL_253;
    v338 = QuestEntitybyIdx;
    v339 = QuestEntitybyIdx->fields.id;
    v510 = 0LL;
    userQuestMaster_5__24 = v508->fields._userQuestMaster_5__24;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_253;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v510, UserId, v339, 0LL) )
    {
      if ( !v510 )
        goto LABEL_253;
      QuestPhase = UserQuestEntity__getQuestPhase(v510, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_23919224 = QuestEntity__getSpotId_23919224(v338, QuestPhase + 1, 0LL);
    _8__1 = v508->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_253;
    if ( _8__1->fields.spotInfoNow != SpotId_23919224 )
    {
      v507 = v339;
      _8__1->fields.spotInfoNow = SpotId_23919224;
      if ( !_4__this )
        goto LABEL_253;
      v349 = v508->fields.__8__1;
      if ( !v349 )
        goto LABEL_253;
      v350 = v338;
      v351 = QuestPhase;
      v352 = p_questIdx_5__25;
      v353 = p_questCount_5__26;
      v354 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v349->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                           v344,
                                                                           v345,
                                                                           v346,
                                                                           v347);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__2,
          (Il2CppObject *)v349,
          Method_QuestTree___c__DisplayClass38_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v349->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v349->fields.__9__2,
          (System_Int32_array **)_9__2,
          v356,
          v357,
          v358,
          v359,
          v360,
          v361);
      }
      if ( !v354 )
        goto LABEL_253;
      v362 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v354,
                                      (System_Predicate_T__o *)_9__2,
                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v508->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v362;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v508->fields._spotInfo_5__22,
        v362,
        v363,
        v364,
        v365,
        v366,
        v367,
        v368);
      spotInfo_5__22 = v508->fields._spotInfo_5__22;
      if ( !spotInfo_5__22 )
        goto LABEL_253;
      MapID = MapControl_SpotInfo__GetMapID(spotInfo_5__22, 0LL);
      p_questCount_5__26 = v353;
      p_questIdx_5__25 = v352;
      QuestPhase = v351;
      v338 = v350;
      v339 = v507;
      if ( v508->fields._mapInfoNow_5__27 != MapID )
      {
        v508->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = (System_Int32_array **)QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v508->fields._mapInfo_5__21 = (struct MapControl_MapInfo_o *)MapInfoByMapID;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v508->fields._mapInfo_5__21,
          MapInfoByMapID,
          v372,
          v373,
          v374,
          v375,
          v376,
          v377);
        mapInfo_5__21 = v508->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_253;
        Mine = MapControl_MapInfo__GetMine(mapInfo_5__21, 0LL);
        if ( !Mine )
          goto LABEL_253;
        warId = Mine->fields.warId;
        if ( v508->fields._warInfoNow_5__28 != warId )
        {
          v508->fields._warInfoNow_5__28 = warId;
          WarInfoByWarID = (System_Int32_array **)QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v508->fields._warInfo_5__20 = (struct MapControl_WarInfo_o *)WarInfoByWarID;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v508->fields._warInfo_5__20,
            WarInfoByWarID,
            v382,
            v383,
            v384,
            v385,
            v386,
            v387);
          warInfo_5__20 = v508->fields._warInfo_5__20;
          if ( !warInfo_5__20 )
            goto LABEL_253;
          v389 = (System_Int32_array **)MapControl_WarInfo__GetMine(warInfo_5__20, 0LL);
          v508->fields._warEnt_5__23 = (struct WarEntity_o *)v389;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v508->fields._warEnt_5__23,
            v389,
            v390,
            v391,
            v392,
            v393,
            v394,
            v395);
        }
      }
    }
    v396 = v508->fields._warInfo_5__20;
    if ( !v396 )
      goto LABEL_253;
    if ( !v510 )
      goto LABEL_178;
    MapControl_WarInfo__SetStatusCheckFlag(v396, 1, 0, 0LL);
    if ( !v510 )
      goto LABEL_253;
    if ( !UserQuestEntity__HasStatus(v510, 8, 0LL) )
      goto LABEL_163;
    if ( !v510 )
      goto LABEL_253;
    if ( v510->fields.challengeNum >= 1 )
    {
LABEL_163:
      v397 = v508->fields._warInfo_5__20;
      if ( !v397 )
        goto LABEL_253;
      MapControl_WarInfo__SetStatusCheckFlag(v397, 4, 0, 0LL);
    }
    if ( !v510 )
      goto LABEL_253;
    if ( UserQuestEntity__getClearNum(v510, 0LL) < 1 )
    {
      v396 = v508->fields._warInfo_5__20;
      if ( !v396 )
        goto LABEL_253;
LABEL_178:
      MapControl_WarInfo__SetStatusCheckFlag(v396, 2, 0, 0LL);
      v400 = 0;
      goto LABEL_179;
    }
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v398 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v510 )
      goto LABEL_253;
    if ( !v398 )
      goto LABEL_253;
    v399 = clsQuestCheck__IsQuestClear(v398, v510->fields.questId, 0, 0LL);
    if ( !v508->fields._warInfo_5__20 )
      goto LABEL_253;
    v400 = v399;
    v401 = MapControl_WarInfo__GetMine(v508->fields._warInfo_5__20, 0LL);
    if ( !v401 )
      goto LABEL_253;
    if ( v401->fields.lastQuestId == (_DWORD)v339 )
    {
      v402 = v508->fields._warInfo_5__20;
      if ( !v402 )
        goto LABEL_253;
      MapControl_WarInfo__SetStatusCheckFlag(v402, 8, 1, 0LL);
    }
LABEL_179:
    v403 = v508->fields._spotInfo_5__22;
    if ( !v403 )
      goto LABEL_253;
    v404 = MapControl_SpotInfo__AddChild(v403, v339, 0LL);
    v411 = v508->fields._warInfo_5__20;
    if ( !v411 )
      goto LABEL_253;
    v412 = v404;
    if ( !v404 )
      goto LABEL_253;
    v404->fields.warId = v411->fields.warId;
    v413 = (System_Int32_array **)v508->fields._warInfo_5__20;
    v404->fields._WarInfo_k__BackingField = (struct MapControl_WarInfo_o *)v413;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v404->fields._WarInfo_k__BackingField,
      v413,
      v405,
      v406,
      v407,
      v408,
      v409,
      v410);
    v414 = (System_Int32_array **)v508->fields._spotInfo_5__22;
    v412->fields._SpotInfo_k__BackingField = (struct MapControl_SpotInfo_o *)v414;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v412->fields._SpotInfo_k__BackingField,
      v414,
      v415,
      v416,
      v417,
      v418,
      v419,
      v420);
    if ( !_4__this )
      goto LABEL_253;
    v412->fields.endTime = QuestTree__GetEndTime(_4__this, v412, 0LL);
    warEnt_5__23 = v508->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_253;
    if ( WarEntity__IsStartTypeQuest(warEnt_5__23, 0LL) )
    {
      v422 = v508->fields._warEnt_5__23;
      if ( !v422 )
        goto LABEL_253;
      if ( v422->fields.targetId == v339 && !WarEntity__HasFlag(v422, 0x8000, 0LL) )
        goto LABEL_193;
    }
    v423 = v508->fields._warEnt_5__23;
    if ( !v423 )
      goto LABEL_253;
    eventStatusQuestMismatchDictionary_5__15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v508->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !eventStatusQuestMismatchDictionary_5__15 )
      goto LABEL_253;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           eventStatusQuestMismatchDictionary_5__15,
           v423->fields.id,
           &value,
           (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      if ( !value )
        goto LABEL_253;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v339,
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_193:
        MapControl_QuestInfo__SetDispType(v412, 0, 0, 0, 0LL, 0, 0LL);
        v412->fields.touchType = 0;
LABEL_197:
        v426 = 1;
        goto LABEL_198;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v338, v412, v508->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_197;
    v425 = v508->fields._warInfo_5__20;
    if ( !v425 )
      goto LABEL_253;
    MapControl_WarInfo__SetStatusCheckFlag(v425, 1, 0, 0LL);
    v426 = 0;
LABEL_198:
    if ( MapControl_QuestInfo__IsDisaplayable(v412, 0LL) )
    {
      if ( ((v400 | v426) & 1) == 0 )
      {
        v427 = v508->fields._spotInfo_5__22;
        if ( !v427 )
          goto LABEL_253;
        MapControl_SpotInfo__AddQuestCount(v427, 1, 0LL);
        v428 = v508->fields._spotInfo_5__22;
        if ( !v428 )
          goto LABEL_253;
        MapControl_SpotInfo__AddAvailableQuestId(v428, v412->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v412, 0LL) == 1 )
      {
        v429 = MapControl_QuestInfo__GetMine(v412, 0LL);
        if ( !v429 )
          goto LABEL_253;
        if ( !QuestEntity__HasFlag(v429, 0x400000000000LL, 0LL) )
        {
          v430 = v508->fields._spotInfo_5__22;
          if ( !v430 )
            goto LABEL_253;
          v430->fields._IsNext_k__BackingField = 1;
        }
        v431 = v508->fields._mapInfo_5__21;
        if ( !v431 )
          goto LABEL_253;
        v431->fields._IsNext_k__BackingField = 1;
      }
      if ( MapControl_QuestInfo__GetQuestType(v412, 0LL) == 7
        && MapControl_QuestInfo__IsDisplayWarBoardNextIcon(v412, 0LL) )
      {
        v432 = v508->fields._spotInfo_5__22;
        if ( !v432 )
          goto LABEL_253;
        v432->fields._IsNext_k__BackingField = 1;
        v433 = v508->fields._mapInfo_5__21;
        if ( !v433 )
          goto LABEL_253;
        v433->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v338, 0x8000000000LL, 0LL) )
      {
        v434 = v508->fields._spotInfo_5__22;
        if ( !v434 )
          goto LABEL_253;
        MapControl_SpotInfo__AddFreeQuestCount(v434, 1, 0LL);
      }
    }
    if ( v510 )
    {
      if ( UserQuestEntity__HasStatus(v510, 8, 0LL) )
      {
        if ( !v510 )
          goto LABEL_253;
        v435 = v510->fields.challengeNum == 0;
      }
      else
      {
        v435 = 0;
      }
    }
    else
    {
      v435 = 1;
    }
    v412->fields.isNew = v435;
    v412->fields.questPhase = QuestPhase;
    questPickupMaster_5__14 = v508->fields._questPickupMaster_5__14;
    if ( !questPickupMaster_5__14 )
      goto LABEL_253;
    v412->fields.pickupPriority = QuestPickupMaster__GetPriority(questPickupMaster_5__14, v339, 0LL);
    questPhaseMaster_5__7 = v508->fields._questPhaseMaster_5__7;
    if ( !questPhaseMaster_5__7 )
      goto LABEL_253;
    v438 = QuestPhaseMaster__getList(questPhaseMaster_5__7, v339, 0LL);
    if ( !v438 )
      goto LABEL_253;
    v439 = *(_QWORD *)&v438->max_length;
    v440 = v438;
    if ( (int)v439 >= 1 )
    {
      v441 = 0;
      while ( 1 )
      {
        v442 = v440->m_Items[v441];
        if ( !v442 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *)MapControl_QuestInfo__AddChild(
                                                                   v412,
                                                                   v442->fields.questId,
                                                                   v442->fields.phase,
                                                                   0LL);
        if ( (int)++v441 >= (int)v439 )
          goto LABEL_233;
        if ( v441 >= v440->max_length )
          goto LABEL_132;
      }
LABEL_253:
      sub_B170D4();
    }
LABEL_233:
    allQuestInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !allQuestInfoList )
      goto LABEL_253;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      allQuestInfoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v412,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    questIdx_5__25 = v508->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v508->fields._breakInterval_5__29) )
    {
      v508->fields.__2__current = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v508->fields.__2__current, 0LL, v2, v3, v4, v444, v445, v446);
      v508->fields.__1__state = 2;
      return 1;
    }
LABEL_236:
    v334 = (unsigned int)(questIdx_5__25 + 1);
    *p_questIdx_5__25 = v334;
    v333 = *p_questCount_5__26;
  }
  if ( !_4__this )
    goto LABEL_253;
  v447 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v448 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v448 = QuestTree___c_TypeInfo;
  }
  v449 = v448->static_fields;
  _9__38_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v449->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v448->vtable._0_Equals.methodPtr) & 4) != 0 && !v448->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v448);
      v449 = QuestTree___c_TypeInfo->static_fields;
    }
    v451 = (Il2CppObject *)v449->__9;
    _9__38_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_MapControl_QuestInfo__TypeInfo,
                                                                           v334,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__38_1,
      v451,
      Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__38_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v452 = QuestTree___c_TypeInfo->static_fields;
    v452->__9__38_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__38_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v452->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v453,
      v454,
      v455,
      v456,
      v457,
      v458);
  }
  if ( !v447 )
    goto LABEL_253;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v447,
    (System_Comparison_T__o *)_9__38_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v508->fields.__8__1 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields.__8__1, 0LL, v459, v460, v461, v462, v463, v464);
  v508->fields._warInfo_5__20 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields._warInfo_5__20, 0LL, v465, v466, v467, v468, v469, v470);
  v508->fields._mapInfo_5__21 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields._mapInfo_5__21, 0LL, v471, v472, v473, v474, v475, v476);
  v508->fields._spotInfo_5__22 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields._spotInfo_5__22, 0LL, v477, v478, v479, v480, v481, v482);
  v508->fields._warEnt_5__23 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields._warEnt_5__23, 0LL, v483, v484, v485, v486, v487, v488);
  v508->fields._userQuestMaster_5__24 = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v508->fields._userQuestMaster_5__24,
    0LL,
    v489,
    v490,
    v491,
    v492,
    v493,
    v494);
  v495 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v495 )
    goto LABEL_253;
  CommonUI__SetLoadMode(v495, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v508->fields.endCallback )
    return 0;
  v508->fields.__2__current = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v508->fields.__2__current, 0LL, v496, v497, v498, v499, v500, v501);
  v508->fields.__1__state = 3;
  return 1;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__38__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__38__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__38__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *v125; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  WebViewManager_o *Instance; // x0
  DataManager_o **p_dataManager_5__2; // x23
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct SpotMaster_o *v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct BlankEarthSpotMaster_o *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct QuestMaster_o *v155; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  struct QuestPhaseMaster_o *v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v169; // x28
  struct SpotRoadMaster_o *v170; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  struct MapGimmickMaster_o *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  struct QuestPickupMaster_o *v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v195; // x25
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_eventStatusQuestMismatchDictionary_5__10; // x26
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x3
  __int64 v206; // x4
  Il2CppObject *v207; // x24
  struct QuestTree___c__DisplayClass39_1_o **p__8__1; // x27
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  __int64 Time; // x25
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  Il2CppObject *_8__2; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v218; // x23
  __int64 v219; // x1
  __int64 v220; // x2
  __int64 v221; // x3
  __int64 v222; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v223; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v224; // x0
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allWarInfoList; // x22
  Il2CppObject *v227; // x24
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x3
  __int64 v231; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v232; // x23
  int32_t Index; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v234; // x0
  MapControl_RootInfo_o *v235; // x0
  struct MapControl_WarInfo_o *v236; // x0
  MapControl_WarInfo_o **p_warInfo_5__13; // x22
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  MapControl_WarInfo_o *warInfo_5__13; // x0
  int32_t EventId; // w0
  int32_t v246; // w2
  __int64 v247; // x2
  int32_t v248; // w1
  EventStatusEntity_o *NowEntity; // x23
  int32_t v250; // w1
  WarBoardEvalValueSquare_EvalValueSquare_o *MismatchQuestList; // x0
  System_Int64_array *v252; // x0
  __int64 v253; // x1
  unsigned int max_length; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v255; // x0
  struct MapEntity_array *List; // x0
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  __int64 v263; // x0
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x3
  __int64 v267; // x4
  struct MapEntity_array *mapList_5__14; // x9
  int32_t mapCount_5__12; // w9
  int32_t v270; // w8
  int32_t v271; // w8
  int32_t *p_mapCount_5__12; // x27
  int32_t *p_mapIdx_5__11; // x28
  struct MapEntity_array *v274; // x9
  MapEntity_o *v275; // x8
  struct QuestTree___c__DisplayClass39_1_o *v276; // x9
  struct MapControl_WarInfo_o *v277; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *mapInfoList; // x21
  struct QuestTree___c__DisplayClass39_1_o *v279; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3; // x22
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  unsigned int v287; // w0
  struct MapControl_WarInfo_o *v288; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v289; // x0
  struct QuestTree___c__DisplayClass39_1_o *v290; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapInfoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4; // x22
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  int32_t v299; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v300; // x0
  struct QuestTree___c__DisplayClass39_1_o *v301; // x8
  MapControl_WarInfo_o *v302; // x0
  struct MapControl_MapInfo_o *v303; // x0
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v310; // x0
  struct QuestTree___c__DisplayClass39_1_o *v311; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v313; // x0
  __int64 v314; // x1
  __int64 v315; // x2
  __int64 v316; // x3
  __int64 v317; // x4
  SpotEntity_array *v318; // x22
  int v319; // w27
  __int64 v320; // x28
  __int64 v321; // x23
  __int64 v322; // x0
  __int64 v323; // x1
  __int64 v324; // x2
  __int64 v325; // x3
  __int64 v326; // x4
  SpotEntity_o *v327; // x24
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v329; // x26
  int32_t v330; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v331; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v332; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v333; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v334; // x0
  __int64 v335; // x1
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v342; // x21
  __int64 v343; // x22
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x3
  __int64 v347; // x4
  QuestTree___c_c *v348; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__39_6; // x23
  Il2CppObject *v351; // x24
  struct QuestTree___c_StaticFields *v352; // x0
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_Collections_Generic_IEnumerable_T__o *v359; // x24
  __int64 v360; // x1
  __int64 v361; // x2
  __int64 v362; // x3
  __int64 v363; // x4
  System_Collections_Generic_HashSet_int__o *v364; // x23
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  System_Collections_Generic_List_T__o *v371; // x23
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x3
  __int64 v375; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v376; // x24
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v377; // x0
  bool result; // w0
  struct System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__o *p__7__wrap23; // x22
  int32_t *p_cnt_5__22; // x24
  struct QuestTree___c__DisplayClass39_6_o **p__8__3; // x21
  struct QuestTree___c__DisplayClass39_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v384; // x0
  __int64 v385; // x1
  __int64 v386; // x2
  __int64 v387; // x3
  __int64 v388; // x4
  SpotRoadEntity_array *v389; // x21
  int v390; // w26
  __int64 v391; // x27
  __int64 v392; // x22
  __int64 v393; // x0
  __int64 v394; // x1
  __int64 v395; // x2
  __int64 v396; // x3
  __int64 v397; // x4
  SpotRoadEntity_o *v398; // x23
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allSpotRoadInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v400; // x25
  int32_t v401; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v402; // x0
  MapControl_MapInfo_o *mapInfo_5__15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v404; // x0
  struct QuestTree___c__DisplayClass39_1_o *v405; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v407; // x0
  __int64 v408; // x1
  System_String_array **v409; // x2
  System_String_array **v410; // x3
  System_Boolean_array **v411; // x4
  System_Int32_array **v412; // x5
  System_Int32_array *v413; // x6
  System_Int32_array *v414; // x7
  MapGimmickEntity_array *v415; // x21
  int v416; // w25
  __int64 v417; // x26
  __int64 v418; // x22
  __int64 v419; // x0
  __int64 v420; // x1
  __int64 v421; // x2
  __int64 v422; // x3
  __int64 v423; // x4
  MapGimmickEntity_o *v424; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allMapGimmickInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v426; // x24
  int32_t v427; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v428; // x0
  MapControl_MapInfo_o *v429; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v430; // x0
  int32_t v431; // w8
  System_Action_o *endCallback; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v433; // x21
  QuestTree___c_c *v434; // x0
  struct QuestTree___c_StaticFields *v435; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_2; // x22
  Il2CppObject *v437; // x23
  struct QuestTree___c_StaticFields *v438; // x0
  System_String_array **v439; // x2
  System_String_array **v440; // x3
  System_Boolean_array **v441; // x4
  System_Int32_array **v442; // x5
  System_Int32_array *v443; // x6
  System_Int32_array *v444; // x7
  System_String_array **v445; // x2
  System_String_array **v446; // x3
  System_Boolean_array **v447; // x4
  System_Int32_array **v448; // x5
  System_Int32_array *v449; // x6
  System_Int32_array *v450; // x7
  System_String_array **v451; // x2
  System_String_array **v452; // x3
  System_Boolean_array **v453; // x4
  System_Int32_array **v454; // x5
  System_Int32_array *v455; // x6
  System_Int32_array *v456; // x7
  System_String_array **v457; // x2
  System_String_array **v458; // x3
  System_Boolean_array **v459; // x4
  System_Int32_array **v460; // x5
  System_Int32_array *v461; // x6
  System_Int32_array *v462; // x7
  __int64 v463; // x1
  __int64 v464; // x2
  __int64 v465; // x3
  __int64 v466; // x4
  Il2CppObject *v467; // x23
  System_String_array **v468; // x2
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  __int64 v474; // x1
  __int64 v475; // x2
  __int64 v476; // x3
  __int64 v477; // x4
  MapControl_WarInfo_o *v478; // x23
  System_String_array **v479; // x2
  System_String_array **v480; // x3
  System_Boolean_array **v481; // x4
  System_Int32_array **v482; // x5
  System_Int32_array *v483; // x6
  System_Int32_array *v484; // x7
  __int64 v485; // x1
  __int64 v486; // x2
  __int64 v487; // x3
  __int64 v488; // x4
  MapControl_MapInfo_o *v489; // x22
  System_String_array **v490; // x2
  System_String_array **v491; // x3
  System_Boolean_array **v492; // x4
  System_Int32_array **v493; // x5
  System_Int32_array *v494; // x6
  System_Int32_array *v495; // x7
  __int64 v496; // x1
  __int64 v497; // x2
  __int64 v498; // x3
  __int64 v499; // x4
  MapControl_SpotInfo_o *v500; // x22
  System_String_array **v501; // x2
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  __int64 v507; // x1
  __int64 v508; // x2
  __int64 v509; // x3
  __int64 v510; // x4
  WarEntity_o *v511; // x22
  System_String_array **v512; // x2
  System_String_array **v513; // x3
  System_Boolean_array **v514; // x4
  System_Int32_array **v515; // x5
  System_Int32_array *v516; // x6
  System_Int32_array *v517; // x7
  DataManager_o *dataManager_5__2; // x0
  struct UserQuestMaster_o *v519; // x0
  System_String_array **v520; // x2
  System_String_array **v521; // x3
  System_Boolean_array **v522; // x4
  System_Int32_array **v523; // x5
  System_Int32_array *v524; // x6
  System_Int32_array *v525; // x7
  __int64 v526; // x1
  __int64 v527; // x2
  __int64 v528; // x3
  __int64 v529; // x4
  int32_t v530; // w8
  struct QuestTree___c__DisplayClass39_6_o *_8__3; // x22
  System_Collections_Generic_List_int__o *v532; // x23
  System_String_array **v533; // x2
  System_String_array **v534; // x3
  System_Boolean_array **v535; // x4
  System_Int32_array **v536; // x5
  System_Int32_array *v537; // x6
  System_Int32_array *v538; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v539; // x0
  __int128 v540; // q0
  System_String_array **v541; // x2
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  const MethodInfo *v547; // x1
  struct MapControl_SpotInfo_o *current; // x23
  SpotEntity_o *Mine; // x0
  System_String_array **v550; // x2
  System_String_array **v551; // x3
  System_Boolean_array **v552; // x4
  System_Int32_array **v553; // x5
  System_Int32_array *v554; // x6
  System_Int32_array *v555; // x7
  struct QuestTree___c__DisplayClass39_0_o *v556; // x8
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  DataMasterBase_o *questMaster_5__5; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  Il2CppObject *v560; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v561; // x22
  __int64 v562; // x1
  __int64 v563; // x2
  __int64 v564; // x3
  __int64 v565; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v566; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v567; // x0
  struct QuestEntity_array *v568; // x0
  System_String_array **v569; // x2
  System_String_array **v570; // x3
  System_Boolean_array **v571; // x4
  System_Int32_array **v572; // x5
  System_Int32_array *v573; // x6
  System_Int32_array *v574; // x7
  __int64 v575; // x0
  int32_t v576; // w8
  struct QuestEntity_array *questList_5__23; // x9
  QuestEntity_o *v578; // x21
  struct QuestTree___c__DisplayClass39_6_o *v579; // x8
  UserQuestMaster_o *userQuestMaster_5__18; // x22
  int64_t UserId; // x0
  struct QuestTree___c__DisplayClass39_6_o *v582; // x8
  int32_t QuestPhase; // w22
  int32_t SpotId_23919224; // w0
  __int64 warId; // x1
  __int64 v586; // x2
  __int64 v587; // x3
  __int64 v588; // x4
  struct QuestTree___c__DisplayClass39_6_o *v589; // x9
  struct QuestTree___c__DisplayClass39_6_o *v590; // x26
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v591; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__12; // x24
  System_String_array **v593; // x2
  System_String_array **v594; // x3
  System_Boolean_array **v595; // x4
  System_Int32_array **v596; // x5
  System_Int32_array *v597; // x6
  System_Int32_array *v598; // x7
  peRenderTexture_ChangeLayerObject_o *v599; // x0
  System_String_array **v600; // x2
  System_String_array **v601; // x3
  System_Boolean_array **v602; // x4
  System_Int32_array **v603; // x5
  System_Int32_array *v604; // x6
  System_Int32_array *v605; // x7
  MapControl_SpotInfo_o *spotInfo_5__16; // x0
  unsigned int MapID; // w0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_String_array **v609; // x2
  System_String_array **v610; // x3
  System_Boolean_array **v611; // x4
  System_Int32_array **v612; // x5
  System_Int32_array *v613; // x6
  System_Int32_array *v614; // x7
  MapControl_MapInfo_o *v615; // x0
  MapEntity_o *v616; // x0
  struct MapControl_WarInfo_o *WarInfoByWarID; // x0
  System_String_array **v618; // x2
  System_String_array **v619; // x3
  System_Boolean_array **v620; // x4
  System_Int32_array **v621; // x5
  System_Int32_array *v622; // x6
  System_Int32_array *v623; // x7
  MapControl_WarInfo_o *v624; // x0
  struct WarEntity_o *v625; // x0
  System_String_array **v626; // x2
  System_String_array **v627; // x3
  System_Boolean_array **v628; // x4
  System_Int32_array **v629; // x5
  System_Int32_array *v630; // x6
  System_Int32_array *v631; // x7
  struct QuestTree___c__DisplayClass39_6_o *v632; // x26
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *allQuestInfoList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13; // x24
  System_String_array **v635; // x2
  System_String_array **v636; // x3
  System_Boolean_array **v637; // x4
  System_Int32_array **v638; // x5
  System_Int32_array *v639; // x6
  System_Int32_array *v640; // x7
  int32_t v641; // w1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v642; // x0
  MapControl_WarInfo_o *v643; // x0
  MapControl_WarInfo_o *v644; // x0
  int v645; // w24
  int32_t ClearNum; // w8
  WarEntity_o *v647; // x0
  struct QuestTree___c__DisplayClass39_6_o *v648; // x8
  MapControl_WarInfo_o *v649; // x0
  struct QuestTree___c__DisplayClass39_6_o *v650; // x8
  MapControl_SpotInfo_o *v651; // x0
  MapControl_QuestInfo_o *v652; // x0
  System_String_array **v653; // x2
  System_String_array **v654; // x3
  System_Boolean_array **v655; // x4
  System_Int32_array **v656; // x5
  System_Int32_array *v657; // x6
  System_Int32_array *v658; // x7
  struct MapControl_WarInfo_o *v659; // x8
  MapControl_QuestInfo_o *v660; // x23
  System_Int32_array **v661; // x1
  System_Int32_array **v662; // x1
  System_String_array **v663; // x2
  System_String_array **v664; // x3
  System_Boolean_array **v665; // x4
  System_Int32_array **v666; // x5
  System_Int32_array *v667; // x6
  System_Int32_array *v668; // x7
  WarEntity_o *warEnt_5__17; // x0
  struct WarEntity_o *v670; // x8
  struct QuestTree___c__DisplayClass39_6_o *v671; // x9
  struct WarEntity_o *v672; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  struct QuestTree___c__DisplayClass39_6_o *v674; // x8
  MapControl_WarInfo_o *v675; // x0
  int v676; // w25
  MapControl_SpotInfo_o *v677; // x0
  MapControl_SpotInfo_o *v678; // x0
  QuestEntity_o *v679; // x0
  struct MapControl_SpotInfo_o *v680; // x8
  struct MapControl_MapInfo_o *v681; // x8
  struct MapControl_SpotInfo_o *v682; // x9
  struct MapControl_MapInfo_o *v683; // x9
  MapControl_SpotInfo_o *v684; // x0
  bool v685; // w8
  struct QuestTree___c__DisplayClass39_6_o *v686; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  struct QuestTree___c__DisplayClass39_6_o *v688; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  QuestPhaseEntity_array *v690; // x0
  QuestPhaseEntity_array *v691; // x21
  __int64 v692; // x22
  il2cpp_array_size_t v693; // w24
  QuestPhaseEntity_o *v694; // x8
  MapControl_PhaseInfo_o *v695; // x0
  __int64 v696; // x1
  __int64 v697; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v698; // x0
  System_Int32_array **v699; // x5
  System_Int32_array *v700; // x6
  System_Int32_array *v701; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v702; // x21
  QuestTree___c_c *v703; // x0
  struct QuestTree___c_StaticFields *v704; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_11; // x22
  Il2CppObject *v706; // x23
  struct QuestTree___c_StaticFields *v707; // x0
  System_String_array **v708; // x2
  System_String_array **v709; // x3
  System_Boolean_array **v710; // x4
  System_Int32_array **v711; // x5
  System_Int32_array *v712; // x6
  System_Int32_array *v713; // x7
  System_String_array **v714; // x2
  System_String_array **v715; // x3
  System_Boolean_array **v716; // x4
  System_Int32_array **v717; // x5
  System_Int32_array *v718; // x6
  System_Int32_array *v719; // x7
  System_String_array **v720; // x2
  System_String_array **v721; // x3
  System_Boolean_array **v722; // x4
  System_Int32_array **v723; // x5
  System_Int32_array *v724; // x6
  System_Int32_array *v725; // x7
  System_String_array **v726; // x2
  System_String_array **v727; // x3
  System_Boolean_array **v728; // x4
  System_Int32_array **v729; // x5
  System_Int32_array *v730; // x6
  System_Int32_array *v731; // x7
  System_String_array **v732; // x2
  System_String_array **v733; // x3
  System_Boolean_array **v734; // x4
  System_Int32_array **v735; // x5
  System_Int32_array *v736; // x6
  System_Int32_array *v737; // x7
  System_String_array **v738; // x2
  System_String_array **v739; // x3
  System_Boolean_array **v740; // x4
  System_Int32_array **v741; // x5
  System_Int32_array *v742; // x6
  System_Int32_array *v743; // x7
  System_String_array **v744; // x2
  System_String_array **v745; // x3
  System_Boolean_array **v746; // x4
  System_Int32_array **v747; // x5
  System_Int32_array *v748; // x6
  System_Int32_array *v749; // x7
  System_String_array **v750; // x2
  System_String_array **v751; // x3
  System_Boolean_array **v752; // x4
  System_Int32_array **v753; // x5
  System_Int32_array *v754; // x6
  System_Int32_array *v755; // x7
  CommonUI_o *v756; // x0
  System_String_array **v757; // x2
  System_String_array **v758; // x3
  System_Boolean_array **v759; // x4
  System_Int32_array **v760; // x5
  System_Int32_array *v761; // x6
  System_Int32_array *v762; // x7
  EventStatusQuestMaster_o *v763; // [xsp+8h] [xbp-D8h]
  EventStatusMaster_o *v764; // [xsp+10h] [xbp-D0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v765; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o **p_mapInfo_5__15; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v767; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+58h] [xbp-88h] BYREF
  UserQuestEntity_o *v769; // [xsp+60h] [xbp-80h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+68h] [xbp-78h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+70h] [xbp-70h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+78h] [xbp-68h] BYREF
  WarEntity_o *v773; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_40FA344 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_B16FFC(&Method_System_Comparison_MapControl_WarInfo___ctor__, v9);
    sub_B16FFC(&Method_System_Comparison_MapControl_QuestInfo___ctor__, v10);
    sub_B16FFC(&System_Comparison_MapControl_QuestInfo__TypeInfo, v11);
    sub_B16FFC(&System_Comparison_MapControl_WarInfo__TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapGimmickMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPickupMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotRoadMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v25);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v26);
    sub_B16FFC(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v27);
    sub_B16FFC(&DataManager_TypeInfo, v28);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v30);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_QuestEntity___, v31);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v34);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v35);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_QuestEntity___, v36);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v37);
    sub_B16FFC(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v38);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v39);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v40);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_QuestEntity___, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v43);
    sub_B16FFC(&Method_System_Func_QuestEntity__bool___ctor__, v44);
    sub_B16FFC(&Method_System_Func_WarEntity__bool___ctor__, v45);
    sub_B16FFC(&Method_System_Func_MapControl_SpotInfo__int___ctor__, v46);
    sub_B16FFC(&Method_System_Func_MapControl_SpotInfo__bool___ctor__, v47);
    sub_B16FFC(&System_Func_WarEntity__bool__TypeInfo, v48);
    sub_B16FFC(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v49);
    sub_B16FFC(&System_Func_MapControl_SpotInfo__int__TypeInfo, v50);
    sub_B16FFC(&System_Func_QuestEntity__bool__TypeInfo, v51);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, v52);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v53);
    sub_B16FFC(&long___TypeInfo, v54);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v55);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v56);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v57);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v58);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v59);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v60);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v61);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v62);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v63);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v64);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v65);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v66);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v67);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v68);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v69);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v70);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v71);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v72);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v73);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v74);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v75);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v76);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v77);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v78);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v79);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v80);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v81);
    sub_B16FFC(&MapControl_MapInfo_TypeInfo, v82);
    sub_B16FFC(&NetworkManager_TypeInfo, v83);
    sub_B16FFC(&OptionManager_TypeInfo, v84);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v85);
    sub_B16FFC(&Method_System_Predicate_MapControl_WarInfo___ctor__, v86);
    sub_B16FFC(&Method_System_Predicate_MapControl_MapInfo___ctor__, v87);
    sub_B16FFC(&Method_System_Predicate_MapControl_QuestInfo___ctor__, v88);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__, v89);
    sub_B16FFC(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v90);
    sub_B16FFC(&System_Predicate_MapControl_MapInfo__TypeInfo, v91);
    sub_B16FFC(&System_Predicate_MapControl_WarInfo__TypeInfo, v92);
    sub_B16FFC(&System_Predicate_MapControl_QuestInfo__TypeInfo, v93);
    sub_B16FFC(&System_Predicate_MapControl_SpotInfo__TypeInfo, v94);
    sub_B16FFC(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v95);
    sub_B16FFC(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v96);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v97);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v98);
    sub_B16FFC(&MapControl_SpotInfo_TypeInfo, v99);
    sub_B16FFC(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_11__, v100);
    sub_B16FFC(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_2__, v101);
    sub_B16FFC(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_6__, v102);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v103);
    sub_B16FFC(&QuestTree___c__DisplayClass39_0_TypeInfo, v104);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v105);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v106);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v107);
    sub_B16FFC(&QuestTree___c__DisplayClass39_1_TypeInfo, v108);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v109);
    sub_B16FFC(&QuestTree___c__DisplayClass39_2_TypeInfo, v110);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v111);
    sub_B16FFC(&QuestTree___c__DisplayClass39_3_TypeInfo, v112);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v113);
    sub_B16FFC(&QuestTree___c__DisplayClass39_4_TypeInfo, v114);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v115);
    sub_B16FFC(&QuestTree___c__DisplayClass39_5_TypeInfo, v116);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v117);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v118);
    sub_B16FFC(&Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v119);
    sub_B16FFC(&QuestTree___c__DisplayClass39_6_TypeInfo, v120);
    sub_B16FFC(&QuestTree___c_TypeInfo, v121);
    sub_B16FFC(&WarEntity_TypeInfo, v122);
    sub_B16FFC(&MapControl_WarInfo_TypeInfo, v123);
    byte_40FA344 = 1;
  }
  v773 = 0LL;
  entity = 0LL;
  spotInfo = 0LL;
  mapGimmickInfo = 0LL;
  spotRoadInfo = 0LL;
  value = 0LL;
  v769 = 0LL;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v125 = (Il2CppObject *)sub_B170CC(QuestTree___c__DisplayClass39_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v125, 0LL);
      this->fields.__8__2 = (struct QuestTree___c__DisplayClass39_0_o *)v125;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__8__2,
        (System_Int32_array **)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      if ( !this->fields.__8__2 )
        sub_B170D4();
      this->fields.__8__2->fields.targetWarId = this->fields.targetWarId;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      this->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      p_dataManager_5__2 = &this->fields._dataManager_5__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._dataManager_5__2,
        (System_Int32_array **)Instance,
        v134,
        v135,
        v136,
        v137,
        v138,
        v139);
      if ( !this->fields._dataManager_5__2 )
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            this->fields._dataManager_5__2,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v141 = (struct SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
      this->fields._spotMaster_5__3 = v141;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._spotMaster_5__3,
        (System_Int32_array **)v141,
        v142,
        v143,
        v144,
        v145,
        v146,
        v147);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v148 = (struct BlankEarthSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                *p_dataManager_5__2,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      this->fields._blankEarthSpotMaster_5__4 = v148;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._blankEarthSpotMaster_5__4,
        (System_Int32_array **)v148,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v155 = (struct QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      this->fields._questMaster_5__5 = v155;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._questMaster_5__5,
        (System_Int32_array **)v155,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v162 = (struct QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            *p_dataManager_5__2,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      this->fields._questPhaseMaster_5__6 = v162;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._questPhaseMaster_5__6,
        (System_Int32_array **)v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v169 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v765 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              *p_dataManager_5__2,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v764 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      *p_dataManager_5__2,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v763 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           *p_dataManager_5__2,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v170 = (struct SpotRoadMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          *p_dataManager_5__2,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      this->fields._spotRoadMaster_5__7 = v170;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._spotRoadMaster_5__7,
        (System_Int32_array **)v170,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v177 = (struct MapGimmickMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            *p_dataManager_5__2,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      this->fields._mapGimmickMaster_5__8 = v177;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._mapGimmickMaster_5__8,
        (System_Int32_array **)v177,
        v178,
        v179,
        v180,
        v181,
        v182,
        v183);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      v184 = (struct QuestPickupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             *p_dataManager_5__2,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      this->fields._questPickupMaster_5__9 = v184;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._questPickupMaster_5__9,
        (System_Int32_array **)v184,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      v195 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v191, v192, v193, v194);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v195,
        (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      this->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v195;
      p_eventStatusQuestMismatchDictionary_5__10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields._eventStatusQuestMismatchDictionary_5__10;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._eventStatusQuestMismatchDictionary_5__10,
        (System_Int32_array **)v195,
        v197,
        v198,
        v199,
        v200,
        v201,
        v202);
      v207 = (Il2CppObject *)sub_B170CC(QuestTree___c__DisplayClass39_1_TypeInfo, v203, v204, v205, v206);
      System_Object___ctor(v207, 0LL);
      this->fields.__8__1 = (struct QuestTree___c__DisplayClass39_1_o *)v207;
      p__8__1 = &this->fields.__8__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__8__1,
        (System_Int32_array **)v207,
        v209,
        v210,
        v211,
        v212,
        v213,
        v214);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !*p_dataManager_5__2 )
        sub_B170D4();
      Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                       *p_dataManager_5__2,
                                       (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      _8__2 = (Il2CppObject *)this->fields.__8__2;
      v218 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarMaster__WarEntity;
      v223 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_WarEntity__bool__TypeInfo,
                                                                                  v219,
                                                                                  v220,
                                                                                  v221,
                                                                                  v222);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v223,
        _8__2,
        Method_QuestTree___c__DisplayClass39_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarEntity__bool___ctor__);
      v224 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
               v218,
               (System_Func_TSource__bool__o *)v223,
               (const MethodInfo_19C3BB0 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v224 )
        sub_B170D4();
      if ( !*p__8__1 )
        sub_B170D4();
      (*p__8__1)->fields.warId = (int32_t)v224->fields.m_messageTypeId;
      if ( !_4__this )
        sub_B170D4();
      if ( !*p__8__1 )
        sub_B170D4();
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_B170D4();
      MapControl_RootInfo__Remove(mapControlRootInfo, (*p__8__1)->fields.warId, 0LL);
      allWarInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allWarInfoList;
      v227 = (Il2CppObject *)*p__8__1;
      v232 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                        System_Predicate_MapControl_WarInfo__TypeInfo,
                                                                        v228,
                                                                        v229,
                                                                        v230,
                                                                        v231);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v232,
        v227,
        Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_WarInfo___ctor__);
      if ( !allWarInfoList )
        sub_B170D4();
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v232,
                (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      if ( Index != -1 )
      {
        v234 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allWarInfoList;
        if ( !v234 )
          sub_B170D4();
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          v234,
          Index,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      if ( !*p__8__1 )
        sub_B170D4();
      v235 = _4__this->fields.mapControlRootInfo;
      if ( !v235 )
        sub_B170D4();
      v236 = MapControl_RootInfo__AddChild(v235, (*p__8__1)->fields.warId, 0LL);
      this->fields._warInfo_5__13 = v236;
      p_warInfo_5__13 = &this->fields._warInfo_5__13;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._warInfo_5__13,
        (System_Int32_array **)v236,
        v238,
        v239,
        v240,
        v241,
        v242,
        v243);
      warInfo_5__13 = this->fields._warInfo_5__13;
      if ( !warInfo_5__13 )
        sub_B170D4();
      if ( MapControl_WarInfo__IsEvent(warInfo_5__13, 0LL) )
      {
        if ( !*p_warInfo_5__13 )
          sub_B170D4();
        EventId = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
        if ( !v169 )
          sub_B170D4();
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v169,
               &entity,
               EventId,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B170D4();
          if ( Time >= *(_QWORD *)&entity->fields.startType && Time < (__int64)entity->fields.coordinate )
          {
            if ( !*p_warInfo_5__13 )
              sub_B170D4();
            MapControl_WarInfo__SetStatusCheckFlag(*p_warInfo_5__13, 1, 0, 0LL);
          }
          if ( !*p_warInfo_5__13 )
            sub_B170D4();
          v246 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
          if ( !v765 )
            sub_B170D4();
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v765,
                 &v773,
                 v246,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v773 )
              sub_B170D4();
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v773, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_B170D4();
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, Time, 0LL) )
              {
                if ( !*p_warInfo_5__13 )
                  sub_B170D4();
                v248 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                if ( !v764 )
                  sub_B170D4();
                NowEntity = EventStatusMaster__getNowEntity(v764, v248, 0LL);
                if ( NowEntity )
                {
                  if ( !*p_warInfo_5__13 )
                    sub_B170D4();
                  v250 = MapControl_WarInfo__GetEventId(*p_warInfo_5__13, 0LL);
                  if ( !v763 )
                    sub_B170D4();
                  MismatchQuestList = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                                     v763,
                                                                                     v250,
                                                                                     NowEntity->fields.statusId,
                                                                                     0LL);
                  if ( !*p__8__1 )
                    sub_B170D4();
                  if ( !*p_eventStatusQuestMismatchDictionary_5__10 )
                    sub_B170D4();
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    *p_eventStatusQuestMismatchDictionary_5__10,
                    (*p__8__1)->fields.warId,
                    MismatchQuestList,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v252 = (System_Int64_array *)sub_B17014(long___TypeInfo, 3LL, v247);
          if ( !entity )
            sub_B170D4();
          if ( !v252 )
            sub_B170D4();
          max_length = v252->max_length;
          if ( !max_length )
          {
            sub_B17100(v252, v253, v252);
            sub_B170A0();
          }
          v252->m_Items[0] = *(_QWORD *)&entity->fields.startType;
          if ( !entity )
            sub_B170D4();
          if ( max_length <= 1 )
          {
            sub_B17100(v252, v253, v252);
            sub_B170A0();
          }
          v252->m_Items[1] = entity->fields.targetId;
          if ( !entity )
            sub_B170D4();
          if ( max_length <= 2 )
          {
            sub_B17100(v252, v253, v252);
            sub_B170A0();
          }
          v252->m_Items[2] = (int64_t)entity->fields.coordinate;
          QuestTree__UpdateForceUpdateTime(_4__this, Time, v252, 0LL);
        }
      }
      v255 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allWarInfoList;
      if ( !v255 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v255,
        (EventMissionProgressRequest_Argument_ProgressData_o *)*p_warInfo_5__13,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
      if ( !*p_warInfo_5__13 )
        sub_B170D4();
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      List = MapMaster__getList(MasterData_WarQuestSelectionMaster, (*p_warInfo_5__13)->fields.warId, 0LL);
      this->fields._mapList_5__14 = List;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._mapList_5__14,
        (System_Int32_array **)List,
        v257,
        v258,
        v259,
        v260,
        v261,
        v262);
      mapList_5__14 = this->fields._mapList_5__14;
      this->fields._mapIdx_5__11 = 0;
      if ( !mapList_5__14 )
        sub_B170D4();
      mapCount_5__12 = mapList_5__14->max_length;
      v270 = 0;
      this->fields._mapCount_5__12 = mapCount_5__12;
      goto LABEL_72;
    case 1:
      _8__1 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !_8__1 )
        sub_B170D4();
      spotRoadMaster_5__7 = this->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_B170D4();
      v384 = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0LL);
      v389 = v384;
      if ( !v384 )
        sub_B170D4();
      v390 = v384->max_length;
      if ( v390 >= 1 )
      {
        v391 = 0LL;
        do
        {
          v392 = sub_B170CC(QuestTree___c__DisplayClass39_4_TypeInfo, v385, v386, v387, v388);
          System_Object___ctor((Il2CppObject *)v392, 0LL);
          if ( (unsigned int)v391 >= v389->max_length )
          {
            sub_B17100(v393, v394, v395);
            sub_B170A0();
          }
          v398 = v389->m_Items[v391];
          if ( !v398 )
            sub_B170D4();
          if ( !v392 )
            sub_B170D4();
          *(_DWORD *)(v392 + 16) = v398->fields.id;
          if ( !_4__this )
            sub_B170D4();
          allSpotRoadInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotRoadInfoList;
          v400 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_MapControl_SpotRoadInfo__TypeInfo,
                                                                            v394,
                                                                            v395,
                                                                            v396,
                                                                            v397);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v400,
            (Il2CppObject *)v392,
            Method_QuestTree___c__DisplayClass39_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
          if ( !allSpotRoadInfoList )
            sub_B170D4();
          v401 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v400,
                   (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          if ( v401 != -1 )
          {
            v402 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v402 )
              sub_B170D4();
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v402,
              v401,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__15 = this->fields._mapInfo_5__15;
          if ( !mapInfo_5__15 )
            sub_B170D4();
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__15, *(_DWORD *)(v392 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v398, &spotRoadInfo, 0LL);
          v404 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v404 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v404,
            (EventMissionProgressRequest_Argument_ProgressData_o *)spotRoadInfo,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
          ++v391;
        }
        while ( (int)v391 < v390 );
      }
      v405 = this->fields.__8__1;
      if ( !v405 )
        sub_B170D4();
      mapGimmickMaster_5__8 = this->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_B170D4();
      v407 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v405->fields.mapId, 0LL);
      v415 = v407;
      if ( !v407 )
        sub_B170D4();
      v416 = v407->max_length;
      if ( v416 >= 1 )
      {
        v417 = 0LL;
        do
        {
          v418 = sub_B170CC(QuestTree___c__DisplayClass39_5_TypeInfo, v408, v409, v410, v411);
          System_Object___ctor((Il2CppObject *)v418, 0LL);
          if ( (unsigned int)v417 >= v415->max_length )
          {
            sub_B17100(v419, v420, v421);
            sub_B170A0();
          }
          v424 = v415->m_Items[v417];
          if ( !v424 )
            sub_B170D4();
          if ( !v418 )
            sub_B170D4();
          *(_DWORD *)(v418 + 16) = v424->fields.id;
          if ( !_4__this )
            sub_B170D4();
          allMapGimmickInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapGimmickInfoList;
          v426 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                                            v420,
                                                                            v421,
                                                                            v422,
                                                                            v423);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v426,
            (Il2CppObject *)v418,
            Method_QuestTree___c__DisplayClass39_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
          if ( !allMapGimmickInfoList )
            sub_B170D4();
          v427 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v426,
                   (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          if ( v427 != -1 )
          {
            v428 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v428 )
              sub_B170D4();
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v428,
              v427,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v429 = this->fields._mapInfo_5__15;
          if ( !v429 )
            sub_B170D4();
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v429, *(_DWORD *)(v418 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v430 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v430 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v430,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mapGimmickInfo,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
          ++v417;
        }
        while ( (int)v417 < v416 );
      }
      this->fields.__2__current = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v409, v410, v411, v412, v413, v414);
      v431 = 2;
      goto LABEL_311;
    case 2:
      this->fields._mapInfo_5__15 = 0LL;
      this->fields.__1__state = -1;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._mapInfo_5__15, 0LL, v2, v3, v4, v5, v6, v7);
      mapCount_5__12 = this->fields._mapCount_5__12;
      v270 = this->fields._mapIdx_5__11 + 1;
      this->fields._mapIdx_5__11 = v270;
LABEL_72:
      if ( v270 < mapCount_5__12 )
      {
        v274 = this->fields._mapList_5__14;
        if ( !v274 )
          sub_B170D4();
        if ( v270 >= v274->max_length )
        {
          sub_B17100(v263, v264, v265);
          sub_B170A0();
        }
        v275 = v274->m_Items[v270];
        if ( !v275 )
          sub_B170D4();
        v276 = this->fields.__8__1;
        if ( !v276 )
          sub_B170D4();
        v276->fields.mapId = v275->fields.id;
        v277 = this->fields._warInfo_5__13;
        if ( !v277 )
          sub_B170D4();
        mapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v277->fields.mapInfoList;
        if ( mapInfoList )
        {
          v279 = this->fields.__8__1;
          if ( !v279 )
            sub_B170D4();
          _9__3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v279->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                               System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                               v264,
                                                                               v265,
                                                                               v266,
                                                                               v267);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              _9__3,
              (Il2CppObject *)v279,
              Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
            v279->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v279->fields.__9__3,
              (System_Int32_array **)_9__3,
              v281,
              v282,
              v283,
              v284,
              v285,
              v286);
          }
          v287 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v264 = v287;
          if ( v287 != -1 )
          {
            v288 = this->fields._warInfo_5__13;
            if ( !v288 )
              sub_B170D4();
            v289 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v288->fields.mapInfoList;
            if ( !v289 )
              sub_B170D4();
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              v289,
              v264,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_B170D4();
        v290 = this->fields.__8__1;
        if ( !v290 )
          sub_B170D4();
        allMapInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v290->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_MapControl_MapInfo__TypeInfo,
                                                                             v264,
                                                                             v265,
                                                                             v266,
                                                                             v267);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__4,
            (Il2CppObject *)v290,
            Method_QuestTree___c__DisplayClass39_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_MapInfo___ctor__);
          v290->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v290->fields.__9__4,
            (System_Int32_array **)_9__4,
            v293,
            v294,
            v295,
            v296,
            v297,
            v298);
        }
        if ( !allMapInfoList )
          sub_B170D4();
        v299 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        if ( v299 != -1 )
        {
          v300 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allMapInfoList;
          if ( !v300 )
            sub_B170D4();
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            v300,
            v299,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v301 = this->fields.__8__1;
        if ( !v301 )
          sub_B170D4();
        v302 = this->fields._warInfo_5__13;
        if ( !v302 )
          sub_B170D4();
        v303 = MapControl_WarInfo__AddChild(v302, v301->fields.mapId, 0LL);
        this->fields._mapInfo_5__15 = v303;
        p_mapInfo_5__15 = (EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields._mapInfo_5__15;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._mapInfo_5__15,
          (System_Int32_array **)v303,
          v304,
          v305,
          v306,
          v307,
          v308,
          v309);
        v310 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allMapInfoList;
        if ( !v310 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v310,
          *p_mapInfo_5__15,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
        v311 = this->fields.__8__1;
        if ( !v311 )
          sub_B170D4();
        spotMaster_5__3 = this->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_B170D4();
        v313 = SpotMaster__getList(spotMaster_5__3, v311->fields.mapId, 0LL);
        v318 = v313;
        if ( !v313 )
          sub_B170D4();
        v319 = v313->max_length;
        if ( v319 >= 1 )
        {
          v320 = 0LL;
          do
          {
            v321 = sub_B170CC(QuestTree___c__DisplayClass39_2_TypeInfo, v314, v315, v316, v317);
            System_Object___ctor((Il2CppObject *)v321, 0LL);
            if ( (unsigned int)v320 >= v318->max_length )
            {
              sub_B17100(v322, v323, v324);
              sub_B170A0();
            }
            v327 = v318->m_Items[v320];
            if ( !v327 )
              sub_B170D4();
            if ( !v321 )
              sub_B170D4();
            *(_DWORD *)(v321 + 16) = v327->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allSpotInfoList;
            v329 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                              System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                              v323,
                                                                              v324,
                                                                              v325,
                                                                              v326);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v329,
              (Il2CppObject *)v321,
              Method_QuestTree___c__DisplayClass39_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            if ( !allSpotInfoList )
              sub_B170D4();
            v330 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v329,
                     (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            if ( v330 != -1 )
            {
              v331 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allSpotInfoList;
              if ( !v331 )
                sub_B170D4();
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v331,
                v330,
                (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            if ( !*p_mapInfo_5__15 )
              sub_B170D4();
            spotInfo = MapControl_MapInfo__AddChild(
                         (MapControl_MapInfo_o *)*p_mapInfo_5__15,
                         *(_DWORD *)(v321 + 16),
                         0LL);
            QuestTree__SetupSpotInfo(_4__this, v327, &spotInfo, 0LL);
            v332 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allSpotInfoList;
            if ( !v332 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v332,
              (EventMissionProgressRequest_Argument_ProgressData_o *)spotInfo,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
            ++v320;
          }
          while ( (int)v320 < v319 );
        }
        v333 = (System_Collections_Generic_IEnumerable_TSource__o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                      _4__this,
                                                                      this->fields._mapInfo_5__15,
                                                                      this->fields._blankEarthSpotMaster_5__4,
                                                                      0LL);
        v334 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v333,
                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v342 = (System_Collections_Generic_IEnumerable_TSource__o *)v334;
        if ( !v334 )
          sub_B170D4();
        if ( *(_QWORD *)&v334->max_length )
        {
          v343 = sub_B170CC(QuestTree___c__DisplayClass39_3_TypeInfo, v335, v336, v337, v338);
          System_Object___ctor((Il2CppObject *)v343, 0LL);
          v348 = QuestTree___c_TypeInfo;
          if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v348 = QuestTree___c_TypeInfo;
          }
          static_fields = v348->static_fields;
          _9__39_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__39_6;
          if ( !_9__39_6 )
          {
            if ( (BYTE3(v348->vtable._0_Equals.methodPtr) & 4) != 0 && !v348->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v348);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v351 = (Il2CppObject *)static_fields->__9;
            _9__39_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                         System_Func_MapControl_SpotInfo__int__TypeInfo,
                                                                                         v344,
                                                                                         v345,
                                                                                         v346,
                                                                                         v347);
            System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
              _9__39_6,
              v351,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_6__,
              (const MethodInfo_2B6B6EC *)Method_System_Func_MapControl_SpotInfo__int___ctor__);
            v352 = QuestTree___c_TypeInfo->static_fields;
            v352->__9__39_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__39_6;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v352->__9__39_6,
              (System_Int32_array **)_9__39_6,
              v353,
              v354,
              v355,
              v356,
              v357,
              v358);
          }
          v359 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v342,
                                                                  (System_Func_TSource__TResult__o *)_9__39_6,
                                                                  (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v364 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v360,
                                                                v361,
                                                                v362,
                                                                v363);
          System_Collections_Generic_HashSet_int____ctor_35487824(
            v364,
            v359,
            (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
          if ( !v343 )
            sub_B170D4();
          *(_QWORD *)(v343 + 16) = v364;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v343 + 16),
            (System_Int32_array **)v364,
            v365,
            v366,
            v367,
            v368,
            v369,
            v370);
          v371 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v376 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_MapControl_SpotInfo__bool__TypeInfo,
                                                                                      v372,
                                                                                      v373,
                                                                                      v374,
                                                                                      v375);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v376,
            (Il2CppObject *)v343,
            Method_QuestTree___c__DisplayClass39_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_MapControl_SpotInfo__bool___ctor__);
          BasicHelper__RemoveElements_MapControl_SpotInfo_(
            v371,
            (System_Func_T__bool__o *)v376,
            (const MethodInfo_18B8934 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v377 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.allSpotInfoList;
          if ( !v377 )
            sub_B170D4();
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v377,
            (System_Collections_Generic_IEnumerable_T__o *)v342,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        this->fields.__2__current = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v336, v337, v338, v339, v340, v341);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_B170D4();
      v433 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allWarInfoList;
      v434 = QuestTree___c_TypeInfo;
      if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v434 = QuestTree___c_TypeInfo;
      }
      v435 = v434->static_fields;
      _9__39_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v435->__9__39_2;
      if ( !_9__39_2 )
      {
        if ( (BYTE3(v434->vtable._0_Equals.methodPtr) & 4) != 0 && !v434->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v434);
          v435 = QuestTree___c_TypeInfo->static_fields;
        }
        v437 = (Il2CppObject *)v435->__9;
        _9__39_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_MapControl_WarInfo__TypeInfo,
                                                                               v264,
                                                                               v265,
                                                                               v266,
                                                                               v267);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__39_2,
          v437,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_2__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_MapControl_WarInfo___ctor__);
        v438 = QuestTree___c_TypeInfo->static_fields;
        v438->__9__39_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__39_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v438->__9__39_2,
          (System_Int32_array **)_9__39_2,
          v439,
          v440,
          v441,
          v442,
          v443,
          v444);
      }
      if ( !v433 )
        sub_B170D4();
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v433,
        (System_Comparison_T__o *)_9__39_2,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      this->fields.__8__1 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__8__1, 0LL, v445, v446, v447, v448, v449, v450);
      this->fields._warInfo_5__13 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._warInfo_5__13, 0LL, v451, v452, v453, v454, v455, v456);
      this->fields._mapList_5__14 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._mapList_5__14, 0LL, v457, v458, v459, v460, v461, v462);
      v467 = (Il2CppObject *)sub_B170CC(QuestTree___c__DisplayClass39_6_TypeInfo, v463, v464, v465, v466);
      System_Object___ctor(v467, 0LL);
      this->fields.__8__3 = (struct QuestTree___c__DisplayClass39_6_o *)v467;
      p__8__3 = &this->fields.__8__3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__8__3,
        (System_Int32_array **)v467,
        v468,
        v469,
        v470,
        v471,
        v472,
        v473);
      v478 = (MapControl_WarInfo_o *)sub_B170CC(MapControl_WarInfo_TypeInfo, v474, v475, v476, v477);
      MapControl_WarInfo___ctor(v478, 0LL);
      this->fields._warInfo_5__13 = v478;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._warInfo_5__13,
        (System_Int32_array **)v478,
        v479,
        v480,
        v481,
        v482,
        v483,
        v484);
      v489 = (MapControl_MapInfo_o *)sub_B170CC(MapControl_MapInfo_TypeInfo, v485, v486, v487, v488);
      MapControl_MapInfo___ctor(v489, 0LL);
      this->fields._mapInfo_5__15 = v489;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._mapInfo_5__15,
        (System_Int32_array **)v489,
        v490,
        v491,
        v492,
        v493,
        v494,
        v495);
      v500 = (MapControl_SpotInfo_o *)sub_B170CC(MapControl_SpotInfo_TypeInfo, v496, v497, v498, v499);
      MapControl_SpotInfo___ctor(v500, 0LL);
      this->fields._spotInfo_5__16 = v500;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._spotInfo_5__16,
        (System_Int32_array **)v500,
        v501,
        v502,
        v503,
        v504,
        v505,
        v506);
      v511 = (WarEntity_o *)sub_B170CC(WarEntity_TypeInfo, v507, v508, v509, v510);
      WarEntity___ctor(v511, 0LL);
      this->fields._warEnt_5__17 = v511;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._warEnt_5__17,
        (System_Int32_array **)v511,
        v512,
        v513,
        v514,
        v515,
        v516,
        v517);
      dataManager_5__2 = this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_B170D4();
      v519 = (struct UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           dataManager_5__2,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      this->fields._userQuestMaster_5__18 = v519;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._userQuestMaster_5__18,
        (System_Int32_array **)v519,
        v520,
        v521,
        v522,
        v523,
        v524,
        v525);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      if ( !*p__8__3 )
        sub_B170D4();
      (*p__8__3)->fields.nowSpotId = -1;
      *(_QWORD *)&this->fields._nowMapId_5__19 = -1LL;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
        v530 = 500;
      else
        v530 = 5000;
      this->fields._breakInterval_5__21 = v530;
      _8__3 = this->fields.__8__3;
      v532 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v526,
                                                         v527,
                                                         v528,
                                                         v529);
      System_Collections_Generic_List_int____ctor(
        v532,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !_8__3 )
        sub_B170D4();
      _8__3->fields.spotInfoList = v532;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_8__3->fields,
        (System_Int32_array **)v532,
        v533,
        v534,
        v535,
        v536,
        v537,
        v538);
      this->fields._cnt_5__22 = 0;
      p_cnt_5__22 = &this->fields._cnt_5__22;
      v539 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.allSpotInfoList;
      if ( !v539 )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v767,
        v539,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      p__7__wrap23 = &this->fields.__7__wrap23;
      v540 = *(_OWORD *)&v767.fields.list;
      this->fields.__7__wrap23.fields.current = (struct MapControl_SpotInfo_o *)v767.fields.current;
      *(_OWORD *)&this->fields.__7__wrap23.fields.list = v540;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap23, 0LL, v541, v542, v543, v544, v545, v546);
LABEL_186:
      this->fields.__1__state = -3;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap23,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
      {
        current = this->fields.__7__wrap23.fields.current;
        ++this->fields._cnt_5__22;
        if ( !current )
          sub_B170D4();
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_B170D4();
        v556 = this->fields.__8__2;
        if ( !v556 )
          sub_B170D4();
        if ( Mine->fields.warId == v556->fields.targetWarId )
        {
          if ( !*p__8__3 )
            sub_B170D4();
          spotInfoList = (*p__8__3)->fields.spotInfoList;
          if ( !spotInfoList )
            sub_B170D4();
          System_Collections_Generic_List_int___Add(
            spotInfoList,
            current->fields.spotId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( !(*p_cnt_5__22 % 300) )
        {
          this->fields.__2__current = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            0LL,
            v550,
            v551,
            v552,
            v553,
            v554,
            v555);
          v431 = 3;
LABEL_311:
          this->fields.__1__state = v431;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39____m__Finally1(this, v547);
      *(_QWORD *)&p__7__wrap23->fields.index = 0LL;
      p__7__wrap23->fields.current = 0LL;
      p__7__wrap23->fields.list = 0LL;
      questMaster_5__5 = (DataMasterBase_o *)this->fields._questMaster_5__5;
      if ( !questMaster_5__5 )
        sub_B170D4();
      Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                          questMaster_5__5,
                                          (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v560 = (Il2CppObject *)*p__8__3;
      v561 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys_WarQuestSelectionEntity;
      v566 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_QuestEntity__bool__TypeInfo,
                                                                                  v562,
                                                                                  v563,
                                                                                  v564,
                                                                                  v565);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v566,
        v560,
        Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_QuestEntity__bool___ctor__);
      v567 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v561,
               (System_Func_TSource__bool__o *)v566,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v568 = (struct QuestEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v567,
                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      this->fields._questList_5__23 = v568;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._questList_5__23,
        (System_Int32_array **)v568,
        v569,
        v570,
        v571,
        v572,
        v573,
        v574);
      this->fields._mapCount_5__12 = 0;
      p_mapCount_5__12 = &this->fields._mapCount_5__12;
      v575 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._questList_5__23,
               (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      this->fields._mapIdx_5__11 = v575;
      p_mapIdx_5__11 = &this->fields._mapIdx_5__11;
      v576 = this->fields._mapCount_5__12;
      break;
    case 3:
      p__7__wrap23 = &this->fields.__7__wrap23;
      p_cnt_5__22 = &this->fields._cnt_5__22;
      p__8__3 = &this->fields.__8__3;
      goto LABEL_186;
    case 4:
      p_mapCount_5__12 = &this->fields._mapCount_5__12;
      v271 = this->fields._mapCount_5__12;
      p_mapIdx_5__11 = &this->fields._mapIdx_5__11;
      this->fields.__1__state = -1;
      goto LABEL_433;
    case 5:
      endCallback = this->fields.endCallback;
      this->fields.__1__state = -1;
      if ( !endCallback )
        sub_B170D4();
      System_Action__Invoke(endCallback, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( v576 < (int)v575 )
  {
    questList_5__23 = this->fields._questList_5__23;
    if ( !questList_5__23 )
      sub_B170D4();
    if ( v576 >= questList_5__23->max_length )
    {
      sub_B17100(v575, method, v2);
      sub_B170A0();
    }
    v578 = questList_5__23->m_Items[v576];
    if ( !v578 )
      sub_B170D4();
    v579 = this->fields.__8__3;
    if ( !v579 )
      sub_B170D4();
    v579->fields.questId = v578->fields.id;
    userQuestMaster_5__18 = this->fields._userQuestMaster_5__18;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v582 = this->fields.__8__3;
    if ( !v582 )
      sub_B170D4();
    if ( !userQuestMaster_5__18 )
      sub_B170D4();
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__18, &v769, UserId, v582->fields.questId, 0LL) )
    {
      if ( !v769 )
        sub_B170D4();
      QuestPhase = UserQuestEntity__getQuestPhase(v769, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_23919224 = QuestEntity__getSpotId_23919224(v578, QuestPhase + 1, 0LL);
    v589 = this->fields.__8__3;
    if ( !v589 )
      sub_B170D4();
    if ( v589->fields.nowSpotId == SpotId_23919224 )
    {
      if ( !_4__this )
        sub_B170D4();
    }
    else
    {
      v589->fields.nowSpotId = SpotId_23919224;
      if ( !_4__this )
        sub_B170D4();
      v590 = this->fields.__8__3;
      if ( !v590 )
        sub_B170D4();
      v591 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v590->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                            warId,
                                                                            v586,
                                                                            v587,
                                                                            v588);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__12,
          (Il2CppObject *)v590,
          Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
        v590->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v590->fields.__9__12,
          (System_Int32_array **)_9__12,
          v593,
          v594,
          v595,
          v596,
          v597,
          v598);
      }
      if ( !v591 )
        sub_B170D4();
      v599 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               v591,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      this->fields._spotInfo_5__16 = (struct MapControl_SpotInfo_o *)v599;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._spotInfo_5__16,
        (System_Int32_array **)v599,
        v600,
        v601,
        v602,
        v603,
        v604,
        v605);
      spotInfo_5__16 = this->fields._spotInfo_5__16;
      if ( !spotInfo_5__16 )
        sub_B170D4();
      MapID = MapControl_SpotInfo__GetMapID(spotInfo_5__16, 0LL);
      warId = MapID;
      if ( this->fields._nowMapId_5__19 != MapID )
      {
        this->fields._nowMapId_5__19 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        this->fields._mapInfo_5__15 = MapInfoByMapID;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._mapInfo_5__15,
          (System_Int32_array **)MapInfoByMapID,
          v609,
          v610,
          v611,
          v612,
          v613,
          v614);
        v615 = this->fields._mapInfo_5__15;
        if ( !v615 )
          sub_B170D4();
        v616 = MapControl_MapInfo__GetMine(v615, 0LL);
        if ( !v616 )
          sub_B170D4();
        warId = (unsigned int)v616->fields.warId;
        if ( this->fields._nowWarId_5__20 != (_DWORD)warId )
        {
          this->fields._nowWarId_5__20 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          this->fields._warInfo_5__13 = WarInfoByWarID;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._warInfo_5__13,
            (System_Int32_array **)WarInfoByWarID,
            v618,
            v619,
            v620,
            v621,
            v622,
            v623);
          v624 = this->fields._warInfo_5__13;
          if ( !v624 )
            sub_B170D4();
          v625 = MapControl_WarInfo__GetMine(v624, 0LL);
          this->fields._warEnt_5__17 = v625;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._warEnt_5__17,
            (System_Int32_array **)v625,
            v626,
            v627,
            v628,
            v629,
            v630,
            v631);
        }
      }
    }
    v632 = this->fields.__8__3;
    if ( !v632 )
      sub_B170D4();
    allQuestInfoList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v632->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_MapControl_QuestInfo__TypeInfo,
                                                                          warId,
                                                                          v586,
                                                                          v587,
                                                                          v588);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13,
        (Il2CppObject *)v632,
        Method_QuestTree___c__DisplayClass39_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_QuestInfo___ctor__);
      v632->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v632->fields.__9__13,
        (System_Int32_array **)_9__13,
        v635,
        v636,
        v637,
        v638,
        v639,
        v640);
    }
    if ( !allQuestInfoList )
      sub_B170D4();
    v641 = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    if ( v641 != -1 )
    {
      v642 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.allQuestInfoList;
      if ( !v642 )
        sub_B170D4();
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v642,
        v641,
        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v643 = this->fields._warInfo_5__13;
    if ( !v769 )
    {
      if ( !v643 )
        sub_B170D4();
      goto LABEL_358;
    }
    if ( !v643 )
      sub_B170D4();
    MapControl_WarInfo__SetStatusCheckFlag(v643, 1, 0, 0LL);
    if ( !v769 )
      sub_B170D4();
    if ( !UserQuestEntity__HasStatus(v769, 8, 0LL) )
    {
      v644 = this->fields._warInfo_5__13;
      if ( !v644 )
        sub_B170D4();
      goto LABEL_360;
    }
    if ( !v769 )
      sub_B170D4();
    if ( v769->fields.challengeNum >= 1 )
    {
      v644 = this->fields._warInfo_5__13;
      if ( !v644 )
        sub_B170D4();
LABEL_360:
      MapControl_WarInfo__SetStatusCheckFlag(v644, 4, 0, 0LL);
    }
    if ( !v769 )
      sub_B170D4();
    ClearNum = UserQuestEntity__getClearNum(v769, 0LL);
    v643 = this->fields._warInfo_5__13;
    if ( ClearNum < 1 )
    {
      if ( !v643 )
        sub_B170D4();
LABEL_358:
      MapControl_WarInfo__SetStatusCheckFlag(v643, 2, 0, 0LL);
      v645 = 0;
      goto LABEL_372;
    }
    if ( !v643 )
      sub_B170D4();
    v647 = MapControl_WarInfo__GetMine(v643, 0LL);
    if ( !v647 )
      sub_B170D4();
    v648 = this->fields.__8__3;
    if ( !v648 )
      sub_B170D4();
    if ( v647->fields.lastQuestId == v648->fields.questId )
    {
      v649 = this->fields._warInfo_5__13;
      if ( !v649 )
        sub_B170D4();
      v645 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v649, 8, 1, 0LL);
    }
    else
    {
      v645 = 1;
    }
LABEL_372:
    v650 = this->fields.__8__3;
    if ( !v650 )
      sub_B170D4();
    v651 = this->fields._spotInfo_5__16;
    if ( !v651 )
      sub_B170D4();
    v652 = MapControl_SpotInfo__AddChild(v651, v650->fields.questId, 0LL);
    v659 = this->fields._warInfo_5__13;
    if ( !v659 )
      sub_B170D4();
    v660 = v652;
    if ( !v652 )
      sub_B170D4();
    v652->fields.warId = v659->fields.warId;
    v661 = (System_Int32_array **)this->fields._warInfo_5__13;
    v652->fields._WarInfo_k__BackingField = (struct MapControl_WarInfo_o *)v661;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v652->fields._WarInfo_k__BackingField,
      v661,
      v653,
      v654,
      v655,
      v656,
      v657,
      v658);
    v662 = (System_Int32_array **)this->fields._spotInfo_5__16;
    v660->fields._SpotInfo_k__BackingField = (struct MapControl_SpotInfo_o *)v662;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v660->fields._SpotInfo_k__BackingField,
      v662,
      v663,
      v664,
      v665,
      v666,
      v667,
      v668);
    v660->fields.endTime = QuestTree__GetEndTime(_4__this, v660, 0LL);
    warEnt_5__17 = this->fields._warEnt_5__17;
    if ( !warEnt_5__17 )
      sub_B170D4();
    if ( WarEntity__IsStartTypeQuest(warEnt_5__17, 0LL) )
    {
      v670 = this->fields._warEnt_5__17;
      if ( !v670 )
        sub_B170D4();
      v671 = this->fields.__8__3;
      if ( !v671 )
        sub_B170D4();
      if ( v670->fields.targetId == v671->fields.questId && !WarEntity__HasFlag(this->fields._warEnt_5__17, 0x8000, 0LL) )
        goto LABEL_391;
    }
    v672 = this->fields._warEnt_5__17;
    if ( !v672 )
      sub_B170D4();
    eventStatusQuestMismatchDictionary_5__10 = this->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !eventStatusQuestMismatchDictionary_5__10 )
      sub_B170D4();
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)eventStatusQuestMismatchDictionary_5__10,
           v672->fields.id,
           &value,
           (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      v674 = this->fields.__8__3;
      if ( !v674 )
        sub_B170D4();
      if ( !value )
        sub_B170D4();
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v674->fields.questId,
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_391:
        MapControl_QuestInfo__SetDispType(v660, 0, 0, 0, 0LL, 0, 0LL);
        v660->fields.touchType = 0;
LABEL_392:
        v676 = 1;
        goto LABEL_393;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v578, v660, this->fields._nowWarId_5__20, 0LL) != 1 )
      goto LABEL_392;
    v675 = this->fields._warInfo_5__13;
    if ( !v675 )
      sub_B170D4();
    MapControl_WarInfo__SetStatusCheckFlag(v675, 1, 0, 0LL);
    v676 = 0;
LABEL_393:
    if ( MapControl_QuestInfo__IsDisaplayable(v660, 0LL) )
    {
      if ( ((v645 | v676) & 1) == 0 )
      {
        v677 = this->fields._spotInfo_5__16;
        if ( !v677 )
          sub_B170D4();
        MapControl_SpotInfo__AddQuestCount(v677, 1, 0LL);
        v678 = this->fields._spotInfo_5__16;
        if ( !v678 )
          sub_B170D4();
        MapControl_SpotInfo__AddAvailableQuestId(v678, v660->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v660, 0LL) == 1 )
      {
        v679 = MapControl_QuestInfo__GetMine(v660, 0LL);
        if ( !v679 )
          sub_B170D4();
        if ( !QuestEntity__HasFlag(v679, 0x400000000000LL, 0LL) )
        {
          v680 = this->fields._spotInfo_5__16;
          if ( !v680 )
            sub_B170D4();
          v680->fields._IsNext_k__BackingField = 1;
        }
        v681 = this->fields._mapInfo_5__15;
        if ( !v681 )
          sub_B170D4();
        v681->fields._IsNext_k__BackingField = 1;
      }
      if ( MapControl_QuestInfo__GetQuestType(v660, 0LL) == 7
        && MapControl_QuestInfo__IsDisplayWarBoardNextIcon(v660, 0LL) )
      {
        v682 = this->fields._spotInfo_5__16;
        if ( !v682 )
          sub_B170D4();
        v682->fields._IsNext_k__BackingField = 1;
        v683 = this->fields._mapInfo_5__15;
        if ( !v683 )
          sub_B170D4();
        v683->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v578, 0x8000000000LL, 0LL) )
      {
        v684 = this->fields._spotInfo_5__16;
        if ( !v684 )
          sub_B170D4();
        MapControl_SpotInfo__AddFreeQuestCount(v684, 1, 0LL);
      }
    }
    if ( v769 )
    {
      if ( UserQuestEntity__HasStatus(v769, 8, 0LL) )
      {
        if ( !v769 )
          sub_B170D4();
        v685 = v769->fields.challengeNum == 0;
      }
      else
      {
        v685 = 0;
      }
    }
    else
    {
      v685 = 1;
    }
    v660->fields.isNew = v685;
    v660->fields.questPhase = QuestPhase;
    v686 = this->fields.__8__3;
    if ( !v686 )
      sub_B170D4();
    questPickupMaster_5__9 = this->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_B170D4();
    v660->fields.pickupPriority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v686->fields.questId, 0LL);
    v688 = this->fields.__8__3;
    if ( !v688 )
      sub_B170D4();
    questPhaseMaster_5__6 = this->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_B170D4();
    v690 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v688->fields.questId, 0LL);
    v691 = v690;
    if ( !v690 )
      sub_B170D4();
    v692 = *(_QWORD *)&v690->max_length;
    if ( (int)v692 >= 1 )
    {
      v693 = 0;
      while ( 1 )
      {
        v694 = v691->m_Items[v693];
        if ( !v694 )
          sub_B170D4();
        v695 = MapControl_QuestInfo__AddChild(v660, v694->fields.questId, v694->fields.phase, 0LL);
        if ( (int)++v693 >= (int)v692 )
          break;
        if ( v693 >= v691->max_length )
        {
          sub_B17100(v695, v696, v697);
          sub_B170A0();
        }
      }
    }
    v698 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allQuestInfoList;
    if ( !v698 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v698,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v660,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    v271 = this->fields._mapCount_5__12;
    if ( v271 && !(v271 % this->fields._breakInterval_5__21) )
    {
      this->fields.__2__current = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v699, v700, v701);
      v431 = 4;
      goto LABEL_311;
    }
LABEL_433:
    v576 = v271 + 1;
    *p_mapCount_5__12 = v576;
    v575 = (unsigned int)*p_mapIdx_5__11;
  }
  if ( !_4__this )
    sub_B170D4();
  v702 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)_4__this->fields.allQuestInfoList;
  v703 = QuestTree___c_TypeInfo;
  if ( (BYTE3(QuestTree___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v703 = QuestTree___c_TypeInfo;
  }
  v704 = v703->static_fields;
  _9__39_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v704->__9__39_11;
  if ( !_9__39_11 )
  {
    if ( (BYTE3(v703->vtable._0_Equals.methodPtr) & 4) != 0 && !v703->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v703);
      v704 = QuestTree___c_TypeInfo->static_fields;
    }
    v706 = (Il2CppObject *)v704->__9;
    _9__39_11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_MapControl_QuestInfo__TypeInfo,
                                                                            method,
                                                                            v2,
                                                                            v3,
                                                                            v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_11,
      v706,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__39_11__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MapControl_QuestInfo___ctor__);
    v707 = QuestTree___c_TypeInfo->static_fields;
    v707->__9__39_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__39_11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v707->__9__39_11,
      (System_Int32_array **)_9__39_11,
      v708,
      v709,
      v710,
      v711,
      v712,
      v713);
  }
  if ( !v702 )
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v702,
    (System_Comparison_T__o *)_9__39_11,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  this->fields.__8__3 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.__8__3, 0LL, v714, v715, v716, v717, v718, v719);
  this->fields._warInfo_5__13 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._warInfo_5__13, 0LL, v720, v721, v722, v723, v724, v725);
  this->fields._mapInfo_5__15 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._mapInfo_5__15, 0LL, v726, v727, v728, v729, v730, v731);
  this->fields._spotInfo_5__16 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._spotInfo_5__16, 0LL, v732, v733, v734, v735, v736, v737);
  this->fields._warEnt_5__17 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._warEnt_5__17, 0LL, v738, v739, v740, v741, v742, v743);
  this->fields._userQuestMaster_5__18 = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._userQuestMaster_5__18,
    0LL,
    v744,
    v745,
    v746,
    v747,
    v748,
    v749);
  this->fields._questList_5__23 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._questList_5__23, 0LL, v750, v751, v752, v753, v754, v755);
  v756 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v756 )
    sub_B170D4();
  CommonUI__SetLoadMode(v756, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( this->fields.endCallback )
  {
    this->fields.__2__current = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v757, v758, v759, v760, v761, v762);
    v431 = 5;
    goto LABEL_311;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__39_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA345 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_40FA345 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}