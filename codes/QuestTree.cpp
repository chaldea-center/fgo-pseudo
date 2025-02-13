void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4BD94B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C21E38(&MapControl_RootInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4BD94B7 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1C22084(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0LL);
  this->fields.mapControlRootInfo = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.allQuestInfoList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.allSpotInfoList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.allSpotRoadInfoList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.allMapGimmickInfoList,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.allMapInfoList, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.allWarInfoList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questReleaseEntList,
    (int64_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_388D570 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_35205376(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_35202432(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  __int64 v7; // x1
  int64_t v8; // x20
  MapGimmickEntity_o *v9; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v11; // x8
  int64_t *v12; // x9
  int64_t v13; // x10

  if ( (byte_4BD94B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD94B4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
    LOBYTE(Mine) = 1;
  }
  else
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !mapGimmickInfo )
      goto LABEL_26;
    v8 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v9 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C21EE0(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v11 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v11 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v11 == 1) )
      sub_1C2209C(Time, v7);
    *(_QWORD *)(Time + 40) = v9->fields.endedAt;
    if ( (int)v11 >= 1 )
    {
      v11 = (unsigned int)v11;
      v12 = (int64_t *)(Time + 32);
      do
      {
        v13 = *v12;
        if ( *v12 > v8 && this->fields.forceUpdateTime > v13 )
          this->fields.forceUpdateTime = v13;
        --v11;
        ++v12;
      }
      while ( v11 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1C22094(Time, v7);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v9, 0LL)
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
  int64_t Instance; // x0
  __int64 v10; // x1
  bool v11; // w24
  int64_t Time; // x23
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  __int64 v16; // x29
  __int64 v17; // x28
  _QWORD *v18; // x25
  __int64 v19; // x8
  int64_t *v20; // x9
  int64_t v21; // x10
  int v22; // w22
  _BOOL4 v23; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v29; // w23
  int32_t v30; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v35; // w1
  MapControl_QuestInfo_o *v36; // x0
  _BOOL4 v37; // w8
  UserQuestEntity_o *v39; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4BD94B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD94B0 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v39 = 0LL;
  Instance = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !Instance )
    goto LABEL_75;
  v11 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)Instance,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !Instance )
    goto LABEL_75;
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, questEnt->fields.id, 0LL);
  p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  if ( !ReplaceDataByQuestId )
    p_openedAt = &questEnt->fields.openedAt;
  if ( !ReplaceDataByQuestId )
    p_closedAt = &questEnt->fields.closedAt;
  v16 = *p_openedAt;
  v17 = *p_closedAt;
  v18 = (_QWORD *)sub_1C21EE0(long___TypeInfo, 3LL);
  Instance = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v18 )
    goto LABEL_75;
  v19 = v18[3];
  if ( !(_DWORD)v19 || (v18[4] = Instance, (_DWORD)v19 == 1) || (v18[5] = v16, (unsigned int)v19 <= 2) )
    sub_1C2209C(Instance, v10);
  v18[6] = v17;
  if ( (int)v19 >= 1 )
  {
    v19 = (unsigned int)v19;
    v20 = v18 + 4;
    do
    {
      v21 = *v20;
      if ( *v20 > Time && v8->fields.forceUpdateTime > v21 )
        v8->fields.forceUpdateTime = v21;
      --v19;
      ++v20;
    }
    while ( v19 );
  }
  v22 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
  {
    v23 = 0;
    goto LABEL_57;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v22 = 3;
  else
    v22 = 1;
  if ( v11 || HasFlag )
  {
    v23 = !HasFlag;
    goto LABEL_57;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0LL) > Time
    && QuestEntity__getNoticeAt(questEnt, 0LL) <= Time )
  {
    goto LABEL_55;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_75;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( questReleaseNG )
  {
    if ( questReleaseNG->fields.closedMessageId )
    {
      IsShop = entity;
      if ( entity )
      {
        IsShop = (Il2CppObject *)WarEntity__IsShop((WarEntity_o *)entity, 0LL);
        if ( ((unsigned __int8)IsShop & 1) != 0 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          Instance = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_75;
          if ( !UserQuestMaster__TryGetEntity(
                  (UserQuestMaster_o *)MasterData_object,
                  &v39,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_56;
          Instance = (int64_t)v39;
          if ( !v39 )
            goto LABEL_75;
          if ( !UserQuestEntity__HasStatus(v39, 8, 0LL) )
            goto LABEL_56;
LABEL_55:
          v23 = 0;
          v22 = 2;
          goto LABEL_57;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v26);
  if ( !Instance )
    goto LABEL_75;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0LL)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_55;
  }
LABEL_56:
  v23 = 0;
  v22 = 0;
LABEL_57:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (Instance & 1) != 0 )
    v29 = 1;
  else
    v29 = forceOperation;
  if ( v29 )
    v30 = v29 != 2;
  else
    v30 = v22;
  if ( questReleaseNG && v30 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v35 = 2;
      v36 = questInfo;
      goto LABEL_71;
    }
LABEL_75:
    sub_1C22094(Instance, v10);
  }
  if ( !questInfo )
    goto LABEL_75;
  v36 = questInfo;
  v35 = v30;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_71:
  MapControl_QuestInfo__SetDispType(v36, v35, type, targetId, value, closedMessageId, 0LL);
  if ( v29 )
    v37 = v29 != 2;
  else
    v37 = v23;
  questInfo->fields.touchType = v37;
  return v30;
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

  return QuestTree__CheckSpotCond_35205376(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckSpotCond_35205376(
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
  long double inited; // q0
  QuestAfterAction_o *Instance; // x0
  SrcSpotBasePrefab_c *klass; // x8
  SrcSpotBasePrefab_c *v20; // x8
  _DWORD *generic_class; // x8
  int v22; // w8
  bool IsExistCommand; // w21
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x25
  bool IsMissionAchive; // w0
  QuestEntity_o *v28; // x19
  int32_t WarId; // w0
  const MethodInfo *v30; // x4
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w24
  int32_t v34; // w22
  Il2CppObject *Item; // x23
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_QuestGroupEntity__o *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w24
  int32_t v40; // w22
  Il2CppObject *v41; // x23
  const MethodInfo *v42; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  struct System_Threading_CancellationTokenSource_o *v45; // x8
  QuestAfterAction_o *v46; // x20
  int32_t v47; // w23
  unsigned __int64 v48; // x24
  int32_t v49; // w22
  int v50; // w21
  int v51; // w20
  int64_t v52; // x2
  int32_t v53; // w0
  int32_t v54; // w0
  bool v55; // cc
  int32_t v56; // w8
  bool v57; // cc
  int32_t v58; // w8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v60; // x20
  int32_t v61; // w23
  unsigned __int64 v62; // x24
  int32_t v63; // w22
  struct System_Threading_CancellationTokenSource_o *v64; // x8
  QuestAfterAction_o *v65; // x20
  unsigned __int64 v66; // x24
  int32_t v67; // w22
  int32_t v68; // w8
  int32_t v70; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD94B3 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD94B3 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_6:
    LOBYTE(v13) = 1;
    return (unsigned __int8)v13 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v14->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.lastDispSpot->klass;
  if ( !klass )
    goto LABEL_209;
  if ( !klass[1]._1.generic_class )
    goto LABEL_34;
  if ( !LODWORD(Instance[1].monitor) )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  }
  v20 = Instance->fields.lastDispSpot->klass;
  if ( !v20 )
    goto LABEL_209;
  generic_class = v20[1]._1.generic_class;
  if ( !generic_class )
    goto LABEL_209;
  v22 = generic_class[4];
  if ( v22 )
  {
    IsExistCommand = 0;
  }
  else
  {
LABEL_34:
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C73D14(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C73D14(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      IsExistCommand = QuestAfterAction__IsExistCommand(Instance, commandType, commandTypeId, 0LL);
      v22 = 0;
    }
    else
    {
      v22 = 0;
      IsExistCommand = 1;
    }
  }
  v13 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v13 & 1;
    case 2:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_209;
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
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_209;
      if ( targetValue )
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(
                            (clsQuestCheck_o *)Instance,
                            targetId,
                            targetValue,
                            IsExistCommand,
                            0LL);
      else
        IsMissionAchive = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      goto LABEL_173;
    case 5:
      if ( v22 == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 6:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_209;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_6;
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_209;
      v28 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v13) = QuestTree__CheckQuestOpen(this, v28, 0LL, WarId, v30) == 1;
      return (unsigned __int8)v13 & 1;
    case 7:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
        if ( CacheByTypeGroup )
        {
          v32 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
          if ( CacheByTypeGroup->fields._size >= 1 )
          {
            v33 = 0;
            v34 = 0;
            while ( 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v32,
                       v34,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Item, v36);
              if ( !Item || !Instance )
                goto LABEL_209;
              ++v34;
              v33 += clsQuestCheck__IsQuestClear(
                       (clsQuestCheck_o *)Instance,
                       (int32_t)Item[1].klass,
                       IsExistCommand,
                       0LL);
              if ( v34 >= v32->fields._size )
                goto LABEL_162;
            }
          }
        }
        v33 = 0;
LABEL_162:
        if ( targetValue <= 1 )
          v56 = 1;
        else
          v56 = targetValue;
        v57 = v33 < v56;
        goto LABEL_206;
      }
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0LL);
      if ( !Instance )
        goto LABEL_209;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v60 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v61 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v70 = 1;
        else
          v70 = targetValue;
        v57 = v61 < v70;
LABEL_206:
        LOBYTE(v13) = v57;
        return (unsigned __int8)v13 & 1;
      }
      v61 = 0;
      v62 = 0LL;
      while ( v62 < (unsigned int)m_CancellationTokenSource )
      {
        v63 = *((_DWORD *)&v60->fields.invalidMapGimmickIdList + v62);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v63,
                                           IsExistCommand,
                                           0LL);
        LODWORD(m_CancellationTokenSource) = v60->fields.m_CancellationTokenSource;
        ++v62;
        v61 += (unsigned __int8)Instance & 1;
        if ( (__int64)v62 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        v37 = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
        if ( v37 )
        {
          v38 = (System_Collections_Generic_List_object__o *)v37;
          if ( v37->fields._size >= 1 )
          {
            v39 = 0;
            v40 = 0;
            while ( 1 )
            {
              v41 = System_Collections_Generic_List_object___get_Item(
                      v38,
                      v40,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear(
                       (clsQuestCheck_o *)Instance,
                       (int32_t)v41[1].klass,
                       IsExistCommand,
                       0LL);
              if ( v40 >= v38->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C22094(Instance, v16);
          }
        }
        v39 = 0;
LABEL_167:
        if ( targetValue <= 1 )
          v58 = 1;
        else
          v58 = targetValue;
        v55 = v39 < v58;
      }
      else
      {
        Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                           (QuestGroupMaster_o *)Instance,
                                           targetId,
                                           2,
                                           0LL);
        if ( !Instance )
          goto LABEL_209;
        v64 = Instance->fields.m_CancellationTokenSource;
        v65 = Instance;
        if ( (int)v64 >= 1 )
        {
          v47 = 0;
          v66 = 0LL;
          while ( v66 < (unsigned int)v64 )
          {
            v67 = *((_DWORD *)&v65->fields.invalidMapGimmickIdList + v66);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v67,
                                               IsExistCommand,
                                               0LL);
            LODWORD(v64) = v65->fields.m_CancellationTokenSource;
            ++v66;
            v47 += (unsigned __int8)Instance & 1;
            if ( (__int64)v66 >= (int)v64 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1C2209C(Instance, v16);
        }
LABEL_188:
        v47 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v68 = 1;
        else
          v68 = targetValue;
        v55 = v47 < v68;
      }
LABEL_193:
      LOBYTE(v13) = !v55;
      return (unsigned __int8)v13 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Instance = (QuestAfterAction_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (QuestAfterAction_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)UserItemMaster__TryGetEntity(
                                         (UserItemMaster_o *)MasterData_object,
                                         &entity,
                                         *(_QWORD *)&Instance->fields.lastDispSpot->fields.selfScale.fields.z,
                                         targetId,
                                         0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_209;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      v55 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v13) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v13 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0LL);
      if ( !Instance )
        goto LABEL_209;
      v45 = Instance->fields.m_CancellationTokenSource;
      v46 = Instance;
      if ( (int)v45 < 1 )
        goto LABEL_188;
      v47 = 0;
      v48 = 0LL;
      while ( v48 < (unsigned int)v45 )
      {
        v49 = *((_DWORD *)&v46->fields.invalidMapGimmickIdList + v48);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClearRaw(
                                           (clsQuestCheck_o *)Instance,
                                           v49,
                                           IsExistCommand,
                                           0LL);
        LODWORD(v45) = v46->fields.m_CancellationTokenSource;
        ++v48;
        v47 += (unsigned __int8)Instance & 1;
        if ( (__int64)v48 >= (int)v45 )
          goto LABEL_189;
      }
      goto LABEL_210;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 13:
      v50 = targetId / 100;
      v51 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventRaceGoalScriptPlayed(v50, v51, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 16:
      if ( v22 == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_173:
      LOBYTE(v13) = !IsMissionAchive;
      return (unsigned __int8)v13 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 83;
      goto LABEL_199;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 84;
      goto LABEL_199;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 85;
      goto LABEL_199;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 86;
      goto LABEL_199;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 87;
      goto LABEL_199;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 88;
      goto LABEL_199;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 89;
      goto LABEL_199;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 90;
      goto LABEL_199;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 91;
      goto LABEL_199;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 23;
      goto LABEL_199;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 76;
      goto LABEL_199;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_209;
      v54 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v54 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v52 = targetValue;
        v53 = 113;
LABEL_199:
        LOBYTE(v13) = CondType__IsOpen(v53, targetId, v52, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v13) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v54, 1, 0LL);
      }
      return (unsigned __int8)v13 & 1;
    default:
LABEL_52:
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

  return QuestTree__CheckSpotCond_35205376(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BD94AE & 1) == 0 )
  {
    sub_1C21E38(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    byte_4BD94AE = 1;
  }
  v7 = sub_1C22084(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)blankEarthSpotMaster, v22, v23, v24, v25, v26, v27);
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
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x23
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
  QuestEntity_o *Mine; // x0
  __int64 v22; // x1
  QuestEntity_o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4BD94B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4BD94B1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_40793780((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C22094(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0LL;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C22094(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C22094(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1C22094(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v17 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v17, 1, 0LL);
LABEL_27:
              v9 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_1C22094(0LL, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v23 )
          sub_1C22094(0LL, v24);
        EndTime = QuestEntity__GetEndTime(v23, 1, 0LL);
        goto LABEL_27;
      case 166:
        v19 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v19, v19, (QuestReleaseEntity_o *)current, v20);
        goto LABEL_27;
      default:
LABEL_28:
        if ( v9 >= 1 )
          goto LABEL_29;
        break;
    }
  }
LABEL_29:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_39806296; // x0
  int64_t value; // x22
  int64_t v12; // x21
  int64_t NextDayStartTime; // x0
  int64_t v14; // x11
  int64_t v15; // x22
  int64_t v16; // x26
  int v17; // w27
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8

  if ( (byte_4BD94B2 & 1) == 0 )
  {
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD94B2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !questEnt )
    goto LABEL_29;
  v8 = Time;
  v9 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v9;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v9 = 0LL;
  if ( v8 > Time )
    return v9;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1C22094(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v20.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39806296 = NetworkManager__getTime_39806296(v20, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_39806296;
  dateData = NetworkManager__getDateTime_39807076(Time_39806296 - 3600 * value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v21.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v21, 0LL) + 1)) & 1) == 0 )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  v14 = v12 + 86400;
  v9 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v15 = v14 - 3600 * value;
  v16 = v9 + 518400;
  v17 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_39807076(v15, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v22.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v22, 0LL) + 1)) & 1) == 0 )
      break;
    v9 += 86400LL;
    --v17;
    v15 += 86400LL;
    if ( !v17 )
    {
      v9 = v16;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v9 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v9;
}


