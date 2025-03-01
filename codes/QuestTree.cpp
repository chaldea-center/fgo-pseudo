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
  MapControl_RootInfo_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_object__o *v67; // x20
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  if ( (byte_4BFA6A1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1C2E12C(&MapControl_RootInfo_TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_4BFA6A1 = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1C2E378(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v25;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.allQuestInfoList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v32;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.allSpotInfoList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v39;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.allSpotRoadInfoList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v46;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.allMapGimmickInfoList,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v53;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.allMapInfoList, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v60;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.allWarInfoList, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v67 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v67;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.questReleaseEntList,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38A84A8 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_35266720(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_35263776(
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
  int64_t v12; // x20
  MapGimmickEntity_o *v13; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v15; // x8
  int64_t *v16; // x9
  int64_t v17; // x10

  if ( (byte_4BFA69E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1C2E12C(&long___TypeInfo, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    byte_4BFA69E = 1;
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
    v12 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v13 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C2E1D4(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1C2E390(Time, v11);
    *(_QWORD *)(Time + 40) = v13->fields.endedAt;
    if ( (int)v15 >= 1 )
    {
      v15 = (unsigned int)v15;
      v16 = (int64_t *)(Time + 32);
      do
      {
        v17 = *v16;
        if ( *v16 > v12 && this->fields.forceUpdateTime > v17 )
          this->fields.forceUpdateTime = v17;
        --v15;
        ++v16;
      }
      while ( v15 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1C2E388(Time, v11);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v13, 0LL)
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
  int64_t Instance; // x0
  __int64 v17; // x1
  bool v18; // w24
  int64_t Time; // x23
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  __int64 v23; // x29
  __int64 v24; // x28
  _QWORD *v25; // x25
  __int64 v26; // x8
  int64_t *v27; // x9
  int64_t v28; // x10
  int v29; // w22
  _BOOL4 v30; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v33; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v36; // w23
  int32_t v37; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v42; // w1
  MapControl_QuestInfo_o *v43; // x0
  _BOOL4 v44; // w8
  UserQuestEntity_o *v46; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4BFA69A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestAddMaster___, questEnt);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, v10);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1C2E12C(&long___TypeInfo, v12);
    sub_1C2E12C(&NetworkManager_TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    this = (QuestTree_o *)sub_1C2E12C(&TerminalPramsManager_TypeInfo, v15);
    byte_4BFA69A = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v46 = 0LL;
  Instance = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !Instance )
    goto LABEL_75;
  v18 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)Instance,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !Instance )
    goto LABEL_75;
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, questEnt->fields.id, 0LL);
  p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  if ( !ReplaceDataByQuestId )
    p_openedAt = &questEnt->fields.openedAt;
  if ( !ReplaceDataByQuestId )
    p_closedAt = &questEnt->fields.closedAt;
  v23 = *p_openedAt;
  v24 = *p_closedAt;
  v25 = (_QWORD *)sub_1C2E1D4(long___TypeInfo, 3LL);
  Instance = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v25 )
    goto LABEL_75;
  v26 = v25[3];
  if ( !(_DWORD)v26 || (v25[4] = Instance, (_DWORD)v26 == 1) || (v25[5] = v23, (unsigned int)v26 <= 2) )
    sub_1C2E390(Instance, v17);
  v25[6] = v24;
  if ( (int)v26 >= 1 )
  {
    v26 = (unsigned int)v26;
    v27 = v25 + 4;
    do
    {
      v28 = *v27;
      if ( *v27 > Time && v8->fields.forceUpdateTime > v28 )
        v8->fields.forceUpdateTime = v28;
      --v26;
      ++v27;
    }
    while ( v26 );
  }
  v29 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
  {
    v30 = 0;
    goto LABEL_57;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v29 = 3;
  else
    v29 = 1;
  if ( v18 || HasFlag )
  {
    v30 = !HasFlag;
    goto LABEL_57;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0LL) > Time
    && QuestEntity__getNoticeAt(questEnt, 0LL) <= Time )
  {
    goto LABEL_55;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_75;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_327B1CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, v17);
            byte_4BF81D5 = 1;
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
                  &v46,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_56;
          Instance = (int64_t)v46;
          if ( !v46 )
            goto LABEL_75;
          if ( !UserQuestEntity__HasStatus(v46, 8, 0LL) )
            goto LABEL_56;
LABEL_55:
          v30 = 0;
          v29 = 2;
          goto LABEL_57;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v33);
  if ( !Instance )
    goto LABEL_75;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0LL)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_55;
  }
LABEL_56:
  v30 = 0;
  v29 = 0;
LABEL_57:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (Instance & 1) != 0 )
    v36 = 1;
  else
    v36 = forceOperation;
  if ( v36 )
    v37 = v36 != 2;
  else
    v37 = v29;
  if ( questReleaseNG && v37 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v42 = 2;
      v43 = questInfo;
      goto LABEL_71;
    }
LABEL_75:
    sub_1C2E388(Instance, v17);
  }
  if ( !questInfo )
    goto LABEL_75;
  v43 = questInfo;
  v42 = v37;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_71:
  MapControl_QuestInfo__SetDispType(v43, v42, type, targetId, value, closedMessageId, 0LL);
  if ( v36 )
    v44 = v36 != 2;
  else
    v44 = v30;
  questInfo->fields.touchType = v44;
  return v37;
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

  return QuestTree__CheckSpotCond_35266720(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_35266720(
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
  __int64 v24; // x1
  __int64 v25; // x1
  QuestTree_o *v26; // x0
  TerminalSceneComponent_c *v27; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v29; // x1
  long double inited; // q0
  QuestAfterAction_o *Instance; // x0
  SrcSpotBasePrefab_c *klass; // x8
  SrcSpotBasePrefab_c *v33; // x8
  _DWORD *generic_class; // x8
  int v35; // w8
  bool IsExistCommand; // w21
  __int64 v37; // x0
  __int64 v38; // x0
  UnityEngine_Object_o *v39; // x25
  bool IsMissionAchive; // w0
  QuestEntity_o *v41; // x19
  int32_t WarId; // w0
  const MethodInfo *v43; // x4
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w24
  int32_t v47; // w22
  Il2CppObject *Item; // x23
  const MethodInfo *v49; // x1
  System_Collections_Generic_List_QuestGroupEntity__o *v50; // x0
  System_Collections_Generic_List_object__o *v51; // x20
  int32_t v52; // w24
  int32_t v53; // w22
  Il2CppObject *v54; // x23
  const MethodInfo *v55; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  struct System_Threading_CancellationTokenSource_o *v58; // x8
  QuestAfterAction_o *v59; // x20
  int32_t v60; // w23
  unsigned __int64 v61; // x24
  int32_t v62; // w22
  int v63; // w21
  int v64; // w20
  int64_t v65; // x2
  int32_t v66; // w0
  int32_t v67; // w0
  bool v68; // cc
  int32_t v69; // w8
  bool v70; // cc
  int32_t v71; // w8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v73; // x20
  int32_t v74; // w23
  unsigned __int64 v75; // x24
  int32_t v76; // w22
  struct System_Threading_CancellationTokenSource_o *v77; // x8
  QuestAfterAction_o *v78; // x20
  unsigned __int64 v79; // x24
  int32_t v80; // w22
  int32_t v81; // w8
  int32_t v83; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BFA69D & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1C2E12C(&NetworkManager_TypeInfo, v18);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v19);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v20);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v23);
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v24);
    byte_4BFA69D = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_6:
    LOBYTE(v26) = 1;
    return (unsigned __int8)v26 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v25);
    byte_4BF8363 = 1;
  }
  v27 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v27 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v27->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v29);
    byte_4BF8363 = 1;
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
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v29);
    byte_4BF8363 = 1;
  }
  Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  }
  v33 = Instance->fields.lastDispSpot->klass;
  if ( !v33 )
    goto LABEL_209;
  generic_class = v33[1]._1.generic_class;
  if ( !generic_class )
    goto LABEL_209;
  v35 = generic_class[4];
  if ( v35 )
  {
    IsExistCommand = 0;
  }
  else
  {
LABEL_34:
    v37 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C80008(inited);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C80008(inited);
    v39 = **(UnityEngine_Object_o ***)(v38 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      IsExistCommand = QuestAfterAction__IsExistCommand(Instance, commandType, commandTypeId, 0LL);
      v35 = 0;
    }
    else
    {
      v35 = 0;
      IsExistCommand = 1;
    }
  }
  v26 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v26 & 1;
    case 2:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      if ( targetValue )
        LOBYTE(v26) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v26) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v26 & 1;
    case 3:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
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
      if ( v35 == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v26 & 1;
    case 6:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_6;
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_209;
      v41 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v26) = QuestTree__CheckQuestOpen(this, v41, 0LL, WarId, v43) == 1;
      return (unsigned __int8)v26 & 1;
    case 7:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
        if ( CacheByTypeGroup )
        {
          v45 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
          if ( CacheByTypeGroup->fields._size >= 1 )
          {
            v46 = 0;
            v47 = 0;
            while ( 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v45,
                       v47,
                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Item, v49);
              if ( !Item || !Instance )
                goto LABEL_209;
              ++v47;
              v46 += clsQuestCheck__IsQuestClear(
                       (clsQuestCheck_o *)Instance,
                       (int32_t)Item[1].klass,
                       IsExistCommand,
                       0LL);
              if ( v47 >= v45->fields._size )
                goto LABEL_162;
            }
          }
        }
        v46 = 0;
LABEL_162:
        if ( targetValue <= 1 )
          v69 = 1;
        else
          v69 = targetValue;
        v70 = v46 < v69;
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
      v73 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v74 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v83 = 1;
        else
          v83 = targetValue;
        v70 = v74 < v83;
LABEL_206:
        LOBYTE(v26) = v70;
        return (unsigned __int8)v26 & 1;
      }
      v74 = 0;
      v75 = 0LL;
      while ( v75 < (unsigned int)m_CancellationTokenSource )
      {
        v76 = *((_DWORD *)&v73->fields.invalidMapGimmickIdList + v75);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v76,
                                           IsExistCommand,
                                           0LL);
        LODWORD(m_CancellationTokenSource) = v73->fields.m_CancellationTokenSource;
        ++v75;
        v74 += (unsigned __int8)Instance & 1;
        if ( (__int64)v75 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        v50 = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
        if ( v50 )
        {
          v51 = (System_Collections_Generic_List_object__o *)v50;
          if ( v50->fields._size >= 1 )
          {
            v52 = 0;
            v53 = 0;
            while ( 1 )
            {
              v54 = System_Collections_Generic_List_object___get_Item(
                      v51,
                      v53,
                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v54, v55);
              if ( !v54 || !Instance )
                break;
              ++v53;
              v52 += clsQuestCheck__IsQuestClear(
                       (clsQuestCheck_o *)Instance,
                       (int32_t)v54[1].klass,
                       IsExistCommand,
                       0LL);
              if ( v53 >= v51->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C2E388(Instance, v29);
          }
        }
        v52 = 0;
LABEL_167:
        if ( targetValue <= 1 )
          v71 = 1;
        else
          v71 = targetValue;
        v68 = v52 < v71;
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
        v77 = Instance->fields.m_CancellationTokenSource;
        v78 = Instance;
        if ( (int)v77 >= 1 )
        {
          v60 = 0;
          v79 = 0LL;
          while ( v79 < (unsigned int)v77 )
          {
            v80 = *((_DWORD *)&v78->fields.invalidMapGimmickIdList + v79);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v80,
                                               IsExistCommand,
                                               0LL);
            LODWORD(v77) = v78->fields.m_CancellationTokenSource;
            ++v79;
            v60 += (unsigned __int8)Instance & 1;
            if ( (__int64)v79 >= (int)v77 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1C2E390(Instance, v29);
        }
LABEL_188:
        v60 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v81 = 1;
        else
          v81 = targetValue;
        v68 = v60 < v81;
      }
LABEL_193:
      LOBYTE(v26) = !v68;
      return (unsigned __int8)v26 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v29);
        byte_4BF81D5 = 1;
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
      v68 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v26) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v26 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0LL);
      if ( !Instance )
        goto LABEL_209;
      v58 = Instance->fields.m_CancellationTokenSource;
      v59 = Instance;
      if ( (int)v58 < 1 )
        goto LABEL_188;
      v60 = 0;
      v61 = 0LL;
      while ( v61 < (unsigned int)v58 )
      {
        v62 = *((_DWORD *)&v59->fields.invalidMapGimmickIdList + v61);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClearRaw(
                                           (clsQuestCheck_o *)Instance,
                                           v62,
                                           IsExistCommand,
                                           0LL);
        LODWORD(v58) = v59->fields.m_CancellationTokenSource;
        ++v61;
        v60 += (unsigned __int8)Instance & 1;
        if ( (__int64)v61 >= (int)v58 )
          goto LABEL_189;
      }
      goto LABEL_210;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v26 & 1;
    case 13:
      v63 = targetId / 100;
      v64 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventRaceGoalScriptPlayed(v63, v64, targetValue, 0LL);
      return (unsigned __int8)v26 & 1;
    case 16:
      if ( v35 == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_173:
      LOBYTE(v26) = !IsMissionAchive;
      return (unsigned __int8)v26 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v26 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 83;
      goto LABEL_199;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 84;
      goto LABEL_199;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 85;
      goto LABEL_199;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 86;
      goto LABEL_199;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 87;
      goto LABEL_199;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 88;
      goto LABEL_199;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 89;
      goto LABEL_199;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 90;
      goto LABEL_199;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 91;
      goto LABEL_199;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 23;
      goto LABEL_199;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 76;
      goto LABEL_199;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v26 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      v67 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v67 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v65 = targetValue;
        v66 = 113;
LABEL_199:
        LOBYTE(v26) = CondType__IsOpen(v66, targetId, v65, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v26) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v67, 1, 0LL);
      }
      return (unsigned __int8)v26 & 1;
    default:
LABEL_52:
      LOBYTE(v26) = 0;
      return (unsigned __int8)v26 & 1;
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

  return QuestTree__CheckSpotCond_35266720(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_4BFA698 & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, mapInfo);
    byte_4BFA698 = 1;
  }
  v7 = sub_1C2E378(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1C2E388(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)blankEarthSpotMaster, v22, v23, v24, v25, v26, v27);
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
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
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
  QuestEntity_o *Mine; // x0
  __int64 v30; // x1
  QuestEntity_o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4BFA69B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_4BFA69B = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_40874012((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C2E388(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1C2E388(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C2E388(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1C2E388(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_327B180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v25 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v25, 1, 0LL);
LABEL_27:
              v17 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_1C2E388(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1C2E388(0LL, v32);
        EndTime = QuestEntity__GetEndTime(v31, 1, 0LL);
        goto LABEL_27;
      case 166:
        v27 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v27, v27, (QuestReleaseEntity_o *)current, v28);
        goto LABEL_27;
      default:
LABEL_28:
        if ( v17 >= 1 )
          goto LABEL_29;
        break;
    }
  }
LABEL_29:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v17;
}


int64_t __fastcall QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int64_t v10; // x21
  int64_t Time_39876888; // x0
  int64_t value; // x22
  int64_t v13; // x21
  int64_t NextDayStartTime; // x0
  int64_t v15; // x11
  int64_t v16; // x22
  int64_t v17; // x26
  int v18; // w27
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_4BFA69C & 1) == 0 )
  {
    sub_1C2E12C(&System_DateTime_TypeInfo, questEnt);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    byte_4BFA69C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !questEnt )
    goto LABEL_29;
  v9 = Time;
  v10 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v10;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v10 = 0LL;
  if ( v9 > Time )
    return v10;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1C2E388(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39876888 = NetworkManager__getTime_39876888(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_39876888;
  dateData = NetworkManager__getDateTime_39877668(Time_39876888 - 3600 * value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v22.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v22, 0LL) + 1)) & 1) == 0 )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  v15 = v13 + 86400;
  v10 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v16 = v15 - 3600 * value;
  v17 = v10 + 518400;
  v18 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_39877668(v16, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v23.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v23, 0LL) + 1)) & 1) == 0 )
      break;
    v10 += 86400LL;
    --v18;
    v16 += 86400LL;
    if ( !v18 )
    {
      v10 = v17;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v10 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v10;
}