MapControl_WarInfo_o *__fastcall QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__38_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD94A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C21E38(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C21E38(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__);
    sub_1C21E38(&QuestTree___c_TypeInfo);
    byte_4BD94A7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0LL);
  v5 = QuestTree___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v5 = QuestTree___c_TypeInfo;
  }
  _9__38_0 = (System_Func_object__int__o *)v5->static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__38_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
      (int64_t)_9__38_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v16,
                                                  (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C22094(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v17 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C22094(v17, v18);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v22.fields._current[1].klass), v19) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *__fastcall QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4BD949D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1C21E38(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass24_0_TypeInfo);
    byte_4BD949D = 1;
  }
  v5 = sub_1C22084(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1C22094(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1C22094(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0LL);
}


int32_t __fastcall QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_object__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v17; // w19
  QuestTree_o *v18; // x0
  const MethodInfo *v19; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v21; // x21
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_int__o *v30; // x0
  __int64 v31; // x1
  int v32; // w19
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 Item; // x0
  __int64 v36; // x1
  int32_t v37; // w22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int32_t v44; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BD94A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4BD94A0 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)ChildByWarID,
                                                                        ChildByWarID,
                                                                        v7);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C22094(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C22094(0LL, v12);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v48.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1C22094(0LL, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      SpotList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1C22094(0LL, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v47.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v9 )
        sub_1C22094(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v18, v9, v19);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C22094(0LL, v22);
    v23 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v48.fields._current,
                                                         0LL);
    if ( !v23 )
      sub_1C22094(0LL, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v23,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (MapControl_SpotInfo_o *)v47.fields._current;
      if ( !v47.fields._current )
        sub_1C22094(v25, v26);
      if ( HIDWORD(v47.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C22094(0LL, v29);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v30 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v30 )
        sub_1C22094(0LL, v31);
      v44 = v17;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v30,
        (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = 0;
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v46,
                (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C22094(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v46.fields._current,
                 (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v21 )
            sub_1C22094(Item, v36);
          v38 = System_Collections_Generic_List_int___Contains(
                  v21,
                  Item,
                  (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v38 )
          {
            ++v32;
          }
          else
          {
            items = v21->fields._items;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1C22094(v38, v39);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v37,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = v37;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v46,
        (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v44 - v32 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
  MapControl_MapInfo_o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  MapControl_SpotInfo_o *v22; // x23
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1
  int v27; // w25
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 Item; // x0
  __int64 v31; // x1
  int32_t v32; // w24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int v39; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BD94A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4BD94A3 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C22094(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v9 )
          sub_1C22094(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C22094(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1C22094(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C22094(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C22094(0LL, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0LL) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0LL);
          if ( !v25 )
            sub_1C22094(0LL, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C22094(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1C22094(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v33 )
              {
                ++v27;
              }
              else
              {
                items = v19->fields._items;
                v36 = Method_System_Collections_Generic_List_int__Add__;
                ++v19->fields._version;
                if ( !items )
                  sub_1C22094(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_3632090 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size + 1] = v32;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v41,
            (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C22094(v20, v21);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0LL) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
}


MapControl_QuestInfo_o *__fastcall QuestTree__GetQuestInfo(
        QuestTree_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4BD949E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C21E38(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass25_0_TypeInfo);
    byte_4BD949E = 1;
  }
  v5 = sub_1C22084(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1C22094(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BD94B5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4BD94B5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C22094(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    allQuestInfoList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C22094(v8, v9);
    if ( LODWORD(v23.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1C22094(v8, v9);
      items = v5->fields._items;
      v18 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C22094(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v20[4] = (Il2CppClass *)current;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)current, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD94A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD94A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4BD949C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C21E38(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4BD949C = 1;
  }
  v5 = sub_1C22084(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1C22094(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v4; // x20
  WarEntity_o *Mine; // x0
  __int64 mapId; // x1
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  System_Collections_Generic_List_int__o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x21
  QuestTree___c_c *v19; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v21; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Predicate_object__o *v33; // x21

  if ( (byte_4BD94A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1C21E38(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__);
    sub_1C21E38(&QuestTree___c__DisplayClass31_0_TypeInfo);
    sub_1C21E38(&QuestTree___c_TypeInfo);
    byte_4BD94A1 = 1;
  }
  v4 = sub_1C22084(QuestTree___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !warInfo )
    goto LABEL_28;
  mapInfoList = warInfo->fields.mapInfoList;
  if ( !MapControl_WarInfo__IsMultiMap(warInfo, 0LL) )
    return mapInfoList;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    goto LABEL_28;
  BaseMap = WarEntity__GetBaseMap(Mine, 0LL);
  Map = MapControl_WarInfo__GetMap(warInfo, BaseMap, 0LL);
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !OpenedButtons )
    goto LABEL_28;
  v18 = *(System_Collections_Generic_List_int__o **)(v4 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v19 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v19 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v19->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = QuestTree___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v21, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
        (int64_t)_9__31_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v18 )
    {
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C22094(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v18 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v18->fields._items;
  v31 = Method_System_Collections_Generic_List_int__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v18,
      mapId,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v33 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v33,
                                                                    (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4BD94A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C21E38(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass35_0_TypeInfo);
    byte_4BD94A5 = 1;
  }
  v5 = sub_1C22084(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1C22094(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v10 )
    LODWORD(v10) = v10[4].klass;
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
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD9498 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77600608);
    sub_1C21E38(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4BD9498 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v4,
    allWarInfoList,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77600608);
  if ( !v4 )
    sub_1C22094(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_36509E0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BD9499 & 1) == 0 )
  {
    sub_1C21E38(&QuestTree__Init_d__17_TypeInfo);
    byte_4BD9499 = 1;
  }
  v5 = sub_1C22084(QuestTree__Init_d__17_TypeInfo);
  QuestTree__Init_d__17___ctor((QuestTree__Init_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *allSpotRoadInfoList; // x8
  int32_t v11; // w2
  int v12; // w9
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x8
  int32_t v14; // w2
  int v15; // w9
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x8
  int32_t v17; // w2
  int v18; // w9
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x8
  int32_t v20; // w2
  int v21; // w9

  if ( (byte_4BD94AF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4BD94AF = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v6 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0LL);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v8 = allSpotInfoList->fields._size;
  v9 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v8, 0LL);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v11 = allSpotRoadInfoList->fields._size;
  v12 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v11, 0LL);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v14 = allMapGimmickInfoList->fields._size;
  v15 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v14, 0LL);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v17 = allMapInfoList->fields._size;
  v18 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v18;
  if ( v17 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v17, 0LL);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_1C22094(mapControlRootInfo, method);
  v20 = allWarInfoList->fields._size;
  v21 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v20, 0LL);
}


bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD94A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD94A9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_35200004(this, (WarEntity_o *)entity, v7);
}


bool __fastcall QuestTree__IsActiveEventWar_35200004(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t id; // w20
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v7; // x21
  bool v8; // w20
  int64_t Time; // x21
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v12; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v14; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BD94AA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&long___TypeInfo);
    this = (QuestTree_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD94AA = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_33;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, id, 0LL);
  if ( OpenEntity )
  {
    v7 = OpenEntity;
    if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
      return 1;
    if ( WarReleaseEntity__IsAnnouncement(v7, 0LL) || WarReleaseEntity__IsClose(v7, 0LL) )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v10);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_33;
    v8 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v8 = 0;
  }
  this = (QuestTree_o *)sub_1C21EE0(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_33:
    sub_1C22094(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C2209C(this, warEnt);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v12 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v14 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v14 )
        v4->fields.forceUpdateTime = (int64_t)v14;
      --v12;
      ++p_allSpotInfoList;
    }
    while ( v12 );
  }
  return v8;
}


bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v7; // x20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v11; // x21
  WarEntity_o *Mine; // x0
  WarEntity_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4BD94A8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD94A8 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  v7 = ChildByWarID;
  if ( !MapControl_WarInfo__GetStatus(ChildByWarID, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v9);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, warId, 0LL);
  if ( OpenEntity )
  {
    v11 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0LL) || WarReleaseEntity__IsClose(v11, 0LL) )
      return 0;
  }
  if ( MapControl_WarInfo__IsClosedWar(v7, 0LL) )
    return 0;
  Mine = MapControl_WarInfo__GetMine(v7, 0LL);
  if ( !Mine )
    return 0;
  v13 = Mine;
  return (!WarEntity__IsEvent(Mine, 0LL) || QuestTree__IsActiveEventWar_35200004(this, v13, v14))
      && QuestTree__IsWarOpen(this, v13->fields.id, v14);
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4BD949A & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD949A = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  if ( MonitoringDataMasterRevision != DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL) )
    return 1;
  forceUpdateTime = this->fields.forceUpdateTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return forceUpdateTime <= NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsNextSpotForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  bool v12; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v15; // x3
  int v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD94A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4BD94A4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1C22094(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1C22094(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1C22094(v10, v11);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v19.fields._current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v15)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v16 = 6;
        goto LABEL_16;
      }
    }
  }
  v16 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v12 && v16 == 6;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1C22094(this, 0LL);
  return QuestTree__CheckSpotCond_35205376(
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
    sub_1C22094(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_35205376(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_35205376(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


bool __fastcall QuestTree__IsUseCache(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.isUseCache;
}


bool __fastcall QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v10; // x0
  __int64 v11; // x1
  int v12; // w20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD94B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4BD94B6 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C22094(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1C22094(v10, v11);
    if ( !v10 )
      sub_1C22094(0LL, v11);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v10, (int32_t)current[1].klass, 0LL) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 != 4;
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
  bool v12; // w19
  int v13; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BD94A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4BD94A6 = 1;
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
    sub_1C22094(QuestInfoByWarId, v6);
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
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1C22094(v10, v11);
    if ( LODWORD(v17.fields._current[2].klass) == 1 )
    {
      v13 = 6;
      goto LABEL_15;
    }
  }
  v13 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 && v13 == 6;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_String_o *name; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x22
  bool IsExistCommand; // w21
  int32_t v21; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4BD94AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&SpotEntity_TypeInfo);
    byte_4BD94AB = 1;
  }
  v6 = sub_1C22084(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0LL);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C73D14(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C73D14(v16);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C22094(Instance, v8);
  v21 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v21, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_35202432(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C22094(v4, v5);
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
  MapControl_SpotInfo_o *v10; // x8
  int v11; // w9
  int v12; // w10

  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method);
  if ( !IsSpotSatisfyingDisplayCond )
  {
    v10 = *spotInfo;
    if ( *spotInfo )
    {
      v11 = 0;
      v10->fields.dispType = 0;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C22094(IsSpotSatisfyingDisplayCond, v8);
  }
  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v9);
  v10 = *spotInfo;
  if ( !*spotInfo )
    goto LABEL_10;
  v11 = 1;
  if ( IsSpotSatisfyingDisplayCond )
    v12 = 1;
  else
    v12 = 2;
  v10->fields.dispType = v12;
LABEL_9:
  v10->fields.touchType = v11;
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35205376(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_35205376(
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
    sub_1C22094(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35205376(
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
  __int64 v4; // x8
  int64_t *m_Items; // x9
  int64_t v6; // x10

  if ( !times )
    sub_1C22094(this, nowTime);
  if ( (int)*(_QWORD *)&times->max_length >= 1 )
  {
    v4 = (unsigned int)*(_QWORD *)&times->max_length;
    m_Items = times->m_Items;
    do
    {
      v6 = *m_Items;
      if ( *m_Items > nowTime && this->fields.forceUpdateTime > v6 )
        this->fields.forceUpdateTime = v6;
      --v4;
      ++m_Items;
    }
    while ( v4 );
  }
}


void __fastcall QuestTree__UpdateMonitoringValue(QuestTree_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD949B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD949B = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
  if ( (byte_4BD9497 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BD9497 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BD94AC & 1) == 0 )
  {
    sub_1C21E38(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo);
    byte_4BD94AC = 1;
  }
  v5 = sub_1C22084(QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BD94AD & 1) == 0 )
  {
    sub_1C21E38(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo);
    byte_4BD94AD = 1;
  }
  v7 = sub_1C22084(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)endCallback, v16, v17, v18, v19, v20, v21);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4BD949F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1C21E38(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass29_0_TypeInfo);
    byte_4BD949F = 1;
  }
  v5 = sub_1C22084(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v24; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v25; // x22
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4BD968D & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1C21E38(&BlankEarthSpotMaster_TypeInfo);
    byte_4BD968D = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v8->fields.__7__wrap2;
    v8->fields.__1__state = -1;
    v20 = _7__wrap2 + 1;
    v8->fields.__7__wrap2 = v20;
  }
  else
  {
    if ( _1__state )
      return 0;
    mapInfo = v8->fields.mapInfo;
    v8->fields.__1__state = -1;
    if ( !mapInfo )
      goto LABEL_21;
    mapId = mapInfo->fields.mapId;
    if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0LL) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v8->fields.__7__wrap1 = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < (int)max_length )
  {
    if ( v20 >= max_length )
      sub_1C2209C(this, method);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v25 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v24, (MapControl_SpotInfo_o *)this, 0LL);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v25;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C22094(this, method);
  }
  this->klass = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v10; // x20
  struct QuestTree_o *_4__this; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BD968E & 1) == 0 )
  {
    sub_1C21E38(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    byte_4BD968E = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1C22084(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.mapInfo, (int64_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v10->fields.blankEarthSpotMaster,
    (int64_t)_3__blankEarthSpotMaster,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__Init_d__17___ctor(QuestTree__Init_d__17_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__Init_d__17__MoveNext(QuestTree__Init_d__17_o *this, const MethodInfo *method)
{
  QuestTree__Init_d__17_o *v2; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  long double v5; // q0
  TerminalPramsManager_c *v6; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x21
  System_Collections_IEnumerator_o *v12; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4BD968F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__17_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD968F = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( !_1__state )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9723 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9723 = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1C73D14(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1C73D14(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v12 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v12;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C21DDC(p__2__current, (int64_t)v12, v14, v15, v16, v17, v18, v19);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C22094(this, method);
      }
      v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1C73D14(v5);
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1C73D14(v5);
      v23 = **(UnityEngine_Object_o ***)(v22 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
      }
      endCallback = v2->fields.endCallback;
      if ( endCallback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
          endCallback->fields.original_method_info,
          *(_QWORD *)&endCallback->fields.extra_arg);
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall QuestTree__Init_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__Init_d__17__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestTree__Init_d__17__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__Init_d__17__System_IDisposable_Dispose(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD94B8 & 1) == 0 )
  {
    sub_1C21E38(&QuestTree___c_TypeInfo);
    byte_4BD94B8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)QuestTree___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetLatestProgressWarInfo_b__38_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__43_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_1C22094(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__43_1(
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
    sub_1C22094(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_11(
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
    sub_1C22094(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_1C22094(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass23_0___ctor(
        QuestTree___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass23_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass23_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass24_0___ctor(
        QuestTree___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass24_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass24_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass25_0___ctor(
        QuestTree___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass25_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass25_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass29_0___ctor(
        QuestTree___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass29_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass29_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass31_0___ctor(
        QuestTree___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass31_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass31_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass31_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BD94B9 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BD94B9 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1C22094(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass35_0___ctor(
        QuestTree___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass35_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass35_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass35_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass35_0_o *)MapControl_QuestInfo__GetMine(x, 0LL)) == 0LL) )
    sub_1C22094(this, x);
  return this->fields.questId == v3->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass43_0___ctor(
        QuestTree___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass43_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass43_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass44_0___ctor(
        QuestTree___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass44_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass44_1___ctor(
        QuestTree___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass44_2___ctor(
        QuestTree___c__DisplayClass44_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass44_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass44_3___ctor(
        QuestTree___c__DisplayClass44_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass44_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass44_3_o *v4; // x20

  v4 = this;
  if ( (byte_4BD968B & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_3_o *)sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4BD968B = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1C22094(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass44_4___ctor(
        QuestTree___c__DisplayClass44_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass44_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass44_5___ctor(
        QuestTree___c__DisplayClass44_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass44_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass44_6___ctor(
        QuestTree___c__DisplayClass44_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass44_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass44_6_o *v4; // x20

  v4 = this;
  if ( (byte_4BD968C & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_6_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BD968C = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1C22094(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v2; // x26
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  System_Collections_Generic_Dictionary_int__object__o *v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Object_array *Entitys; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v111; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v116; // x9
  WarEntity_o *v117; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v119; // x19
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v132; // x23
  int64_t v133; // x23
  Il2CppObject *v134; // x8
  unsigned int _2__current; // w9
  __int64 v136; // x8
  _QWORD *v137; // x9
  __int64 _2__current_low; // x10
  __int64 v139; // x8
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v146; // x22
  unsigned int v147; // w27
  __int64 v148; // x8
  int32_t v149; // w24
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v158; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v160; // x23
  Il2CppClass **v161; // x0
  Il2CppObject *v162; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v163; // x25
  int v164; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v166; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v167; // x8
  SpotEntity_o **v168; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v169; // t1
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  __int64 v179; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v181; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v182; // x25
  int v183; // w19
  unsigned int v184; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v185; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v186; // x8
  SpotRoadEntity_o **v187; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v188; // t1
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  __int64 v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x8
  Il2CppObject *v199; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v200; // x24
  int v201; // w19
  int v202; // w25
  __int64 v203; // x8
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  __int64 v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  __int64 v213; // x8
  PartyOrganizationUtility_o *p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v216; // x22
  Il2CppObject *v217; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  Il2CppObject *v225; // x22
  struct QuestTree___c__DisplayClass43_0_o **p__8__1; // x21
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  int64_t v233; // x22
  MapControl_WarInfo_o *v234; // x23
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  MapControl_MapInfo_o *v241; // x22
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  MapControl_SpotInfo_o *v248; // x22
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  WarEntity_o *v255; // x22
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  Il2CppObject *v262; // x0
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  bool v269; // zf
  int v270; // w8
  QuestEntity_o *v271; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass43_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v276; // x25
  System_Predicate_object__o *_9__2; // x26
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  Il2CppObject *v284; // x0
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  WarEntity_o *Mine; // x0
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  int v313; // w25
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v320; // x24
  int64_t spotInfo_5__22; // x1
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v329; // w19
  Il2CppObject *Master_object; // x25
  UserQuestEntity_o *v331; // x25
  struct MapControl_SpotInfo_o *v332; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v334; // x9
  struct MapControl_MapInfo_o *v335; // x9
  bool v336; // w8
  int64_t v337; // x2
  int32_t v338; // w3
  System_String_o *v339; // x4
  BattleSetupInfo_o *v340; // x5
  FollowerInfo_o *v341; // x6
  PartyListViewItem_o *v342; // x7
  Il2CppObject *v343; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v344; // x21
  int v345; // w19
  int v346; // w22
  __int64 v347; // x8
  __int64 v348; // x8
  _QWORD *v349; // x9
  __int64 v350; // x10
  __int64 v351; // x8
  int64_t v352; // x2
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v359; // x22
  Il2CppObject *v360; // x23
  struct QuestTree___c_StaticFields *v361; // x0
  int64_t v362; // x2
  int32_t v363; // w3
  System_String_o *v364; // x4
  BattleSetupInfo_o *v365; // x5
  FollowerInfo_o *v366; // x6
  PartyListViewItem_o *v367; // x7
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  int64_t v374; // x2
  int32_t v375; // w3
  System_String_o *v376; // x4
  BattleSetupInfo_o *v377; // x5
  FollowerInfo_o *v378; // x6
  PartyListViewItem_o *v379; // x7
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  int64_t v386; // x2
  int32_t v387; // w3
  System_String_o *v388; // x4
  BattleSetupInfo_o *v389; // x5
  FollowerInfo_o *v390; // x6
  PartyListViewItem_o *v391; // x7
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  int64_t v398; // x2
  int32_t v399; // w3
  System_String_o *v400; // x4
  BattleSetupInfo_o *v401; // x5
  FollowerInfo_o *v402; // x6
  PartyListViewItem_o *v403; // x7
  int64_t v404; // x2
  int32_t v405; // w3
  System_String_o *v406; // x4
  BattleSetupInfo_o *v407; // x5
  FollowerInfo_o *v408; // x6
  PartyListViewItem_o *v409; // x7
  PartyOrganizationUtility_o *v410; // x26
  int v411; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v412; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v413; // [xsp+10h] [xbp-B0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v414; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v415; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v416; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v418; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v422; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4BD9690 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C21E38(&MapControl_MapInfo_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&MapControl_SpotInfo_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__);
    sub_1C21E38(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1C21E38(&QuestTree___c__DisplayClass43_0_TypeInfo);
    sub_1C21E38(&QuestTree___c_TypeInfo);
    sub_1C21E38(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1C21E38(&MapControl_WarInfo_TypeInfo);
    byte_4BD9690 = 1;
  }
  v422 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v418 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v416 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, 0LL);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._dataManager_5__2,
        (int64_t)Instance,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._mapMaster_5__3,
        (int64_t)MasterData_object,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v18;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._spotMaster_5__4,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v25;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._blankEarthSpotMaster_5__5,
        (int64_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v32 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v32;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._questMaster_5__6,
        (int64_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v39;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._questPhaseMaster_5__7,
        (int64_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v46 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v46;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._eventMaster_5__8,
        (int64_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v53;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._eventDetailMaster_5__9,
        (int64_t)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v60;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusMaster_5__10,
        (int64_t)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int64_t)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v74 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v74;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._spotRoadMaster_5__12,
        (int64_t)v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v81;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._mapGimmickMaster_5__13,
        (int64_t)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v88;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._questPickupMaster_5__14,
        (int64_t)v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v95,
        (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v95;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int64_t)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_325B04C *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._warList_5__16,
        (int64_t)Entitys,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_299;
      max_length = warList_5__16->max_length;
      v111 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_125;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v414 = 0LL;
      v2->fields.__1__state = -1;
      goto LABEL_269;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_299;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      goto LABEL_282;
    default:
      return 0;
  }
  while ( v111 < max_length )
  {
    v116 = v2->fields._warList_5__16;
    if ( !v116 )
      goto LABEL_299;
    if ( v111 >= v116->max_length )
      goto LABEL_146;
    v117 = v116->m_Items[v111];
    if ( !v117 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v117->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v119 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v119, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v119, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v119, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v422,
               (int32_t)this,
               (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v422;
          if ( !v422 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v422, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v119, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v132 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v119, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v132->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v133 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1C21EE0(long___TypeInfo, 3LL);
        v134 = entity;
        if ( !entity || !this )
          goto LABEL_299;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_146;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_146;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v134[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_146;
        this->fields.endCallback = (struct System_Action_o *)v134[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v133, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_299;
    v136 = *(_QWORD *)&this->fields.__1__state;
    v137 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v136 )
      goto LABEL_299;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v136 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v119,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    }
    else
    {
      v139 = v136 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v139 + 32) = v119;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v139 + 32), (int64_t)v119, v120, v121, v122, v123, v124, v125);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_299;
    v146 = this;
    v415 = this->fields.__2__current;
    if ( (int)v415 >= 1 )
    {
      if ( !(_DWORD)v415 )
        goto LABEL_146;
      v147 = 0;
      v412 = this;
      v413 = v119;
      while ( 1 )
      {
        v148 = *((_QWORD *)&v146->fields.__4__this + (int)v147);
        if ( !v148 )
          goto LABEL_299;
        v149 = *(_DWORD *)(v148 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__AddChild(v119, v149, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v158 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v160 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
        }
        else
        {
          v161 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v161[4] = (Il2CppClass *)v160;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v161 + 4), (int64_t)v160, v150, v151, v152, v153, v154, v155);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotMaster__getList((SpotMaster_o *)this, v149, 0LL);
        if ( !this )
          goto LABEL_299;
        v162 = this->fields.__2__current;
        v163 = this;
        v164 = (_DWORD)v162 - 1;
        if ( (int)v162 >= 1 )
          break;
LABEL_89:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v160,
                                                                   v416->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v149,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v181 = this->fields.__2__current;
        v182 = this;
        v183 = (_DWORD)v181 - 1;
        if ( (int)v181 >= 1 )
        {
          v184 = 0;
          while ( 1 )
          {
            v185 = &v182->klass + (int)v184;
            v188 = v185[4];
            v187 = (SpotRoadEntity_o **)(v185 + 4);
            v186 = v188;
            if ( !v188 || !v160 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v160,
                                                                       (int32_t)v186->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v184 >= LODWORD(v182->fields.__2__current) )
              goto LABEL_146;
            QuestTree__SetupSpotRoadInfo(_4__this, *v187, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            method = (const MethodInfo *)spotRoadInfo;
            v195 = *(_QWORD *)&this->fields.__1__state;
            v196 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v195 )
              goto LABEL_299;
            v197 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v197 >= *(_DWORD *)(v195 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
            }
            else
            {
              v198 = v195 + 8 * v197;
              LODWORD(this->fields.__2__current) = v197 + 1;
              *(_QWORD *)(v198 + 32) = method;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)(v198 + 32),
                (int64_t)method,
                v189,
                v190,
                v191,
                v192,
                v193,
                v194);
            }
            if ( v183 == v184 )
              break;
            if ( ++v184 >= LODWORD(v182->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v2 = v416;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v149,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v199 = this->fields.__2__current;
        v200 = this;
        v201 = (_DWORD)v199 - 1;
        if ( (int)v199 >= 1 )
        {
          v202 = 0;
          while ( 1 )
          {
            v203 = *((_QWORD *)&v200->fields.__4__this + v202);
            if ( !v203 )
              goto LABEL_299;
            if ( !v160 )
              goto LABEL_299;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v160, *(_DWORD *)(v203 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            method = (const MethodInfo *)mapGimmickInfo;
            v210 = *(_QWORD *)&this->fields.__1__state;
            v211 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v210 )
              goto LABEL_299;
            v212 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v212 >= *(_DWORD *)(v210 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
            }
            else
            {
              v213 = v210 + 8 * v212;
              LODWORD(this->fields.__2__current) = v212 + 1;
              *(_QWORD *)(v213 + 32) = method;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)(v213 + 32),
                (int64_t)method,
                v204,
                v205,
                v206,
                v207,
                v208,
                v209);
            }
            if ( v201 == v202 )
              break;
            if ( (unsigned int)++v202 >= LODWORD(v200->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v119 = v413;
        v146 = v412;
        if ( ++v147 == (_DWORD)v415 )
          goto LABEL_122;
        if ( v147 >= LODWORD(v412->fields.__2__current) )
          goto LABEL_146;
      }
      for ( i = 0; i < LODWORD(v163->fields.__2__current); ++i )
      {
        v166 = &v163->klass + (int)i;
        v169 = v166[4];
        v168 = (SpotEntity_o **)(v166 + 4);
        v167 = v169;
        if ( !v169 || !v160 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   v160,
                                                                   (int32_t)v167->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v163->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v168, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)spotInfo;
        v176 = *(_QWORD *)&this->fields.__1__state;
        v177 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v176 )
          goto LABEL_299;
        v178 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        }
        else
        {
          v179 = v176 + 8 * v178;
          LODWORD(this->fields.__2__current) = v178 + 1;
          *(_QWORD *)(v179 + 32) = method;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v179 + 32), (int64_t)method, v170, v171, v172, v173, v174, v175);
        }
        if ( v164 == i )
          goto LABEL_89;
      }
LABEL_146:
      sub_1C2209C(this, method);
    }
LABEL_122:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v140, v141, v142, v143, v144, v145);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_125:
    max_length = v2->fields._warCount_5__19;
    v111 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v111;
  }
  if ( !_4__this )
    goto LABEL_299;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v216 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v216 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v217 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v216 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v216, v217, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Comparison_MapControl_WarInfo__o *)v216;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)v216,
      v219,
      v220,
      v221,
      v222,
      v223,
      v224);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_56953720(
    allWarInfoList,
    v216,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v225 = (Il2CppObject *)sub_1C22084(QuestTree___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor(v225, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v225;
  p__8__1 = &v2->fields.__8__1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v225, v227, v228, v229, v230, v231, v232);
  v233 = v2->fields._nowTime_5__17;
  v234 = (MapControl_WarInfo_o *)sub_1C22084(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v234, v233, 0LL);
  v2->fields._warInfo_5__20 = v234;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20,
    (int64_t)v234,
    v235,
    v236,
    v237,
    v238,
    v239,
    v240);
  v241 = (MapControl_MapInfo_o *)sub_1C22084(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v241, 0LL);
  v2->fields._mapInfo_5__21 = v241;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21,
    (int64_t)v241,
    v242,
    v243,
    v244,
    v245,
    v246,
    v247);
  v248 = (MapControl_SpotInfo_o *)sub_1C22084(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v248, 0LL);
  v2->fields._spotInfo_5__22 = v248;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22,
    (int64_t)v248,
    v249,
    v250,
    v251,
    v252,
    v253,
    v254);
  v255 = (WarEntity_o *)sub_1C22084(WarEntity_TypeInfo);
  WarEntity___ctor(v255, 0LL);
  v2->fields._warEnt_5__23 = v255;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23,
    (int64_t)v255,
    v256,
    v257,
    v258,
    v259,
    v260,
    v261);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v262 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v262;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24,
    (int64_t)v262,
    v263,
    v264,
    v265,
    v266,
    v267,
    v268);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v269 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
  v270 = v269 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v270;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v414 = 0LL;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v271 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v418 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_299;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v418,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v418;
      if ( !v418 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v418, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__getSpotId_40737824(v271, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v276 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_8__1->fields.__9__2,
          (int64_t)_9__2,
          v278,
          v279,
          v280,
          v281,
          v282,
          v283);
      }
      if ( !v276 )
        goto LABEL_299;
      v284 = System_Collections_Generic_List_object___Find(
               v276,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v416;
      v416->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v284;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v416->fields._spotInfo_5__22,
        (int64_t)v284,
        v285,
        v286,
        v287,
        v288,
        v289,
        v290);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v416->fields._mapInfoNow_5__27 != MapID )
      {
        v416->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v416->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v416->fields._mapInfo_5__21,
          (int64_t)MapInfoByMapID,
          v293,
          v294,
          v295,
          v296,
          v297,
          v298);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v416->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v416->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v416->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v416->fields._warInfo_5__20,
            (int64_t)WarInfoByWarID,
            v300,
            v301,
            v302,
            v303,
            v304,
            v305);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v416->fields._warEnt_5__23 = Mine;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v416->fields._warEnt_5__23,
            (int64_t)Mine,
            v307,
            v308,
            v309,
            v310,
            v311,
            v312);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v418 )
      goto LABEL_191;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v418;
    if ( !v418 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v418, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_179;
    if ( !v418 )
      goto LABEL_299;
    if ( v418->fields.challengeNum >= 1 )
    {
LABEL_179:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v418;
    if ( !v418 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v418, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_191:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v313 = 0;
      goto LABEL_192;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v418 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v418->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_299;
    v313 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_299;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_192:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_299;
    v320 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._eventMaster_5__8,
      (int64_t)method,
      v314,
      v315,
      v316,
      v317,
      v318,
      v319);
    spotInfo_5__22 = (int64_t)v2->fields._spotInfo_5__22;
    v320->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v320->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v322,
      v323,
      v324,
      v325,
      v326,
      v327);
    if ( !_4__this )
      goto LABEL_299;
    v320->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v320,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_299;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_206;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_299;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_206:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v320, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v320->fields.__4__this) = 0;
LABEL_210:
        v329 = 1;
        goto LABEL_211;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v271, (MapControl_QuestInfo_o *)v320, v2->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_210;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v329 = 0;
LABEL_211:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v320, 0LL) )
    {
      if ( ((v313 | v329) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v320, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_299;
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestMaster__getEntityFromId(
                                                                     (UserQuestMaster_o *)Master_object,
                                                                     *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18
                                                                               + 64LL),
                                                                     v320->fields.__1__state,
                                                                     0LL);
          if ( this )
            v331 = (UserQuestEntity_o *)this;
          else
            v331 = (UserQuestEntity_o *)v414;
          if ( !this )
            goto LABEL_229;
          if ( !v331 )
            goto LABEL_299;
          v414 = this;
          if ( !UserQuestEntity__IsResetStatus(v331, 0LL) )
          {
LABEL_229:
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
            v414 = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v331;
          }
        }
        v2 = v416;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v416->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v320->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v320, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v320,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v332 = v2->fields._spotInfo_5__22;
          if ( !v332 )
            goto LABEL_299;
          v332->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v320,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v334 = v2->fields._spotInfo_5__22;
        if ( !v334 )
          goto LABEL_299;
        v334->fields._IsNext_k__BackingField = 1;
        v335 = v2->fields._mapInfo_5__21;
        if ( !v335 )
          goto LABEL_299;
        v335->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v271, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v418 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v418, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v418 )
          goto LABEL_299;
        v336 = v418->fields.challengeNum == 0;
      }
      else
      {
        v336 = 0;
      }
    }
    else
    {
      v336 = 1;
    }
    LOBYTE(v320->fields.__8__1) = v336;
    HIDWORD(v320->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v320->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v343 = this->fields.__2__current;
    v344 = this;
    v345 = (_DWORD)v343 - 1;
    if ( (int)v343 >= 1 )
    {
      v346 = 0;
      while ( 1 )
      {
        v347 = *((_QWORD *)&v344->fields.__4__this + v346);
        if ( !v347 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v320,
                                                                   *(_DWORD *)(v347 + 16),
                                                                   *(_DWORD *)(v347 + 20),
                                                                   0LL);
        if ( v345 == v346 )
          goto LABEL_262;
        if ( (unsigned int)++v346 >= LODWORD(v344->fields.__2__current) )
          goto LABEL_146;
      }
LABEL_299:
      sub_1C22094(this, method);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v348 = *(_QWORD *)&this->fields.__1__state;
    v349 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v348 )
      goto LABEL_299;
    v350 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v350 >= *(_DWORD *)(v348 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v320,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
    }
    else
    {
      v351 = v348 + 8 * v350;
      LODWORD(this->fields.__2__current) = v350 + 1;
      *(_QWORD *)(v351 + 32) = v320;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v351 + 32), (int64_t)v320, v337, v338, v339, v340, v341, v342);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v410 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v410, 0LL, v352, v353, v354, v355, v356, v357);
      v411 = 2;
      goto LABEL_297;
    }
LABEL_269:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_299;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v359 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v359 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v360 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v359 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v359, v360, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, 0LL);
    v361 = QuestTree___c_TypeInfo->static_fields;
    v361->__9__43_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v359;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v361->__9__43_1, (int64_t)v359, v362, v363, v364, v365, v366, v367);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_56953720(
    allQuestInfoList,
    v359,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, 0LL, v368, v369, v370, v371, v372, v373);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20, 0LL, v374, v375, v376, v377, v378, v379);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21, 0LL, v380, v381, v382, v383, v384, v385);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22, 0LL, v386, v387, v388, v389, v390, v391);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23, 0LL, v392, v393, v394, v395, v396, v397);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24, 0LL, v398, v399, v400, v401, v402, v403);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    v410 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
    sub_1C21DDC(v410, 0LL, v404, v405, v406, v407, v408, v409);
    v411 = 3;
LABEL_297:
    *(_DWORD *)&v410[-1].fields._IsQuestStartMenuMode_k__BackingField = v411;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_299;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0LL);
  if ( !_4__this )
    goto LABEL_299;
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v8; // x8
  QuestTree_o *_4__this; // x19
  Il2CppObject *v10; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct QuestTree___c__DisplayClass44_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v33; // x0
  Il2CppObject *v34; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  DataManager_o *v43; // x0
  Il2CppObject *v44; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  DataManager_o *v53; // x0
  Il2CppObject *v54; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  DataManager_o *v63; // x0
  Il2CppObject *v64; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  DataManager_o *v73; // x0
  __int64 v74; // x1
  Il2CppObject *v75; // x24
  DataManager_o *v76; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  DataManager_o *v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x22
  DataManager_o *v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x21
  DataManager_o *v85; // x0
  Il2CppObject *v86; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x1
  DataManager_o *v95; // x0
  Il2CppObject *v96; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x1
  DataManager_o *v105; // x0
  Il2CppObject *v106; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_Collections_Generic_Dictionary_int__object__o *v114; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  Il2CppObject *v122; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x1
  DataManager_o *v131; // x0
  Il2CppObject *v132; // x0
  __int64 v133; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v135; // x27
  System_Func_object__bool__o *v136; // x26
  Il2CppObject *v137; // x0
  __int64 v138; // x1
  struct QuestTree___c__DisplayClass44_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v143; // x27
  System_Predicate_object__o *v144; // x26
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 Index; // x0
  __int64 v148; // x1
  System_Collections_Generic_List_object__o *v149; // x0
  struct QuestTree___c__DisplayClass44_1_o *v150; // x9
  MapControl_RootInfo_o *v151; // x0
  struct MapControl_WarInfo_o *v152; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  __int64 v160; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v162; // x1
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  MapControl_WarInfo_o *v169; // x0
  __int64 EventId; // x0
  __int64 v171; // x1
  _BOOL8 v172; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v173; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v175; // x0
  MapControl_WarInfo_o *v176; // x0
  __int64 v177; // x0
  __int64 v178; // x1
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  MapControl_WarInfo_o *v182; // x0
  __int64 v183; // x0
  __int64 v184; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v186; // x0
  __int64 v187; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v189; // x1
  struct QuestTree___c__DisplayClass44_1_o *v190; // x8
  Il2CppObject *v191; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v193; // x21
  System_Int64_array *v194; // x0
  __int64 v195; // x1
  Il2CppObject *v196; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v198; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v200; // x1
  _QWORD *v201; // x9
  __int64 size; // x10
  Il2CppClass **v203; // x8
  __int64 v204; // x0
  __int64 v205; // x1
  int32_t v206; // w9
  UserQuestEntity_o *v207; // x23
  struct QuestTree___c__DisplayClass44_1_o *v208; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v210; // x0
  __int64 v211; // x1
  SpotRoadEntity_array *v212; // x20
  int v213; // w25
  il2cpp_array_size_t i; // w26
  __int64 v215; // x21
  __int64 v216; // x0
  __int64 v217; // x1
  SpotRoadEntity_o *v218; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v220; // x24
  __int64 v221; // x0
  __int64 v222; // x1
  unsigned int v223; // w0
  __int64 v224; // x1
  System_Collections_Generic_List_object__o *v225; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  System_Collections_Generic_List_object__o *v234; // x0
  Il2CppObject *v235; // x1
  struct System_Object_array *v236; // x8
  _QWORD *v237; // x9
  __int64 v238; // x10
  Il2CppClass **v239; // x8
  struct QuestTree___c__DisplayClass44_1_o *v240; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v242; // x0
  __int64 v243; // x1
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  MapGimmickEntity_array *v250; // x20
  int v251; // w24
  il2cpp_array_size_t j; // w25
  __int64 v253; // x21
  __int64 v254; // x0
  __int64 v255; // x1
  MapGimmickEntity_o *v256; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v258; // x23
  __int64 v259; // x0
  __int64 v260; // x1
  unsigned int v261; // w0
  __int64 v262; // x1
  System_Collections_Generic_List_object__o *v263; // x0
  MapControl_MapInfo_o *v264; // x0
  __int64 v265; // x1
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  System_Collections_Generic_List_object__o *v272; // x0
  Il2CppObject *v273; // x1
  struct System_Object_array *v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  Il2CppClass **v277; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v278; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v279; // x8
  int v280; // w9
  PartyOrganizationUtility_o *p_mapInfo_5__16; // x8
  __int64 v282; // x0
  __int64 v283; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v284; // x8
  int32_t mapCount_5__13; // w10
  int32_t v286; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v288; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v290; // x0
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v298; // x10
  MapEntity_o *v299; // x9
  struct QuestTree___c__DisplayClass44_1_o *v300; // x22
  struct MapControl_WarInfo_o *v301; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  struct MapControl_WarInfo_o *v310; // x8
  System_Collections_Generic_List_object__o *v311; // x0
  struct QuestTree___c__DisplayClass44_1_o *v312; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int64_t v315; // x2
  int32_t v316; // w3
  System_String_o *v317; // x4
  BattleSetupInfo_o *v318; // x5
  FollowerInfo_o *v319; // x6
  PartyListViewItem_o *v320; // x7
  __int64 v321; // x0
  __int64 v322; // x1
  System_Collections_Generic_List_object__o *v323; // x0
  struct QuestTree___c__DisplayClass44_1_o *v324; // x8
  MapControl_WarInfo_o *v325; // x0
  struct MapControl_MapInfo_o *v326; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v327; // x0
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  __int64 v334; // x1
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  System_Collections_Generic_List_object__o *v341; // x0
  struct System_Object_array *v342; // x8
  Il2CppObject *v343; // x1
  _QWORD *v344; // x9
  __int64 v345; // x10
  Il2CppClass **v346; // x8
  __int64 v347; // x0
  __int64 v348; // x1
  System_Collections_Generic_List_object__o *v349; // x20
  QuestTree___c_c *v350; // x8
  System_Comparison_T__o *_9__44_2; // x21
  Il2CppObject *v352; // x22
  struct QuestTree___c_StaticFields *v353; // x0
  int64_t v354; // x2
  int32_t v355; // w3
  System_String_o *v356; // x4
  BattleSetupInfo_o *v357; // x5
  FollowerInfo_o *v358; // x6
  PartyListViewItem_o *v359; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v360; // x0
  int64_t v361; // x2
  int32_t v362; // w3
  System_String_o *v363; // x4
  BattleSetupInfo_o *v364; // x5
  FollowerInfo_o *v365; // x6
  PartyListViewItem_o *v366; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v367; // x0
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v374; // x0
  int64_t v375; // x2
  int32_t v376; // w3
  System_String_o *v377; // x4
  BattleSetupInfo_o *v378; // x5
  FollowerInfo_o *v379; // x6
  PartyListViewItem_o *v380; // x7
  Il2CppObject *v381; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v382; // x0
  int64_t v383; // x2
  int32_t v384; // w3
  System_String_o *v385; // x4
  BattleSetupInfo_o *v386; // x5
  FollowerInfo_o *v387; // x6
  PartyListViewItem_o *v388; // x7
  int64_t v389; // x21
  MapControl_WarInfo_o *v390; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v391; // x0
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  MapControl_MapInfo_o *v398; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v399; // x0
  int64_t v400; // x2
  int32_t v401; // w3
  System_String_o *v402; // x4
  BattleSetupInfo_o *v403; // x5
  FollowerInfo_o *v404; // x6
  PartyListViewItem_o *v405; // x7
  MapControl_SpotInfo_o *v406; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v407; // x0
  int64_t v408; // x2
  int32_t v409; // w3
  System_String_o *v410; // x4
  BattleSetupInfo_o *v411; // x5
  FollowerInfo_o *v412; // x6
  PartyListViewItem_o *v413; // x7
  WarEntity_o *v414; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v415; // x0
  int64_t v416; // x2
  int32_t v417; // w3
  System_String_o *v418; // x4
  BattleSetupInfo_o *v419; // x5
  FollowerInfo_o *v420; // x6
  PartyListViewItem_o *v421; // x7
  __int64 v422; // x1
  DataManager_o *v423; // x0
  Il2CppObject *v424; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v425; // x0
  int64_t v426; // x2
  int32_t v427; // w3
  System_String_o *v428; // x4
  BattleSetupInfo_o *v429; // x5
  FollowerInfo_o *v430; // x6
  PartyListViewItem_o *v431; // x7
  Il2CppObject *Master_object; // x0
  __int64 v433; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v434; // x8
  struct QuestTree___c__DisplayClass44_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v437; // x1
  int32_t v438; // w9
  struct QuestTree___c__DisplayClass44_6_o *v439; // x20
  System_Collections_Generic_List_int__o *v440; // x21
  __int64 v441; // x0
  __int64 v442; // x1
  int64_t v443; // x2
  int32_t v444; // w3
  System_String_o *v445; // x4
  BattleSetupInfo_o *v446; // x5
  FollowerInfo_o *v447; // x6
  PartyListViewItem_o *v448; // x7
  __int64 v449; // x1
  System_Collections_Generic_List_object__o *v450; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v451; // x9
  __int128 v452; // q0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v454; // x2
  int32_t v455; // w3
  System_String_o *v456; // x4
  BattleSetupInfo_o *v457; // x5
  FollowerInfo_o *v458; // x6
  PartyListViewItem_o *v459; // x7
  const MethodInfo *v460; // x1
  bool v461; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v462; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v465; // x1
  int64_t v466; // x2
  int32_t v467; // w3
  System_String_o *v468; // x4
  BattleSetupInfo_o *v469; // x5
  FollowerInfo_o *v470; // x6
  PartyListViewItem_o *v471; // x7
  struct QuestTree___c__DisplayClass44_0_o *v472; // x9
  struct QuestTree___c__DisplayClass44_6_o *v473; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v476; // x9
  _QWORD *v477; // x10
  __int64 v478; // x11
  unsigned __int64 v479; // t2
  __int64 v480; // x0
  __int64 v481; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v482; // x8
  struct QuestMaster_o *questMaster_5__5; // x20
  __int64 v484; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v485; // x20
  Il2CppObject *v486; // x22
  System_Func_object__bool__o *v487; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v488; // x0
  System_Object_array *v489; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v490; // x0
  int64_t v491; // x2
  int32_t v492; // w3
  System_String_o *v493; // x4
  BattleSetupInfo_o *v494; // x5
  FollowerInfo_o *v495; // x6
  PartyListViewItem_o *v496; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v497; // x8
  __int64 mapIdx_5__12; // x0
  UserQuestEntity_o *v499; // x27
  int32_t v500; // w9
  struct QuestTree___c__DisplayClass44_1_o *v501; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v503; // x0
  __int64 v504; // x1
  SpotEntity_array *v505; // x20
  int v506; // w25
  il2cpp_array_size_t k; // w26
  __int64 v508; // x21
  __int64 v509; // x0
  __int64 v510; // x1
  SpotEntity_o *v511; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v513; // x24
  __int64 v514; // x0
  __int64 v515; // x1
  unsigned int v516; // w0
  __int64 v517; // x1
  System_Collections_Generic_List_object__o *v518; // x0
  MapControl_MapInfo_o *v519; // x0
  __int64 v520; // x1
  int64_t v521; // x2
  int32_t v522; // w3
  System_String_o *v523; // x4
  BattleSetupInfo_o *v524; // x5
  FollowerInfo_o *v525; // x6
  PartyListViewItem_o *v526; // x7
  System_Collections_Generic_List_object__o *v527; // x0
  Il2CppObject *v528; // x1
  struct System_Object_array *v529; // x8
  _QWORD *v530; // x9
  __int64 v531; // x10
  Il2CppClass **v532; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v533; // x0
  System_Object_array *v534; // x0
  __int64 v535; // x1
  int64_t v536; // x2
  int32_t v537; // w3
  System_String_o *v538; // x4
  BattleSetupInfo_o *v539; // x5
  FollowerInfo_o *v540; // x6
  PartyListViewItem_o *v541; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v542; // x20
  __int64 v543; // x21
  QuestTree___c_c *v544; // x8
  System_Func_object__int__o *_9__44_6; // x22
  Il2CppObject *v546; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v548; // x2
  int32_t v549; // w3
  System_String_o *v550; // x4
  BattleSetupInfo_o *v551; // x5
  FollowerInfo_o *v552; // x6
  PartyListViewItem_o *v553; // x7
  System_Collections_Generic_IEnumerable_T__o *v554; // x23
  System_Collections_Generic_HashSet_int__o *v555; // x22
  __int64 v556; // x0
  __int64 v557; // x1
  int64_t v558; // x2
  int32_t v559; // w3
  System_String_o *v560; // x4
  BattleSetupInfo_o *v561; // x5
  FollowerInfo_o *v562; // x6
  PartyListViewItem_o *v563; // x7
  System_Collections_Generic_List_T__o *v564; // x22
  System_Func_object__bool__o *v565; // x23
  __int64 v566; // x1
  System_Collections_Generic_List_object__o *v567; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v568; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v571; // x20
  struct QuestTree___c__DisplayClass44_6_o *v572; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v574; // x0
  struct QuestTree___c__DisplayClass44_6_o *v575; // x8
  __int64 v576; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_40737824; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v580; // x22
  struct QuestTree___c__DisplayClass44_6_o *v581; // x25
  System_Collections_Generic_List_object__o *v582; // x23
  System_Predicate_object__o *_9__12; // x24
  int64_t v584; // x2
  int32_t v585; // w3
  System_String_o *v586; // x4
  BattleSetupInfo_o *v587; // x5
  FollowerInfo_o *v588; // x6
  PartyListViewItem_o *v589; // x7
  Il2CppObject *v590; // x0
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  __int64 v597; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v600; // x0
  int64_t v601; // x2
  int32_t v602; // w3
  System_String_o *v603; // x4
  BattleSetupInfo_o *v604; // x5
  FollowerInfo_o *v605; // x6
  PartyListViewItem_o *v606; // x7
  __int64 v607; // x1
  MapControl_MapInfo_o *v608; // x0
  __int64 v609; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v611; // x0
  int64_t v612; // x2
  int32_t v613; // w3
  System_String_o *v614; // x4
  BattleSetupInfo_o *v615; // x5
  FollowerInfo_o *v616; // x6
  PartyListViewItem_o *v617; // x7
  __int64 v618; // x1
  MapControl_WarInfo_o *v619; // x0
  struct WarEntity_o *v620; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v621; // x0
  int64_t v622; // x2
  int32_t v623; // w3
  System_String_o *v624; // x4
  BattleSetupInfo_o *v625; // x5
  FollowerInfo_o *v626; // x6
  PartyListViewItem_o *v627; // x7
  struct QuestTree___c__DisplayClass44_6_o *v628; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int64_t v631; // x2
  int32_t v632; // w3
  System_String_o *v633; // x4
  BattleSetupInfo_o *v634; // x5
  FollowerInfo_o *v635; // x6
  PartyListViewItem_o *v636; // x7
  unsigned int v637; // w0
  __int64 v638; // x1
  System_Collections_Generic_List_object__o *v639; // x0
  MapControl_WarInfo_o *v640; // x0
  __int64 v641; // x1
  _BOOL8 HasStatus; // x0
  __int64 v643; // x1
  MapControl_WarInfo_o *v644; // x0
  WarEntity_o *v645; // x0
  __int64 v646; // x1
  int v647; // w23
  bool v648; // cc
  __int64 v649; // x1
  struct QuestTree___c__DisplayClass44_6_o *v650; // x9
  MapControl_WarInfo_o *v651; // x0
  struct QuestTree___c__DisplayClass44_6_o *v652; // x8
  MapControl_SpotInfo_o *v653; // x0
  MapControl_QuestInfo_o *v654; // x0
  int64_t v655; // x2
  int32_t v656; // w3
  System_String_o *v657; // x4
  BattleSetupInfo_o *v658; // x5
  FollowerInfo_o *v659; // x6
  PartyListViewItem_o *v660; // x7
  struct MapControl_WarInfo_o *v661; // x1
  int64_t v662; // x22
  int32_t v663; // w8
  struct MapControl_SpotInfo_o *v664; // x1
  int64_t v665; // x2
  int32_t v666; // w3
  System_String_o *v667; // x4
  BattleSetupInfo_o *v668; // x5
  FollowerInfo_o *v669; // x6
  PartyListViewItem_o *v670; // x7
  __int64 v671; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v674; // x1
  struct WarEntity_o *v675; // x8
  struct QuestTree___c__DisplayClass44_6_o *v676; // x9
  struct WarEntity_o *v677; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v678; // x0
  _BOOL8 v679; // x0
  __int64 v680; // x1
  struct QuestTree___c__DisplayClass44_6_o *v681; // x8
  __int64 v682; // x1
  MapControl_WarInfo_o *v683; // x0
  int v684; // w24
  __int64 v685; // x1
  __int64 v686; // x1
  __int64 v687; // x1
  Il2CppObject *v688; // x23
  NetworkManager_c *v689; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v691; // x24
  MapControl_SpotInfo_o *v692; // x0
  MapControl_SpotInfo_o *v693; // x0
  QuestEntity_o *v694; // x0
  __int64 v695; // x1
  _BOOL8 HasFlag; // x0
  __int64 v697; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v698; // x8
  struct MapControl_SpotInfo_o *v699; // x9
  struct MapControl_MapInfo_o *v700; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v702; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v703; // x8
  struct MapControl_SpotInfo_o *v704; // x9
  struct MapControl_MapInfo_o *v705; // x8
  MapControl_SpotInfo_o *v706; // x0
  UserQuestEntity_o *v707; // x0
  bool v708; // w8
  struct QuestTree___c__DisplayClass44_6_o *v709; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v712; // x1
  struct QuestTree___c__DisplayClass44_6_o *v713; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v715; // x0
  __int64 v716; // x1
  int64_t v717; // x2
  int32_t v718; // w3
  System_String_o *v719; // x4
  BattleSetupInfo_o *v720; // x5
  FollowerInfo_o *v721; // x6
  PartyListViewItem_o *v722; // x7
  _QWORD *v723; // x20
  __int64 v724; // x8
  int v725; // w21
  int v726; // w24
  __int64 v727; // x8
  System_Collections_Generic_List_object__o *v728; // x0
  struct System_Object_array *v729; // x8
  _QWORD *v730; // x9
  __int64 v731; // x10
  Il2CppClass **v732; // x8
  int64_t v733; // x2
  int32_t v734; // w3
  System_String_o *v735; // x4
  BattleSetupInfo_o *v736; // x5
  FollowerInfo_o *v737; // x6
  PartyListViewItem_o *v738; // x7
  System_Collections_Generic_List_object__o *v739; // x20
  QuestTree___c_c *v740; // x8
  System_Comparison_T__o *_9__44_11; // x21
  Il2CppObject *v742; // x22
  struct QuestTree___c_StaticFields *v743; // x0
  int64_t v744; // x2
  int32_t v745; // w3
  System_String_o *v746; // x4
  BattleSetupInfo_o *v747; // x5
  FollowerInfo_o *v748; // x6
  PartyListViewItem_o *v749; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v750; // x0
  int64_t v751; // x2
  int32_t v752; // w3
  System_String_o *v753; // x4
  BattleSetupInfo_o *v754; // x5
  FollowerInfo_o *v755; // x6
  PartyListViewItem_o *v756; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v757; // x0
  int64_t v758; // x2
  int32_t v759; // w3
  System_String_o *v760; // x4
  BattleSetupInfo_o *v761; // x5
  FollowerInfo_o *v762; // x6
  PartyListViewItem_o *v763; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v764; // x0
  int64_t v765; // x2
  int32_t v766; // w3
  System_String_o *v767; // x4
  BattleSetupInfo_o *v768; // x5
  FollowerInfo_o *v769; // x6
  PartyListViewItem_o *v770; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v771; // x0
  int64_t v772; // x2
  int32_t v773; // w3
  System_String_o *v774; // x4
  BattleSetupInfo_o *v775; // x5
  FollowerInfo_o *v776; // x6
  PartyListViewItem_o *v777; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v778; // x0
  int64_t v779; // x2
  int32_t v780; // w3
  System_String_o *v781; // x4
  BattleSetupInfo_o *v782; // x5
  FollowerInfo_o *v783; // x6
  PartyListViewItem_o *v784; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v785; // x0
  int64_t v786; // x2
  int32_t v787; // w3
  System_String_o *v788; // x4
  BattleSetupInfo_o *v789; // x5
  FollowerInfo_o *v790; // x6
  PartyListViewItem_o *v791; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v792; // x0
  int64_t v793; // x2
  int32_t v794; // w3
  System_String_o *v795; // x4
  BattleSetupInfo_o *v796; // x5
  FollowerInfo_o *v797; // x6
  PartyListViewItem_o *v798; // x7
  Il2CppObject *v799; // x0
  __int64 v800; // x1
  int64_t v801; // x2
  int32_t v802; // w3
  System_String_o *v803; // x4
  BattleSetupInfo_o *v804; // x5
  FollowerInfo_o *v805; // x6
  PartyListViewItem_o *v806; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v807; // x0
  System_Collections_Generic_List_Enumerator_T__o v808[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v809; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o **v810; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v812; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v816; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v818; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v818 = this;
  if ( (byte_4BD9691 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1C21E38(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C21E38(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor___77556136);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&MapControl_MapInfo_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&MapControl_SpotInfo_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__);
    sub_1C21E38(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__);
    sub_1C21E38(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_0_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_1_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_2_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_3_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_4_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_5_TypeInfo);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1C21E38(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1C21E38(&QuestTree___c__DisplayClass44_6_TypeInfo);
    sub_1C21E38(&QuestTree___c_TypeInfo);
    sub_1C21E38(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)sub_1C21E38(&MapControl_WarInfo_TypeInfo);
    v8 = v818;
    byte_4BD9691 = 1;
  }
  v816 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v812 = 0LL;
  mapGimmickInfo = 0LL;
  v809 = 0LL;
  v810 = &v818;
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C22084(QuestTree___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v11 = v818;
      v818->fields.__8__2 = (struct QuestTree___c__DisplayClass44_0_o *)v10;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.__8__2, (int64_t)v10, v12, v13, v14, v15, v16, v17);
      _8__2 = v818->fields.__8__2;
      if ( !_8__2 )
        sub_1C22094(v18, v19);
      _8__2->fields.targetWarId = v818->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v22 = v818;
      v818->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v22->fields._dataManager_5__2,
        (int64_t)Instance,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      dataManager_5__2 = v818->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C22094(0LL, v29);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapMaster___);
      v33 = v818->fields._dataManager_5__2;
      if ( !v33 )
        sub_1C22094(0LL, v31);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
      v35 = v818;
      v818->fields._spotMaster_5__3 = (struct SpotMaster_o *)v34;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v35->fields._spotMaster_5__3,
        (int64_t)v34,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v43 = v818->fields._dataManager_5__2;
      if ( !v43 )
        sub_1C22094(0LL, v42);
      v44 = DataManager__GetMasterData_object_(
              v43,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v45 = v818;
      v818->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v44;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v45->fields._blankEarthSpotMaster_5__4,
        (int64_t)v44,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v53 = v818->fields._dataManager_5__2;
      if ( !v53 )
        sub_1C22094(0LL, v52);
      v54 = DataManager__GetMasterData_object_(
              v53,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
      v55 = v818;
      v818->fields._questMaster_5__5 = (struct QuestMaster_o *)v54;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v55->fields._questMaster_5__5,
        (int64_t)v54,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v63 = v818->fields._dataManager_5__2;
      if ( !v63 )
        sub_1C22094(0LL, v62);
      v64 = DataManager__GetMasterData_object_(
              v63,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v65 = v818;
      v818->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v64;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v65->fields._questPhaseMaster_5__6,
        (int64_t)v64,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v73 = v818->fields._dataManager_5__2;
      if ( !v73 )
        sub_1C22094(0LL, v72);
      v75 = DataManager__GetMasterData_object_(
              v73,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      v76 = v818->fields._dataManager_5__2;
      if ( !v76 )
        sub_1C22094(0LL, v74);
      v78 = DataManager__GetMasterData_object_(
              v76,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v79 = v818->fields._dataManager_5__2;
      if ( !v79 )
        sub_1C22094(0LL, v77);
      v81 = DataManager__GetMasterData_object_(
              v79,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v82 = v818->fields._dataManager_5__2;
      if ( !v82 )
        sub_1C22094(0LL, v80);
      v84 = DataManager__GetMasterData_object_(
              v82,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v85 = v818->fields._dataManager_5__2;
      if ( !v85 )
        sub_1C22094(0LL, v83);
      v86 = DataManager__GetMasterData_object_(
              v85,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v87 = v818;
      v818->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v86;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v87->fields._spotRoadMaster_5__7,
        (int64_t)v86,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      v95 = v818->fields._dataManager_5__2;
      if ( !v95 )
        sub_1C22094(0LL, v94);
      v96 = DataManager__GetMasterData_object_(
              v95,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v97 = v818;
      v818->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v96;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v97->fields._mapGimmickMaster_5__8,
        (int64_t)v96,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
      v105 = v818->fields._dataManager_5__2;
      if ( !v105 )
        sub_1C22094(0LL, v104);
      v106 = DataManager__GetMasterData_object_(
               v105,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v107 = v818;
      v818->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v106;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v107->fields._questPickupMaster_5__9,
        (int64_t)v106,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      v114 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v114,
        (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v115 = v818;
      v818->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v114;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v115->fields._eventStatusQuestMismatchDictionary_5__10,
        (int64_t)v114,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v818->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v122 = (Il2CppObject *)sub_1C22084(QuestTree___c__DisplayClass44_1_TypeInfo);
      System_Object___ctor(v122, 0LL);
      v123 = v818;
      v818->fields.__8__1 = (struct QuestTree___c__DisplayClass44_1_o *)v122;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v123->fields.__8__1, (int64_t)v122, v124, v125, v126, v127, v128, v129);
      v131 = v818->fields._dataManager_5__2;
      if ( !v131 )
        sub_1C22094(0LL, v130);
      v132 = DataManager__GetMasterData_object_(
               v131,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v132 )
        sub_1C22094(0LL, v133);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v132,
                                                                       (const MethodInfo_325B04C *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v135 = (Il2CppObject *)v818->fields.__8__2;
      v136 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v136,
        v135,
        Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v137 = System_Linq_Enumerable__SingleOrDefault_object__50230776(
               Entitys,
               (System_Func_TSource__bool__o *)v136,
               (const MethodInfo_2FE75F8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v137 )
        sub_1C22094(0LL, v138);
      _8__1 = v818->fields.__8__1;
      if ( !_8__1 )
        sub_1C22094(v137, v138);
      klass_low = LODWORD(v137[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1C22094(v137, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C22094(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v143 = (Il2CppObject *)v818->fields.__8__1;
      v144 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v144,
        v143,
        Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1C22094(v145, v146);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v144,
                (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v148 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v149 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v149 )
          sub_1C22094(0LL, v148);
        System_Collections_Generic_List_object___RemoveAt(
          v149,
          v148,
          (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v150 = v818->fields.__8__1;
      if ( !v150 )
        sub_1C22094(Index, v148);
      v151 = _4__this->fields.mapControlRootInfo;
      if ( !v151 )
        sub_1C22094(0LL, v148);
      v152 = MapControl_RootInfo__AddChild(v151, v150->fields.warId, v818->fields._nowTime_5__11, 0LL);
      v153 = v818;
      v818->fields._warInfo_5__14 = v152;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v153->fields._warInfo_5__14,
        (int64_t)v152,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      warInfo_5__14 = v818->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C22094(0LL, v160);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v169 = v818->fields._warInfo_5__14;
        if ( !v169 )
          sub_1C22094(0LL, v162);
        EventId = MapControl_WarInfo__GetEventId(v169, 0LL);
        if ( !v75 )
          sub_1C22094(EventId, v171);
        v172 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v75,
                 &entity,
                 EventId,
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v172 )
        {
          if ( !entity )
            sub_1C22094(v172, v162);
          v173 = v818;
          nowTime_5__11 = v818->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v175 = v818->fields._warInfo_5__14;
            if ( !v175 )
              sub_1C22094(0LL, v162);
            MapControl_WarInfo__SetStatusCheckFlag(v175, 1, 0, 0LL);
            v173 = v818;
          }
          v176 = v173->fields._warInfo_5__14;
          if ( !v176 )
            sub_1C22094(0LL, v162);
          v177 = MapControl_WarInfo__GetEventId(v176, 0LL);
          if ( !v78 )
            sub_1C22094(v177, v178);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v78,
                 &v816,
                 v177,
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v816 )
              sub_1C22094(0LL, v179);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v816, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1C22094(0LL, v180);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v818->fields._nowTime_5__11, 0LL) )
              {
                v182 = v818->fields._warInfo_5__14;
                if ( !v182 )
                  sub_1C22094(0LL, v181);
                v183 = MapControl_WarInfo__GetEventId(v182, 0LL);
                if ( !v81 )
                  sub_1C22094(v183, (unsigned int)v183);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v81, v183, 0LL);
                if ( NowEntity )
                {
                  v186 = v818->fields._warInfo_5__14;
                  if ( !v186 )
                    sub_1C22094(0LL, v184);
                  v187 = MapControl_WarInfo__GetEventId(v186, 0LL);
                  if ( !v84 )
                    sub_1C22094(v187, (unsigned int)v187);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v84,
                                        v187,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v190 = v818->fields.__8__1;
                  if ( !v190 )
                    sub_1C22094(MismatchQuestList, v189);
                  v191 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v818->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C22094(0LL, v189);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v190->fields.warId,
                    v191,
                    (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v193 = v818->fields._nowTime_5__11;
          v194 = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, 3LL);
          v196 = entity;
          if ( !entity )
            sub_1C22094(v194, v195);
          if ( !v194 )
            sub_1C22094(0LL, v195);
          max_length = v194->max_length;
          if ( !max_length )
            sub_1C2209C(v194, v195);
          v194->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1C2209C(v194, v195);
          v194->m_Items[1] = (int64_t)v196[5].monitor;
          if ( max_length <= 2 )
            sub_1C2209C(v194, v195);
          v194->m_Items[2] = (int64_t)v196[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v193, v194, 0LL);
        }
      }
      v198 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v198 )
        sub_1C22094(0LL, v162);
      items = v198->fields._items;
      v200 = (Il2CppObject *)v818->fields._warInfo_5__14;
      v201 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v198->fields._version;
      if ( !items )
        sub_1C22094(v198, v200);
      size = v198->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v198,
          v200,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
      }
      else
      {
        v203 = &items->obj.klass + size;
        v198->fields._size = size + 1;
        v203[4] = (Il2CppClass *)v200;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v203 + 4), (int64_t)v200, v163, v164, v165, v166, v167, v168);
      }
      v288 = v818->fields._warInfo_5__14;
      if ( !v288 )
        sub_1C22094(v204, v205);
      if ( !MasterData_object )
        sub_1C22094(v204, v205);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v288->fields.warId, 0LL);
      v290 = v818;
      v818->fields._mapList_5__15 = List;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v290->fields._mapList_5__15,
        (int64_t)List,
        v291,
        v292,
        v293,
        v294,
        v295,
        v296);
      v284 = v818;
      mapList_5__15 = v818->fields._mapList_5__15;
      v818->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C22094(v282, v283);
      mapCount_5__13 = mapList_5__15->max_length;
      v286 = 0;
      v284->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_116;
    case 1:
      v208 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v208 )
        sub_1C22094(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C22094(0LL, method);
      v210 = SpotRoadMaster__getList(spotRoadMaster_5__7, v208->fields.mapId, 0LL);
      v212 = v210;
      if ( !v210 )
        sub_1C22094(0LL, v211);
      v213 = v210->max_length;
      if ( v213 >= 1 )
      {
        for ( i = 0; i != v213; ++i )
        {
          v215 = sub_1C22084(QuestTree___c__DisplayClass44_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v215, 0LL);
          if ( i >= v212->max_length )
            sub_1C2209C(v216, v217);
          v218 = v212->m_Items[i];
          if ( !v218 )
            sub_1C22094(v216, v217);
          if ( !v215 )
            sub_1C22094(v216, v217);
          *(_DWORD *)(v215 + 16) = v218->fields.id;
          if ( !_4__this )
            sub_1C22094(v216, v217);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v220 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v220,
            (Il2CppObject *)v215,
            Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1C22094(v221, v222);
          v223 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v220,
                   (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v224 = v223;
          if ( v223 != -1 )
          {
            v225 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v225 )
              sub_1C22094(0LL, v224);
            System_Collections_Generic_List_object___RemoveAt(
              v225,
              v224,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v818->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C22094(0LL, v224);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v215 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v218, &spotRoadInfo, 0LL);
          v234 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v234 )
            sub_1C22094(0LL, v227);
          v235 = (Il2CppObject *)spotRoadInfo;
          v236 = v234->fields._items;
          v237 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v234->fields._version;
          if ( !v236 )
            sub_1C22094(v234, v235);
          v238 = v234->fields._size;
          if ( (unsigned int)v238 >= v236->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v234,
              v235,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
          }
          else
          {
            v239 = &v236->obj.klass + v238;
            v234->fields._size = v238 + 1;
            v239[4] = (Il2CppClass *)v235;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v239 + 4), (int64_t)v235, v228, v229, v230, v231, v232, v233);
          }
        }
      }
      v240 = v818->fields.__8__1;
      if ( !v240 )
        sub_1C22094(v210, v211);
      mapGimmickMaster_5__8 = v818->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C22094(0LL, v211);
      v242 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v240->fields.mapId, 0LL);
      v250 = v242;
      if ( !v242 )
        sub_1C22094(0LL, v243);
      v251 = v242->max_length;
      if ( v251 >= 1 )
      {
        for ( j = 0; j != v251; ++j )
        {
          v253 = sub_1C22084(QuestTree___c__DisplayClass44_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v253, 0LL);
          if ( j >= v250->max_length )
            sub_1C2209C(v254, v255);
          v256 = v250->m_Items[j];
          if ( !v256 )
            sub_1C22094(v254, v255);
          if ( !v253 )
            sub_1C22094(v254, v255);
          *(_DWORD *)(v253 + 16) = v256->fields.id;
          if ( !_4__this )
            sub_1C22094(v254, v255);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v258 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v258,
            (Il2CppObject *)v253,
            Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1C22094(v259, v260);
          v261 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v258,
                   (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v262 = v261;
          if ( v261 != -1 )
          {
            v263 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v263 )
              sub_1C22094(0LL, v262);
            System_Collections_Generic_List_object___RemoveAt(
              v263,
              v262,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v264 = v818->fields._mapInfo_5__16;
          if ( !v264 )
            sub_1C22094(0LL, v262);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v264, *(_DWORD *)(v253 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v272 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v272 )
            sub_1C22094(0LL, v265);
          v273 = (Il2CppObject *)mapGimmickInfo;
          v274 = v272->fields._items;
          v275 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v272->fields._version;
          if ( !v274 )
            sub_1C22094(v272, v273);
          v276 = v272->fields._size;
          if ( (unsigned int)v276 >= v274->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v272,
              v273,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
          }
          else
          {
            v277 = &v274->obj.klass + v276;
            v272->fields._size = v276 + 1;
            v277[4] = (Il2CppClass *)v273;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v277 + 4), (int64_t)v273, v266, v267, v268, v269, v270, v271);
          }
        }
      }
      v278 = v818;
      v818->fields.__2__current = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v278->fields.__2__current, 0LL, v244, v245, v246, v247, v248, v249);
      v279 = v818;
      v280 = 2;
      goto LABEL_328;
    case 2:
      v8->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (PartyOrganizationUtility_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1C21DDC(p_mapInfo_5__16, 0LL, v2, v3, v4, v5, v6, v7);
      v284 = v818;
      mapCount_5__13 = v818->fields._mapCount_5__13;
      v286 = v818->fields._mapIdx_5__12 + 1;
      v818->fields._mapIdx_5__12 = v286;
LABEL_116:
      if ( v286 < mapCount_5__13 )
      {
        v298 = v284->fields._mapList_5__15;
        if ( !v298 )
          sub_1C22094(v282, v283);
        if ( v286 >= v298->max_length )
          sub_1C2209C(v282, v283);
        v299 = v298->m_Items[v286];
        if ( !v299 )
          sub_1C22094(v282, v283);
        v300 = v284->fields.__8__1;
        if ( !v300 )
          sub_1C22094(v282, v283);
        v300->fields.mapId = v299->fields.id;
        v301 = v284->fields._warInfo_5__14;
        if ( !v301 )
          sub_1C22094(v282, v283);
        mapInfoList = (System_Collections_Generic_List_object__o *)v301->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v300->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v300,
              Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v300->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v300->fields.__9__3,
              (int64_t)_9__3,
              v304,
              v305,
              v306,
              v307,
              v308,
              v309);
          }
          v282 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v283 = (unsigned int)v282;
          if ( (_DWORD)v282 != -1 )
          {
            v310 = v818->fields._warInfo_5__14;
            if ( !v310 )
              sub_1C22094(v282, (unsigned int)v282);
            v311 = (System_Collections_Generic_List_object__o *)v310->fields.mapInfoList;
            if ( !v311 )
              sub_1C22094(0LL, v283);
            System_Collections_Generic_List_object___RemoveAt(
              v311,
              v283,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C22094(v282, v283);
        v312 = v818->fields.__8__1;
        if ( !v312 )
          sub_1C22094(v282, v283);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v312->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v312,
            Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v312->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v312->fields.__9__4,
            (int64_t)_9__4,
            v315,
            v316,
            v317,
            v318,
            v319,
            v320);
        }
        if ( !allMapInfoList )
          sub_1C22094(v282, v283);
        v321 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v322 = (unsigned int)v321;
        if ( (_DWORD)v321 != -1 )
        {
          v323 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v323 )
            sub_1C22094(0LL, v322);
          System_Collections_Generic_List_object___RemoveAt(
            v323,
            v322,
            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v324 = v818->fields.__8__1;
        if ( !v324 )
          sub_1C22094(v321, v322);
        v325 = v818->fields._warInfo_5__14;
        if ( !v325 )
          sub_1C22094(0LL, v322);
        v326 = MapControl_WarInfo__AddChild(v325, v324->fields.mapId, 0LL);
        v327 = v818;
        v818->fields._mapInfo_5__16 = v326;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v327->fields._mapInfo_5__16,
          (int64_t)v326,
          v328,
          v329,
          v330,
          v331,
          v332,
          v333);
        v341 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v341 )
          sub_1C22094(0LL, v334);
        v342 = v341->fields._items;
        v343 = (Il2CppObject *)v818->fields._mapInfo_5__16;
        v344 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v341->fields._version;
        if ( !v342 )
          sub_1C22094(v341, v343);
        v345 = v341->fields._size;
        if ( (unsigned int)v345 >= v342->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v341,
            v343,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v344[4] + 192LL) + 112LL));
        }
        else
        {
          v346 = &v342->obj.klass + v345;
          v341->fields._size = v345 + 1;
          v346[4] = (Il2CppClass *)v343;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v346 + 4), (int64_t)v343, v335, v336, v337, v338, v339, v340);
        }
        v501 = v818->fields.__8__1;
        if ( !v501 )
          sub_1C22094(v347, v348);
        spotMaster_5__3 = v818->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C22094(0LL, v348);
        v503 = SpotMaster__getList(spotMaster_5__3, v501->fields.mapId, 0LL);
        v505 = v503;
        if ( !v503 )
          sub_1C22094(0LL, v504);
        v506 = v503->max_length;
        if ( v506 >= 1 )
        {
          for ( k = 0; k != v506; ++k )
          {
            v508 = sub_1C22084(QuestTree___c__DisplayClass44_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v508, 0LL);
            if ( k >= v505->max_length )
              sub_1C2209C(v509, v510);
            v511 = v505->m_Items[k];
            if ( !v511 )
              sub_1C22094(v509, v510);
            if ( !v508 )
              sub_1C22094(v509, v510);
            *(_DWORD *)(v508 + 16) = v511->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v513 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v513,
              (Il2CppObject *)v508,
              Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1C22094(v514, v515);
            v516 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v513,
                     (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v517 = v516;
            if ( v516 != -1 )
            {
              v518 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v518 )
                sub_1C22094(0LL, v517);
              System_Collections_Generic_List_object___RemoveAt(
                v518,
                v517,
                (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v519 = v818->fields._mapInfo_5__16;
            if ( !v519 )
              sub_1C22094(0LL, v517);
            spotInfo = MapControl_MapInfo__AddChild(v519, *(_DWORD *)(v508 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v511, &spotInfo, 0LL);
            v527 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v527 )
              sub_1C22094(0LL, v520);
            v528 = (Il2CppObject *)spotInfo;
            v529 = v527->fields._items;
            v530 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v527->fields._version;
            if ( !v529 )
              sub_1C22094(v527, v528);
            v531 = v527->fields._size;
            if ( (unsigned int)v531 >= v529->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v527,
                v528,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v530[4] + 192LL) + 112LL));
            }
            else
            {
              v532 = &v529->obj.klass + v531;
              v527->fields._size = v531 + 1;
              v532[4] = (Il2CppClass *)v528;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v532 + 4), (int64_t)v528, v521, v522, v523, v524, v525, v526);
            }
          }
        }
        v533 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v818->fields._mapInfo_5__16,
                 v818->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v534 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v533,
                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v542 = (System_Collections_Generic_IEnumerable_TSource__o *)v534;
        if ( !v534 )
          sub_1C22094(0LL, v535);
        if ( *(_QWORD *)&v534->max_length )
        {
          v543 = sub_1C22084(QuestTree___c__DisplayClass44_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v543, 0LL);
          v544 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v544 = QuestTree___c_TypeInfo;
          }
          _9__44_6 = (System_Func_object__int__o *)v544->static_fields->__9__44_6;
          if ( !_9__44_6 )
          {
            if ( !v544->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v544);
              v544 = QuestTree___c_TypeInfo;
            }
            v546 = (Il2CppObject *)v544->static_fields->__9;
            _9__44_6 = (System_Func_object__int__o *)sub_1C22084(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__44_6,
              v546,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__44_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__44_6;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__44_6,
              (int64_t)_9__44_6,
              v548,
              v549,
              v550,
              v551,
              v552,
              v553);
          }
          v554 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v542,
                                                                  (System_Func_TSource__TResult__o *)_9__44_6,
                                                                  (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v555 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_55584880(
            v555,
            v554,
            (const MethodInfo_3502870 *)Method_System_Collections_Generic_HashSet_int___ctor___77556136);
          if ( !v543 )
            sub_1C22094(v556, v557);
          *(_QWORD *)(v543 + 16) = v555;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v543 + 16), (int64_t)v555, v558, v559, v560, v561, v562, v563);
          v564 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v565 = (System_Func_object__bool__o *)sub_1C22084(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v565,
            (Il2CppObject *)v543,
            Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v564,
            (System_Func_T__bool__o *)v565,
            (const MethodInfo_2F9F4B0 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v567 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v567 )
            sub_1C22094(0LL, v566);
          System_Collections_Generic_List_object___AddRange(
            v567,
            (System_Collections_Generic_IEnumerable_T__o *)v542,
            (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v568 = v818;
        v818->fields.__2__current = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v568->fields.__2__current, 0LL, v536, v537, v538, v539, v540, v541);
        result = 1;
        v818->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C22094(v282, v283);
      v349 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v350 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v350 = QuestTree___c_TypeInfo;
      }
      _9__44_2 = (System_Comparison_T__o *)v350->static_fields->__9__44_2;
      if ( !_9__44_2 )
      {
        if ( !v350->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v350);
          v350 = QuestTree___c_TypeInfo;
        }
        v352 = (Il2CppObject *)v350->static_fields->__9;
        _9__44_2 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__44_2,
          v352,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__,
          0LL);
        v353 = QuestTree___c_TypeInfo->static_fields;
        v353->__9__44_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__44_2;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v353->__9__44_2,
          (int64_t)_9__44_2,
          v354,
          v355,
          v356,
          v357,
          v358,
          v359);
      }
      if ( !v349 )
        sub_1C22094(v282, v283);
      System_Collections_Generic_List_object___Sort_56953720(
        v349,
        _9__44_2,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v360 = v818;
      v818->fields.__8__1 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v360->fields.__8__1, 0LL, v361, v362, v363, v364, v365, v366);
      v367 = v818;
      v818->fields._warInfo_5__14 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v367->fields._warInfo_5__14, 0LL, v368, v369, v370, v371, v372, v373);
      v374 = v818;
      v818->fields._mapList_5__15 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v374->fields._mapList_5__15, 0LL, v375, v376, v377, v378, v379, v380);
      v381 = (Il2CppObject *)sub_1C22084(QuestTree___c__DisplayClass44_6_TypeInfo);
      System_Object___ctor(v381, 0LL);
      v382 = v818;
      v818->fields.__8__3 = (struct QuestTree___c__DisplayClass44_6_o *)v381;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v382->fields.__8__3, (int64_t)v381, v383, v384, v385, v386, v387, v388);
      v389 = v818->fields._nowTime_5__11;
      v390 = (MapControl_WarInfo_o *)sub_1C22084(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v390, v389, 0LL);
      v391 = v818;
      v818->fields._warInfo_5__14 = v390;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v391->fields._warInfo_5__14,
        (int64_t)v390,
        v392,
        v393,
        v394,
        v395,
        v396,
        v397);
      v398 = (MapControl_MapInfo_o *)sub_1C22084(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v398, 0LL);
      v399 = v818;
      v818->fields._mapInfo_5__16 = v398;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v399->fields._mapInfo_5__16,
        (int64_t)v398,
        v400,
        v401,
        v402,
        v403,
        v404,
        v405);
      v406 = (MapControl_SpotInfo_o *)sub_1C22084(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v406, 0LL);
      v407 = v818;
      v818->fields._spotInfo_5__17 = v406;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v407->fields._spotInfo_5__17,
        (int64_t)v406,
        v408,
        v409,
        v410,
        v411,
        v412,
        v413);
      v414 = (WarEntity_o *)sub_1C22084(WarEntity_TypeInfo);
      WarEntity___ctor(v414, 0LL);
      v415 = v818;
      v818->fields._warEnt_5__18 = v414;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v415->fields._warEnt_5__18,
        (int64_t)v414,
        v416,
        v417,
        v418,
        v419,
        v420,
        v421);
      v423 = v818->fields._dataManager_5__2;
      if ( !v423 )
        sub_1C22094(0LL, v422);
      v424 = DataManager__GetMasterData_object_(
               v423,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v425 = v818;
      v818->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v424;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v425->fields._userQuestMaster_5__19,
        (int64_t)v424,
        v426,
        v427,
        v428,
        v429,
        v430,
        v431);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v434 = v818;
      _8__3 = v818->fields.__8__3;
      if ( !_8__3 )
        sub_1C22094(Master_object, v433);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v434->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v818 )
        sub_1C22094(isSavedMemoryMode, v437);
      if ( isSavedMemoryMode )
        v438 = 500;
      else
        v438 = 5000;
      v439 = v818->fields.__8__3;
      v818->fields._breakInterval_5__22 = v438;
      v440 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v440,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v439 )
        sub_1C22094(v441, v442);
      v439->fields.spotInfoList = v440;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v439->fields, (int64_t)v440, v443, v444, v445, v446, v447, v448);
      v818->fields._cnt_5__23 = 0;
      v450 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v450 )
        sub_1C22094(0LL, v449);
      System_Collections_Generic_List_object___GetEnumerator(
        v808,
        v450,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v451 = v818;
      v452 = *(_OWORD *)&v808[0].fields._list;
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v818->fields.__7__wrap24;
      v808[1] = v808[0];
      v818->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v808[0].fields._current;
      *(_OWORD *)&v451->fields.__7__wrap24.fields._list = v452;
      sub_1C21DDC(p__7__wrap24, 0LL, v454, v455, v456, v457, v458, v459);
      v8 = v818;
LABEL_164:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v461 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v462 = v818;
        if ( !v461 )
          break;
        current = v818->fields.__7__wrap24.fields._current;
        ++v818->fields._cnt_5__23;
        if ( !current )
          sub_1C22094(v462, v460);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1C22094(0LL, v465);
        v8 = v818;
        v472 = v818->fields.__8__2;
        if ( !v472 )
          sub_1C22094(Mine, v465);
        if ( Mine->fields.warId == v472->fields.targetWarId )
        {
          v473 = v818->fields.__8__3;
          if ( !v473 )
            sub_1C22094(Mine, v465);
          spotInfoList = v473->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C22094(0LL, v465);
          spotId = (unsigned int)current->fields.spotId;
          v476 = spotInfoList->fields._items;
          v477 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v476 )
            sub_1C22094(spotInfoList, spotId);
          v478 = spotInfoList->fields._size;
          if ( (unsigned int)v478 >= v476->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v477[4] + 192LL) + 112LL));
            v8 = v818;
          }
          else
          {
            spotInfoList->fields._size = v478 + 1;
            v476->m_Items[v478 + 1] = spotId;
          }
        }
        HIDWORD(v479) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v479) = HIDWORD(v479);
        if ( (unsigned int)(v479 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v466, v467, v468, v469, v470, v471);
          v279 = v818;
          v280 = 3;
LABEL_328:
          v279->fields.__1__state = v280;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(v818, v460);
      v482 = v818;
      questMaster_5__5 = v818->fields._questMaster_5__5;
      v818->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v482->fields.__7__wrap24.fields._index = 0LL;
      v482->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1C22094(v480, v481);
      v484 = sub_1C21F6C(*((_QWORD *)&questMaster_5__5->klass->vtable._1_Finalize.methodPtr
                         + 2
                         * *((unsigned __int16 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___
                           + 40)));
      v485 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(struct QuestMaster_o *))(v484 + 8))(questMaster_5__5);
      v486 = (Il2CppObject *)v818->fields.__8__3;
      v487 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v487,
        v486,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v488 = System_Linq_Enumerable__Where_object_(
               v485,
               (System_Func_TSource__bool__o *)v487,
               (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v489 = System_Linq_Enumerable__ToArray_object_(
               v488,
               (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v490 = v818;
      v818->fields._questList_5__24 = (struct QuestEntity_array *)v489;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v490->fields._questList_5__24,
        (int64_t)v489,
        v491,
        v492,
        v493,
        v494,
        v495,
        v496);
      v497 = v818;
      v818->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v497->fields._questList_5__24,
                       (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v818;
      v499 = 0LL;
      v500 = v818->fields._mapCount_5__13;
      v818->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_164;
    case 4:
      v206 = v8->fields._mapCount_5__13;
      v207 = 0LL;
      v8->fields.__1__state = -1;
      goto LABEL_475;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1C22094(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v500 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1C22094(mapIdx_5__12, method);
    if ( v500 >= questList_5__24->max_length )
      sub_1C2209C(mapIdx_5__12, method);
    v571 = questList_5__24->m_Items[v500];
    if ( !v571 )
      sub_1C22094(mapIdx_5__12, method);
    v572 = v8->fields.__8__3;
    if ( !v572 )
      sub_1C22094(mapIdx_5__12, method);
    v572->fields.questId = v571->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v574 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v574 = NetworkManager_TypeInfo;
    }
    v575 = v818->fields.__8__3;
    if ( !v575 )
      sub_1C22094(v574, method);
    if ( !userQuestMaster_5__19 )
      sub_1C22094(v574, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v812,
           v574->static_fields->userIdNumber,
           v575->fields.questId,
           0LL) )
    {
      if ( !v812 )
        sub_1C22094(0LL, v576);
      QuestPhase = UserQuestEntity__getQuestPhase(v812, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_40737824 = (MapEntity_o *)QuestEntity__getSpotId_40737824(v571, QuestPhase + 1, 0LL);
    v580 = v818;
    v581 = v818->fields.__8__3;
    if ( !v581 )
      sub_1C22094(SpotId_40737824, warId);
    if ( v581->fields.nowSpotId == (_DWORD)SpotId_40737824 )
    {
      if ( !_4__this )
        sub_1C22094(SpotId_40737824, warId);
    }
    else
    {
      v581->fields.nowSpotId = (int)SpotId_40737824;
      if ( !_4__this )
        sub_1C22094(SpotId_40737824, warId);
      v582 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v581->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v581,
          Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v581->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v581->fields.__9__12,
          (int64_t)_9__12,
          v584,
          v585,
          v586,
          v587,
          v588,
          v589);
      }
      if ( !v582 )
        sub_1C22094(SpotId_40737824, warId);
      v590 = System_Collections_Generic_List_object___Find(
               v582,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v580->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v590;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v580->fields._spotInfo_5__17,
        (int64_t)v590,
        v591,
        v592,
        v593,
        v594,
        v595,
        v596);
      spotInfo_5__17 = v818->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C22094(0LL, v597);
      SpotId_40737824 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_40737824;
      if ( v818->fields._nowMapId_5__20 != (_DWORD)SpotId_40737824 )
      {
        v818->fields._nowMapId_5__20 = (int)SpotId_40737824;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_40737824, 0LL);
        v600 = v818;
        v818->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v600->fields._mapInfo_5__16,
          (int64_t)MapInfoByMapID,
          v601,
          v602,
          v603,
          v604,
          v605,
          v606);
        v608 = v818->fields._mapInfo_5__16;
        if ( !v608 )
          sub_1C22094(0LL, v607);
        SpotId_40737824 = MapControl_MapInfo__GetMine(v608, 0LL);
        if ( !SpotId_40737824 )
          sub_1C22094(0LL, v609);
        warId = (unsigned int)SpotId_40737824->fields.warId;
        if ( v818->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v818->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v611 = v818;
          v818->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v611->fields._warInfo_5__14,
            (int64_t)WarInfoByWarID,
            v612,
            v613,
            v614,
            v615,
            v616,
            v617);
          v619 = v818->fields._warInfo_5__14;
          if ( !v619 )
            sub_1C22094(0LL, v618);
          v620 = MapControl_WarInfo__GetMine(v619, 0LL);
          v621 = v818;
          v818->fields._warEnt_5__18 = v620;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v621->fields._warEnt_5__18,
            (int64_t)v620,
            v622,
            v623,
            v624,
            v625,
            v626,
            v627);
        }
      }
    }
    v628 = v818->fields.__8__3;
    if ( !v628 )
      sub_1C22094(SpotId_40737824, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v628->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v628,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v628->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v628->fields.__9__13,
        (int64_t)_9__13,
        v631,
        v632,
        v633,
        v634,
        v635,
        v636);
    }
    if ( !allQuestInfoList )
      sub_1C22094(SpotId_40737824, warId);
    v637 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v638 = v637;
    if ( v637 != -1 )
    {
      v639 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v639 )
        sub_1C22094(0LL, v638);
      System_Collections_Generic_List_object___RemoveAt(
        v639,
        v638,
        (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v640 = v818->fields._warInfo_5__14;
    if ( !v812 )
    {
      if ( !v640 )
        sub_1C22094(0LL, v638);
      goto LABEL_377;
    }
    if ( !v640 )
      sub_1C22094(0LL, v638);
    MapControl_WarInfo__SetStatusCheckFlag(v640, 1, 0, 0LL);
    if ( !v812 )
      sub_1C22094(0LL, v641);
    HasStatus = UserQuestEntity__HasStatus(v812, 8, 0LL);
    if ( !HasStatus )
    {
      v644 = v818->fields._warInfo_5__14;
      if ( !v644 )
        sub_1C22094(0LL, v643);
      goto LABEL_379;
    }
    if ( !v812 )
      sub_1C22094(HasStatus, v643);
    if ( v812->fields.challengeNum >= 1 )
    {
      v644 = v818->fields._warInfo_5__14;
      if ( !v644 )
        sub_1C22094(0LL, v643);
LABEL_379:
      MapControl_WarInfo__SetStatusCheckFlag(v644, 4, 0, 0LL);
    }
    if ( !v812 )
      sub_1C22094(0LL, v643);
    v648 = UserQuestEntity__getClearNum(v812, 0LL) < 1;
    v640 = v818->fields._warInfo_5__14;
    if ( v648 )
    {
      if ( !v640 )
        sub_1C22094(0LL, v649);
LABEL_377:
      MapControl_WarInfo__SetStatusCheckFlag(v640, 2, 0, 0LL);
      v647 = 0;
      goto LABEL_391;
    }
    if ( !v640 )
      sub_1C22094(0LL, v649);
    v645 = MapControl_WarInfo__GetMine(v640, 0LL);
    if ( !v645 )
      sub_1C22094(0LL, v646);
    v650 = v818->fields.__8__3;
    if ( !v650 )
      sub_1C22094(v645, v646);
    if ( v645->fields.lastQuestId == v650->fields.questId )
    {
      v651 = v818->fields._warInfo_5__14;
      if ( !v651 )
        sub_1C22094(0LL, v646);
      v647 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v651, 8, 1, 0LL);
    }
    else
    {
      v647 = 1;
    }
LABEL_391:
    v652 = v818->fields.__8__3;
    if ( !v652 )
      sub_1C22094(v645, v646);
    v653 = v818->fields._spotInfo_5__17;
    if ( !v653 )
      sub_1C22094(0LL, v646);
    v654 = MapControl_SpotInfo__AddChild(v653, v652->fields.questId, 0LL);
    v661 = v818->fields._warInfo_5__14;
    if ( !v661 )
      sub_1C22094(v654, 0LL);
    v662 = (int64_t)v654;
    if ( !v654 )
      sub_1C22094(0LL, v661);
    v663 = v661->fields.warId;
    v654->fields._WarInfo_k__BackingField = v661;
    v654->fields.warId = v663;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v654->fields._WarInfo_k__BackingField,
      (int64_t)v661,
      v655,
      v656,
      v657,
      v658,
      v659,
      v660);
    v664 = v818->fields._spotInfo_5__17;
    *(_QWORD *)(v662 + 96) = v664;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v662 + 96), (int64_t)v664, v665, v666, v667, v668, v669, v670);
    *(_QWORD *)(v662 + 144) = QuestTree__GetEndTime(_4__this, (MapControl_QuestInfo_o *)v662, 0LL);
    warEnt_5__18 = v818->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C22094(0LL, v671);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v675 = v818->fields._warEnt_5__18;
      if ( !v675 )
        sub_1C22094(IsStartTypeQuest, v674);
      v676 = v818->fields.__8__3;
      if ( !v676 )
        sub_1C22094(IsStartTypeQuest, v674);
      if ( v675->fields.targetId == v676->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v818->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_410;
      }
    }
    v677 = v818->fields._warEnt_5__18;
    if ( !v677 )
      sub_1C22094(IsStartTypeQuest, v674);
    v678 = v818->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v678 )
      sub_1C22094(0LL, v674);
    v679 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v678,
             v677->fields.id,
             &value,
             (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v679 )
    {
      v681 = v818->fields.__8__3;
      if ( !v681 )
        sub_1C22094(v679, v680);
      if ( !value )
        sub_1C22094(0LL, v680);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v681->fields.questId,
             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_410:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v662, 0, 0, 0, 0LL, 0, 0LL);
        *(_DWORD *)(v662 + 36) = 0;
LABEL_411:
        v684 = 1;
        goto LABEL_412;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v571, (MapControl_QuestInfo_o *)v662, v818->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_411;
    v683 = v818->fields._warInfo_5__14;
    if ( !v683 )
      sub_1C22094(0LL, v682);
    MapControl_WarInfo__SetStatusCheckFlag(v683, 1, 0, 0LL);
    v684 = 0;
LABEL_412:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v662, 0LL) )
    {
      if ( ((v647 | v684) & 1) != 0 )
      {
        v207 = v499;
      }
      else
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v662, 0LL) == 8 )
        {
          v207 = v499;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v688 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          v689 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v689 = NetworkManager_TypeInfo;
          }
          if ( !v688 )
            sub_1C22094(v689, v687);
          EntityFromId = UserQuestMaster__getEntityFromId(
                           (UserQuestMaster_o *)v688,
                           v689->static_fields->userIdNumber,
                           *(_DWORD *)(v662 + 16),
                           0LL);
          v207 = EntityFromId;
          if ( EntityFromId )
            v691 = EntityFromId;
          else
            v691 = v499;
          if ( !EntityFromId )
            goto LABEL_433;
          if ( !v691 )
            sub_1C22094(EntityFromId, v686);
          if ( !UserQuestEntity__IsResetStatus(v691, 0LL) )
          {
LABEL_433:
            v692 = v818->fields._spotInfo_5__17;
            if ( !v692 )
              sub_1C22094(0LL, v686);
            MapControl_SpotInfo__AddQuestCount(v692, 1, 0LL);
            v207 = v691;
          }
        }
        v693 = v818->fields._spotInfo_5__17;
        if ( !v693 )
          sub_1C22094(0LL, v686);
        MapControl_SpotInfo__AddAvailableQuestId(v693, *(_DWORD *)(v662 + 16), 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v662, 0LL) == 1 )
      {
        v694 = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)v662, 0LL);
        if ( !v694 )
          sub_1C22094(0LL, v695);
        HasFlag = QuestEntity__HasFlag(v694, 0x400000000000LL, 0LL);
        v698 = v818;
        if ( !HasFlag )
        {
          v699 = v818->fields._spotInfo_5__17;
          if ( !v699 )
            sub_1C22094(HasFlag, v697);
          v699->fields._IsNext_k__BackingField = 1;
        }
        v700 = v698->fields._mapInfo_5__16;
        if ( !v700 )
          sub_1C22094(HasFlag, v697);
        v700->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon((MapControl_QuestInfo_o *)v662, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v703 = v818;
        v704 = v818->fields._spotInfo_5__17;
        if ( !v704 )
          sub_1C22094(IsDisplayQuestNextIcon, v702);
        v704->fields._IsNext_k__BackingField = 1;
        v705 = v703->fields._mapInfo_5__16;
        if ( !v705 )
          sub_1C22094(IsDisplayQuestNextIcon, v702);
        v705->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v571, 0x8000000000LL, 0LL) )
      {
        v706 = v818->fields._spotInfo_5__17;
        if ( !v706 )
          sub_1C22094(0LL, v685);
        MapControl_SpotInfo__AddFreeQuestCount(v706, 1, 0LL);
      }
    }
    else
    {
      v207 = v499;
    }
    v707 = v812;
    if ( v812 )
    {
      v707 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v812, 8, 0LL);
      if ( ((unsigned __int8)v707 & 1) != 0 )
      {
        if ( !v812 )
          sub_1C22094(v707, v685);
        v708 = v812->fields.challengeNum == 0;
      }
      else
      {
        v708 = 0;
      }
    }
    else
    {
      v708 = 1;
    }
    *(_BYTE *)(v662 + 40) = v708;
    *(_DWORD *)(v662 + 44) = QuestPhase;
    v709 = v818->fields.__8__3;
    if ( !v709 )
      sub_1C22094(v707, v685);
    questPickupMaster_5__9 = v818->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C22094(0LL, v685);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v709->fields.questId, 0LL);
    *(_DWORD *)(v662 + 48) = Priority;
    v713 = v818->fields.__8__3;
    if ( !v713 )
      sub_1C22094(Priority, v712);
    questPhaseMaster_5__6 = v818->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C22094(0LL, v712);
    v715 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v713->fields.questId, 0LL);
    v723 = v715;
    if ( !v715 )
      sub_1C22094(0LL, v716);
    v724 = v715[3];
    v725 = v724 - 1;
    if ( (int)v724 >= 1 )
    {
      v726 = 0;
      while ( 1 )
      {
        v727 = v723[v726 + 4];
        if ( !v727 )
          sub_1C22094(v715, v716);
        v715 = MapControl_QuestInfo__AddChild(
                 (MapControl_QuestInfo_o *)v662,
                 *(_DWORD *)(v727 + 16),
                 *(_DWORD *)(v727 + 20),
                 0LL);
        if ( v725 == v726 )
          break;
        if ( (unsigned int)++v726 >= *((_DWORD *)v723 + 6) )
          sub_1C2209C(v715, v716);
      }
    }
    v728 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v728 )
      sub_1C22094(0LL, v716);
    v729 = v728->fields._items;
    v730 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v728->fields._version;
    if ( !v729 )
      sub_1C22094(v728, v716);
    v731 = v728->fields._size;
    if ( (unsigned int)v731 >= v729->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v728,
        (Il2CppObject *)v662,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v730[4] + 192LL) + 112LL));
    }
    else
    {
      v732 = &v729->obj.klass + v731;
      v728->fields._size = v731 + 1;
      v732[4] = (Il2CppClass *)v662;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v732 + 4), v662, v717, v718, v719, v720, v721, v722);
    }
    v8 = v818;
    v206 = v818->fields._mapCount_5__13;
    if ( v206 && !(v206 % v818->fields._breakInterval_5__22) )
    {
      v818->fields.__2__current = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v733, v734, v735, v736, v737, v738);
      v279 = v818;
      v280 = 4;
      goto LABEL_328;
    }