MapControl_WarInfo_o *__fastcall QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__int__o *_9__38_0; // x21
  Il2CppObject *v16; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BFA691 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1C2E12C(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1C2E12C(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, v9);
    sub_1C2E12C(&QuestTree___c_TypeInfo, v10);
    byte_4BFA691 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0LL);
  v13 = QuestTree___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v13 = QuestTree___c_TypeInfo;
  }
  _9__38_0 = (System_Func_object__int__o *)v13->static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestTree___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__38_0 = (System_Func_object__int__o *)sub_1C2E378(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
      (int64_t)_9__38_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_2FFB9E4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v24,
                                                  (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C2E388(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v25 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C2E388(v25, v26);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v30.fields._current[1].klass), v27) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BFA687 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1C2E12C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__, v6);
    sub_1C2E12C(&QuestTree___c__DisplayClass24_0_TypeInfo, v7);
    byte_4BFA687 = 1;
  }
  v8 = sub_1C2E378(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1C2E388(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1C2E388(QuestInfo, v5);
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
  System_Collections_Generic_List_object__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v35; // w19
  QuestTree_o *v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v39; // x21
  __int64 v40; // x1
  System_Collections_Generic_List_object__o *v41; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  __int64 v47; // x1
  System_Collections_Generic_List_int__o *v48; // x0
  __int64 v49; // x1
  int v50; // w19
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 Item; // x0
  __int64 v54; // x1
  int32_t v55; // w22
  _BOOL8 v56; // x0
  __int64 v57; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  int32_t v62; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BFA68A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_4BFA68A = 1;
  }
  memset(&v66, 0, sizeof(v66));
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)ChildByWarID,
                                                                        ChildByWarID,
                                                                        v25);
  v27 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C2E388(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1C2E388(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1C2E388(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1C2E388(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1C2E388(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_364EA94 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1C2E388(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1C2E388(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1C2E388(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C2E388(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1C2E388(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C2E388(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1C2E388(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v56 )
          {
            ++v50;
          }
          else
          {
            items = v39->fields._items;
            v59 = Method_System_Collections_Generic_List_int__Add__;
            ++v39->fields._version;
            if ( !items )
              sub_1C2E388(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size + 1] = v55;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v64,
        (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
  MapControl_MapInfo_o *v22; // x23
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v33; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  MapControl_SpotInfo_o *v36; // x23
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_int__o *v39; // x0
  __int64 v40; // x1
  int v41; // w25
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 Item; // x0
  __int64 v45; // x1
  int32_t v46; // w24
  _BOOL8 v47; // x0
  __int64 v48; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  int v53; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BFA68D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_4BFA68D = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1C2E388(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1C2E388(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_364EA94 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1C2E388(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1C2E388(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1C2E388(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C2E388(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1C2E388(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C2E388(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1C2E388(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v47 )
              {
                ++v41;
              }
              else
              {
                items = v33->fields._items;
                v50 = Method_System_Collections_Generic_List_int__Add__;
                ++v33->fields._version;
                if ( !items )
                  sub_1C2E388(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_364E888 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v33->fields._size = size + 1;
                  items->m_Items[size + 1] = v46;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v55,
            (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1C2E388(v34, v35);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BFA688 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1C2E12C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__, v6);
    sub_1C2E12C(&QuestTree___c__DisplayClass25_0_TypeInfo, v7);
    byte_4BFA688 = 1;
  }
  v8 = sub_1C2E378(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1C2E388(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BFA69F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_4BFA69F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    allQuestInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C2E388(v14, v15);
    if ( LODWORD(v29.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1C2E388(v14, v15);
      items = v11->fields._items;
      v24 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v26[4] = (Il2CppClass *)current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)current, v16, v17, v18, v19, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v11;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BFA68C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BFA68C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v6);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BFA686 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1C2E12C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__, v6);
    sub_1C2E12C(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_4BFA686 = 1;
  }
  v8 = sub_1C2E378(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1C2E388(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  __int64 v17; // x20
  WarEntity_o *Mine; // x0
  __int64 mapId; // x1
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  System_Collections_Generic_List_int__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x21
  QuestTree___c_c *v32; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v34; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  System_Predicate_object__o *v46; // x21

  if ( (byte_4BFA68B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1C2E12C(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1C2E12C(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C2E12C(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__, v13);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__, v14);
    sub_1C2E12C(&QuestTree___c__DisplayClass31_0_TypeInfo, v15);
    sub_1C2E12C(&QuestTree___c_TypeInfo, v16);
    byte_4BFA68B = 1;
  }
  v17 = sub_1C2E378(QuestTree___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !OpenedButtons )
    goto LABEL_28;
  v31 = *(System_Collections_Generic_List_int__o **)(v17 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v32 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v32 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v32->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = QuestTree___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1C2E378(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v34, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
        (int64_t)_9__31_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_30032B4 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v31 )
    {
      System_Collections_Generic_List_int___AddRange(
        v31,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_364EA94 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C2E388(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v31 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v31->fields._items;
  v44 = Method_System_Collections_Generic_List_int__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v31->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v31,
      mapId,
      *(const MethodInfo_364E888 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v31->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v46 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v46,
    (Il2CppObject *)v17,
    Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v46,
                                                                    (const MethodInfo_366BFBC *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v12; // x20
  Il2CppObject *v13; // x0

  if ( (byte_4BFA68F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1C2E12C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1C2E12C(&QuestTree___c__DisplayClass35_0_TypeInfo, v7);
    byte_4BFA68F = 1;
  }
  v8 = sub_1C2E378(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1C2E388(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v13 )
    LODWORD(v13) = v13[4].klass;
  return (int)v13;
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
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BFA682 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77731592, v3);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4BFA682 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_57061792(
    v6,
    allWarInfoList,
    (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77731592);
  if ( !v6 )
    sub_1C2E388(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_366D1D8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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

  if ( (byte_4BFA683 & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree__Init_d__17_TypeInfo, endCallback);
    byte_4BFA683 = 1;
  }
  v5 = sub_1C2E378(QuestTree__Init_d__17_TypeInfo);
  QuestTree__Init_d__17___ctor((QuestTree__Init_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
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
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x8
  int32_t size; // w2
  int v11; // w9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x8
  int32_t v13; // w2
  int v14; // w9
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *allSpotRoadInfoList; // x8
  int32_t v16; // w2
  int v17; // w9
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x8
  int32_t v19; // w2
  int v20; // w9
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x8
  int32_t v22; // w2
  int v23; // w9
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x8
  int32_t v25; // w2
  int v26; // w9

  if ( (byte_4BFA699 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_4BFA699 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v11 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0LL);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v13 = allSpotInfoList->fields._size;
  v14 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v14;
  if ( v13 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v13, 0LL);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v16 = allSpotRoadInfoList->fields._size;
  v17 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v17;
  if ( v16 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v16, 0LL);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v19 = allMapGimmickInfoList->fields._size;
  v20 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v19, 0LL);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v22 = allMapInfoList->fields._size;
  v23 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v23;
  if ( v22 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v22, 0LL);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_1C2E388(mapControlRootInfo, method);
  v25 = allWarInfoList->fields._size;
  v26 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v26;
  if ( v25 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFA693 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BFA693 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_327B1CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_35261348(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_35261348(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t id; // w20
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v12; // x21
  bool v13; // w20
  int64_t Time; // x21
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v17; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v19; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BFA694 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventMaster___, warEnt);
    sub_1C2E12C(&Method_DataManager_GetMaster_WarReleaseMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1C2E12C(&long___TypeInfo, v8);
    this = (QuestTree_o *)sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    byte_4BFA694 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_327B1CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_33;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, id, 0LL);
  if ( OpenEntity )
  {
    v12 = OpenEntity;
    if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
      return 1;
    if ( WarReleaseEntity__IsAnnouncement(v12, 0LL) || WarReleaseEntity__IsClose(v12, 0LL) )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v15);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_33;
    v13 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v13 = 0;
  }
  this = (QuestTree_o *)sub_1C2E1D4(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_33:
    sub_1C2E388(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C2E390(this, warEnt);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v17 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v19 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v19 )
        v4->fields.forceUpdateTime = (int64_t)v19;
      --v17;
      ++p_allSpotInfoList;
    }
    while ( v17 );
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v8; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v12; // x21
  WarEntity_o *Mine; // x0
  WarEntity_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4BFA692 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&warId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    byte_4BFA692 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  v8 = ChildByWarID;
  if ( !MapControl_WarInfo__GetStatus(ChildByWarID, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1C2E388(0LL, v10);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, warId, 0LL);
  if ( OpenEntity )
  {
    v12 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0LL) || WarReleaseEntity__IsClose(v12, 0LL) )
      return 0;
  }
  if ( MapControl_WarInfo__IsClosedWar(v8, 0LL) )
    return 0;
  Mine = MapControl_WarInfo__GetMine(v8, 0LL);
  if ( !Mine )
    return 0;
  v14 = Mine;
  return (!WarEntity__IsEvent(Mine, 0LL) || QuestTree__IsActiveEventWar_35261348(this, v14, v15))
      && QuestTree__IsWarOpen(this, v14->fields.id, v15);
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4BFA684 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFA684 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  bool v15; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v18; // x3
  int v19; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BFA68E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_4BFA68E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1C2E388(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1C2E388(v13, v14);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v22.fields._current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v18)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v19 = 6;
        goto LABEL_16;
      }
    }
  }
  v19 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v15 && v19 == 6;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1C2E388(this, 0LL);
  return QuestTree__CheckSpotCond_35266720(
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
    sub_1C2E388(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_35266720(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_35266720(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v13; // x0
  __int64 v14; // x1
  int v15; // w20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA6A0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4BFA6A0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C2E388(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1C2E388(v13, v14);
    if ( !v13 )
      sub_1C2E388(0LL, v14);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v13, (int32_t)current[1].klass, 0LL) )
    {
      v15 = 4;
      goto LABEL_11;
    }
  }
  v15 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v15 != 4;
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
  bool v15; // w19
  int v16; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BFA690 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4BFA690 = 1;
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
    sub_1C2E388(QuestInfoByWarId, v9);
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
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1C2E388(v13, v14);
    if ( LODWORD(v20.fields._current[2].klass) == 1 )
    {
      v16 = 6;
      goto LABEL_15;
    }
  }
  v16 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v15 && v16 == 6;
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
  __int64 v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *name; // x1
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x22
  bool IsExistCommand; // w21
  int32_t v25; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4BFA695 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1C2E12C(&SpotEntity_TypeInfo, v9);
    byte_4BFA695 = 1;
  }
  v10 = sub_1C2E378(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)name, v13, v14, v15, v16, v17, v18);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C80008(v20);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C80008(v20);
  v23 = **(UnityEngine_Object_o ***)(v22 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C2E388(Instance, v12);
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

  v4 = QuestTree__CheckMapGimmickCond_35263776(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C2E388(v4, v5);
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
    sub_1C2E388(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35266720(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_35266720(
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
    sub_1C2E388(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35266720(
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
    sub_1C2E388(this, nowTime);
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

  if ( (byte_4BFA685 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_4BFA685 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
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
  if ( (byte_4BFA681 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_4BFA681 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4BFA696 & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo, endCallback);
    byte_4BFA696 = 1;
  }
  v5 = sub_1C2E378(QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BFA697 & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo, *(_QWORD *)&targetWarId);
    byte_4BFA697 = 1;
  }
  v7 = sub_1C2E378(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C2E388(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)endCallback, v16, v17, v18, v19, v20, v21);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BFA689 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1C2E12C(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1C2E12C(&QuestTree___c__DisplayClass29_0_TypeInfo, v7);
    byte_4BFA689 = 1;
  }
  v8 = sub_1C2E378(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_DWORD *)(v8 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_4BFA879 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1C2E12C(&BlankEarthSpotMaster_TypeInfo, method);
    byte_4BFA879 = 1;
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
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
      sub_1C2E390(this, method);
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
          sub_1C2E0D0(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C2E388(this, method);
  }
  this->klass = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BFA87A & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, method);
    byte_4BFA87A = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1C2E378(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v10->fields.mapInfo, (int64_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C2E0D0(
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  long double v9; // q0
  TerminalPramsManager_c *v10; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x21
  System_Collections_IEnumerator_o *v16; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4BFA87B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__17_o *)sub_1C2E12C(&TerminalPramsManager_TypeInfo, v6);
    byte_4BFA87B = 1;
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
        if ( !byte_4BFA90F )
        {
          sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
          byte_4BFA90F = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v10->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
            v13 = sub_1C80008(v12);
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
          if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
            v14 = sub_1C80008(v12);
          v15 = **(UnityEngine_Object_o ***)(v14 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v16 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v16;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C2E0D0(p__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C2E388(this, method);
      }
      v25 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1C80008(v9);
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
        v26 = sub_1C80008(v9);
      v27 = **(UnityEngine_Object_o ***)(v26 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFA6A2 & 1) == 0 )
  {
    sub_1C2E12C(&QuestTree___c_TypeInfo, v1);
    byte_4BFA6A2 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1C2E0D0((PartyOrganizationUtility_o *)QuestTree___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
    sub_1C2E388(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, a);
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
    sub_1C2E388(this, a);
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
    sub_1C2E388(this, a);
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
    sub_1C2E388(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  if ( (byte_4BFA6A3 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4BFA6A3 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1C2E388(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C2E388(this, x);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  if ( (byte_4BFA877 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_3_o *)sub_1C2E12C(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_4BFA877 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1C2E388(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3521AF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  if ( (byte_4BFA878 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_6_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4BFA878 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1C2E388(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  Il2CppObject *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  Il2CppObject *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  Il2CppObject *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  Il2CppObject *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  Il2CppObject *v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  Il2CppObject *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  Il2CppObject *v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  System_Collections_Generic_Dictionary_int__object__o *v152; // x21
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  System_Object_array *Entitys; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v168; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v173; // x9
  WarEntity_o *v174; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v176; // x19
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v189; // x23
  int64_t v190; // x23
  Il2CppObject *v191; // x8
  unsigned int _2__current; // w9
  __int64 v193; // x8
  _QWORD *v194; // x9
  __int64 _2__current_low; // x10
  __int64 v196; // x8
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v203; // x22
  unsigned int v204; // w27
  __int64 v205; // x8
  int32_t v206; // w24
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v215; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v217; // x23
  Il2CppClass **v218; // x0
  Il2CppObject *v219; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v220; // x25
  int v221; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v223; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v224; // x8
  SpotEntity_o **v225; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v226; // t1
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  __int64 v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  __int64 v236; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v238; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v239; // x25
  int v240; // w19
  unsigned int v241; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v242; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v243; // x8
  SpotRoadEntity_o **v244; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v245; // t1
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  __int64 v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  __int64 v255; // x8
  Il2CppObject *v256; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v257; // x24
  int v258; // w19
  int v259; // w25
  __int64 v260; // x8
  int64_t v261; // x2
  int32_t v262; // w3
  System_String_o *v263; // x4
  BattleSetupInfo_o *v264; // x5
  FollowerInfo_o *v265; // x6
  PartyListViewItem_o *v266; // x7
  __int64 v267; // x8
  _QWORD *v268; // x9
  __int64 v269; // x10
  __int64 v270; // x8
  PartyOrganizationUtility_o *p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v273; // x22
  Il2CppObject *v274; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  Il2CppObject *v282; // x22
  struct QuestTree___c__DisplayClass43_0_o **p__8__1; // x21
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  int64_t v290; // x22
  MapControl_WarInfo_o *v291; // x23
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  MapControl_MapInfo_o *v298; // x22
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  MapControl_SpotInfo_o *v305; // x22
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  WarEntity_o *v312; // x22
  int64_t v313; // x2
  int32_t v314; // w3
  System_String_o *v315; // x4
  BattleSetupInfo_o *v316; // x5
  FollowerInfo_o *v317; // x6
  PartyListViewItem_o *v318; // x7
  Il2CppObject *v319; // x0
  int64_t v320; // x2
  int32_t v321; // w3
  System_String_o *v322; // x4
  BattleSetupInfo_o *v323; // x5
  FollowerInfo_o *v324; // x6
  PartyListViewItem_o *v325; // x7
  bool v326; // zf
  int v327; // w8
  QuestEntity_o *v328; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass43_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v333; // x25
  System_Predicate_object__o *_9__2; // x26
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  Il2CppObject *v341; // x0
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  WarEntity_o *Mine; // x0
  int64_t v364; // x2
  int32_t v365; // w3
  System_String_o *v366; // x4
  BattleSetupInfo_o *v367; // x5
  FollowerInfo_o *v368; // x6
  PartyListViewItem_o *v369; // x7
  int v370; // w25
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v377; // x24
  int64_t spotInfo_5__22; // x1
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v386; // w19
  Il2CppObject *Master_object; // x25
  UserQuestEntity_o *v388; // x25
  struct MapControl_SpotInfo_o *v389; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v391; // x9
  struct MapControl_MapInfo_o *v392; // x9
  bool v393; // w8
  int64_t v394; // x2
  int32_t v395; // w3
  System_String_o *v396; // x4
  BattleSetupInfo_o *v397; // x5
  FollowerInfo_o *v398; // x6
  PartyListViewItem_o *v399; // x7
  Il2CppObject *v400; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v401; // x21
  int v402; // w19
  int v403; // w22
  __int64 v404; // x8
  __int64 v405; // x8
  _QWORD *v406; // x9
  __int64 v407; // x10
  __int64 v408; // x8
  int64_t v409; // x2
  int32_t v410; // w3
  System_String_o *v411; // x4
  BattleSetupInfo_o *v412; // x5
  FollowerInfo_o *v413; // x6
  PartyListViewItem_o *v414; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v416; // x22
  Il2CppObject *v417; // x23
  struct QuestTree___c_StaticFields *v418; // x0
  int64_t v419; // x2
  int32_t v420; // w3
  System_String_o *v421; // x4
  BattleSetupInfo_o *v422; // x5
  FollowerInfo_o *v423; // x6
  PartyListViewItem_o *v424; // x7
  int64_t v425; // x2
  int32_t v426; // w3
  System_String_o *v427; // x4
  BattleSetupInfo_o *v428; // x5
  FollowerInfo_o *v429; // x6
  PartyListViewItem_o *v430; // x7
  int64_t v431; // x2
  int32_t v432; // w3
  System_String_o *v433; // x4
  BattleSetupInfo_o *v434; // x5
  FollowerInfo_o *v435; // x6
  PartyListViewItem_o *v436; // x7
  int64_t v437; // x2
  int32_t v438; // w3
  System_String_o *v439; // x4
  BattleSetupInfo_o *v440; // x5
  FollowerInfo_o *v441; // x6
  PartyListViewItem_o *v442; // x7
  int64_t v443; // x2
  int32_t v444; // w3
  System_String_o *v445; // x4
  BattleSetupInfo_o *v446; // x5
  FollowerInfo_o *v447; // x6
  PartyListViewItem_o *v448; // x7
  int64_t v449; // x2
  int32_t v450; // w3
  System_String_o *v451; // x4
  BattleSetupInfo_o *v452; // x5
  FollowerInfo_o *v453; // x6
  PartyListViewItem_o *v454; // x7
  int64_t v455; // x2
  int32_t v456; // w3
  System_String_o *v457; // x4
  BattleSetupInfo_o *v458; // x5
  FollowerInfo_o *v459; // x6
  PartyListViewItem_o *v460; // x7
  int64_t v461; // x2
  int32_t v462; // w3
  System_String_o *v463; // x4
  BattleSetupInfo_o *v464; // x5
  FollowerInfo_o *v465; // x6
  PartyListViewItem_o *v466; // x7
  PartyOrganizationUtility_o *v467; // x26
  int v468; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v469; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v470; // [xsp+10h] [xbp-B0h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v471; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v472; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v473; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v475; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v479; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4BFA87C & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1C2E12C(&System_Comparison_MapControl_WarInfo__TypeInfo, v3);
    sub_1C2E12C(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventStatusMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapGimmickMaster___, v10);
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestAddMaster___, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SpotMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SpotRoadMaster___, v19);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, v20);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarAddMaster___, v21);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, v22);
    sub_1C2E12C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v23);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, v24);
    sub_1C2E12C(&DataManager_TypeInfo, v25);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v26);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v27);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v28);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v30);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v31);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v32);
    sub_1C2E12C(&long___TypeInfo, v33);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v34);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v35);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v36);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v37);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v38);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v39);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v40);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v41);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v42);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v43);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v44);
    sub_1C2E12C(&MapControl_MapInfo_TypeInfo, v45);
    sub_1C2E12C(&NetworkManager_TypeInfo, v46);
    sub_1C2E12C(&OptionManager_TypeInfo, v47);
    sub_1C2E12C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v48);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v51);
    sub_1C2E12C(&MapControl_SpotInfo_TypeInfo, v52);
    sub_1C2E12C(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, v53);
    sub_1C2E12C(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, v54);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__, v55);
    sub_1C2E12C(&QuestTree___c__DisplayClass43_0_TypeInfo, v56);
    sub_1C2E12C(&QuestTree___c_TypeInfo, v57);
    sub_1C2E12C(&WarEntity_TypeInfo, v58);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1C2E12C(&MapControl_WarInfo_TypeInfo, v59);
    byte_4BFA87C = 1;
  }
  v479 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v475 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v473 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, 0LL);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._dataManager_5__2,
        (int64_t)Instance,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._mapMaster_5__3,
        (int64_t)MasterData_object,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v75 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v75;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._spotMaster_5__4,
        (int64_t)v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v82 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v82;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._blankEarthSpotMaster_5__5,
        (int64_t)v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v89 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v89;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._questMaster_5__6,
        (int64_t)v89,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v96 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v96;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._questPhaseMaster_5__7,
        (int64_t)v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v103 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v103;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._eventMaster_5__8,
        (int64_t)v103,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v110 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v110;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._eventDetailMaster_5__9,
        (int64_t)v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v117 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v117;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusMaster_5__10,
        (int64_t)v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v124 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v124;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int64_t)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v131 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v131;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._spotRoadMaster_5__12,
        (int64_t)v131,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v138 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v138;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._mapGimmickMaster_5__13,
        (int64_t)v138,
        v139,
        v140,
        v141,
        v142,
        v143,
        v144);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v145 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v145;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._questPickupMaster_5__14,
        (int64_t)v145,
        v146,
        v147,
        v148,
        v149,
        v150,
        v151);
      v152 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v152,
        (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v152;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int64_t)v152,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_327A404 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v2->fields._warList_5__16,
        (int64_t)Entitys,
        v160,
        v161,
        v162,
        v163,
        v164,
        v165);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_299;
      max_length = warList_5__16->max_length;
      v168 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_125;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v471 = 0LL;
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
  while ( v168 < max_length )
  {
    v173 = v2->fields._warList_5__16;
    if ( !v173 )
      goto LABEL_299;
    if ( v168 >= v173->max_length )
      goto LABEL_146;
    v174 = v173->m_Items[v168];
    if ( !v174 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v174->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v176 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v176, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_327B1CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v176, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v176, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v479,
               (int32_t)this,
               (const MethodInfo_327B1CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v479;
          if ( !v479 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v479, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v176, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v189 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v176, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v189->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v190 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1C2E1D4(long___TypeInfo, 3LL);
        v191 = entity;
        if ( !entity || !this )
          goto LABEL_299;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_146;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_146;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v191[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_146;
        this->fields.endCallback = (struct System_Action_o *)v191[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v190, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_299;
    v193 = *(_QWORD *)&this->fields.__1__state;
    v194 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v193 )
      goto LABEL_299;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v193 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v176,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
    }
    else
    {
      v196 = v193 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v196 + 32) = v176;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v196 + 32), (int64_t)v176, v177, v178, v179, v180, v181, v182);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_299;
    v203 = this;
    v472 = this->fields.__2__current;
    if ( (int)v472 >= 1 )
    {
      if ( !(_DWORD)v472 )
        goto LABEL_146;
      v204 = 0;
      v469 = this;
      v470 = v176;
      while ( 1 )
      {
        v205 = *((_QWORD *)&v203->fields.__4__this + (int)v204);
        if ( !v205 )
          goto LABEL_299;
        v206 = *(_DWORD *)(v205 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__AddChild(v176, v206, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v215 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v217 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
        }
        else
        {
          v218 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v218[4] = (Il2CppClass *)v217;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v218 + 4), (int64_t)v217, v207, v208, v209, v210, v211, v212);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotMaster__getList((SpotMaster_o *)this, v206, 0LL);
        if ( !this )
          goto LABEL_299;
        v219 = this->fields.__2__current;
        v220 = this;
        v221 = (_DWORD)v219 - 1;
        if ( (int)v219 >= 1 )
          break;
LABEL_89:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v217,
                                                                   v473->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v206,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v238 = this->fields.__2__current;
        v239 = this;
        v240 = (_DWORD)v238 - 1;
        if ( (int)v238 >= 1 )
        {
          v241 = 0;
          while ( 1 )
          {
            v242 = &v239->klass + (int)v241;
            v245 = v242[4];
            v244 = (SpotRoadEntity_o **)(v242 + 4);
            v243 = v245;
            if ( !v245 || !v217 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v217,
                                                                       (int32_t)v243->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v241 >= LODWORD(v239->fields.__2__current) )
              goto LABEL_146;
            QuestTree__SetupSpotRoadInfo(_4__this, *v244, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            method = (const MethodInfo *)spotRoadInfo;
            v252 = *(_QWORD *)&this->fields.__1__state;
            v253 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v252 )
              goto LABEL_299;
            v254 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v254 >= *(_DWORD *)(v252 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
            }
            else
            {
              v255 = v252 + 8 * v254;
              LODWORD(this->fields.__2__current) = v254 + 1;
              *(_QWORD *)(v255 + 32) = method;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)(v255 + 32),
                (int64_t)method,
                v246,
                v247,
                v248,
                v249,
                v250,
                v251);
            }
            if ( v240 == v241 )
              break;
            if ( ++v241 >= LODWORD(v239->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v2 = v473;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v206,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v256 = this->fields.__2__current;
        v257 = this;
        v258 = (_DWORD)v256 - 1;
        if ( (int)v256 >= 1 )
        {
          v259 = 0;
          while ( 1 )
          {
            v260 = *((_QWORD *)&v257->fields.__4__this + v259);
            if ( !v260 )
              goto LABEL_299;
            if ( !v217 )
              goto LABEL_299;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v217, *(_DWORD *)(v260 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            method = (const MethodInfo *)mapGimmickInfo;
            v267 = *(_QWORD *)&this->fields.__1__state;
            v268 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v267 )
              goto LABEL_299;
            v269 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v269 >= *(_DWORD *)(v267 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
            }
            else
            {
              v270 = v267 + 8 * v269;
              LODWORD(this->fields.__2__current) = v269 + 1;
              *(_QWORD *)(v270 + 32) = method;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)(v270 + 32),
                (int64_t)method,
                v261,
                v262,
                v263,
                v264,
                v265,
                v266);
            }
            if ( v258 == v259 )
              break;
            if ( (unsigned int)++v259 >= LODWORD(v257->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v176 = v470;
        v203 = v469;
        if ( ++v204 == (_DWORD)v472 )
          goto LABEL_122;
        if ( v204 >= LODWORD(v469->fields.__2__current) )
          goto LABEL_146;
      }
      for ( i = 0; i < LODWORD(v220->fields.__2__current); ++i )
      {
        v223 = &v220->klass + (int)i;
        v226 = v223[4];
        v225 = (SpotEntity_o **)(v223 + 4);
        v224 = v226;
        if ( !v226 || !v217 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   v217,
                                                                   (int32_t)v224->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v220->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v225, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)spotInfo;
        v233 = *(_QWORD *)&this->fields.__1__state;
        v234 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v233 )
          goto LABEL_299;
        v235 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v235 >= *(_DWORD *)(v233 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
        }
        else
        {
          v236 = v233 + 8 * v235;
          LODWORD(this->fields.__2__current) = v235 + 1;
          *(_QWORD *)(v236 + 32) = method;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v236 + 32), (int64_t)method, v227, v228, v229, v230, v231, v232);
        }
        if ( v221 == i )
          goto LABEL_89;
      }
LABEL_146:
      sub_1C2E390(this, method);
    }
LABEL_122:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C2E0D0(p__2__current, 0LL, v197, v198, v199, v200, v201, v202);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_125:
    max_length = v2->fields._warCount_5__19;
    v168 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v168;
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
  v273 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v273 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v274 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v273 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v273, v274, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Comparison_MapControl_WarInfo__o *)v273;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)v273,
      v276,
      v277,
      v278,
      v279,
      v280,
      v281);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_57070448(
    allWarInfoList,
    v273,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v282 = (Il2CppObject *)sub_1C2E378(QuestTree___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor(v282, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v282;
  p__8__1 = &v2->fields.__8__1;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v282, v284, v285, v286, v287, v288, v289);
  v290 = v2->fields._nowTime_5__17;
  v291 = (MapControl_WarInfo_o *)sub_1C2E378(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v291, v290, 0LL);
  v2->fields._warInfo_5__20 = v291;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20,
    (int64_t)v291,
    v292,
    v293,
    v294,
    v295,
    v296,
    v297);
  v298 = (MapControl_MapInfo_o *)sub_1C2E378(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v298, 0LL);
  v2->fields._mapInfo_5__21 = v298;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21,
    (int64_t)v298,
    v299,
    v300,
    v301,
    v302,
    v303,
    v304);
  v305 = (MapControl_SpotInfo_o *)sub_1C2E378(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v305, 0LL);
  v2->fields._spotInfo_5__22 = v305;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22,
    (int64_t)v305,
    v306,
    v307,
    v308,
    v309,
    v310,
    v311);
  v312 = (WarEntity_o *)sub_1C2E378(WarEntity_TypeInfo);
  WarEntity___ctor(v312, 0LL);
  v2->fields._warEnt_5__23 = v312;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23,
    (int64_t)v312,
    v313,
    v314,
    v315,
    v316,
    v317,
    v318);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v319 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v319;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24,
    (int64_t)v319,
    v320,
    v321,
    v322,
    v323,
    v324,
    v325);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v326 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
  v327 = v326 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v327;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v471 = 0LL;
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
    v328 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v475 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, method);
      byte_4BF81D5 = 1;
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
           &v475,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v475;
      if ( !v475 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v475, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__getSpotId_40812360(v328, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v333 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&_8__1->fields.__9__2,
          (int64_t)_9__2,
          v335,
          v336,
          v337,
          v338,
          v339,
          v340);
      }
      if ( !v333 )
        goto LABEL_299;
      v341 = System_Collections_Generic_List_object___Find(
               v333,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v473;
      v473->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v341;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v473->fields._spotInfo_5__22,
        (int64_t)v341,
        v342,
        v343,
        v344,
        v345,
        v346,
        v347);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v473->fields._mapInfoNow_5__27 != MapID )
      {
        v473->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v473->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v473->fields._mapInfo_5__21,
          (int64_t)MapInfoByMapID,
          v350,
          v351,
          v352,
          v353,
          v354,
          v355);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v473->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v473->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v473->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v473->fields._warInfo_5__20,
            (int64_t)WarInfoByWarID,
            v357,
            v358,
            v359,
            v360,
            v361,
            v362);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v473->fields._warEnt_5__23 = Mine;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v473->fields._warEnt_5__23,
            (int64_t)Mine,
            v364,
            v365,
            v366,
            v367,
            v368,
            v369);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v475 )
      goto LABEL_191;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v475;
    if ( !v475 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v475, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_179;
    if ( !v475 )
      goto LABEL_299;
    if ( v475->fields.challengeNum >= 1 )
    {
LABEL_179:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v475;
    if ( !v475 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v475, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_191:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v370 = 0;
      goto LABEL_192;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v475 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v475->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_299;
    v370 = (int)this;
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
    v377 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._eventMaster_5__8,
      (int64_t)method,
      v371,
      v372,
      v373,
      v374,
      v375,
      v376);
    spotInfo_5__22 = (int64_t)v2->fields._spotInfo_5__22;
    v377->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v377->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v379,
      v380,
      v381,
      v382,
      v383,
      v384);
    if ( !_4__this )
      goto LABEL_299;
    v377->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v377,
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
           (const MethodInfo_32D6660 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_206:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v377, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v377->fields.__4__this) = 0;
LABEL_210:
        v386 = 1;
        goto LABEL_211;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v328, (MapControl_QuestInfo_o *)v377, v2->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_210;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v386 = 0;
LABEL_211:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v377, 0LL) )
    {
      if ( ((v370 | v386) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v377, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, method);
            byte_4BF81D5 = 1;
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
                                                                     v377->fields.__1__state,
                                                                     0LL);
          if ( this )
            v388 = (UserQuestEntity_o *)this;
          else
            v388 = (UserQuestEntity_o *)v471;
          if ( !this )
            goto LABEL_229;
          if ( !v388 )
            goto LABEL_299;
          v471 = this;
          if ( !UserQuestEntity__IsResetStatus(v388, 0LL) )
          {
LABEL_229:
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
            v471 = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v388;
          }
        }
        v2 = v473;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v473->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v377->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v377, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v377,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v389 = v2->fields._spotInfo_5__22;
          if ( !v389 )
            goto LABEL_299;
          v389->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v377,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v391 = v2->fields._spotInfo_5__22;
        if ( !v391 )
          goto LABEL_299;
        v391->fields._IsNext_k__BackingField = 1;
        v392 = v2->fields._mapInfo_5__21;
        if ( !v392 )
          goto LABEL_299;
        v392->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v328, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v475 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v475, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v475 )
          goto LABEL_299;
        v393 = v475->fields.challengeNum == 0;
      }
      else
      {
        v393 = 0;
      }
    }
    else
    {
      v393 = 1;
    }
    LOBYTE(v377->fields.__8__1) = v393;
    HIDWORD(v377->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v377->fields.endCallback) = QuestPickupMaster__GetPriority(
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
    v400 = this->fields.__2__current;
    v401 = this;
    v402 = (_DWORD)v400 - 1;
    if ( (int)v400 >= 1 )
    {
      v403 = 0;
      while ( 1 )
      {
        v404 = *((_QWORD *)&v401->fields.__4__this + v403);
        if ( !v404 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v377,
                                                                   *(_DWORD *)(v404 + 16),
                                                                   *(_DWORD *)(v404 + 20),
                                                                   0LL);
        if ( v402 == v403 )
          goto LABEL_262;
        if ( (unsigned int)++v403 >= LODWORD(v401->fields.__2__current) )
          goto LABEL_146;
      }
LABEL_299:
      sub_1C2E388(this, method);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v405 = *(_QWORD *)&this->fields.__1__state;
    v406 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v405 )
      goto LABEL_299;
    v407 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v407 >= *(_DWORD *)(v405 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v377,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v406[4] + 192LL) + 112LL));
    }
    else
    {
      v408 = v405 + 8 * v407;
      LODWORD(this->fields.__2__current) = v407 + 1;
      *(_QWORD *)(v408 + 32) = v377;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v408 + 32), (int64_t)v377, v394, v395, v396, v397, v398, v399);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v467 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C2E0D0(v467, 0LL, v409, v410, v411, v412, v413, v414);
      v468 = 2;
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
  v416 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v416 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v417 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v416 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v416, v417, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, 0LL);
    v418 = QuestTree___c_TypeInfo->static_fields;
    v418->__9__43_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v416;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v418->__9__43_1, (int64_t)v416, v419, v420, v421, v422, v423, v424);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_57070448(
    allQuestInfoList,
    v416,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__8__1, 0LL, v425, v426, v427, v428, v429, v430);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20, 0LL, v431, v432, v433, v434, v435, v436);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21, 0LL, v437, v438, v439, v440, v441, v442);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22, 0LL, v443, v444, v445, v446, v447, v448);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23, 0LL, v449, v450, v451, v452, v453, v454);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24, 0LL, v455, v456, v457, v458, v459, v460);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    v467 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
    sub_1C2E0D0(v467, 0LL, v461, v462, v463, v464, v465, v466);
    v468 = 3;
LABEL_297:
    *(_DWORD *)&v467[-1].fields._IsQuestStartMenuMode_k__BackingField = v468;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarAddMaster___);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  QuestTree_o *_4__this; // x19
  Il2CppObject *v115; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x0
  __int64 v124; // x1
  struct QuestTree___c__DisplayClass44_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  __int64 v134; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v136; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v138; // x0
  Il2CppObject *v139; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  __int64 v147; // x1
  DataManager_o *v148; // x0
  Il2CppObject *v149; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  __int64 v157; // x1
  DataManager_o *v158; // x0
  Il2CppObject *v159; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v160; // x0
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  __int64 v167; // x1
  DataManager_o *v168; // x0
  Il2CppObject *v169; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v170; // x0
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  __int64 v177; // x1
  DataManager_o *v178; // x0
  __int64 v179; // x1
  Il2CppObject *v180; // x24
  DataManager_o *v181; // x0
  __int64 v182; // x1
  Il2CppObject *v183; // x23
  DataManager_o *v184; // x0
  __int64 v185; // x1
  Il2CppObject *v186; // x22
  DataManager_o *v187; // x0
  __int64 v188; // x1
  Il2CppObject *v189; // x21
  DataManager_o *v190; // x0
  Il2CppObject *v191; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v192; // x0
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  __int64 v199; // x1
  DataManager_o *v200; // x0
  Il2CppObject *v201; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v202; // x0
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  __int64 v209; // x1
  DataManager_o *v210; // x0
  Il2CppObject *v211; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v212; // x0
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  System_Collections_Generic_Dictionary_int__object__o *v219; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v220; // x0
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  Il2CppObject *v227; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v228; // x0
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  __int64 v235; // x1
  DataManager_o *v236; // x0
  Il2CppObject *v237; // x0
  __int64 v238; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v240; // x27
  System_Func_object__bool__o *v241; // x26
  Il2CppObject *v242; // x0
  __int64 v243; // x1
  struct QuestTree___c__DisplayClass44_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v248; // x27
  System_Predicate_object__o *v249; // x26
  __int64 v250; // x0
  __int64 v251; // x1
  __int64 Index; // x0
  __int64 v253; // x1
  System_Collections_Generic_List_object__o *v254; // x0
  struct QuestTree___c__DisplayClass44_1_o *v255; // x9
  MapControl_RootInfo_o *v256; // x0
  struct MapControl_WarInfo_o *v257; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v258; // x0
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  __int64 v265; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v267; // x1
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  MapControl_WarInfo_o *v274; // x0
  __int64 EventId; // x0
  __int64 v276; // x1
  _BOOL8 v277; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v278; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v280; // x0
  MapControl_WarInfo_o *v281; // x0
  __int64 v282; // x0
  __int64 v283; // x1
  __int64 v284; // x1
  __int64 v285; // x1
  __int64 v286; // x1
  MapControl_WarInfo_o *v287; // x0
  __int64 v288; // x0
  __int64 v289; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v291; // x0
  __int64 v292; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v294; // x1
  struct QuestTree___c__DisplayClass44_1_o *v295; // x8
  Il2CppObject *v296; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v298; // x21
  System_Int64_array *v299; // x0
  __int64 v300; // x1
  Il2CppObject *v301; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v303; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v305; // x1
  _QWORD *v306; // x9
  __int64 size; // x10
  Il2CppClass **v308; // x8
  __int64 v309; // x0
  __int64 v310; // x1
  int32_t v311; // w9
  UserQuestEntity_o *v312; // x23
  struct QuestTree___c__DisplayClass44_1_o *v313; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v315; // x0
  __int64 v316; // x1
  SpotRoadEntity_array *v317; // x20
  int v318; // w25
  il2cpp_array_size_t i; // w26
  __int64 v320; // x21
  __int64 v321; // x0
  __int64 v322; // x1
  SpotRoadEntity_o *v323; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v325; // x24
  __int64 v326; // x0
  __int64 v327; // x1
  unsigned int v328; // w0
  __int64 v329; // x1
  System_Collections_Generic_List_object__o *v330; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v332; // x1
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  System_Collections_Generic_List_object__o *v339; // x0
  Il2CppObject *v340; // x1
  struct System_Object_array *v341; // x8
  _QWORD *v342; // x9
  __int64 v343; // x10
  Il2CppClass **v344; // x8
  struct QuestTree___c__DisplayClass44_1_o *v345; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v347; // x0
  __int64 v348; // x1
  int64_t v349; // x2
  int32_t v350; // w3
  System_String_o *v351; // x4
  BattleSetupInfo_o *v352; // x5
  FollowerInfo_o *v353; // x6
  PartyListViewItem_o *v354; // x7
  MapGimmickEntity_array *v355; // x20
  int v356; // w24
  il2cpp_array_size_t j; // w25
  __int64 v358; // x21
  __int64 v359; // x0
  __int64 v360; // x1
  MapGimmickEntity_o *v361; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v363; // x23
  __int64 v364; // x0
  __int64 v365; // x1
  unsigned int v366; // w0
  __int64 v367; // x1
  System_Collections_Generic_List_object__o *v368; // x0
  MapControl_MapInfo_o *v369; // x0
  __int64 v370; // x1
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  System_Collections_Generic_List_object__o *v377; // x0
  Il2CppObject *v378; // x1
  struct System_Object_array *v379; // x8
  _QWORD *v380; // x9
  __int64 v381; // x10
  Il2CppClass **v382; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v383; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v384; // x8
  int v385; // w9
  PartyOrganizationUtility_o *p_mapInfo_5__16; // x8
  __int64 v387; // x0
  __int64 v388; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v389; // x8
  int32_t mapCount_5__13; // w10
  int32_t v391; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v393; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v395; // x0
  int64_t v396; // x2
  int32_t v397; // w3
  System_String_o *v398; // x4
  BattleSetupInfo_o *v399; // x5
  FollowerInfo_o *v400; // x6
  PartyListViewItem_o *v401; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v403; // x10
  MapEntity_o *v404; // x9
  struct QuestTree___c__DisplayClass44_1_o *v405; // x22
  struct MapControl_WarInfo_o *v406; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int64_t v409; // x2
  int32_t v410; // w3
  System_String_o *v411; // x4
  BattleSetupInfo_o *v412; // x5
  FollowerInfo_o *v413; // x6
  PartyListViewItem_o *v414; // x7
  struct MapControl_WarInfo_o *v415; // x8
  System_Collections_Generic_List_object__o *v416; // x0
  struct QuestTree___c__DisplayClass44_1_o *v417; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int64_t v420; // x2
  int32_t v421; // w3
  System_String_o *v422; // x4
  BattleSetupInfo_o *v423; // x5
  FollowerInfo_o *v424; // x6
  PartyListViewItem_o *v425; // x7
  __int64 v426; // x0
  __int64 v427; // x1
  System_Collections_Generic_List_object__o *v428; // x0
  struct QuestTree___c__DisplayClass44_1_o *v429; // x8
  MapControl_WarInfo_o *v430; // x0
  struct MapControl_MapInfo_o *v431; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v432; // x0
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  __int64 v439; // x1
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  System_Collections_Generic_List_object__o *v446; // x0
  struct System_Object_array *v447; // x8
  Il2CppObject *v448; // x1
  _QWORD *v449; // x9
  __int64 v450; // x10
  Il2CppClass **v451; // x8
  __int64 v452; // x0
  __int64 v453; // x1
  System_Collections_Generic_List_object__o *v454; // x20
  QuestTree___c_c *v455; // x8
  System_Comparison_T__o *_9__44_2; // x21
  Il2CppObject *v457; // x22
  struct QuestTree___c_StaticFields *v458; // x0
  int64_t v459; // x2
  int32_t v460; // w3
  System_String_o *v461; // x4
  BattleSetupInfo_o *v462; // x5
  FollowerInfo_o *v463; // x6
  PartyListViewItem_o *v464; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v465; // x0
  int64_t v466; // x2
  int32_t v467; // w3
  System_String_o *v468; // x4
  BattleSetupInfo_o *v469; // x5
  FollowerInfo_o *v470; // x6
  PartyListViewItem_o *v471; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v472; // x0
  int64_t v473; // x2
  int32_t v474; // w3
  System_String_o *v475; // x4
  BattleSetupInfo_o *v476; // x5
  FollowerInfo_o *v477; // x6
  PartyListViewItem_o *v478; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v479; // x0
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  Il2CppObject *v486; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v487; // x0
  int64_t v488; // x2
  int32_t v489; // w3
  System_String_o *v490; // x4
  BattleSetupInfo_o *v491; // x5
  FollowerInfo_o *v492; // x6
  PartyListViewItem_o *v493; // x7
  int64_t v494; // x21
  MapControl_WarInfo_o *v495; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v496; // x0
  int64_t v497; // x2
  int32_t v498; // w3
  System_String_o *v499; // x4
  BattleSetupInfo_o *v500; // x5
  FollowerInfo_o *v501; // x6
  PartyListViewItem_o *v502; // x7
  MapControl_MapInfo_o *v503; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v504; // x0
  int64_t v505; // x2
  int32_t v506; // w3
  System_String_o *v507; // x4
  BattleSetupInfo_o *v508; // x5
  FollowerInfo_o *v509; // x6
  PartyListViewItem_o *v510; // x7
  MapControl_SpotInfo_o *v511; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v512; // x0
  int64_t v513; // x2
  int32_t v514; // w3
  System_String_o *v515; // x4
  BattleSetupInfo_o *v516; // x5
  FollowerInfo_o *v517; // x6
  PartyListViewItem_o *v518; // x7
  WarEntity_o *v519; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v520; // x0
  int64_t v521; // x2
  int32_t v522; // w3
  System_String_o *v523; // x4
  BattleSetupInfo_o *v524; // x5
  FollowerInfo_o *v525; // x6
  PartyListViewItem_o *v526; // x7
  __int64 v527; // x1
  DataManager_o *v528; // x0
  Il2CppObject *v529; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v530; // x0
  int64_t v531; // x2
  int32_t v532; // w3
  System_String_o *v533; // x4
  BattleSetupInfo_o *v534; // x5
  FollowerInfo_o *v535; // x6
  PartyListViewItem_o *v536; // x7
  Il2CppObject *Master_object; // x0
  __int64 v538; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v539; // x8
  struct QuestTree___c__DisplayClass44_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v542; // x1
  int32_t v543; // w9
  struct QuestTree___c__DisplayClass44_6_o *v544; // x20
  System_Collections_Generic_List_int__o *v545; // x21
  __int64 v546; // x0
  __int64 v547; // x1
  int64_t v548; // x2
  int32_t v549; // w3
  System_String_o *v550; // x4
  BattleSetupInfo_o *v551; // x5
  FollowerInfo_o *v552; // x6
  PartyListViewItem_o *v553; // x7
  __int64 v554; // x1
  System_Collections_Generic_List_object__o *v555; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v556; // x9
  __int128 v557; // q0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v559; // x2
  int32_t v560; // w3
  System_String_o *v561; // x4
  BattleSetupInfo_o *v562; // x5
  FollowerInfo_o *v563; // x6
  PartyListViewItem_o *v564; // x7
  const MethodInfo *v565; // x1
  bool v566; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v567; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v570; // x1
  int64_t v571; // x2
  int32_t v572; // w3
  System_String_o *v573; // x4
  BattleSetupInfo_o *v574; // x5
  FollowerInfo_o *v575; // x6
  PartyListViewItem_o *v576; // x7
  struct QuestTree___c__DisplayClass44_0_o *v577; // x9
  struct QuestTree___c__DisplayClass44_6_o *v578; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v581; // x9
  _QWORD *v582; // x10
  __int64 v583; // x11
  unsigned __int64 v584; // t2
  __int64 v585; // x0
  __int64 v586; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v587; // x8
  struct QuestMaster_o *questMaster_5__5; // x20
  __int64 v589; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v590; // x20
  Il2CppObject *v591; // x22
  System_Func_object__bool__o *v592; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v593; // x0
  System_Object_array *v594; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v595; // x0
  int64_t v596; // x2
  int32_t v597; // w3
  System_String_o *v598; // x4
  BattleSetupInfo_o *v599; // x5
  FollowerInfo_o *v600; // x6
  PartyListViewItem_o *v601; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v602; // x8
  __int64 mapIdx_5__12; // x0
  UserQuestEntity_o *v604; // x27
  int32_t v605; // w9
  struct QuestTree___c__DisplayClass44_1_o *v606; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v608; // x0
  __int64 v609; // x1
  SpotEntity_array *v610; // x20
  int v611; // w25
  il2cpp_array_size_t k; // w26
  __int64 v613; // x21
  __int64 v614; // x0
  __int64 v615; // x1
  SpotEntity_o *v616; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v618; // x24
  __int64 v619; // x0
  __int64 v620; // x1
  unsigned int v621; // w0
  __int64 v622; // x1
  System_Collections_Generic_List_object__o *v623; // x0
  MapControl_MapInfo_o *v624; // x0
  __int64 v625; // x1
  int64_t v626; // x2
  int32_t v627; // w3
  System_String_o *v628; // x4
  BattleSetupInfo_o *v629; // x5
  FollowerInfo_o *v630; // x6
  PartyListViewItem_o *v631; // x7
  System_Collections_Generic_List_object__o *v632; // x0
  Il2CppObject *v633; // x1
  struct System_Object_array *v634; // x8
  _QWORD *v635; // x9
  __int64 v636; // x10
  Il2CppClass **v637; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v638; // x0
  System_Object_array *v639; // x0
  __int64 v640; // x1
  int64_t v641; // x2
  int32_t v642; // w3
  System_String_o *v643; // x4
  BattleSetupInfo_o *v644; // x5
  FollowerInfo_o *v645; // x6
  PartyListViewItem_o *v646; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v647; // x20
  __int64 v648; // x21
  QuestTree___c_c *v649; // x8
  System_Func_object__int__o *_9__44_6; // x22
  Il2CppObject *v651; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v653; // x2
  int32_t v654; // w3
  System_String_o *v655; // x4
  BattleSetupInfo_o *v656; // x5
  FollowerInfo_o *v657; // x6
  PartyListViewItem_o *v658; // x7
  System_Collections_Generic_IEnumerable_T__o *v659; // x23
  System_Collections_Generic_HashSet_int__o *v660; // x22
  __int64 v661; // x0
  __int64 v662; // x1
  int64_t v663; // x2
  int32_t v664; // w3
  System_String_o *v665; // x4
  BattleSetupInfo_o *v666; // x5
  FollowerInfo_o *v667; // x6
  PartyListViewItem_o *v668; // x7
  System_Collections_Generic_List_T__o *v669; // x22
  System_Func_object__bool__o *v670; // x23
  __int64 v671; // x1
  System_Collections_Generic_List_object__o *v672; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v673; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v676; // x20
  struct QuestTree___c__DisplayClass44_6_o *v677; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v679; // x0
  struct QuestTree___c__DisplayClass44_6_o *v680; // x8
  __int64 v681; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_40812360; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v685; // x22
  struct QuestTree___c__DisplayClass44_6_o *v686; // x25
  System_Collections_Generic_List_object__o *v687; // x23
  System_Predicate_object__o *_9__12; // x24
  int64_t v689; // x2
  int32_t v690; // w3
  System_String_o *v691; // x4
  BattleSetupInfo_o *v692; // x5
  FollowerInfo_o *v693; // x6
  PartyListViewItem_o *v694; // x7
  Il2CppObject *v695; // x0
  int64_t v696; // x2
  int32_t v697; // w3
  System_String_o *v698; // x4
  BattleSetupInfo_o *v699; // x5
  FollowerInfo_o *v700; // x6
  PartyListViewItem_o *v701; // x7
  __int64 v702; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v705; // x0
  int64_t v706; // x2
  int32_t v707; // w3
  System_String_o *v708; // x4
  BattleSetupInfo_o *v709; // x5
  FollowerInfo_o *v710; // x6
  PartyListViewItem_o *v711; // x7
  __int64 v712; // x1
  MapControl_MapInfo_o *v713; // x0
  __int64 v714; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v716; // x0
  int64_t v717; // x2
  int32_t v718; // w3
  System_String_o *v719; // x4
  BattleSetupInfo_o *v720; // x5
  FollowerInfo_o *v721; // x6
  PartyListViewItem_o *v722; // x7
  __int64 v723; // x1
  MapControl_WarInfo_o *v724; // x0
  struct WarEntity_o *v725; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v726; // x0
  int64_t v727; // x2
  int32_t v728; // w3
  System_String_o *v729; // x4
  BattleSetupInfo_o *v730; // x5
  FollowerInfo_o *v731; // x6
  PartyListViewItem_o *v732; // x7
  struct QuestTree___c__DisplayClass44_6_o *v733; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int64_t v736; // x2
  int32_t v737; // w3
  System_String_o *v738; // x4
  BattleSetupInfo_o *v739; // x5
  FollowerInfo_o *v740; // x6
  PartyListViewItem_o *v741; // x7
  unsigned int v742; // w0
  __int64 v743; // x1
  System_Collections_Generic_List_object__o *v744; // x0
  MapControl_WarInfo_o *v745; // x0
  __int64 v746; // x1
  _BOOL8 HasStatus; // x0
  __int64 v748; // x1
  MapControl_WarInfo_o *v749; // x0
  WarEntity_o *v750; // x0
  __int64 v751; // x1
  int v752; // w23
  bool v753; // cc
  __int64 v754; // x1
  struct QuestTree___c__DisplayClass44_6_o *v755; // x9
  MapControl_WarInfo_o *v756; // x0
  struct QuestTree___c__DisplayClass44_6_o *v757; // x8
  MapControl_SpotInfo_o *v758; // x0
  MapControl_QuestInfo_o *v759; // x0
  int64_t v760; // x2
  int32_t v761; // w3
  System_String_o *v762; // x4
  BattleSetupInfo_o *v763; // x5
  FollowerInfo_o *v764; // x6
  PartyListViewItem_o *v765; // x7
  struct MapControl_WarInfo_o *v766; // x1
  int64_t v767; // x22
  int32_t v768; // w8
  struct MapControl_SpotInfo_o *v769; // x1
  int64_t v770; // x2
  int32_t v771; // w3
  System_String_o *v772; // x4
  BattleSetupInfo_o *v773; // x5
  FollowerInfo_o *v774; // x6
  PartyListViewItem_o *v775; // x7
  __int64 v776; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v779; // x1
  struct WarEntity_o *v780; // x8
  struct QuestTree___c__DisplayClass44_6_o *v781; // x9
  struct WarEntity_o *v782; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v783; // x0
  _BOOL8 v784; // x0
  __int64 v785; // x1
  struct QuestTree___c__DisplayClass44_6_o *v786; // x8
  __int64 v787; // x1
  MapControl_WarInfo_o *v788; // x0
  int v789; // w24
  __int64 v790; // x1
  __int64 v791; // x1
  __int64 v792; // x1
  Il2CppObject *v793; // x23
  NetworkManager_c *v794; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v796; // x24
  MapControl_SpotInfo_o *v797; // x0
  MapControl_SpotInfo_o *v798; // x0
  QuestEntity_o *v799; // x0
  __int64 v800; // x1
  _BOOL8 HasFlag; // x0
  __int64 v802; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v803; // x8
  struct MapControl_SpotInfo_o *v804; // x9
  struct MapControl_MapInfo_o *v805; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v807; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v808; // x8
  struct MapControl_SpotInfo_o *v809; // x9
  struct MapControl_MapInfo_o *v810; // x8
  MapControl_SpotInfo_o *v811; // x0
  UserQuestEntity_o *v812; // x0
  bool v813; // w8
  struct QuestTree___c__DisplayClass44_6_o *v814; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v817; // x1
  struct QuestTree___c__DisplayClass44_6_o *v818; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v820; // x0
  __int64 v821; // x1
  int64_t v822; // x2
  int32_t v823; // w3
  System_String_o *v824; // x4
  BattleSetupInfo_o *v825; // x5
  FollowerInfo_o *v826; // x6
  PartyListViewItem_o *v827; // x7
  _QWORD *v828; // x20
  __int64 v829; // x8
  int v830; // w21
  int v831; // w24
  __int64 v832; // x8
  System_Collections_Generic_List_object__o *v833; // x0
  struct System_Object_array *v834; // x8
  _QWORD *v835; // x9
  __int64 v836; // x10
  Il2CppClass **v837; // x8
  int64_t v838; // x2
  int32_t v839; // w3
  System_String_o *v840; // x4
  BattleSetupInfo_o *v841; // x5
  FollowerInfo_o *v842; // x6
  PartyListViewItem_o *v843; // x7
  System_Collections_Generic_List_object__o *v844; // x20
  QuestTree___c_c *v845; // x8
  System_Comparison_T__o *_9__44_11; // x21
  Il2CppObject *v847; // x22
  struct QuestTree___c_StaticFields *v848; // x0
  int64_t v849; // x2
  int32_t v850; // w3
  System_String_o *v851; // x4
  BattleSetupInfo_o *v852; // x5
  FollowerInfo_o *v853; // x6
  PartyListViewItem_o *v854; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v855; // x0
  int64_t v856; // x2
  int32_t v857; // w3
  System_String_o *v858; // x4
  BattleSetupInfo_o *v859; // x5
  FollowerInfo_o *v860; // x6
  PartyListViewItem_o *v861; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v862; // x0
  int64_t v863; // x2
  int32_t v864; // w3
  System_String_o *v865; // x4
  BattleSetupInfo_o *v866; // x5
  FollowerInfo_o *v867; // x6
  PartyListViewItem_o *v868; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v869; // x0
  int64_t v870; // x2
  int32_t v871; // w3
  System_String_o *v872; // x4
  BattleSetupInfo_o *v873; // x5
  FollowerInfo_o *v874; // x6
  PartyListViewItem_o *v875; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v876; // x0
  int64_t v877; // x2
  int32_t v878; // w3
  System_String_o *v879; // x4
  BattleSetupInfo_o *v880; // x5
  FollowerInfo_o *v881; // x6
  PartyListViewItem_o *v882; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v883; // x0
  int64_t v884; // x2
  int32_t v885; // w3
  System_String_o *v886; // x4
  BattleSetupInfo_o *v887; // x5
  FollowerInfo_o *v888; // x6
  PartyListViewItem_o *v889; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v890; // x0
  int64_t v891; // x2
  int32_t v892; // w3
  System_String_o *v893; // x4
  BattleSetupInfo_o *v894; // x5
  FollowerInfo_o *v895; // x6
  PartyListViewItem_o *v896; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v897; // x0
  int64_t v898; // x2
  int32_t v899; // w3
  System_String_o *v900; // x4
  BattleSetupInfo_o *v901; // x5
  FollowerInfo_o *v902; // x6
  PartyListViewItem_o *v903; // x7
  Il2CppObject *v904; // x0
  __int64 v905; // x1
  int64_t v906; // x2
  int32_t v907; // w3
  System_String_o *v908; // x4
  BattleSetupInfo_o *v909; // x5
  FollowerInfo_o *v910; // x6
  PartyListViewItem_o *v911; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v912; // x0
  System_Collections_Generic_List_Enumerator_T__o v913[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v914; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o **v915; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v917; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v921; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v923; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v923 = this;
  if ( (byte_4BFA87D & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1C2E12C(&System_Comparison_MapControl_QuestInfo__TypeInfo, v9);
    sub_1C2E12C(&System_Comparison_MapControl_WarInfo__TypeInfo, v10);
    sub_1C2E12C(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventStatusMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapGimmickMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v19);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPickupMaster___, v20);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SpotMaster___, v21);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SpotRoadMaster___, v22);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, v23);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, v24);
    sub_1C2E12C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v25);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, v26);
    sub_1C2E12C(&DataManager_TypeInfo, v27);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v28);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v29);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___, v30);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v31);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v32);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v33);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v34);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v35);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Count_QuestEntity___, v36);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v37);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v38);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v39);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v40);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_QuestEntity___, v41);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v42);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v43);
    sub_1C2E12C(&System_Func_MapControl_SpotInfo__int__TypeInfo, v44);
    sub_1C2E12C(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v45);
    sub_1C2E12C(&System_Func_WarEntity__bool__TypeInfo, v46);
    sub_1C2E12C(&System_Func_QuestEntity__bool__TypeInfo, v47);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int___ctor___77687000, v48);
    sub_1C2E12C(&System_Collections_Generic_HashSet_int__TypeInfo, v49);
    sub_1C2E12C(&long___TypeInfo, v50);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v51);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v52);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v53);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v54);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v55);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v56);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v57);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v58);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v59);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v60);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v61);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v62);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v63);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v64);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v65);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v66);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v67);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v68);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v69);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v70);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v71);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v72);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v73);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v74);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v75);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v76);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v77);
    sub_1C2E12C(&MapControl_MapInfo_TypeInfo, v78);
    sub_1C2E12C(&NetworkManager_TypeInfo, v79);
    sub_1C2E12C(&OptionManager_TypeInfo, v80);
    sub_1C2E12C(&System_Predicate_MapControl_WarInfo__TypeInfo, v81);
    sub_1C2E12C(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v82);
    sub_1C2E12C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v83);
    sub_1C2E12C(&System_Predicate_MapControl_MapInfo__TypeInfo, v84);
    sub_1C2E12C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v85);
    sub_1C2E12C(&System_Predicate_MapControl_QuestInfo__TypeInfo, v86);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v87);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v88);
    sub_1C2E12C(&MapControl_SpotInfo_TypeInfo, v89);
    sub_1C2E12C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__, v90);
    sub_1C2E12C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__, v91);
    sub_1C2E12C(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__, v92);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v93);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_0_TypeInfo, v94);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v95);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v96);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v97);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_1_TypeInfo, v98);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v99);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_2_TypeInfo, v100);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v101);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_3_TypeInfo, v102);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v103);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_4_TypeInfo, v104);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v105);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_5_TypeInfo, v106);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v107);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v108);
    sub_1C2E12C(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v109);
    sub_1C2E12C(&QuestTree___c__DisplayClass44_6_TypeInfo, v110);
    sub_1C2E12C(&QuestTree___c_TypeInfo, v111);
    sub_1C2E12C(&WarEntity_TypeInfo, v112);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)sub_1C2E12C(&MapControl_WarInfo_TypeInfo, v113);
    v8 = v923;
    byte_4BFA87D = 1;
  }
  v921 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v917 = 0LL;
  mapGimmickInfo = 0LL;
  v914 = 0LL;
  v915 = &v923;
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v115 = (Il2CppObject *)sub_1C2E378(QuestTree___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v115, 0LL);
      v116 = v923;
      v923->fields.__8__2 = (struct QuestTree___c__DisplayClass44_0_o *)v115;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v116->fields.__8__2, (int64_t)v115, v117, v118, v119, v120, v121, v122);
      _8__2 = v923->fields.__8__2;
      if ( !_8__2 )
        sub_1C2E388(v123, v124);
      _8__2->fields.targetWarId = v923->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v127 = v923;
      v923->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v127->fields._dataManager_5__2,
        (int64_t)Instance,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133);
      dataManager_5__2 = v923->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C2E388(0LL, v134);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapMaster___);
      v138 = v923->fields._dataManager_5__2;
      if ( !v138 )
        sub_1C2E388(0LL, v136);
      v139 = DataManager__GetMasterData_object_(
               v138,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SpotMaster___);
      v140 = v923;
      v923->fields._spotMaster_5__3 = (struct SpotMaster_o *)v139;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v140->fields._spotMaster_5__3,
        (int64_t)v139,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      v148 = v923->fields._dataManager_5__2;
      if ( !v148 )
        sub_1C2E388(0LL, v147);
      v149 = DataManager__GetMasterData_object_(
               v148,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v150 = v923;
      v923->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v149;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v150->fields._blankEarthSpotMaster_5__4,
        (int64_t)v149,
        v151,
        v152,
        v153,
        v154,
        v155,
        v156);
      v158 = v923->fields._dataManager_5__2;
      if ( !v158 )
        sub_1C2E388(0LL, v157);
      v159 = DataManager__GetMasterData_object_(
               v158,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
      v160 = v923;
      v923->fields._questMaster_5__5 = (struct QuestMaster_o *)v159;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v160->fields._questMaster_5__5,
        (int64_t)v159,
        v161,
        v162,
        v163,
        v164,
        v165,
        v166);
      v168 = v923->fields._dataManager_5__2;
      if ( !v168 )
        sub_1C2E388(0LL, v167);
      v169 = DataManager__GetMasterData_object_(
               v168,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v170 = v923;
      v923->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v169;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v170->fields._questPhaseMaster_5__6,
        (int64_t)v169,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
      v178 = v923->fields._dataManager_5__2;
      if ( !v178 )
        sub_1C2E388(0LL, v177);
      v180 = DataManager__GetMasterData_object_(
               v178,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
      v181 = v923->fields._dataManager_5__2;
      if ( !v181 )
        sub_1C2E388(0LL, v179);
      v183 = DataManager__GetMasterData_object_(
               v181,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v184 = v923->fields._dataManager_5__2;
      if ( !v184 )
        sub_1C2E388(0LL, v182);
      v186 = DataManager__GetMasterData_object_(
               v184,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v187 = v923->fields._dataManager_5__2;
      if ( !v187 )
        sub_1C2E388(0LL, v185);
      v189 = DataManager__GetMasterData_object_(
               v187,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v190 = v923->fields._dataManager_5__2;
      if ( !v190 )
        sub_1C2E388(0LL, v188);
      v191 = DataManager__GetMasterData_object_(
               v190,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v192 = v923;
      v923->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v191;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v192->fields._spotRoadMaster_5__7,
        (int64_t)v191,
        v193,
        v194,
        v195,
        v196,
        v197,
        v198);
      v200 = v923->fields._dataManager_5__2;
      if ( !v200 )
        sub_1C2E388(0LL, v199);
      v201 = DataManager__GetMasterData_object_(
               v200,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v202 = v923;
      v923->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v201;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v202->fields._mapGimmickMaster_5__8,
        (int64_t)v201,
        v203,
        v204,
        v205,
        v206,
        v207,
        v208);
      v210 = v923->fields._dataManager_5__2;
      if ( !v210 )
        sub_1C2E388(0LL, v209);
      v211 = DataManager__GetMasterData_object_(
               v210,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v212 = v923;
      v923->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v211;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v212->fields._questPickupMaster_5__9,
        (int64_t)v211,
        v213,
        v214,
        v215,
        v216,
        v217,
        v218);
      v219 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v219,
        (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v220 = v923;
      v923->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v219;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v220->fields._eventStatusQuestMismatchDictionary_5__10,
        (int64_t)v219,
        v221,
        v222,
        v223,
        v224,
        v225,
        v226);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v923->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v227 = (Il2CppObject *)sub_1C2E378(QuestTree___c__DisplayClass44_1_TypeInfo);
      System_Object___ctor(v227, 0LL);
      v228 = v923;
      v923->fields.__8__1 = (struct QuestTree___c__DisplayClass44_1_o *)v227;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v228->fields.__8__1, (int64_t)v227, v229, v230, v231, v232, v233, v234);
      v236 = v923->fields._dataManager_5__2;
      if ( !v236 )
        sub_1C2E388(0LL, v235);
      v237 = DataManager__GetMasterData_object_(
               v236,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v237 )
        sub_1C2E388(0LL, v238);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v237,
                                                                       (const MethodInfo_327A404 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v240 = (Il2CppObject *)v923->fields.__8__2;
      v241 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v241,
        v240,
        Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v242 = System_Linq_Enumerable__SingleOrDefault_object__50371536(
               Entitys,
               (System_Func_TSource__bool__o *)v241,
               (const MethodInfo_3009BD0 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v242 )
        sub_1C2E388(0LL, v243);
      _8__1 = v923->fields.__8__1;
      if ( !_8__1 )
        sub_1C2E388(v242, v243);
      klass_low = LODWORD(v242[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1C2E388(v242, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C2E388(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v248 = (Il2CppObject *)v923->fields.__8__1;
      v249 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v249,
        v248,
        Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1C2E388(v250, v251);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v249,
                (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v253 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v254 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v254 )
          sub_1C2E388(0LL, v253);
        System_Collections_Generic_List_object___RemoveAt(
          v254,
          v253,
          (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v255 = v923->fields.__8__1;
      if ( !v255 )
        sub_1C2E388(Index, v253);
      v256 = _4__this->fields.mapControlRootInfo;
      if ( !v256 )
        sub_1C2E388(0LL, v253);
      v257 = MapControl_RootInfo__AddChild(v256, v255->fields.warId, v923->fields._nowTime_5__11, 0LL);
      v258 = v923;
      v923->fields._warInfo_5__14 = v257;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v258->fields._warInfo_5__14,
        (int64_t)v257,
        v259,
        v260,
        v261,
        v262,
        v263,
        v264);
      warInfo_5__14 = v923->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C2E388(0LL, v265);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v274 = v923->fields._warInfo_5__14;
        if ( !v274 )
          sub_1C2E388(0LL, v267);
        EventId = MapControl_WarInfo__GetEventId(v274, 0LL);
        if ( !v180 )
          sub_1C2E388(EventId, v276);
        v277 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v180,
                 &entity,
                 EventId,
                 (const MethodInfo_327B1CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v277 )
        {
          if ( !entity )
            sub_1C2E388(v277, v267);
          v278 = v923;
          nowTime_5__11 = v923->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v280 = v923->fields._warInfo_5__14;
            if ( !v280 )
              sub_1C2E388(0LL, v267);
            MapControl_WarInfo__SetStatusCheckFlag(v280, 1, 0, 0LL);
            v278 = v923;
          }
          v281 = v278->fields._warInfo_5__14;
          if ( !v281 )
            sub_1C2E388(0LL, v267);
          v282 = MapControl_WarInfo__GetEventId(v281, 0LL);
          if ( !v183 )
            sub_1C2E388(v282, v283);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v183,
                 &v921,
                 v282,
                 (const MethodInfo_327B1CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v921 )
              sub_1C2E388(0LL, v284);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v921, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1C2E388(0LL, v285);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v923->fields._nowTime_5__11, 0LL) )
              {
                v287 = v923->fields._warInfo_5__14;
                if ( !v287 )
                  sub_1C2E388(0LL, v286);
                v288 = MapControl_WarInfo__GetEventId(v287, 0LL);
                if ( !v186 )
                  sub_1C2E388(v288, (unsigned int)v288);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v186, v288, 0LL);
                if ( NowEntity )
                {
                  v291 = v923->fields._warInfo_5__14;
                  if ( !v291 )
                    sub_1C2E388(0LL, v289);
                  v292 = MapControl_WarInfo__GetEventId(v291, 0LL);
                  if ( !v189 )
                    sub_1C2E388(v292, (unsigned int)v292);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v189,
                                        v292,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v295 = v923->fields.__8__1;
                  if ( !v295 )
                    sub_1C2E388(MismatchQuestList, v294);
                  v296 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v923->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C2E388(0LL, v294);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v295->fields.warId,
                    v296,
                    (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v298 = v923->fields._nowTime_5__11;
          v299 = (System_Int64_array *)sub_1C2E1D4(long___TypeInfo, 3LL);
          v301 = entity;
          if ( !entity )
            sub_1C2E388(v299, v300);
          if ( !v299 )
            sub_1C2E388(0LL, v300);
          max_length = v299->max_length;
          if ( !max_length )
            sub_1C2E390(v299, v300);
          v299->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1C2E390(v299, v300);
          v299->m_Items[1] = (int64_t)v301[5].monitor;
          if ( max_length <= 2 )
            sub_1C2E390(v299, v300);
          v299->m_Items[2] = (int64_t)v301[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v298, v299, 0LL);
        }
      }
      v303 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v303 )
        sub_1C2E388(0LL, v267);
      items = v303->fields._items;
      v305 = (Il2CppObject *)v923->fields._warInfo_5__14;
      v306 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v303->fields._version;
      if ( !items )
        sub_1C2E388(v303, v305);
      size = v303->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v303,
          v305,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
      }
      else
      {
        v308 = &items->obj.klass + size;
        v303->fields._size = size + 1;
        v308[4] = (Il2CppClass *)v305;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v308 + 4), (int64_t)v305, v268, v269, v270, v271, v272, v273);
      }
      v393 = v923->fields._warInfo_5__14;
      if ( !v393 )
        sub_1C2E388(v309, v310);
      if ( !MasterData_object )
        sub_1C2E388(v309, v310);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v393->fields.warId, 0LL);
      v395 = v923;
      v923->fields._mapList_5__15 = List;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v395->fields._mapList_5__15,
        (int64_t)List,
        v396,
        v397,
        v398,
        v399,
        v400,
        v401);
      v389 = v923;
      mapList_5__15 = v923->fields._mapList_5__15;
      v923->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C2E388(v387, v388);
      mapCount_5__13 = mapList_5__15->max_length;
      v391 = 0;
      v389->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_116;
    case 1:
      v313 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v313 )
        sub_1C2E388(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C2E388(0LL, method);
      v315 = SpotRoadMaster__getList(spotRoadMaster_5__7, v313->fields.mapId, 0LL);
      v317 = v315;
      if ( !v315 )
        sub_1C2E388(0LL, v316);
      v318 = v315->max_length;
      if ( v318 >= 1 )
      {
        for ( i = 0; i != v318; ++i )
        {
          v320 = sub_1C2E378(QuestTree___c__DisplayClass44_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v320, 0LL);
          if ( i >= v317->max_length )
            sub_1C2E390(v321, v322);
          v323 = v317->m_Items[i];
          if ( !v323 )
            sub_1C2E388(v321, v322);
          if ( !v320 )
            sub_1C2E388(v321, v322);
          *(_DWORD *)(v320 + 16) = v323->fields.id;
          if ( !_4__this )
            sub_1C2E388(v321, v322);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v325 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v325,
            (Il2CppObject *)v320,
            Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1C2E388(v326, v327);
          v328 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v325,
                   (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v329 = v328;
          if ( v328 != -1 )
          {
            v330 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v330 )
              sub_1C2E388(0LL, v329);
            System_Collections_Generic_List_object___RemoveAt(
              v330,
              v329,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v923->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C2E388(0LL, v329);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v320 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v323, &spotRoadInfo, 0LL);
          v339 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v339 )
            sub_1C2E388(0LL, v332);
          v340 = (Il2CppObject *)spotRoadInfo;
          v341 = v339->fields._items;
          v342 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v339->fields._version;
          if ( !v341 )
            sub_1C2E388(v339, v340);
          v343 = v339->fields._size;
          if ( (unsigned int)v343 >= v341->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v339,
              v340,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v342[4] + 192LL) + 112LL));
          }
          else
          {
            v344 = &v341->obj.klass + v343;
            v339->fields._size = v343 + 1;
            v344[4] = (Il2CppClass *)v340;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v344 + 4), (int64_t)v340, v333, v334, v335, v336, v337, v338);
          }
        }
      }
      v345 = v923->fields.__8__1;
      if ( !v345 )
        sub_1C2E388(v315, v316);
      mapGimmickMaster_5__8 = v923->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C2E388(0LL, v316);
      v347 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v345->fields.mapId, 0LL);
      v355 = v347;
      if ( !v347 )
        sub_1C2E388(0LL, v348);
      v356 = v347->max_length;
      if ( v356 >= 1 )
      {
        for ( j = 0; j != v356; ++j )
        {
          v358 = sub_1C2E378(QuestTree___c__DisplayClass44_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v358, 0LL);
          if ( j >= v355->max_length )
            sub_1C2E390(v359, v360);
          v361 = v355->m_Items[j];
          if ( !v361 )
            sub_1C2E388(v359, v360);
          if ( !v358 )
            sub_1C2E388(v359, v360);
          *(_DWORD *)(v358 + 16) = v361->fields.id;
          if ( !_4__this )
            sub_1C2E388(v359, v360);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v363 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v363,
            (Il2CppObject *)v358,
            Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1C2E388(v364, v365);
          v366 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v363,
                   (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v367 = v366;
          if ( v366 != -1 )
          {
            v368 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v368 )
              sub_1C2E388(0LL, v367);
            System_Collections_Generic_List_object___RemoveAt(
              v368,
              v367,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v369 = v923->fields._mapInfo_5__16;
          if ( !v369 )
            sub_1C2E388(0LL, v367);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v369, *(_DWORD *)(v358 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v377 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v377 )
            sub_1C2E388(0LL, v370);
          v378 = (Il2CppObject *)mapGimmickInfo;
          v379 = v377->fields._items;
          v380 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v377->fields._version;
          if ( !v379 )
            sub_1C2E388(v377, v378);
          v381 = v377->fields._size;
          if ( (unsigned int)v381 >= v379->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v377,
              v378,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v380[4] + 192LL) + 112LL));
          }
          else
          {
            v382 = &v379->obj.klass + v381;
            v377->fields._size = v381 + 1;
            v382[4] = (Il2CppClass *)v378;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v382 + 4), (int64_t)v378, v371, v372, v373, v374, v375, v376);
          }
        }
      }
      v383 = v923;
      v923->fields.__2__current = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v383->fields.__2__current, 0LL, v349, v350, v351, v352, v353, v354);
      v384 = v923;
      v385 = 2;
      goto LABEL_328;
    case 2:
      v8->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (PartyOrganizationUtility_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1C2E0D0(p_mapInfo_5__16, 0LL, v2, v3, v4, v5, v6, v7);
      v389 = v923;
      mapCount_5__13 = v923->fields._mapCount_5__13;
      v391 = v923->fields._mapIdx_5__12 + 1;
      v923->fields._mapIdx_5__12 = v391;
LABEL_116:
      if ( v391 < mapCount_5__13 )
      {
        v403 = v389->fields._mapList_5__15;
        if ( !v403 )
          sub_1C2E388(v387, v388);
        if ( v391 >= v403->max_length )
          sub_1C2E390(v387, v388);
        v404 = v403->m_Items[v391];
        if ( !v404 )
          sub_1C2E388(v387, v388);
        v405 = v389->fields.__8__1;
        if ( !v405 )
          sub_1C2E388(v387, v388);
        v405->fields.mapId = v404->fields.id;
        v406 = v389->fields._warInfo_5__14;
        if ( !v406 )
          sub_1C2E388(v387, v388);
        mapInfoList = (System_Collections_Generic_List_object__o *)v406->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v405->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v405,
              Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v405->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v405->fields.__9__3,
              (int64_t)_9__3,
              v409,
              v410,
              v411,
              v412,
              v413,
              v414);
          }
          v387 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v388 = (unsigned int)v387;
          if ( (_DWORD)v387 != -1 )
          {
            v415 = v923->fields._warInfo_5__14;
            if ( !v415 )
              sub_1C2E388(v387, (unsigned int)v387);
            v416 = (System_Collections_Generic_List_object__o *)v415->fields.mapInfoList;
            if ( !v416 )
              sub_1C2E388(0LL, v388);
            System_Collections_Generic_List_object___RemoveAt(
              v416,
              v388,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C2E388(v387, v388);
        v417 = v923->fields.__8__1;
        if ( !v417 )
          sub_1C2E388(v387, v388);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v417->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v417,
            Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v417->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v417->fields.__9__4,
            (int64_t)_9__4,
            v420,
            v421,
            v422,
            v423,
            v424,
            v425);
        }
        if ( !allMapInfoList )
          sub_1C2E388(v387, v388);
        v426 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v427 = (unsigned int)v426;
        if ( (_DWORD)v426 != -1 )
        {
          v428 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v428 )
            sub_1C2E388(0LL, v427);
          System_Collections_Generic_List_object___RemoveAt(
            v428,
            v427,
            (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v429 = v923->fields.__8__1;
        if ( !v429 )
          sub_1C2E388(v426, v427);
        v430 = v923->fields._warInfo_5__14;
        if ( !v430 )
          sub_1C2E388(0LL, v427);
        v431 = MapControl_WarInfo__AddChild(v430, v429->fields.mapId, 0LL);
        v432 = v923;
        v923->fields._mapInfo_5__16 = v431;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v432->fields._mapInfo_5__16,
          (int64_t)v431,
          v433,
          v434,
          v435,
          v436,
          v437,
          v438);
        v446 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v446 )
          sub_1C2E388(0LL, v439);
        v447 = v446->fields._items;
        v448 = (Il2CppObject *)v923->fields._mapInfo_5__16;
        v449 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v446->fields._version;
        if ( !v447 )
          sub_1C2E388(v446, v448);
        v450 = v446->fields._size;
        if ( (unsigned int)v450 >= v447->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v446,
            v448,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v449[4] + 192LL) + 112LL));
        }
        else
        {
          v451 = &v447->obj.klass + v450;
          v446->fields._size = v450 + 1;
          v451[4] = (Il2CppClass *)v448;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v451 + 4), (int64_t)v448, v440, v441, v442, v443, v444, v445);
        }
        v606 = v923->fields.__8__1;
        if ( !v606 )
          sub_1C2E388(v452, v453);
        spotMaster_5__3 = v923->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C2E388(0LL, v453);
        v608 = SpotMaster__getList(spotMaster_5__3, v606->fields.mapId, 0LL);
        v610 = v608;
        if ( !v608 )
          sub_1C2E388(0LL, v609);
        v611 = v608->max_length;
        if ( v611 >= 1 )
        {
          for ( k = 0; k != v611; ++k )
          {
            v613 = sub_1C2E378(QuestTree___c__DisplayClass44_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v613, 0LL);
            if ( k >= v610->max_length )
              sub_1C2E390(v614, v615);
            v616 = v610->m_Items[k];
            if ( !v616 )
              sub_1C2E388(v614, v615);
            if ( !v613 )
              sub_1C2E388(v614, v615);
            *(_DWORD *)(v613 + 16) = v616->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v618 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v618,
              (Il2CppObject *)v613,
              Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1C2E388(v619, v620);
            v621 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v618,
                     (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v622 = v621;
            if ( v621 != -1 )
            {
              v623 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v623 )
                sub_1C2E388(0LL, v622);
              System_Collections_Generic_List_object___RemoveAt(
                v623,
                v622,
                (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v624 = v923->fields._mapInfo_5__16;
            if ( !v624 )
              sub_1C2E388(0LL, v622);
            spotInfo = MapControl_MapInfo__AddChild(v624, *(_DWORD *)(v613 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v616, &spotInfo, 0LL);
            v632 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v632 )
              sub_1C2E388(0LL, v625);
            v633 = (Il2CppObject *)spotInfo;
            v634 = v632->fields._items;
            v635 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v632->fields._version;
            if ( !v634 )
              sub_1C2E388(v632, v633);
            v636 = v632->fields._size;
            if ( (unsigned int)v636 >= v634->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v632,
                v633,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v635[4] + 192LL) + 112LL));
            }
            else
            {
              v637 = &v634->obj.klass + v636;
              v632->fields._size = v636 + 1;
              v637[4] = (Il2CppClass *)v633;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v637 + 4), (int64_t)v633, v626, v627, v628, v629, v630, v631);
            }
          }
        }
        v638 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v923->fields._mapInfo_5__16,
                 v923->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v639 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v638,
                 (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v647 = (System_Collections_Generic_IEnumerable_TSource__o *)v639;
        if ( !v639 )
          sub_1C2E388(0LL, v640);
        if ( *(_QWORD *)&v639->max_length )
        {
          v648 = sub_1C2E378(QuestTree___c__DisplayClass44_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v648, 0LL);
          v649 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v649 = QuestTree___c_TypeInfo;
          }
          _9__44_6 = (System_Func_object__int__o *)v649->static_fields->__9__44_6;
          if ( !_9__44_6 )
          {
            if ( !v649->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v649);
              v649 = QuestTree___c_TypeInfo;
            }
            v651 = (Il2CppObject *)v649->static_fields->__9;
            _9__44_6 = (System_Func_object__int__o *)sub_1C2E378(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__44_6,
              v651,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__44_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__44_6;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&static_fields->__9__44_6,
              (int64_t)_9__44_6,
              v653,
              v654,
              v655,
              v656,
              v657,
              v658);
          }
          v659 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v647,
                                                                  (System_Func_TSource__TResult__o *)_9__44_6,
                                                                  (const MethodInfo_30032B4 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v660 = (System_Collections_Generic_HashSet_int__o *)sub_1C2E378(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_55710956(
            v660,
            v659,
            (const MethodInfo_35214EC *)Method_System_Collections_Generic_HashSet_int___ctor___77687000);
          if ( !v648 )
            sub_1C2E388(v661, v662);
          *(_QWORD *)(v648 + 16) = v660;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v648 + 16), (int64_t)v660, v663, v664, v665, v666, v667, v668);
          v669 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v670 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v670,
            (Il2CppObject *)v648,
            Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v669,
            (System_Func_T__bool__o *)v670,
            (const MethodInfo_2FC0C88 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v672 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v672 )
            sub_1C2E388(0LL, v671);
          System_Collections_Generic_List_object___AddRange(
            v672,
            (System_Collections_Generic_IEnumerable_T__o *)v647,
            (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v673 = v923;
        v923->fields.__2__current = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v673->fields.__2__current, 0LL, v641, v642, v643, v644, v645, v646);
        result = 1;
        v923->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C2E388(v387, v388);
      v454 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v455 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v455 = QuestTree___c_TypeInfo;
      }
      _9__44_2 = (System_Comparison_T__o *)v455->static_fields->__9__44_2;
      if ( !_9__44_2 )
      {
        if ( !v455->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v455);
          v455 = QuestTree___c_TypeInfo;
        }
        v457 = (Il2CppObject *)v455->static_fields->__9;
        _9__44_2 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__44_2,
          v457,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__,
          0LL);
        v458 = QuestTree___c_TypeInfo->static_fields;
        v458->__9__44_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__44_2;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v458->__9__44_2,
          (int64_t)_9__44_2,
          v459,
          v460,
          v461,
          v462,
          v463,
          v464);
      }
      if ( !v454 )
        sub_1C2E388(v387, v388);
      System_Collections_Generic_List_object___Sort_57070448(
        v454,
        _9__44_2,
        (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v465 = v923;
      v923->fields.__8__1 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v465->fields.__8__1, 0LL, v466, v467, v468, v469, v470, v471);
      v472 = v923;
      v923->fields._warInfo_5__14 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v472->fields._warInfo_5__14, 0LL, v473, v474, v475, v476, v477, v478);
      v479 = v923;
      v923->fields._mapList_5__15 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v479->fields._mapList_5__15, 0LL, v480, v481, v482, v483, v484, v485);
      v486 = (Il2CppObject *)sub_1C2E378(QuestTree___c__DisplayClass44_6_TypeInfo);
      System_Object___ctor(v486, 0LL);
      v487 = v923;
      v923->fields.__8__3 = (struct QuestTree___c__DisplayClass44_6_o *)v486;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v487->fields.__8__3, (int64_t)v486, v488, v489, v490, v491, v492, v493);
      v494 = v923->fields._nowTime_5__11;
      v495 = (MapControl_WarInfo_o *)sub_1C2E378(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v495, v494, 0LL);
      v496 = v923;
      v923->fields._warInfo_5__14 = v495;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v496->fields._warInfo_5__14,
        (int64_t)v495,
        v497,
        v498,
        v499,
        v500,
        v501,
        v502);
      v503 = (MapControl_MapInfo_o *)sub_1C2E378(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v503, 0LL);
      v504 = v923;
      v923->fields._mapInfo_5__16 = v503;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v504->fields._mapInfo_5__16,
        (int64_t)v503,
        v505,
        v506,
        v507,
        v508,
        v509,
        v510);
      v511 = (MapControl_SpotInfo_o *)sub_1C2E378(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v511, 0LL);
      v512 = v923;
      v923->fields._spotInfo_5__17 = v511;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v512->fields._spotInfo_5__17,
        (int64_t)v511,
        v513,
        v514,
        v515,
        v516,
        v517,
        v518);
      v519 = (WarEntity_o *)sub_1C2E378(WarEntity_TypeInfo);
      WarEntity___ctor(v519, 0LL);
      v520 = v923;
      v923->fields._warEnt_5__18 = v519;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v520->fields._warEnt_5__18,
        (int64_t)v519,
        v521,
        v522,
        v523,
        v524,
        v525,
        v526);
      v528 = v923->fields._dataManager_5__2;
      if ( !v528 )
        sub_1C2E388(0LL, v527);
      v529 = DataManager__GetMasterData_object_(
               v528,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v530 = v923;
      v923->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v529;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v530->fields._userQuestMaster_5__19,
        (int64_t)v529,
        v531,
        v532,
        v533,
        v534,
        v535,
        v536);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v539 = v923;
      _8__3 = v923->fields.__8__3;
      if ( !_8__3 )
        sub_1C2E388(Master_object, v538);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v539->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v923 )
        sub_1C2E388(isSavedMemoryMode, v542);
      if ( isSavedMemoryMode )
        v543 = 500;
      else
        v543 = 5000;
      v544 = v923->fields.__8__3;
      v923->fields._breakInterval_5__22 = v543;
      v545 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v545,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v544 )
        sub_1C2E388(v546, v547);
      v544->fields.spotInfoList = v545;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v544->fields, (int64_t)v545, v548, v549, v550, v551, v552, v553);
      v923->fields._cnt_5__23 = 0;
      v555 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v555 )
        sub_1C2E388(0LL, v554);
      System_Collections_Generic_List_object___GetEnumerator(
        v913,
        v555,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v556 = v923;
      v557 = *(_OWORD *)&v913[0].fields._list;
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v923->fields.__7__wrap24;
      v913[1] = v913[0];
      v923->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v913[0].fields._current;
      *(_OWORD *)&v556->fields.__7__wrap24.fields._list = v557;
      sub_1C2E0D0(p__7__wrap24, 0LL, v559, v560, v561, v562, v563, v564);
      v8 = v923;
LABEL_164:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v566 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v567 = v923;
        if ( !v566 )
          break;
        current = v923->fields.__7__wrap24.fields._current;
        ++v923->fields._cnt_5__23;
        if ( !current )
          sub_1C2E388(v567, v565);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1C2E388(0LL, v570);
        v8 = v923;
        v577 = v923->fields.__8__2;
        if ( !v577 )
          sub_1C2E388(Mine, v570);
        if ( Mine->fields.warId == v577->fields.targetWarId )
        {
          v578 = v923->fields.__8__3;
          if ( !v578 )
            sub_1C2E388(Mine, v570);
          spotInfoList = v578->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C2E388(0LL, v570);
          spotId = (unsigned int)current->fields.spotId;
          v581 = spotInfoList->fields._items;
          v582 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v581 )
            sub_1C2E388(spotInfoList, spotId);
          v583 = spotInfoList->fields._size;
          if ( (unsigned int)v583 >= v581->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v582[4] + 192LL) + 112LL));
            v8 = v923;
          }
          else
          {
            spotInfoList->fields._size = v583 + 1;
            v581->m_Items[v583 + 1] = spotId;
          }
        }
        HIDWORD(v584) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v584) = HIDWORD(v584);
        if ( (unsigned int)(v584 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v571, v572, v573, v574, v575, v576);
          v384 = v923;
          v385 = 3;
LABEL_328:
          v384->fields.__1__state = v385;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(v923, v565);
      v587 = v923;
      questMaster_5__5 = v923->fields._questMaster_5__5;
      v923->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v587->fields.__7__wrap24.fields._index = 0LL;
      v587->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1C2E388(v585, v586);
      v589 = sub_1C2E260(*((_QWORD *)&questMaster_5__5->klass->vtable._1_Finalize.methodPtr
                         + 2
                         * *((unsigned __int16 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___
                           + 40)));
      v590 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(struct QuestMaster_o *))(v589 + 8))(questMaster_5__5);
      v591 = (Il2CppObject *)v923->fields.__8__3;
      v592 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v592,
        v591,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v593 = System_Linq_Enumerable__Where_object_(
               v590,
               (System_Func_TSource__bool__o *)v592,
               (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v594 = System_Linq_Enumerable__ToArray_object_(
               v593,
               (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v595 = v923;
      v923->fields._questList_5__24 = (struct QuestEntity_array *)v594;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v595->fields._questList_5__24,
        (int64_t)v594,
        v596,
        v597,
        v598,
        v599,
        v600,
        v601);
      v602 = v923;
      v923->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v602->fields._questList_5__24,
                       (const MethodInfo_2FECD94 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v923;
      v604 = 0LL;
      v605 = v923->fields._mapCount_5__13;
      v923->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_164;
    case 4:
      v311 = v8->fields._mapCount_5__13;
      v312 = 0LL;
      v8->fields.__1__state = -1;
      goto LABEL_475;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1C2E388(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v605 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1C2E388(mapIdx_5__12, method);
    if ( v605 >= questList_5__24->max_length )
      sub_1C2E390(mapIdx_5__12, method);
    v676 = questList_5__24->m_Items[v605];
    if ( !v676 )
      sub_1C2E388(mapIdx_5__12, method);
    v677 = v8->fields.__8__3;
    if ( !v677 )
      sub_1C2E388(mapIdx_5__12, method);
    v677->fields.questId = v676->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, method);
      byte_4BF81D5 = 1;
    }
    v679 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v679 = NetworkManager_TypeInfo;
    }
    v680 = v923->fields.__8__3;
    if ( !v680 )
      sub_1C2E388(v679, method);
    if ( !userQuestMaster_5__19 )
      sub_1C2E388(v679, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v917,
           v679->static_fields->userIdNumber,
           v680->fields.questId,
           0LL) )
    {
      if ( !v917 )
        sub_1C2E388(0LL, v681);
      QuestPhase = UserQuestEntity__getQuestPhase(v917, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_40812360 = (MapEntity_o *)QuestEntity__getSpotId_40812360(v676, QuestPhase + 1, 0LL);
    v685 = v923;
    v686 = v923->fields.__8__3;
    if ( !v686 )
      sub_1C2E388(SpotId_40812360, warId);
    if ( v686->fields.nowSpotId == (_DWORD)SpotId_40812360 )
    {
      if ( !_4__this )
        sub_1C2E388(SpotId_40812360, warId);
    }
    else
    {
      v686->fields.nowSpotId = (int)SpotId_40812360;
      if ( !_4__this )
        sub_1C2E388(SpotId_40812360, warId);
      v687 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v686->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v686,
          Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v686->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v686->fields.__9__12,
          (int64_t)_9__12,
          v689,
          v690,
          v691,
          v692,
          v693,
          v694);
      }
      if ( !v687 )
        sub_1C2E388(SpotId_40812360, warId);
      v695 = System_Collections_Generic_List_object___Find(
               v687,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v685->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v695;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v685->fields._spotInfo_5__17,
        (int64_t)v695,
        v696,
        v697,
        v698,
        v699,
        v700,
        v701);
      spotInfo_5__17 = v923->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C2E388(0LL, v702);
      SpotId_40812360 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_40812360;
      if ( v923->fields._nowMapId_5__20 != (_DWORD)SpotId_40812360 )
      {
        v923->fields._nowMapId_5__20 = (int)SpotId_40812360;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_40812360, 0LL);
        v705 = v923;
        v923->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v705->fields._mapInfo_5__16,
          (int64_t)MapInfoByMapID,
          v706,
          v707,
          v708,
          v709,
          v710,
          v711);
        v713 = v923->fields._mapInfo_5__16;
        if ( !v713 )
          sub_1C2E388(0LL, v712);
        SpotId_40812360 = MapControl_MapInfo__GetMine(v713, 0LL);
        if ( !SpotId_40812360 )
          sub_1C2E388(0LL, v714);
        warId = (unsigned int)SpotId_40812360->fields.warId;
        if ( v923->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v923->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v716 = v923;
          v923->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v716->fields._warInfo_5__14,
            (int64_t)WarInfoByWarID,
            v717,
            v718,
            v719,
            v720,
            v721,
            v722);
          v724 = v923->fields._warInfo_5__14;
          if ( !v724 )
            sub_1C2E388(0LL, v723);
          v725 = MapControl_WarInfo__GetMine(v724, 0LL);
          v726 = v923;
          v923->fields._warEnt_5__18 = v725;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v726->fields._warEnt_5__18,
            (int64_t)v725,
            v727,
            v728,
            v729,
            v730,
            v731,
            v732);
        }
      }
    }
    v733 = v923->fields.__8__3;
    if ( !v733 )
      sub_1C2E388(SpotId_40812360, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v733->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v733,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v733->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v733->fields.__9__13,
        (int64_t)_9__13,
        v736,
        v737,
        v738,
        v739,
        v740,
        v741);
    }
    if ( !allQuestInfoList )
      sub_1C2E388(SpotId_40812360, warId);
    v742 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v743 = v742;
    if ( v742 != -1 )
    {
      v744 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v744 )
        sub_1C2E388(0LL, v743);
      System_Collections_Generic_List_object___RemoveAt(
        v744,
        v743,
        (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v745 = v923->fields._warInfo_5__14;
    if ( !v917 )
    {
      if ( !v745 )
        sub_1C2E388(0LL, v743);
      goto LABEL_377;
    }
    if ( !v745 )
      sub_1C2E388(0LL, v743);
    MapControl_WarInfo__SetStatusCheckFlag(v745, 1, 0, 0LL);
    if ( !v917 )
      sub_1C2E388(0LL, v746);
    HasStatus = UserQuestEntity__HasStatus(v917, 8, 0LL);
    if ( !HasStatus )
    {
      v749 = v923->fields._warInfo_5__14;
      if ( !v749 )
        sub_1C2E388(0LL, v748);
      goto LABEL_379;
    }
    if ( !v917 )
      sub_1C2E388(HasStatus, v748);
    if ( v917->fields.challengeNum >= 1 )
    {
      v749 = v923->fields._warInfo_5__14;
      if ( !v749 )
        sub_1C2E388(0LL, v748);
LABEL_379:
      MapControl_WarInfo__SetStatusCheckFlag(v749, 4, 0, 0LL);
    }
    if ( !v917 )
      sub_1C2E388(0LL, v748);
    v753 = UserQuestEntity__getClearNum(v917, 0LL) < 1;
    v745 = v923->fields._warInfo_5__14;
    if ( v753 )
    {
      if ( !v745 )
        sub_1C2E388(0LL, v754);
LABEL_377:
      MapControl_WarInfo__SetStatusCheckFlag(v745, 2, 0, 0LL);
      v752 = 0;
      goto LABEL_391;
    }
    if ( !v745 )
      sub_1C2E388(0LL, v754);
    v750 = MapControl_WarInfo__GetMine(v745, 0LL);
    if ( !v750 )
      sub_1C2E388(0LL, v751);
    v755 = v923->fields.__8__3;
    if ( !v755 )
      sub_1C2E388(v750, v751);
    if ( v750->fields.lastQuestId == v755->fields.questId )
    {
      v756 = v923->fields._warInfo_5__14;
      if ( !v756 )
        sub_1C2E388(0LL, v751);
      v752 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v756, 8, 1, 0LL);
    }
    else
    {
      v752 = 1;
    }
LABEL_391:
    v757 = v923->fields.__8__3;
    if ( !v757 )
      sub_1C2E388(v750, v751);
    v758 = v923->fields._spotInfo_5__17;
    if ( !v758 )
      sub_1C2E388(0LL, v751);
    v759 = MapControl_SpotInfo__AddChild(v758, v757->fields.questId, 0LL);
    v766 = v923->fields._warInfo_5__14;
    if ( !v766 )
      sub_1C2E388(v759, 0LL);
    v767 = (int64_t)v759;
    if ( !v759 )
      sub_1C2E388(0LL, v766);
    v768 = v766->fields.warId;
    v759->fields._WarInfo_k__BackingField = v766;
    v759->fields.warId = v768;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v759->fields._WarInfo_k__BackingField,
      (int64_t)v766,
      v760,
      v761,
      v762,
      v763,
      v764,
      v765);
    v769 = v923->fields._spotInfo_5__17;
    *(_QWORD *)(v767 + 96) = v769;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v767 + 96), (int64_t)v769, v770, v771, v772, v773, v774, v775);
    *(_QWORD *)(v767 + 144) = QuestTree__GetEndTime(_4__this, (MapControl_QuestInfo_o *)v767, 0LL);
    warEnt_5__18 = v923->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C2E388(0LL, v776);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v780 = v923->fields._warEnt_5__18;
      if ( !v780 )
        sub_1C2E388(IsStartTypeQuest, v779);
      v781 = v923->fields.__8__3;
      if ( !v781 )
        sub_1C2E388(IsStartTypeQuest, v779);
      if ( v780->fields.targetId == v781->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v923->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_410;
      }
    }
    v782 = v923->fields._warEnt_5__18;
    if ( !v782 )
      sub_1C2E388(IsStartTypeQuest, v779);
    v783 = v923->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v783 )
      sub_1C2E388(0LL, v779);
    v784 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v783,
             v782->fields.id,
             &value,
             (const MethodInfo_32D6660 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v784 )
    {
      v786 = v923->fields.__8__3;
      if ( !v786 )
        sub_1C2E388(v784, v785);
      if ( !value )
        sub_1C2E388(0LL, v785);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v786->fields.questId,
             (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_410:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v767, 0, 0, 0, 0LL, 0, 0LL);
        *(_DWORD *)(v767 + 36) = 0;
LABEL_411:
        v789 = 1;
        goto LABEL_412;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v676, (MapControl_QuestInfo_o *)v767, v923->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_411;
    v788 = v923->fields._warInfo_5__14;
    if ( !v788 )
      sub_1C2E388(0LL, v787);
    MapControl_WarInfo__SetStatusCheckFlag(v788, 1, 0, 0LL);
    v789 = 0;
LABEL_412:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v767, 0LL) )
    {
      if ( ((v752 | v789) & 1) != 0 )
      {
        v312 = v604;
      }
      else
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v767, 0LL) == 8 )
        {
          v312 = v604;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v793 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, v792);
            byte_4BF81D5 = 1;
          }
          v794 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v794 = NetworkManager_TypeInfo;
          }
          if ( !v793 )
            sub_1C2E388(v794, v792);
          EntityFromId = UserQuestMaster__getEntityFromId(
                           (UserQuestMaster_o *)v793,
                           v794->static_fields->userIdNumber,
                           *(_DWORD *)(v767 + 16),
                           0LL);
          v312 = EntityFromId;
          if ( EntityFromId )
            v796 = EntityFromId;
          else
            v796 = v604;
          if ( !EntityFromId )
            goto LABEL_433;
          if ( !v796 )
            sub_1C2E388(EntityFromId, v791);
          if ( !UserQuestEntity__IsResetStatus(v796, 0LL) )
          {
LABEL_433:
            v797 = v923->fields._spotInfo_5__17;
            if ( !v797 )
              sub_1C2E388(0LL, v791);
            MapControl_SpotInfo__AddQuestCount(v797, 1, 0LL);
            v312 = v796;
          }
        }
        v798 = v923->fields._spotInfo_5__17;
        if ( !v798 )
          sub_1C2E388(0LL, v791);
        MapControl_SpotInfo__AddAvailableQuestId(v798, *(_DWORD *)(v767 + 16), 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v767, 0LL) == 1 )
      {
        v799 = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)v767, 0LL);
        if ( !v799 )
          sub_1C2E388(0LL, v800);
        HasFlag = QuestEntity__HasFlag(v799, 0x400000000000LL, 0LL);
        v803 = v923;
        if ( !HasFlag )
        {
          v804 = v923->fields._spotInfo_5__17;
          if ( !v804 )
            sub_1C2E388(HasFlag, v802);
          v804->fields._IsNext_k__BackingField = 1;
        }
        v805 = v803->fields._mapInfo_5__16;
        if ( !v805 )
          sub_1C2E388(HasFlag, v802);
        v805->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon((MapControl_QuestInfo_o *)v767, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v808 = v923;
        v809 = v923->fields._spotInfo_5__17;
        if ( !v809 )
          sub_1C2E388(IsDisplayQuestNextIcon, v807);
        v809->fields._IsNext_k__BackingField = 1;
        v810 = v808->fields._mapInfo_5__16;
        if ( !v810 )
          sub_1C2E388(IsDisplayQuestNextIcon, v807);
        v810->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v676, 0x8000000000LL, 0LL) )
      {
        v811 = v923->fields._spotInfo_5__17;
        if ( !v811 )
          sub_1C2E388(0LL, v790);
        MapControl_SpotInfo__AddFreeQuestCount(v811, 1, 0LL);
      }
    }
    else
    {
      v312 = v604;
    }
    v812 = v917;
    if ( v917 )
    {
      v812 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v917, 8, 0LL);
      if ( ((unsigned __int8)v812 & 1) != 0 )
      {
        if ( !v917 )
          sub_1C2E388(v812, v790);
        v813 = v917->fields.challengeNum == 0;
      }
      else
      {
        v813 = 0;
      }
    }
    else
    {
      v813 = 1;
    }
    *(_BYTE *)(v767 + 40) = v813;
    *(_DWORD *)(v767 + 44) = QuestPhase;
    v814 = v923->fields.__8__3;
    if ( !v814 )
      sub_1C2E388(v812, v790);
    questPickupMaster_5__9 = v923->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C2E388(0LL, v790);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v814->fields.questId, 0LL);
    *(_DWORD *)(v767 + 48) = Priority;
    v818 = v923->fields.__8__3;
    if ( !v818 )
      sub_1C2E388(Priority, v817);
    questPhaseMaster_5__6 = v923->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C2E388(0LL, v817);
    v820 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v818->fields.questId, 0LL);
    v828 = v820;
    if ( !v820 )
      sub_1C2E388(0LL, v821);
    v829 = v820[3];
    v830 = v829 - 1;
    if ( (int)v829 >= 1 )
    {
      v831 = 0;
      while ( 1 )
      {
        v832 = v828[v831 + 4];
        if ( !v832 )
          sub_1C2E388(v820, v821);
        v820 = MapControl_QuestInfo__AddChild(
                 (MapControl_QuestInfo_o *)v767,
                 *(_DWORD *)(v832 + 16),
                 *(_DWORD *)(v832 + 20),
                 0LL);
        if ( v830 == v831 )
          break;
        if ( (unsigned int)++v831 >= *((_DWORD *)v828 + 6) )
          sub_1C2E390(v820, v821);
      }
    }
    v833 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v833 )
      sub_1C2E388(0LL, v821);
    v834 = v833->fields._items;
    v835 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v833->fields._version;
    if ( !v834 )
      sub_1C2E388(v833, v821);
    v836 = v833->fields._size;
    if ( (unsigned int)v836 >= v834->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v833,
        (Il2CppObject *)v767,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v835[4] + 192LL) + 112LL));
    }
    else
    {
      v837 = &v834->obj.klass + v836;
      v833->fields._size = v836 + 1;
      v837[4] = (Il2CppClass *)v767;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v837 + 4), v767, v822, v823, v824, v825, v826, v827);
    }
    v8 = v923;
    v311 = v923->fields._mapCount_5__13;
    if ( v311 && !(v311 % v923->fields._breakInterval_5__22) )
    {
      v923->fields.__2__current = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v838, v839, v840, v841, v842, v843);
      v384 = v923;
      v385 = 4;
      goto LABEL_328;
    }