LABEL_475:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    v500 = v206 + 1;
    v499 = v207;
    v8->fields._mapCount_5__13 = v500;
  }
  if ( !_4__this )
    sub_1C22094(mapIdx_5__12, method);
  v739 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v740 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v740 = QuestTree___c_TypeInfo;
  }
  _9__44_11 = (System_Comparison_T__o *)v740->static_fields->__9__44_11;
  if ( !_9__44_11 )
  {
    if ( !v740->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v740);
      v740 = QuestTree___c_TypeInfo;
    }
    v742 = (Il2CppObject *)v740->static_fields->__9;
    _9__44_11 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__44_11,
      v742,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__,
      0LL);
    v743 = QuestTree___c_TypeInfo->static_fields;
    v743->__9__44_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__44_11;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v743->__9__44_11, (int64_t)_9__44_11, v744, v745, v746, v747, v748, v749);
  }
  if ( !v739 )
    sub_1C22094(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_56953720(
    v739,
    _9__44_11,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v750 = v818;
  v818->fields.__8__3 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v750->fields.__8__3, 0LL, v751, v752, v753, v754, v755, v756);
  v757 = v818;
  v818->fields._warInfo_5__14 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v757->fields._warInfo_5__14, 0LL, v758, v759, v760, v761, v762, v763);
  v764 = v818;
  v818->fields._mapInfo_5__16 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v764->fields._mapInfo_5__16, 0LL, v765, v766, v767, v768, v769, v770);
  v771 = v818;
  v818->fields._spotInfo_5__17 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v771->fields._spotInfo_5__17, 0LL, v772, v773, v774, v775, v776, v777);
  v778 = v818;
  v818->fields._warEnt_5__18 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v778->fields._warEnt_5__18, 0LL, v779, v780, v781, v782, v783, v784);
  v785 = v818;
  v818->fields._userQuestMaster_5__19 = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v785->fields._userQuestMaster_5__19,
    0LL,
    v786,
    v787,
    v788,
    v789,
    v790,
    v791);
  v792 = v818;
  v818->fields._questList_5__24 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v792->fields._questList_5__24, 0LL, v793, v794, v795, v796, v797, v798);
  v799 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v799 )
    sub_1C22094(0LL, v800);
  CommonUI__SetLoadMode((CommonUI_o *)v799, 0, 0LL);
  _4__this->fields.isInit = 1;
  v807 = v818;
  if ( v818->fields.endCallback )
  {
    v818->fields.__2__current = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v807->fields.__2__current, 0LL, v801, v802, v803, v804, v805, v806);
    v279 = v818;
    v280 = 5;
    goto LABEL_328;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD9692 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4BD9692 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}