LABEL_475:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    v605 = v311 + 1;
    v604 = v312;
    v8->fields._mapCount_5__13 = v605;
  }
  if ( !_4__this )
    sub_1C2E388(mapIdx_5__12, method);
  v844 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v845 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v845 = QuestTree___c_TypeInfo;
  }
  _9__44_11 = (System_Comparison_T__o *)v845->static_fields->__9__44_11;
  if ( !_9__44_11 )
  {
    if ( !v845->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v845);
      v845 = QuestTree___c_TypeInfo;
    }
    v847 = (Il2CppObject *)v845->static_fields->__9;
    _9__44_11 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__44_11,
      v847,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__,
      0LL);
    v848 = QuestTree___c_TypeInfo->static_fields;
    v848->__9__44_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__44_11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v848->__9__44_11, (int64_t)_9__44_11, v849, v850, v851, v852, v853, v854);
  }
  if ( !v844 )
    sub_1C2E388(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_57070448(
    v844,
    _9__44_11,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v855 = v923;
  v923->fields.__8__3 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v855->fields.__8__3, 0LL, v856, v857, v858, v859, v860, v861);
  v862 = v923;
  v923->fields._warInfo_5__14 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v862->fields._warInfo_5__14, 0LL, v863, v864, v865, v866, v867, v868);
  v869 = v923;
  v923->fields._mapInfo_5__16 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v869->fields._mapInfo_5__16, 0LL, v870, v871, v872, v873, v874, v875);
  v876 = v923;
  v923->fields._spotInfo_5__17 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v876->fields._spotInfo_5__17, 0LL, v877, v878, v879, v880, v881, v882);
  v883 = v923;
  v923->fields._warEnt_5__18 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v883->fields._warEnt_5__18, 0LL, v884, v885, v886, v887, v888, v889);
  v890 = v923;
  v923->fields._userQuestMaster_5__19 = 0LL;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v890->fields._userQuestMaster_5__19,
    0LL,
    v891,
    v892,
    v893,
    v894,
    v895,
    v896);
  v897 = v923;
  v923->fields._questList_5__24 = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v897->fields._questList_5__24, 0LL, v898, v899, v900, v901, v902, v903);
  v904 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v904 )
    sub_1C2E388(0LL, v905);
  CommonUI__SetLoadMode((CommonUI_o *)v904, 0, 0LL);
  _4__this->fields.isInit = 1;
  v912 = v923;
  if ( v923->fields.endCallback )
  {
    v923->fields.__2__current = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v912->fields.__2__current, 0LL, v906, v907, v908, v909, v910, v911);
    v384 = v923;
    v385 = 5;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  if ( (byte_4BFA87E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4BFA87E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}