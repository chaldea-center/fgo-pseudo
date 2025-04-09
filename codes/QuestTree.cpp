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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_49B7DFA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1B4CF90(&MapControl_RootInfo_TypeInfo, v16);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_49B7DFA = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1B4D1DC(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v21;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allQuestInfoList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allSpotInfoList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v27;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allMapInfoList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v36;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.allWarInfoList, (int32_t)v36, v37, v38);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v39;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questReleaseEntList, (int32_t)v39, v40, v41);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37B4928 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_34551728(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_34548816(
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

  if ( (byte_49B7DF7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1B4CF90(&long___TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
    byte_49B7DF7 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1B4D038(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1B4D1F4(Time, v11);
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
      sub_1B4D1EC(Time, v11);
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
  _BOOL4 v38; // w8
  UserQuestEntity_o *v40; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_49B7DF3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestAddMaster___, questEnt);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserQuestMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, v10);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1B4CF90(&long___TypeInfo, v12);
    sub_1B4CF90(&NetworkManager_TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    this = (QuestTree_o *)sub_1B4CF90(&TerminalPramsManager_TypeInfo, v15);
    byte_49B7DF3 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v40 = 0LL;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v25 = (_QWORD *)sub_1B4D038(long___TypeInfo, 3LL);
  Instance = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v25 )
    goto LABEL_75;
  v26 = v25[3];
  if ( !(_DWORD)v26 || (v25[4] = Instance, (_DWORD)v26 == 1) || (v25[5] = v23, (unsigned int)v26 <= 2) )
    sub_1B4D1F4(Instance, v17);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_75;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_319D9E8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_49B57A5 )
          {
            sub_1B4CF90(&NetworkManager_TypeInfo, v17);
            byte_49B57A5 = 1;
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
                  &v40,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_56;
          Instance = (int64_t)v40;
          if ( !v40 )
            goto LABEL_75;
          if ( !UserQuestEntity__HasStatus(v40, 8, 0LL) )
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
      MapControl_QuestInfo__SetDispType_34114996(questInfo, 2, questReleaseNG, 0LL);
      goto LABEL_71;
    }
LABEL_75:
    sub_1B4D1EC(Instance, v17);
  }
  if ( !questInfo )
    goto LABEL_75;
  questInfo->fields.dispType = v37;
LABEL_71:
  if ( v36 )
    v38 = v36 != 2;
  else
    v38 = v30;
  questInfo->fields.touchType = v38;
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

  return QuestTree__CheckSpotCond_34551728(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_34551728(
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

  if ( (byte_49B7DF6 & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1B4CF90(&NetworkManager_TypeInfo, v18);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v20);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v23);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v24);
    byte_49B7DF6 = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v25);
    byte_49B5933 = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v29);
    byte_49B5933 = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v29);
    byte_49B5933 = 1;
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
      v37 = sub_1B9D620(inited);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1B9D620(inited);
    v39 = **(UnityEngine_Object_o ***)(v38 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
            sub_1B4D1EC(Instance, v29);
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
          sub_1B4D1F4(Instance, v29);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v29);
        byte_49B57A5 = 1;
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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

  return QuestTree__CheckSpotCond_34551728(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49B7DF1 & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, mapInfo);
    byte_49B7DF1 = 1;
  }
  v7 = sub_1B4D1DC(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 72), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)mapInfo, v12, v13);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v14, v15);
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
  if ( (byte_49B7DF4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_49B7DF4 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_40107160((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1B4D1EC(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B4D1EC(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1B4D1EC(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1B4D1EC(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_319D99C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1B4D1EC(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1B4D1EC(0LL, v32);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_39104196; // x0
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

  if ( (byte_49B7DF5 & 1) == 0 )
  {
    sub_1B4CF90(&System_DateTime_TypeInfo, questEnt);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    byte_49B7DF5 = 1;
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
    sub_1B4D1EC(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39104196 = NetworkManager__getTime_39104196(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_39104196;
  dateData = NetworkManager__getDateTime_39104976(Time_39104196 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_39104976(v16, 0LL).fields._dateData;
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49B7DEA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1B4CF90(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1B4CF90(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, v9);
    sub_1B4CF90(&QuestTree___c_TypeInfo, v10);
    byte_49B7DEA = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
    _9__38_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_2F2E09C *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v20,
                                                  (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1B4D1EC(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B4D1EC(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v26.fields._current[1].klass), v23) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_49B7DE0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1B4CF90(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__, v6);
    sub_1B4CF90(&QuestTree___c__DisplayClass24_0_TypeInfo, v7);
    byte_49B7DE0 = 1;
  }
  v8 = sub_1B4D1DC(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1B4D1EC(QuestInfo, v5);
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

  if ( (byte_49B7DE3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_49B7DE3 = 1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1B4D1EC(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B4D1EC(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1B4D1EC(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1B4D1EC(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1B4D1EC(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B4D1EC(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1B4D1EC(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1B4D1EC(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B4D1EC(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1B4D1EC(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1B4D1EC(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1B4D1EC(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1B4D1EC(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
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
        (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_49B7DE6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_49B7DE6 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B4D1EC(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1B4D1EC(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B4D1EC(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1B4D1EC(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B4D1EC(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B4D1EC(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1B4D1EC(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1B4D1EC(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1B4D1EC(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1B4D1EC(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_35631B8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
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
            (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B4D1EC(v34, v35);
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

  if ( (byte_49B7DE1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B4CF90(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__, v6);
    sub_1B4CF90(&QuestTree___c__DisplayClass25_0_TypeInfo, v7);
    byte_49B7DE1 = 1;
  }
  v8 = sub_1B4D1DC(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49B7DF8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_49B7DF8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    allQuestInfoList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B4D1EC(v14, v15);
    if ( LODWORD(v25.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1B4D1EC(v14, v15);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)current, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_49B7DE5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B7DE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v6);
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

  if ( (byte_49B7DDF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1B4CF90(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__, v6);
    sub_1B4CF90(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_49B7DDF = 1;
  }
  v8 = sub_1B4D1DC(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_int__o *v27; // x21
  QuestTree___c_c *v28; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v30; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Predicate_object__o *v38; // x21

  if ( (byte_49B7DE4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1B4CF90(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B4CF90(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__, v13);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__, v14);
    sub_1B4CF90(&QuestTree___c__DisplayClass31_0_TypeInfo, v15);
    sub_1B4CF90(&QuestTree___c_TypeInfo, v16);
    byte_49B7DE4 = 1;
  }
  v17 = sub_1B4D1DC(QuestTree___c__DisplayClass31_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v24, v25, v26);
  if ( !OpenedButtons )
    goto LABEL_28;
  v27 = *(System_Collections_Generic_List_int__o **)(v17 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v28 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v28 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v28->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = QuestTree___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v30, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v32, v33);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v27 )
    {
      System_Collections_Generic_List_int___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B4D1EC(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v27 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v27->fields._items;
  v36 = Method_System_Collections_Generic_List_int__Add__;
  ++v27->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v27,
      mapId,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v38 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v17,
    Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v38,
                                                                    (const MethodInfo_35808EC *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
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

  if ( (byte_49B7DE8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B4CF90(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1B4CF90(&QuestTree___c__DisplayClass35_0_TypeInfo, v7);
    byte_49B7DE8 = 1;
  }
  v8 = sub_1B4D1DC(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_49B7DDB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75467840, v3);
    sub_1B4CF90(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_49B7DDB = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56097488(
    v6,
    allWarInfoList,
    (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75467840);
  if ( !v6 )
    sub_1B4D1EC(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_3581B08 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B7DDC & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree__Init_d__17_TypeInfo, endCallback);
    byte_49B7DDC = 1;
  }
  v5 = sub_1B4D1DC(QuestTree__Init_d__17_TypeInfo);
  QuestTree__Init_d__17___ctor((QuestTree__Init_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B4D1EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endCallback, v10, v11);
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

  if ( (byte_49B7DF2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_49B7DF2 = 1;
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
    sub_1B4D1EC(mapControlRootInfo, method);
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

  if ( (byte_49B7DEC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B7DEC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_319D9E8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_34546388(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_34546388(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_49B7DED & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, warEnt);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarReleaseMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B4CF90(&long___TypeInfo, v8);
    this = (QuestTree_o *)sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49B7DED = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1B4D038(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_33:
    sub_1B4D1EC(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1B4D1F4(this, warEnt);
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

  if ( (byte_49B7DEB & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&warId);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    byte_49B7DEB = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v10);
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
  return (!WarEntity__IsEvent(Mine, 0LL) || QuestTree__IsActiveEventWar_34546388(this, v14, v15))
      && QuestTree__IsWarOpen(this, v14->fields.id, v15);
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_49B7DDD & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49B7DDD = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v6);
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

  if ( (byte_49B7DE7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_49B7DE7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1B4D1EC(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1B4D1EC(v13, v14);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1B4D1EC(this, 0LL);
  return QuestTree__CheckSpotCond_34551728(
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
    sub_1B4D1EC(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_34551728(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_34551728(
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

  if ( (byte_49B7DF9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49B7DF9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1B4D1EC(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1B4D1EC(v13, v14);
    if ( !v13 )
      sub_1B4D1EC(0LL, v14);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_49B7DE9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49B7DE9 = 1;
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
    sub_1B4D1EC(QuestInfoByWarId, v9);
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
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1B4D1EC(v13, v14);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_o *name; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x22
  bool IsExistCommand; // w21
  int32_t v21; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_49B7DEE & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1B4CF90(&SpotEntity_TypeInfo, v9);
    byte_49B7DEE = 1;
  }
  v10 = sub_1B4D1DC(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)name, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1B9D620(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1B9D620(v16);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B4D1EC(Instance, v12);
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

  v4 = QuestTree__CheckMapGimmickCond_34548816(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1B4D1EC(v4, v5);
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
    sub_1B4D1EC(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34551728(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_34551728(
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
    sub_1B4D1EC(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34551728(
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
    sub_1B4D1EC(this, nowTime);
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

  if ( (byte_49B7DDE & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_49B7DDE = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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
  if ( (byte_49B7DDA & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_49B7DDA = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B7DEF & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo, endCallback);
    byte_49B7DEF = 1;
  }
  v5 = sub_1B4D1DC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B4D1EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 48), (int32_t)endCallback, v10, v11);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49B7DF0 & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo, *(_QWORD *)&targetWarId);
    byte_49B7DF0 = 1;
  }
  v7 = sub_1B4D1DC(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 72), (int32_t)endCallback, v12, v13);
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

  if ( (byte_49B7DE2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1B4CF90(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1B4CF90(&QuestTree___c__DisplayClass29_0_TypeInfo, v7);
    byte_49B7DE2 = 1;
  }
  v8 = sub_1B4D1DC(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_DWORD *)(v8 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v4; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v17; // x22
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_49B7F86 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1B4CF90(&BlankEarthSpotMaster_TypeInfo, method);
    byte_49B7F86 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v4->fields.__7__wrap2;
    v4->fields.__1__state = -1;
    v12 = _7__wrap2 + 1;
    v4->fields.__7__wrap2 = v12;
  }
  else
  {
    if ( _1__state )
      return 0;
    mapInfo = v4->fields.mapInfo;
    v4->fields.__1__state = -1;
    if ( !mapInfo )
      goto LABEL_21;
    mapId = mapInfo->fields.mapId;
    if ( !BlankEarthSpotMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo);
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0LL) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v4->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v9 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v4->fields.__7__wrap1 = v9;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
    v12 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v12 < (int)max_length )
  {
    if ( v12 >= max_length )
      sub_1B4D1F4(this, method);
    v16 = _7__wrap1->m_Items[v12];
    if ( v16 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v4->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v16->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v17 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v16, (MapControl_SpotInfo_o *)this, 0LL);
          v4->fields.__2__current = (struct MapControl_SpotInfo_o *)v17;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(p__2__current, (int32_t)v17, v19, v20);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B4D1EC(this, method);
  }
  this->klass = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v6; // x20
  struct QuestTree_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49B7F87 & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, method);
    byte_49B7F87 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1B4D1DC(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.blankEarthSpotMaster, (int32_t)_3__blankEarthSpotMaster, v12, v13);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v6;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_49B7F88 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__17_o *)sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    byte_49B7F88 = 1;
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
        if ( !byte_49B801C )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
          byte_49B801C = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v10->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
            v13 = sub_1B9D620(v12);
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
          if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
            v14 = sub_1B9D620(v12);
          v15 = **(UnityEngine_Object_o ***)(v14 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v16 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v16;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1B4CF34(p__2__current, (int32_t)v16, v18, v19);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1B4D1EC(this, method);
      }
      v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1B9D620(v9);
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1B9D620(v9);
      v23 = **(UnityEngine_Object_o ***)(v22 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7DFB & 1) == 0 )
  {
    sub_1B4CF90(&QuestTree___c_TypeInfo, v1);
    byte_49B7DFB = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B7DFC & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49B7DFC = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1B4D1EC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B7F84 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_3_o *)sub_1B4CF90(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_49B7F84 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1B4D1EC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_343EAD0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B7F85 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_6_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49B7F85 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1B4D1EC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
  __int64 v60; // x1
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *MasterData_object; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  Il2CppObject *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  Il2CppObject *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_Collections_Generic_Dictionary_int__object__o *v101; // x21
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  System_Object_array *Entitys; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v109; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v114; // x9
  WarEntity_o *v115; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v117; // x19
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v126; // x23
  int64_t v127; // x23
  Il2CppObject *v128; // x8
  unsigned int _2__current; // w9
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 _2__current_low; // x10
  __int64 v133; // x8
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v136; // x22
  unsigned int v137; // w27
  __int64 v138; // x8
  int32_t v139; // w24
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v144; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v146; // x23
  Il2CppClass **v147; // x0
  Il2CppObject *v148; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v149; // x25
  int v150; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v152; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v153; // x8
  SpotEntity_o **v154; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v155; // t1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v163; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v164; // x25
  int v165; // w19
  unsigned int v166; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v167; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v168; // x8
  SpotRoadEntity_o **v169; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v170; // t1
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  __int64 v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  __int64 v176; // x8
  Il2CppObject *v177; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v178; // x24
  int v179; // w19
  int v180; // w25
  __int64 v181; // x8
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  __int64 v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  __int64 v187; // x8
  CGThumbnailListItem_o *p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v190; // x22
  Il2CppObject *v191; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  QuestTree___c__DisplayClass43_0_o *v195; // x22
  struct QuestTree___c__DisplayClass43_0_o **p__8__1; // x21
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  int64_t v199; // x22
  MapControl_WarInfo_o *v200; // x23
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  MapControl_MapInfo_o *v203; // x22
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  MapControl_SpotInfo_o *v206; // x22
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  WarEntity_o *v209; // x22
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  Il2CppObject *v212; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  bool v215; // zf
  int v216; // w8
  QuestEntity_o *v217; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass43_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v222; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  Il2CppObject *v226; // x0
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  WarEntity_o *Mine; // x0
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  int v239; // w25
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v242; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  struct WarEntity_o *warEnt_5__23; // x8
  int v247; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v250; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v252; // x9
  struct MapControl_MapInfo_o *v253; // x9
  bool v254; // w8
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  Il2CppObject *v257; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v258; // x21
  int v259; // w19
  int v260; // w22
  __int64 v261; // x8
  __int64 v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  __int64 v265; // x8
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v269; // x22
  Il2CppObject *v270; // x23
  struct QuestTree___c_StaticFields *v271; // x0
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  CGThumbnailListItem_o *v288; // x26
  int v289; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v290; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v291; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v292; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v293; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v295; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v299; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49B7F89 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1B4CF90(&System_Comparison_MapControl_WarInfo__TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventStatusMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapGimmickMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestAddMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SpotMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SpotRoadMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserQuestMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarAddMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v23);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestResetMaster___, v24);
    sub_1B4CF90(&DataManager_TypeInfo, v25);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v26);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v27);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v28);
    sub_1B4CF90(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v32);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v33);
    sub_1B4CF90(&long___TypeInfo, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v38);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v40);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v41);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v42);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v43);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v44);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v45);
    sub_1B4CF90(&MapControl_MapInfo_TypeInfo, v46);
    sub_1B4CF90(&NetworkManager_TypeInfo, v47);
    sub_1B4CF90(&OptionManager_TypeInfo, v48);
    sub_1B4CF90(&System_Predicate_MapControl_SpotInfo__TypeInfo, v49);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v50);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v52);
    sub_1B4CF90(&MapControl_SpotInfo_TypeInfo, v53);
    sub_1B4CF90(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, v54);
    sub_1B4CF90(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, v55);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__, v56);
    sub_1B4CF90(&QuestTree___c__DisplayClass43_0_TypeInfo, v57);
    sub_1B4CF90(&QuestTree___c_TypeInfo, v58);
    sub_1B4CF90(&WarEntity_TypeInfo, v59);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1B4CF90(&MapControl_WarInfo_TypeInfo, v60);
    byte_49B7F89 = 1;
  }
  v299 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v295 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v293 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_292;
      QuestTree__InitInfo(_4__this, 0LL);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v63, v64);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._mapMaster_5__3, (int32_t)MasterData_object, v66, v67);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v68 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v68;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v68, v69, v70);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v71 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v71;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v71, v72, v73);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v74 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v74;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._questMaster_5__6, (int32_t)v74, v75, v76);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v77 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v77;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v77, v78, v79);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v80 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v80;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v80, v81, v82);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v83 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v83;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v83, v84, v85);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v86 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v86;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v86, v87, v88);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v89 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v89;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMaster_5__11, (int32_t)v89, v90, v91);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v92 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v92;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v92, v93, v94);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v95 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v95;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v95, v96, v97);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      v98 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v98;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v98, v99, v100);
      v101 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v101,
        (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v101;
      sub_1B4CF34(
        (CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v101,
        v102,
        v103);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_292;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_292;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_319CC20 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._warList_5__16, (int32_t)Entitys, v105, v106);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_292;
      max_length = warList_5__16->max_length;
      v109 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_125;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_262;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_292;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      goto LABEL_275;
    default:
      return 0;
  }
  while ( v109 < max_length )
  {
    v114 = v2->fields._warList_5__16;
    if ( !v114 )
      goto LABEL_292;
    if ( v109 >= v114->max_length )
      goto LABEL_146;
    v115 = v114->m_Items[v109];
    if ( !v115 )
      goto LABEL_292;
    if ( !_4__this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_292;
    id = v115->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_292;
    v117 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v117, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_292;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_292;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v117, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v117, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_292;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v299,
               (int32_t)this,
               (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v299;
          if ( !v299 )
            goto LABEL_292;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v299, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)entity;
            if ( !entity )
              goto LABEL_292;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v117, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_292;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v126 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v117, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_292;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v126->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_292;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v127 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1B4D038(long___TypeInfo, 3LL);
        v128 = entity;
        if ( !entity || !this )
          goto LABEL_292;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_146;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_146;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v128[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_146;
        this->fields.endCallback = (struct System_Action_o *)v128[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v127, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_292;
    v130 = *(_QWORD *)&this->fields.__1__state;
    v131 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v130 )
      goto LABEL_292;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v130 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v117,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      v133 = v130 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v133 + 32) = v117;
      sub_1B4CF34((CGThumbnailListItem_o *)(v133 + 32), (int32_t)v117, v118, v119);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_292;
    v136 = this;
    v292 = this->fields.__2__current;
    if ( (int)v292 >= 1 )
    {
      if ( !(_DWORD)v292 )
        goto LABEL_146;
      v137 = 0;
      v290 = this;
      v291 = v117;
      while ( 1 )
      {
        v138 = *((_QWORD *)&v136->fields.__4__this + (int)v137);
        if ( !v138 )
          goto LABEL_292;
        v139 = *(_DWORD *)(v138 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__AddChild(v117, v139, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_292;
        items = allMapInfoList->fields._items;
        v144 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_292;
        size = allMapInfoList->fields._size;
        v146 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
        }
        else
        {
          v147 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v147[4] = (Il2CppClass *)v146;
          sub_1B4CF34((CGThumbnailListItem_o *)(v147 + 4), (int32_t)v146, v140, v141);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotMaster__getList((SpotMaster_o *)this, v139, 0LL);
        if ( !this )
          goto LABEL_292;
        v148 = this->fields.__2__current;
        v149 = this;
        v150 = (_DWORD)v148 - 1;
        if ( (int)v148 >= 1 )
          break;
LABEL_89:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v146,
                                                                   v293->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_292;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v293->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v139,
                                                                   0LL);
        if ( !this )
          goto LABEL_292;
        v163 = this->fields.__2__current;
        v164 = this;
        v165 = (_DWORD)v163 - 1;
        if ( (int)v163 >= 1 )
        {
          v166 = 0;
          while ( 1 )
          {
            v167 = &v164->klass + (int)v166;
            v170 = v167[4];
            v169 = (SpotRoadEntity_o **)(v167 + 4);
            v168 = v170;
            if ( !v170 || !v146 )
              goto LABEL_292;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v146,
                                                                       (int32_t)v168->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v166 >= LODWORD(v164->fields.__2__current) )
              goto LABEL_146;
            QuestTree__SetupSpotRoadInfo(_4__this, *v169, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_292;
            method = (const MethodInfo *)spotRoadInfo;
            v173 = *(_QWORD *)&this->fields.__1__state;
            v174 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v173 )
              goto LABEL_292;
            v175 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v175 >= *(_DWORD *)(v173 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
            }
            else
            {
              v176 = v173 + 8 * v175;
              LODWORD(this->fields.__2__current) = v175 + 1;
              *(_QWORD *)(v176 + 32) = method;
              sub_1B4CF34((CGThumbnailListItem_o *)(v176 + 32), (int32_t)method, v171, v172);
            }
            if ( v165 == v166 )
              break;
            if ( ++v166 >= LODWORD(v164->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v2 = v293;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v293->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v139,
                                                                   0LL);
        if ( !this )
          goto LABEL_292;
        v177 = this->fields.__2__current;
        v178 = this;
        v179 = (_DWORD)v177 - 1;
        if ( (int)v177 >= 1 )
        {
          v180 = 0;
          while ( 1 )
          {
            v181 = *((_QWORD *)&v178->fields.__4__this + v180);
            if ( !v181 )
              goto LABEL_292;
            if ( !v146 )
              goto LABEL_292;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v146, *(_DWORD *)(v181 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_292;
            method = (const MethodInfo *)mapGimmickInfo;
            v184 = *(_QWORD *)&this->fields.__1__state;
            v185 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v184 )
              goto LABEL_292;
            v186 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
            }
            else
            {
              v187 = v184 + 8 * v186;
              LODWORD(this->fields.__2__current) = v186 + 1;
              *(_QWORD *)(v187 + 32) = method;
              sub_1B4CF34((CGThumbnailListItem_o *)(v187 + 32), (int32_t)method, v182, v183);
            }
            if ( v179 == v180 )
              break;
            if ( (unsigned int)++v180 >= LODWORD(v178->fields.__2__current) )
              goto LABEL_146;
          }
        }
        v117 = v291;
        v136 = v290;
        if ( ++v137 == (_DWORD)v292 )
          goto LABEL_122;
        if ( v137 >= LODWORD(v290->fields.__2__current) )
          goto LABEL_146;
      }
      for ( i = 0; i < LODWORD(v149->fields.__2__current); ++i )
      {
        v152 = &v149->klass + (int)i;
        v155 = v152[4];
        v154 = (SpotEntity_o **)(v152 + 4);
        v153 = v155;
        if ( !v155 || !v146 )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   v146,
                                                                   (int32_t)v153->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v149->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v154, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_292;
        method = (const MethodInfo *)spotInfo;
        v158 = *(_QWORD *)&this->fields.__1__state;
        v159 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v158 )
          goto LABEL_292;
        v160 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
        }
        else
        {
          v161 = v158 + 8 * v160;
          LODWORD(this->fields.__2__current) = v160 + 1;
          *(_QWORD *)(v161 + 32) = method;
          sub_1B4CF34((CGThumbnailListItem_o *)(v161 + 32), (int32_t)method, v156, v157);
        }
        if ( v150 == i )
          goto LABEL_89;
      }
LABEL_146:
      sub_1B4D1F4(this, method);
    }
LABEL_122:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1B4CF34(p__2__current, 0, v134, v135);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_125:
    max_length = v2->fields._warCount_5__19;
    v109 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v109;
  }
  if ( !_4__this )
    goto LABEL_292;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v190 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v190 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v191 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v190 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v190, v191, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Comparison_MapControl_WarInfo__o *)v190;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)v190, v193, v194);
  }
  if ( !allWarInfoList )
    goto LABEL_292;
  System_Collections_Generic_List_object___Sort_56106144(
    allWarInfoList,
    v190,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v195 = (QuestTree___c__DisplayClass43_0_o *)sub_1B4D1DC(QuestTree___c__DisplayClass43_0_TypeInfo);
  QuestTree___c__DisplayClass43_0___ctor(v195, 0LL);
  v2->fields.__8__1 = v195;
  p__8__1 = &v2->fields.__8__1;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v195, v197, v198);
  v199 = v2->fields._nowTime_5__17;
  v200 = (MapControl_WarInfo_o *)sub_1B4D1DC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v200, v199, 0LL);
  v2->fields._warInfo_5__20 = v200;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, (int32_t)v200, v201, v202);
  v203 = (MapControl_MapInfo_o *)sub_1B4D1DC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v203, 0LL);
  v2->fields._mapInfo_5__21 = v203;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v203, v204, v205);
  v206 = (MapControl_SpotInfo_o *)sub_1B4D1DC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v206, 0LL);
  v2->fields._spotInfo_5__22 = v206;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v206, v207, v208);
  v209 = (WarEntity_o *)sub_1B4D1DC(WarEntity_TypeInfo);
  WarEntity___ctor(v209, 0LL);
  v2->fields._warEnt_5__23 = v209;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, (int32_t)v209, v210, v211);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  v212 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v212;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v212, v213, v214);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_292;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v215 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
  v216 = v215 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v216;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_292;
    v217 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v295 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, method);
      byte_49B57A5 = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_292;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v295,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v295;
      if ( !v295 )
        goto LABEL_292;
      QuestPhase = UserQuestEntity__getQuestPhase(v295, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__getSpotId_40045508(v217, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_292;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_292;
      v222 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1B4CF34((CGThumbnailListItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v224, v225);
      }
      if ( !v222 )
        goto LABEL_292;
      v226 = System_Collections_Generic_List_object___Find(
               v222,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v293;
      v293->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v226;
      sub_1B4CF34((CGThumbnailListItem_o *)&v293->fields._spotInfo_5__22, (int32_t)v226, v227, v228);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v293->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_292;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v293->fields._mapInfoNow_5__27 != MapID )
      {
        v293->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v293->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1B4CF34((CGThumbnailListItem_o *)&v293->fields._mapInfo_5__21, (int32_t)MapInfoByMapID, v231, v232);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v293->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_292;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v293->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v293->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v293->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1B4CF34((CGThumbnailListItem_o *)&v293->fields._warInfo_5__20, (int32_t)WarInfoByWarID, v234, v235);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v293->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_292;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v293->fields._warEnt_5__23 = Mine;
          sub_1B4CF34((CGThumbnailListItem_o *)&v293->fields._warEnt_5__23, (int32_t)Mine, v237, v238);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_292;
    if ( !v295 )
      goto LABEL_191;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v295;
    if ( !v295 )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v295, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_179;
    if ( !v295 )
      goto LABEL_292;
    if ( v295->fields.challengeNum >= 1 )
    {
LABEL_179:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_292;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v295;
    if ( !v295 )
      goto LABEL_292;
    if ( UserQuestEntity__getClearNum(v295, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_292;
LABEL_191:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v239 = 0;
      goto LABEL_192;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v295 )
      goto LABEL_292;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v295->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_292;
    v239 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_292;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_292;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_192:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_292;
    v242 = this;
    if ( !this )
      goto LABEL_292;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v240, v241);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v242->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1B4CF34((CGThumbnailListItem_o *)&v242->fields._questPhaseMaster_5__7, (int32_t)spotInfo_5__22, v244, v245);
    if ( !_4__this )
      goto LABEL_292;
    v242->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v242,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_292;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_206;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_292;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)value;
      if ( !value )
        goto LABEL_292;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_206:
        v242->fields.__4__this = 0LL;
LABEL_210:
        v247 = 1;
        goto LABEL_211;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v217, (MapControl_QuestInfo_o *)v242, v2->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_210;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_292;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v247 = 0;
LABEL_211:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v242, 0LL) )
    {
      if ( ((v239 | v247) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v242, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1B4D038(long___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_292;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_146;
          this->fields.__4__this = (struct QuestTree_o *)_1__state;
          if ( !Master_object )
            goto LABEL_292;
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (System_Int64_array *)this,
                                   (const MethodInfo_319CF78 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v295 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v295, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_292;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_292;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v242->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v242, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v242,
                                                                   0LL);
        if ( !this )
          goto LABEL_292;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v250 = v2->fields._spotInfo_5__22;
          if ( !v250 )
            goto LABEL_292;
          v250->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_292;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v242,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v252 = v2->fields._spotInfo_5__22;
        if ( !v252 )
          goto LABEL_292;
        v252->fields._IsNext_k__BackingField = 1;
        v253 = v2->fields._mapInfo_5__21;
        if ( !v253 )
          goto LABEL_292;
        v253->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v217, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_292;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v295 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v295, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v295 )
          goto LABEL_292;
        v254 = v295->fields.challengeNum == 0;
      }
      else
      {
        v254 = 0;
      }
    }
    else
    {
      v254 = 1;
    }
    LOBYTE(v242->fields.__8__1) = v254;
    HIDWORD(v242->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_292;
    LODWORD(v242->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_292;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_292;
    v257 = this->fields.__2__current;
    v258 = this;
    v259 = (_DWORD)v257 - 1;
    if ( (int)v257 >= 1 )
    {
      v260 = 0;
      while ( 1 )
      {
        v261 = *((_QWORD *)&v258->fields.__4__this + v260);
        if ( !v261 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v242,
                                                                   *(_DWORD *)(v261 + 16),
                                                                   *(_DWORD *)(v261 + 20),
                                                                   0LL);
        if ( v259 == v260 )
          goto LABEL_255;
        if ( (unsigned int)++v260 >= LODWORD(v258->fields.__2__current) )
          goto LABEL_146;
      }
LABEL_292:
      sub_1B4D1EC(this, method);
    }
LABEL_255:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_292;
    v262 = *(_QWORD *)&this->fields.__1__state;
    v263 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v262 )
      goto LABEL_292;
    v264 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v264 >= *(_DWORD *)(v262 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v242,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
    }
    else
    {
      v265 = v262 + 8 * v264;
      LODWORD(this->fields.__2__current) = v264 + 1;
      *(_QWORD *)(v265 + 32) = v242;
      sub_1B4CF34((CGThumbnailListItem_o *)(v265 + 32), (int32_t)v242, v255, v256);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v288 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1B4CF34(v288, 0, v266, v267);
      v289 = 2;
      goto LABEL_290;
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_292;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v269 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v269 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v270 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v269 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v269, v270, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, 0LL);
    v271 = QuestTree___c_TypeInfo->static_fields;
    v271->__9__43_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v269;
    sub_1B4CF34((CGThumbnailListItem_o *)&v271->__9__43_1, (int32_t)v269, v272, v273);
  }
  if ( !allQuestInfoList )
    goto LABEL_292;
  System_Collections_Generic_List_object___Sort_56106144(
    allQuestInfoList,
    v269,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v274, v275);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, 0, v276, v277);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, 0, v278, v279);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, 0, v280, v281);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, 0, v282, v283);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, 0, v284, v285);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_292;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    v288 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1B4CF34(v288, 0, v286, v287);
    v289 = 3;
LABEL_290:
    LODWORD(v288[-1].fields._ThumbnailSpritePath_k__BackingField) = v289;
    return 1;
  }
LABEL_275:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_292;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_292;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_292;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_292;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_292;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_292;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_292;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0LL);
  if ( !_4__this )
    goto LABEL_292;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v4; // x8
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
  QuestTree_o *_4__this; // x19
  Il2CppObject *v112; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  __int64 v116; // x0
  __int64 v117; // x1
  struct QuestTree___c__DisplayClass44_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v125; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v127; // x0
  Il2CppObject *v128; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  __int64 v132; // x1
  DataManager_o *v133; // x0
  Il2CppObject *v134; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v135; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  __int64 v138; // x1
  DataManager_o *v139; // x0
  Il2CppObject *v140; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v141; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  __int64 v144; // x1
  DataManager_o *v145; // x0
  Il2CppObject *v146; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  __int64 v150; // x1
  DataManager_o *v151; // x0
  __int64 v152; // x1
  Il2CppObject *v153; // x24
  DataManager_o *v154; // x0
  __int64 v155; // x1
  Il2CppObject *v156; // x23
  DataManager_o *v157; // x0
  __int64 v158; // x1
  Il2CppObject *v159; // x22
  DataManager_o *v160; // x0
  __int64 v161; // x1
  DataManager_o *v162; // x0
  Il2CppObject *v163; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  __int64 v167; // x1
  DataManager_o *v168; // x0
  Il2CppObject *v169; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v170; // x0
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  __int64 v173; // x1
  DataManager_o *v174; // x0
  Il2CppObject *v175; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  System_Collections_Generic_Dictionary_int__object__o *v179; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  Il2CppObject *v183; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v184; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  __int64 v187; // x1
  DataManager_o *v188; // x0
  Il2CppObject *v189; // x0
  __int64 v190; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v192; // x27
  System_Func_object__bool__o *v193; // x26
  Il2CppObject *v194; // x0
  __int64 v195; // x1
  struct QuestTree___c__DisplayClass44_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v200; // x27
  System_Predicate_object__o *v201; // x26
  __int64 v202; // x0
  __int64 v203; // x1
  __int64 Index; // x0
  __int64 v205; // x1
  System_Collections_Generic_List_object__o *v206; // x0
  struct QuestTree___c__DisplayClass44_1_o *v207; // x9
  MapControl_RootInfo_o *v208; // x0
  struct MapControl_WarInfo_o *v209; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v210; // x0
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  __int64 v213; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v215; // x1
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  MapControl_WarInfo_o *v218; // x0
  __int64 EventId; // x0
  __int64 v220; // x1
  _BOOL8 v221; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v222; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v224; // x0
  MapControl_WarInfo_o *v225; // x0
  __int64 v226; // x0
  __int64 v227; // x1
  __int64 v228; // x1
  __int64 v229; // x1
  __int64 v230; // x1
  MapControl_WarInfo_o *v231; // x0
  __int64 v232; // x0
  __int64 v233; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v235; // x0
  __int64 v236; // x1
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v238; // x1
  struct QuestTree___c__DisplayClass44_1_o *v239; // x8
  Il2CppObject *v240; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v242; // x21
  System_Int64_array *v243; // x0
  __int64 v244; // x1
  Il2CppObject *v245; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v247; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v249; // x1
  _QWORD *v250; // x9
  __int64 size; // x10
  Il2CppClass **v252; // x8
  __int64 v253; // x0
  __int64 v254; // x1
  int32_t v255; // w9
  struct QuestTree___c__DisplayClass44_1_o *v256; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v258; // x0
  __int64 v259; // x1
  SpotRoadEntity_array *v260; // x20
  int v261; // w25
  il2cpp_array_size_t i; // w26
  __int64 v263; // x21
  __int64 v264; // x0
  __int64 v265; // x1
  SpotRoadEntity_o *v266; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v268; // x24
  __int64 v269; // x0
  __int64 v270; // x1
  unsigned int v271; // w0
  __int64 v272; // x1
  System_Collections_Generic_List_object__o *v273; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v275; // x1
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  System_Collections_Generic_List_object__o *v278; // x0
  Il2CppObject *v279; // x1
  struct System_Object_array *v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  Il2CppClass **v283; // x8
  struct QuestTree___c__DisplayClass44_1_o *v284; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v286; // x0
  __int64 v287; // x1
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  MapGimmickEntity_array *v290; // x20
  int v291; // w24
  il2cpp_array_size_t j; // w25
  __int64 v293; // x21
  __int64 v294; // x0
  __int64 v295; // x1
  MapGimmickEntity_o *v296; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v298; // x23
  __int64 v299; // x0
  __int64 v300; // x1
  unsigned int v301; // w0
  __int64 v302; // x1
  System_Collections_Generic_List_object__o *v303; // x0
  MapControl_MapInfo_o *v304; // x0
  __int64 v305; // x1
  int32_t v306; // w2
  const MethodInfo *v307; // x3
  System_Collections_Generic_List_object__o *v308; // x0
  Il2CppObject *v309; // x1
  struct System_Object_array *v310; // x8
  _QWORD *v311; // x9
  __int64 v312; // x10
  Il2CppClass **v313; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v314; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v315; // x8
  int v316; // w9
  CGThumbnailListItem_o *p_mapInfo_5__16; // x8
  __int64 v318; // x0
  __int64 v319; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v320; // x8
  int32_t mapCount_5__13; // w10
  int32_t v322; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v324; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v326; // x0
  int32_t v327; // w2
  const MethodInfo *v328; // x3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v330; // x10
  MapEntity_o *v331; // x9
  struct QuestTree___c__DisplayClass44_1_o *v332; // x22
  struct MapControl_WarInfo_o *v333; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  struct MapControl_WarInfo_o *v338; // x8
  System_Collections_Generic_List_object__o *v339; // x0
  struct QuestTree___c__DisplayClass44_1_o *v340; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  __int64 v345; // x0
  __int64 v346; // x1
  System_Collections_Generic_List_object__o *v347; // x0
  struct QuestTree___c__DisplayClass44_1_o *v348; // x8
  MapControl_WarInfo_o *v349; // x0
  struct MapControl_MapInfo_o *v350; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v351; // x0
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  __int64 v354; // x1
  int32_t v355; // w2
  const MethodInfo *v356; // x3
  System_Collections_Generic_List_object__o *v357; // x0
  struct System_Object_array *v358; // x8
  Il2CppObject *v359; // x1
  _QWORD *v360; // x9
  __int64 v361; // x10
  Il2CppClass **v362; // x8
  __int64 v363; // x0
  __int64 v364; // x1
  System_Collections_Generic_List_object__o *v365; // x20
  QuestTree___c_c *v366; // x8
  System_Comparison_T__o *_9__44_2; // x21
  Il2CppObject *v368; // x22
  struct QuestTree___c_StaticFields *v369; // x0
  int32_t v370; // w2
  const MethodInfo *v371; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v372; // x0
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v375; // x0
  int32_t v376; // w2
  const MethodInfo *v377; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v378; // x0
  int32_t v379; // w2
  const MethodInfo *v380; // x3
  Il2CppObject *v381; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v382; // x0
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  int64_t v385; // x21
  MapControl_WarInfo_o *v386; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v387; // x0
  int32_t v388; // w2
  const MethodInfo *v389; // x3
  MapControl_MapInfo_o *v390; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v391; // x0
  int32_t v392; // w2
  const MethodInfo *v393; // x3
  MapControl_SpotInfo_o *v394; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v395; // x0
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  WarEntity_o *v398; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v399; // x0
  int32_t v400; // w2
  const MethodInfo *v401; // x3
  __int64 v402; // x1
  DataManager_o *v403; // x0
  Il2CppObject *v404; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v405; // x0
  int32_t v406; // w2
  const MethodInfo *v407; // x3
  Il2CppObject *Master_object; // x0
  __int64 v409; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v410; // x8
  struct QuestTree___c__DisplayClass44_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v413; // x1
  int32_t v414; // w9
  struct QuestTree___c__DisplayClass44_6_o *v415; // x20
  System_Collections_Generic_List_int__o *v416; // x21
  __int64 v417; // x0
  __int64 v418; // x1
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  __int64 v421; // x1
  System_Collections_Generic_List_object__o *v422; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v423; // x9
  __int128 v424; // q0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v426; // w2
  const MethodInfo *v427; // x3
  const MethodInfo *v428; // x1
  bool v429; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v430; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v433; // x1
  int32_t v434; // w2
  const MethodInfo *v435; // x3
  struct QuestTree___c__DisplayClass44_0_o *v436; // x9
  struct QuestTree___c__DisplayClass44_6_o *v437; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v440; // x9
  _QWORD *v441; // x10
  __int64 v442; // x11
  unsigned __int64 v443; // t2
  __int64 v444; // x0
  __int64 v445; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v446; // x8
  struct QuestMaster_o *questMaster_5__5; // x20
  __int64 v448; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v449; // x20
  Il2CppObject *v450; // x22
  System_Func_object__bool__o *v451; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v452; // x0
  System_Object_array *v453; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v454; // x0
  int32_t v455; // w2
  const MethodInfo *v456; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v457; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v459; // w9
  struct QuestTree___c__DisplayClass44_1_o *v460; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v462; // x0
  __int64 v463; // x1
  SpotEntity_array *v464; // x20
  int v465; // w25
  il2cpp_array_size_t k; // w26
  __int64 v467; // x21
  __int64 v468; // x0
  __int64 v469; // x1
  SpotEntity_o *v470; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v472; // x24
  __int64 v473; // x0
  __int64 v474; // x1
  unsigned int v475; // w0
  __int64 v476; // x1
  System_Collections_Generic_List_object__o *v477; // x0
  MapControl_MapInfo_o *v478; // x0
  __int64 v479; // x1
  int32_t v480; // w2
  const MethodInfo *v481; // x3
  System_Collections_Generic_List_object__o *v482; // x0
  Il2CppObject *v483; // x1
  struct System_Object_array *v484; // x8
  _QWORD *v485; // x9
  __int64 v486; // x10
  Il2CppClass **v487; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v488; // x0
  System_Object_array *v489; // x0
  __int64 v490; // x1
  int32_t v491; // w2
  const MethodInfo *v492; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v493; // x20
  __int64 v494; // x21
  QuestTree___c_c *v495; // x8
  System_Func_object__int__o *_9__44_6; // x22
  Il2CppObject *v497; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v499; // w2
  const MethodInfo *v500; // x3
  System_Collections_Generic_IEnumerable_T__o *v501; // x23
  System_Collections_Generic_HashSet_int__o *v502; // x22
  __int64 v503; // x0
  __int64 v504; // x1
  int32_t v505; // w2
  const MethodInfo *v506; // x3
  System_Collections_Generic_List_T__o *v507; // x22
  System_Func_object__bool__o *v508; // x23
  __int64 v509; // x1
  System_Collections_Generic_List_object__o *v510; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v511; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v514; // x20
  struct QuestTree___c__DisplayClass44_6_o *v515; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v517; // x0
  struct QuestTree___c__DisplayClass44_6_o *v518; // x8
  __int64 v519; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_40045508; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v523; // x22
  struct QuestTree___c__DisplayClass44_6_o *v524; // x25
  System_Collections_Generic_List_object__o *v525; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v527; // w2
  const MethodInfo *v528; // x3
  Il2CppObject *v529; // x0
  int32_t v530; // w2
  const MethodInfo *v531; // x3
  __int64 v532; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v535; // x0
  int32_t v536; // w2
  const MethodInfo *v537; // x3
  __int64 v538; // x1
  MapControl_MapInfo_o *v539; // x0
  __int64 v540; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v542; // x0
  int32_t v543; // w2
  const MethodInfo *v544; // x3
  __int64 v545; // x1
  MapControl_WarInfo_o *v546; // x0
  struct WarEntity_o *v547; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v548; // x0
  int32_t v549; // w2
  const MethodInfo *v550; // x3
  struct QuestTree___c__DisplayClass44_6_o *v551; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v554; // w2
  const MethodInfo *v555; // x3
  unsigned int v556; // w0
  __int64 v557; // x1
  System_Collections_Generic_List_object__o *v558; // x0
  MapControl_WarInfo_o *v559; // x0
  __int64 v560; // x1
  _BOOL8 HasStatus; // x0
  __int64 v562; // x1
  MapControl_WarInfo_o *v563; // x0
  WarEntity_o *v564; // x0
  __int64 v565; // x1
  int v566; // w23
  bool v567; // cc
  __int64 v568; // x1
  struct QuestTree___c__DisplayClass44_6_o *v569; // x9
  MapControl_WarInfo_o *v570; // x0
  struct QuestTree___c__DisplayClass44_6_o *v571; // x8
  MapControl_SpotInfo_o *v572; // x0
  MapControl_QuestInfo_o *v573; // x0
  int32_t v574; // w2
  const MethodInfo *v575; // x3
  struct MapControl_WarInfo_o *v576; // x1
  MapControl_QuestInfo_o *v577; // x22
  int32_t v578; // w8
  struct MapControl_SpotInfo_o *v579; // x1
  int32_t v580; // w2
  const MethodInfo *v581; // x3
  __int64 v582; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v585; // x1
  struct WarEntity_o *v586; // x8
  struct QuestTree___c__DisplayClass44_6_o *v587; // x9
  struct WarEntity_o *v588; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v589; // x0
  _BOOL8 v590; // x0
  __int64 v591; // x1
  struct QuestTree___c__DisplayClass44_6_o *v592; // x8
  __int64 v593; // x1
  MapControl_WarInfo_o *v594; // x0
  int v595; // w24
  __int64 v596; // x1
  __int64 v597; // x1
  Il2CppObject *v598; // x23
  System_Int64_array *v599; // x0
  struct QuestTree___c__DisplayClass44_6_o *v600; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v602; // x0
  MapControl_SpotInfo_o *v603; // x0
  QuestEntity_o *v604; // x0
  __int64 v605; // x1
  _BOOL8 HasFlag; // x0
  __int64 v607; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v608; // x8
  struct MapControl_SpotInfo_o *v609; // x9
  struct MapControl_MapInfo_o *v610; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v612; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v613; // x8
  struct MapControl_SpotInfo_o *v614; // x9
  struct MapControl_MapInfo_o *v615; // x8
  MapControl_SpotInfo_o *v616; // x0
  UserQuestEntity_o *v617; // x0
  bool v618; // w8
  struct QuestTree___c__DisplayClass44_6_o *v619; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v622; // x1
  struct QuestTree___c__DisplayClass44_6_o *v623; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v625; // x0
  __int64 v626; // x1
  int32_t v627; // w2
  const MethodInfo *v628; // x3
  _QWORD *v629; // x20
  __int64 v630; // x8
  int v631; // w21
  int v632; // w23
  __int64 v633; // x8
  System_Collections_Generic_List_object__o *v634; // x0
  struct System_Object_array *v635; // x8
  _QWORD *v636; // x9
  __int64 v637; // x10
  Il2CppClass **v638; // x8
  int32_t v639; // w2
  const MethodInfo *v640; // x3
  System_Collections_Generic_List_object__o *v641; // x20
  QuestTree___c_c *v642; // x8
  System_Comparison_T__o *_9__44_11; // x21
  Il2CppObject *v644; // x22
  struct QuestTree___c_StaticFields *v645; // x0
  int32_t v646; // w2
  const MethodInfo *v647; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v648; // x0
  int32_t v649; // w2
  const MethodInfo *v650; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v651; // x0
  int32_t v652; // w2
  const MethodInfo *v653; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v654; // x0
  int32_t v655; // w2
  const MethodInfo *v656; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v657; // x0
  int32_t v658; // w2
  const MethodInfo *v659; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v660; // x0
  int32_t v661; // w2
  const MethodInfo *v662; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v663; // x0
  int32_t v664; // w2
  const MethodInfo *v665; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v666; // x0
  int32_t v667; // w2
  const MethodInfo *v668; // x3
  Il2CppObject *v669; // x0
  __int64 v670; // x1
  int32_t v671; // w2
  const MethodInfo *v672; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v673; // x0
  EventStatusQuestMaster_o *v674; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v675[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v676; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o **v677; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v679; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v683; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v685; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v685 = this;
  if ( (byte_49B7F8A & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1B4CF90(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B4CF90(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestResetMaster___, v22);
    sub_1B4CF90(&DataManager_TypeInfo, v23);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v24);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v25);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___, v26);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v27);
    sub_1B4CF90(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v31);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v32);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_QuestEntity___, v33);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v34);
    sub_1B4CF90(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v35);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v36);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v37);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_QuestEntity___, v38);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v40);
    sub_1B4CF90(&System_Func_MapControl_SpotInfo__int__TypeInfo, v41);
    sub_1B4CF90(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v42);
    sub_1B4CF90(&System_Func_WarEntity__bool__TypeInfo, v43);
    sub_1B4CF90(&System_Func_QuestEntity__bool__TypeInfo, v44);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor___75423184, v45);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v46);
    sub_1B4CF90(&long___TypeInfo, v47);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v48);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v49);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v50);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v51);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v52);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v53);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v54);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v55);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v56);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v57);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v58);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v59);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v60);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v61);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v62);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v63);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v64);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v65);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v66);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v67);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v68);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v69);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v70);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v71);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v72);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v73);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v74);
    sub_1B4CF90(&MapControl_MapInfo_TypeInfo, v75);
    sub_1B4CF90(&NetworkManager_TypeInfo, v76);
    sub_1B4CF90(&OptionManager_TypeInfo, v77);
    sub_1B4CF90(&System_Predicate_MapControl_WarInfo__TypeInfo, v78);
    sub_1B4CF90(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v79);
    sub_1B4CF90(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v80);
    sub_1B4CF90(&System_Predicate_MapControl_MapInfo__TypeInfo, v81);
    sub_1B4CF90(&System_Predicate_MapControl_SpotInfo__TypeInfo, v82);
    sub_1B4CF90(&System_Predicate_MapControl_QuestInfo__TypeInfo, v83);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v84);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v85);
    sub_1B4CF90(&MapControl_SpotInfo_TypeInfo, v86);
    sub_1B4CF90(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__, v87);
    sub_1B4CF90(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__, v88);
    sub_1B4CF90(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__, v89);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v90);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_0_TypeInfo, v91);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v92);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v93);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v94);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_1_TypeInfo, v95);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v96);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_2_TypeInfo, v97);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v98);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_3_TypeInfo, v99);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v100);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_4_TypeInfo, v101);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v102);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_5_TypeInfo, v103);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v104);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v105);
    sub_1B4CF90(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v106);
    sub_1B4CF90(&QuestTree___c__DisplayClass44_6_TypeInfo, v107);
    sub_1B4CF90(&QuestTree___c_TypeInfo, v108);
    sub_1B4CF90(&WarEntity_TypeInfo, v109);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)sub_1B4CF90(&MapControl_WarInfo_TypeInfo, v110);
    v4 = v685;
    byte_49B7F8A = 1;
  }
  v683 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v679 = 0LL;
  mapGimmickInfo = 0LL;
  v676 = 0LL;
  v677 = &v685;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v112 = (Il2CppObject *)sub_1B4D1DC(QuestTree___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v112, 0LL);
      v113 = v685;
      v685->fields.__8__2 = (struct QuestTree___c__DisplayClass44_0_o *)v112;
      sub_1B4CF34((CGThumbnailListItem_o *)&v113->fields.__8__2, (int32_t)v112, v114, v115);
      _8__2 = v685->fields.__8__2;
      if ( !_8__2 )
        sub_1B4D1EC(v116, v117);
      _8__2->fields.targetWarId = v685->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v120 = v685;
      v685->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B4CF34((CGThumbnailListItem_o *)&v120->fields._dataManager_5__2, (int32_t)Instance, v121, v122);
      dataManager_5__2 = v685->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1B4D1EC(0LL, v123);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapMaster___);
      v127 = v685->fields._dataManager_5__2;
      if ( !v127 )
        sub_1B4D1EC(0LL, v125);
      v128 = DataManager__GetMasterData_object_(
               v127,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SpotMaster___);
      v129 = v685;
      v685->fields._spotMaster_5__3 = (struct SpotMaster_o *)v128;
      sub_1B4CF34((CGThumbnailListItem_o *)&v129->fields._spotMaster_5__3, (int32_t)v128, v130, v131);
      v133 = v685->fields._dataManager_5__2;
      if ( !v133 )
        sub_1B4D1EC(0LL, v132);
      v134 = DataManager__GetMasterData_object_(
               v133,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v135 = v685;
      v685->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v134;
      sub_1B4CF34((CGThumbnailListItem_o *)&v135->fields._blankEarthSpotMaster_5__4, (int32_t)v134, v136, v137);
      v139 = v685->fields._dataManager_5__2;
      if ( !v139 )
        sub_1B4D1EC(0LL, v138);
      v140 = DataManager__GetMasterData_object_(
               v139,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
      v141 = v685;
      v685->fields._questMaster_5__5 = (struct QuestMaster_o *)v140;
      sub_1B4CF34((CGThumbnailListItem_o *)&v141->fields._questMaster_5__5, (int32_t)v140, v142, v143);
      v145 = v685->fields._dataManager_5__2;
      if ( !v145 )
        sub_1B4D1EC(0LL, v144);
      v146 = DataManager__GetMasterData_object_(
               v145,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v147 = v685;
      v685->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v146;
      sub_1B4CF34((CGThumbnailListItem_o *)&v147->fields._questPhaseMaster_5__6, (int32_t)v146, v148, v149);
      v151 = v685->fields._dataManager_5__2;
      if ( !v151 )
        sub_1B4D1EC(0LL, v150);
      v153 = DataManager__GetMasterData_object_(
               v151,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
      v154 = v685->fields._dataManager_5__2;
      if ( !v154 )
        sub_1B4D1EC(0LL, v152);
      v156 = DataManager__GetMasterData_object_(
               v154,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v157 = v685->fields._dataManager_5__2;
      if ( !v157 )
        sub_1B4D1EC(0LL, v155);
      v159 = DataManager__GetMasterData_object_(
               v157,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v160 = v685->fields._dataManager_5__2;
      if ( !v160 )
        sub_1B4D1EC(0LL, v158);
      v674 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v160,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v162 = v685->fields._dataManager_5__2;
      if ( !v162 )
        sub_1B4D1EC(0LL, v161);
      v163 = DataManager__GetMasterData_object_(
               v162,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v164 = v685;
      v685->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v163;
      sub_1B4CF34((CGThumbnailListItem_o *)&v164->fields._spotRoadMaster_5__7, (int32_t)v163, v165, v166);
      v168 = v685->fields._dataManager_5__2;
      if ( !v168 )
        sub_1B4D1EC(0LL, v167);
      v169 = DataManager__GetMasterData_object_(
               v168,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v170 = v685;
      v685->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v169;
      sub_1B4CF34((CGThumbnailListItem_o *)&v170->fields._mapGimmickMaster_5__8, (int32_t)v169, v171, v172);
      v174 = v685->fields._dataManager_5__2;
      if ( !v174 )
        sub_1B4D1EC(0LL, v173);
      v175 = DataManager__GetMasterData_object_(
               v174,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v176 = v685;
      v685->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v175;
      sub_1B4CF34((CGThumbnailListItem_o *)&v176->fields._questPickupMaster_5__9, (int32_t)v175, v177, v178);
      v179 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v179,
        (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v180 = v685;
      v685->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v179;
      sub_1B4CF34(
        (CGThumbnailListItem_o *)&v180->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v179,
        v181,
        v182);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v685->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v183 = (Il2CppObject *)sub_1B4D1DC(QuestTree___c__DisplayClass44_1_TypeInfo);
      System_Object___ctor(v183, 0LL);
      v184 = v685;
      v685->fields.__8__1 = (struct QuestTree___c__DisplayClass44_1_o *)v183;
      sub_1B4CF34((CGThumbnailListItem_o *)&v184->fields.__8__1, (int32_t)v183, v185, v186);
      v188 = v685->fields._dataManager_5__2;
      if ( !v188 )
        sub_1B4D1EC(0LL, v187);
      v189 = DataManager__GetMasterData_object_(
               v188,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v189 )
        sub_1B4D1EC(0LL, v190);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v189,
                                                                       (const MethodInfo_319CC20 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v192 = (Il2CppObject *)v685->fields.__8__2;
      v193 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v193,
        v192,
        Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v194 = System_Linq_Enumerable__SingleOrDefault_object__49521144(
               Entitys,
               (System_Func_TSource__bool__o *)v193,
               (const MethodInfo_2F3A1F8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v194 )
        sub_1B4D1EC(0LL, v195);
      _8__1 = v685->fields.__8__1;
      if ( !_8__1 )
        sub_1B4D1EC(v194, v195);
      klass_low = LODWORD(v194[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1B4D1EC(v194, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1B4D1EC(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v200 = (Il2CppObject *)v685->fields.__8__1;
      v201 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v201,
        v200,
        Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1B4D1EC(v202, v203);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v201,
                (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v205 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v206 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v206 )
          sub_1B4D1EC(0LL, v205);
        System_Collections_Generic_List_object___RemoveAt(
          v206,
          v205,
          (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v207 = v685->fields.__8__1;
      if ( !v207 )
        sub_1B4D1EC(Index, v205);
      v208 = _4__this->fields.mapControlRootInfo;
      if ( !v208 )
        sub_1B4D1EC(0LL, v205);
      v209 = MapControl_RootInfo__AddChild(v208, v207->fields.warId, v685->fields._nowTime_5__11, 0LL);
      v210 = v685;
      v685->fields._warInfo_5__14 = v209;
      sub_1B4CF34((CGThumbnailListItem_o *)&v210->fields._warInfo_5__14, (int32_t)v209, v211, v212);
      warInfo_5__14 = v685->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1B4D1EC(0LL, v213);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v218 = v685->fields._warInfo_5__14;
        if ( !v218 )
          sub_1B4D1EC(0LL, v215);
        EventId = MapControl_WarInfo__GetEventId(v218, 0LL);
        if ( !v153 )
          sub_1B4D1EC(EventId, v220);
        v221 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v153,
                 &entity,
                 EventId,
                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v221 )
        {
          if ( !entity )
            sub_1B4D1EC(v221, v215);
          v222 = v685;
          nowTime_5__11 = v685->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v224 = v685->fields._warInfo_5__14;
            if ( !v224 )
              sub_1B4D1EC(0LL, v215);
            MapControl_WarInfo__SetStatusCheckFlag(v224, 1, 0, 0LL);
            v222 = v685;
          }
          v225 = v222->fields._warInfo_5__14;
          if ( !v225 )
            sub_1B4D1EC(0LL, v215);
          v226 = MapControl_WarInfo__GetEventId(v225, 0LL);
          if ( !v156 )
            sub_1B4D1EC(v226, v227);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
                 &v683,
                 v226,
                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v683 )
              sub_1B4D1EC(0LL, v228);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v683, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1B4D1EC(0LL, v229);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v685->fields._nowTime_5__11, 0LL) )
              {
                v231 = v685->fields._warInfo_5__14;
                if ( !v231 )
                  sub_1B4D1EC(0LL, v230);
                v232 = MapControl_WarInfo__GetEventId(v231, 0LL);
                if ( !v159 )
                  sub_1B4D1EC(v232, (unsigned int)v232);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v159, v232, 0LL);
                if ( NowEntity )
                {
                  v235 = v685->fields._warInfo_5__14;
                  if ( !v235 )
                    sub_1B4D1EC(0LL, v233);
                  v236 = (unsigned int)MapControl_WarInfo__GetEventId(v235, 0LL);
                  if ( !v674 )
                    sub_1B4D1EC(0LL, v236);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v674,
                                        v236,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v239 = v685->fields.__8__1;
                  if ( !v239 )
                    sub_1B4D1EC(MismatchQuestList, v238);
                  v240 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v685->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1B4D1EC(0LL, v238);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v239->fields.warId,
                    v240,
                    (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v242 = v685->fields._nowTime_5__11;
          v243 = (System_Int64_array *)sub_1B4D038(long___TypeInfo, 3LL);
          v245 = entity;
          if ( !entity )
            sub_1B4D1EC(v243, v244);
          if ( !v243 )
            sub_1B4D1EC(0LL, v244);
          max_length = v243->max_length;
          if ( !max_length )
            sub_1B4D1F4(v243, v244);
          v243->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1B4D1F4(v243, v244);
          v243->m_Items[1] = (int64_t)v245[5].monitor;
          if ( max_length <= 2 )
            sub_1B4D1F4(v243, v244);
          v243->m_Items[2] = (int64_t)v245[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v242, v243, 0LL);
        }
      }
      v247 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v247 )
        sub_1B4D1EC(0LL, v215);
      items = v247->fields._items;
      v249 = (Il2CppObject *)v685->fields._warInfo_5__14;
      v250 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v247->fields._version;
      if ( !items )
        sub_1B4D1EC(v247, v249);
      size = v247->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v247,
          v249,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v250[4] + 192LL) + 112LL));
      }
      else
      {
        v252 = &items->obj.klass + size;
        v247->fields._size = size + 1;
        v252[4] = (Il2CppClass *)v249;
        sub_1B4CF34((CGThumbnailListItem_o *)(v252 + 4), (int32_t)v249, v216, v217);
      }
      v324 = v685->fields._warInfo_5__14;
      if ( !v324 )
        sub_1B4D1EC(v253, v254);
      if ( !MasterData_object )
        sub_1B4D1EC(v253, v254);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v324->fields.warId, 0LL);
      v326 = v685;
      v685->fields._mapList_5__15 = List;
      sub_1B4CF34((CGThumbnailListItem_o *)&v326->fields._mapList_5__15, (int32_t)List, v327, v328);
      v320 = v685;
      mapList_5__15 = v685->fields._mapList_5__15;
      v685->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1B4D1EC(v318, v319);
      mapCount_5__13 = mapList_5__15->max_length;
      v322 = 0;
      v320->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_116;
    case 1:
      v256 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v256 )
        sub_1B4D1EC(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1B4D1EC(0LL, method);
      v258 = SpotRoadMaster__getList(spotRoadMaster_5__7, v256->fields.mapId, 0LL);
      v260 = v258;
      if ( !v258 )
        sub_1B4D1EC(0LL, v259);
      v261 = v258->max_length;
      if ( v261 >= 1 )
      {
        for ( i = 0; i != v261; ++i )
        {
          v263 = sub_1B4D1DC(QuestTree___c__DisplayClass44_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v263, 0LL);
          if ( i >= v260->max_length )
            sub_1B4D1F4(v264, v265);
          v266 = v260->m_Items[i];
          if ( !v266 )
            sub_1B4D1EC(v264, v265);
          if ( !v263 )
            sub_1B4D1EC(v264, v265);
          *(_DWORD *)(v263 + 16) = v266->fields.id;
          if ( !_4__this )
            sub_1B4D1EC(v264, v265);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v268 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v268,
            (Il2CppObject *)v263,
            Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1B4D1EC(v269, v270);
          v271 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v268,
                   (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v272 = v271;
          if ( v271 != -1 )
          {
            v273 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v273 )
              sub_1B4D1EC(0LL, v272);
            System_Collections_Generic_List_object___RemoveAt(
              v273,
              v272,
              (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v685->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1B4D1EC(0LL, v272);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v263 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v266, &spotRoadInfo, 0LL);
          v278 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v278 )
            sub_1B4D1EC(0LL, v275);
          v279 = (Il2CppObject *)spotRoadInfo;
          v280 = v278->fields._items;
          v281 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v278->fields._version;
          if ( !v280 )
            sub_1B4D1EC(v278, v279);
          v282 = v278->fields._size;
          if ( (unsigned int)v282 >= v280->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v278,
              v279,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
          }
          else
          {
            v283 = &v280->obj.klass + v282;
            v278->fields._size = v282 + 1;
            v283[4] = (Il2CppClass *)v279;
            sub_1B4CF34((CGThumbnailListItem_o *)(v283 + 4), (int32_t)v279, v276, v277);
          }
        }
      }
      v284 = v685->fields.__8__1;
      if ( !v284 )
        sub_1B4D1EC(v258, v259);
      mapGimmickMaster_5__8 = v685->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1B4D1EC(0LL, v259);
      v286 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v284->fields.mapId, 0LL);
      v290 = v286;
      if ( !v286 )
        sub_1B4D1EC(0LL, v287);
      v291 = v286->max_length;
      if ( v291 >= 1 )
      {
        for ( j = 0; j != v291; ++j )
        {
          v293 = sub_1B4D1DC(QuestTree___c__DisplayClass44_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v293, 0LL);
          if ( j >= v290->max_length )
            sub_1B4D1F4(v294, v295);
          v296 = v290->m_Items[j];
          if ( !v296 )
            sub_1B4D1EC(v294, v295);
          if ( !v293 )
            sub_1B4D1EC(v294, v295);
          *(_DWORD *)(v293 + 16) = v296->fields.id;
          if ( !_4__this )
            sub_1B4D1EC(v294, v295);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v298 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v298,
            (Il2CppObject *)v293,
            Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1B4D1EC(v299, v300);
          v301 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v298,
                   (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v302 = v301;
          if ( v301 != -1 )
          {
            v303 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v303 )
              sub_1B4D1EC(0LL, v302);
            System_Collections_Generic_List_object___RemoveAt(
              v303,
              v302,
              (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v304 = v685->fields._mapInfo_5__16;
          if ( !v304 )
            sub_1B4D1EC(0LL, v302);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v304, *(_DWORD *)(v293 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v308 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v308 )
            sub_1B4D1EC(0LL, v305);
          v309 = (Il2CppObject *)mapGimmickInfo;
          v310 = v308->fields._items;
          v311 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v308->fields._version;
          if ( !v310 )
            sub_1B4D1EC(v308, v309);
          v312 = v308->fields._size;
          if ( (unsigned int)v312 >= v310->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v308,
              v309,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v311[4] + 192LL) + 112LL));
          }
          else
          {
            v313 = &v310->obj.klass + v312;
            v308->fields._size = v312 + 1;
            v313[4] = (Il2CppClass *)v309;
            sub_1B4CF34((CGThumbnailListItem_o *)(v313 + 4), (int32_t)v309, v306, v307);
          }
        }
      }
      v314 = v685;
      v685->fields.__2__current = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v314->fields.__2__current, 0, v288, v289);
      v315 = v685;
      v316 = 2;
      goto LABEL_328;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (CGThumbnailListItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields.viewObject) = -1;
      sub_1B4CF34(p_mapInfo_5__16, 0, v2, v3);
      v320 = v685;
      mapCount_5__13 = v685->fields._mapCount_5__13;
      v322 = v685->fields._mapIdx_5__12 + 1;
      v685->fields._mapIdx_5__12 = v322;
LABEL_116:
      if ( v322 < mapCount_5__13 )
      {
        v330 = v320->fields._mapList_5__15;
        if ( !v330 )
          sub_1B4D1EC(v318, v319);
        if ( v322 >= v330->max_length )
          sub_1B4D1F4(v318, v319);
        v331 = v330->m_Items[v322];
        if ( !v331 )
          sub_1B4D1EC(v318, v319);
        v332 = v320->fields.__8__1;
        if ( !v332 )
          sub_1B4D1EC(v318, v319);
        v332->fields.mapId = v331->fields.id;
        v333 = v320->fields._warInfo_5__14;
        if ( !v333 )
          sub_1B4D1EC(v318, v319);
        mapInfoList = (System_Collections_Generic_List_object__o *)v333->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v332->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v332,
              Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v332->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1B4CF34((CGThumbnailListItem_o *)&v332->fields.__9__3, (int32_t)_9__3, v336, v337);
          }
          v318 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v319 = (unsigned int)v318;
          if ( (_DWORD)v318 != -1 )
          {
            v338 = v685->fields._warInfo_5__14;
            if ( !v338 )
              sub_1B4D1EC(v318, (unsigned int)v318);
            v339 = (System_Collections_Generic_List_object__o *)v338->fields.mapInfoList;
            if ( !v339 )
              sub_1B4D1EC(0LL, v319);
            System_Collections_Generic_List_object___RemoveAt(
              v339,
              v319,
              (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1B4D1EC(v318, v319);
        v340 = v685->fields.__8__1;
        if ( !v340 )
          sub_1B4D1EC(v318, v319);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v340->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v340,
            Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v340->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1B4CF34((CGThumbnailListItem_o *)&v340->fields.__9__4, (int32_t)_9__4, v343, v344);
        }
        if ( !allMapInfoList )
          sub_1B4D1EC(v318, v319);
        v345 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v346 = (unsigned int)v345;
        if ( (_DWORD)v345 != -1 )
        {
          v347 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v347 )
            sub_1B4D1EC(0LL, v346);
          System_Collections_Generic_List_object___RemoveAt(
            v347,
            v346,
            (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v348 = v685->fields.__8__1;
        if ( !v348 )
          sub_1B4D1EC(v345, v346);
        v349 = v685->fields._warInfo_5__14;
        if ( !v349 )
          sub_1B4D1EC(0LL, v346);
        v350 = MapControl_WarInfo__AddChild(v349, v348->fields.mapId, 0LL);
        v351 = v685;
        v685->fields._mapInfo_5__16 = v350;
        sub_1B4CF34((CGThumbnailListItem_o *)&v351->fields._mapInfo_5__16, (int32_t)v350, v352, v353);
        v357 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v357 )
          sub_1B4D1EC(0LL, v354);
        v358 = v357->fields._items;
        v359 = (Il2CppObject *)v685->fields._mapInfo_5__16;
        v360 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v357->fields._version;
        if ( !v358 )
          sub_1B4D1EC(v357, v359);
        v361 = v357->fields._size;
        if ( (unsigned int)v361 >= v358->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v357,
            v359,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
        }
        else
        {
          v362 = &v358->obj.klass + v361;
          v357->fields._size = v361 + 1;
          v362[4] = (Il2CppClass *)v359;
          sub_1B4CF34((CGThumbnailListItem_o *)(v362 + 4), (int32_t)v359, v355, v356);
        }
        v460 = v685->fields.__8__1;
        if ( !v460 )
          sub_1B4D1EC(v363, v364);
        spotMaster_5__3 = v685->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1B4D1EC(0LL, v364);
        v462 = SpotMaster__getList(spotMaster_5__3, v460->fields.mapId, 0LL);
        v464 = v462;
        if ( !v462 )
          sub_1B4D1EC(0LL, v463);
        v465 = v462->max_length;
        if ( v465 >= 1 )
        {
          for ( k = 0; k != v465; ++k )
          {
            v467 = sub_1B4D1DC(QuestTree___c__DisplayClass44_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v467, 0LL);
            if ( k >= v464->max_length )
              sub_1B4D1F4(v468, v469);
            v470 = v464->m_Items[k];
            if ( !v470 )
              sub_1B4D1EC(v468, v469);
            if ( !v467 )
              sub_1B4D1EC(v468, v469);
            *(_DWORD *)(v467 + 16) = v470->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v472 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v472,
              (Il2CppObject *)v467,
              Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1B4D1EC(v473, v474);
            v475 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v472,
                     (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v476 = v475;
            if ( v475 != -1 )
            {
              v477 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v477 )
                sub_1B4D1EC(0LL, v476);
              System_Collections_Generic_List_object___RemoveAt(
                v477,
                v476,
                (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v478 = v685->fields._mapInfo_5__16;
            if ( !v478 )
              sub_1B4D1EC(0LL, v476);
            spotInfo = MapControl_MapInfo__AddChild(v478, *(_DWORD *)(v467 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v470, &spotInfo, 0LL);
            v482 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v482 )
              sub_1B4D1EC(0LL, v479);
            v483 = (Il2CppObject *)spotInfo;
            v484 = v482->fields._items;
            v485 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v482->fields._version;
            if ( !v484 )
              sub_1B4D1EC(v482, v483);
            v486 = v482->fields._size;
            if ( (unsigned int)v486 >= v484->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v482,
                v483,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v485[4] + 192LL) + 112LL));
            }
            else
            {
              v487 = &v484->obj.klass + v486;
              v482->fields._size = v486 + 1;
              v487[4] = (Il2CppClass *)v483;
              sub_1B4CF34((CGThumbnailListItem_o *)(v487 + 4), (int32_t)v483, v480, v481);
            }
          }
        }
        v488 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v685->fields._mapInfo_5__16,
                 v685->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v489 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v488,
                 (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v493 = (System_Collections_Generic_IEnumerable_TSource__o *)v489;
        if ( !v489 )
          sub_1B4D1EC(0LL, v490);
        if ( *(_QWORD *)&v489->max_length )
        {
          v494 = sub_1B4D1DC(QuestTree___c__DisplayClass44_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v494, 0LL);
          v495 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v495 = QuestTree___c_TypeInfo;
          }
          _9__44_6 = (System_Func_object__int__o *)v495->static_fields->__9__44_6;
          if ( !_9__44_6 )
          {
            if ( !v495->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v495);
              v495 = QuestTree___c_TypeInfo;
            }
            v497 = (Il2CppObject *)v495->static_fields->__9;
            _9__44_6 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__44_6,
              v497,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__44_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__44_6;
            sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__44_6, (int32_t)_9__44_6, v499, v500);
          }
          v501 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v493,
                                                                  (System_Func_TSource__TResult__o *)_9__44_6,
                                                                  (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v502 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_54781132(
            v502,
            v501,
            (const MethodInfo_343E4CC *)Method_System_Collections_Generic_HashSet_int___ctor___75423184);
          if ( !v494 )
            sub_1B4D1EC(v503, v504);
          *(_QWORD *)(v494 + 16) = v502;
          sub_1B4CF34((CGThumbnailListItem_o *)(v494 + 16), (int32_t)v502, v505, v506);
          v507 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v508 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v508,
            (Il2CppObject *)v494,
            Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v507,
            (System_Func_T__bool__o *)v508,
            (const MethodInfo_2EF0EE0 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v510 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v510 )
            sub_1B4D1EC(0LL, v509);
          System_Collections_Generic_List_object___AddRange(
            v510,
            (System_Collections_Generic_IEnumerable_T__o *)v493,
            (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v511 = v685;
        v685->fields.__2__current = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)&v511->fields.__2__current, 0, v491, v492);
        result = 1;
        v685->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1B4D1EC(v318, v319);
      v365 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v366 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v366 = QuestTree___c_TypeInfo;
      }
      _9__44_2 = (System_Comparison_T__o *)v366->static_fields->__9__44_2;
      if ( !_9__44_2 )
      {
        if ( !v366->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v366);
          v366 = QuestTree___c_TypeInfo;
        }
        v368 = (Il2CppObject *)v366->static_fields->__9;
        _9__44_2 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__44_2,
          v368,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__,
          0LL);
        v369 = QuestTree___c_TypeInfo->static_fields;
        v369->__9__44_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__44_2;
        sub_1B4CF34((CGThumbnailListItem_o *)&v369->__9__44_2, (int32_t)_9__44_2, v370, v371);
      }
      if ( !v365 )
        sub_1B4D1EC(v318, v319);
      System_Collections_Generic_List_object___Sort_56106144(
        v365,
        _9__44_2,
        (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v372 = v685;
      v685->fields.__8__1 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v372->fields.__8__1, 0, v373, v374);
      v375 = v685;
      v685->fields._warInfo_5__14 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v375->fields._warInfo_5__14, 0, v376, v377);
      v378 = v685;
      v685->fields._mapList_5__15 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v378->fields._mapList_5__15, 0, v379, v380);
      v381 = (Il2CppObject *)sub_1B4D1DC(QuestTree___c__DisplayClass44_6_TypeInfo);
      System_Object___ctor(v381, 0LL);
      v382 = v685;
      v685->fields.__8__3 = (struct QuestTree___c__DisplayClass44_6_o *)v381;
      sub_1B4CF34((CGThumbnailListItem_o *)&v382->fields.__8__3, (int32_t)v381, v383, v384);
      v385 = v685->fields._nowTime_5__11;
      v386 = (MapControl_WarInfo_o *)sub_1B4D1DC(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v386, v385, 0LL);
      v387 = v685;
      v685->fields._warInfo_5__14 = v386;
      sub_1B4CF34((CGThumbnailListItem_o *)&v387->fields._warInfo_5__14, (int32_t)v386, v388, v389);
      v390 = (MapControl_MapInfo_o *)sub_1B4D1DC(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v390, 0LL);
      v391 = v685;
      v685->fields._mapInfo_5__16 = v390;
      sub_1B4CF34((CGThumbnailListItem_o *)&v391->fields._mapInfo_5__16, (int32_t)v390, v392, v393);
      v394 = (MapControl_SpotInfo_o *)sub_1B4D1DC(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v394, 0LL);
      v395 = v685;
      v685->fields._spotInfo_5__17 = v394;
      sub_1B4CF34((CGThumbnailListItem_o *)&v395->fields._spotInfo_5__17, (int32_t)v394, v396, v397);
      v398 = (WarEntity_o *)sub_1B4D1DC(WarEntity_TypeInfo);
      WarEntity___ctor(v398, 0LL);
      v399 = v685;
      v685->fields._warEnt_5__18 = v398;
      sub_1B4CF34((CGThumbnailListItem_o *)&v399->fields._warEnt_5__18, (int32_t)v398, v400, v401);
      v403 = v685->fields._dataManager_5__2;
      if ( !v403 )
        sub_1B4D1EC(0LL, v402);
      v404 = DataManager__GetMasterData_object_(
               v403,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v405 = v685;
      v685->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v404;
      sub_1B4CF34((CGThumbnailListItem_o *)&v405->fields._userQuestMaster_5__19, (int32_t)v404, v406, v407);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v410 = v685;
      _8__3 = v685->fields.__8__3;
      if ( !_8__3 )
        sub_1B4D1EC(Master_object, v409);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v410->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v685 )
        sub_1B4D1EC(isSavedMemoryMode, v413);
      if ( isSavedMemoryMode )
        v414 = 500;
      else
        v414 = 5000;
      v415 = v685->fields.__8__3;
      v685->fields._breakInterval_5__22 = v414;
      v416 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v416,
        (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v415 )
        sub_1B4D1EC(v417, v418);
      v415->fields.spotInfoList = v416;
      sub_1B4CF34((CGThumbnailListItem_o *)&v415->fields, (int32_t)v416, v419, v420);
      v685->fields._cnt_5__23 = 0;
      v422 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v422 )
        sub_1B4D1EC(0LL, v421);
      System_Collections_Generic_List_object___GetEnumerator(
        v675,
        v422,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v423 = v685;
      v424 = *(_OWORD *)&v675[0].fields._list;
      p__7__wrap24 = (CGThumbnailListItem_o *)&v685->fields.__7__wrap24;
      v675[1] = v675[0];
      v685->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v675[0].fields._current;
      *(_OWORD *)&v423->fields.__7__wrap24.fields._list = v424;
      sub_1B4CF34(p__7__wrap24, 0, v426, v427);
      v4 = v685;
LABEL_164:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v429 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v430 = v685;
        if ( !v429 )
          break;
        current = v685->fields.__7__wrap24.fields._current;
        ++v685->fields._cnt_5__23;
        if ( !current )
          sub_1B4D1EC(v430, v428);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1B4D1EC(0LL, v433);
        v4 = v685;
        v436 = v685->fields.__8__2;
        if ( !v436 )
          sub_1B4D1EC(Mine, v433);
        if ( Mine->fields.warId == v436->fields.targetWarId )
        {
          v437 = v685->fields.__8__3;
          if ( !v437 )
            sub_1B4D1EC(Mine, v433);
          spotInfoList = v437->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1B4D1EC(0LL, v433);
          spotId = (unsigned int)current->fields.spotId;
          v440 = spotInfoList->fields._items;
          v441 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v440 )
            sub_1B4D1EC(spotInfoList, spotId);
          v442 = spotInfoList->fields._size;
          if ( (unsigned int)v442 >= v440->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v441[4] + 192LL) + 112LL));
            v4 = v685;
          }
          else
          {
            spotInfoList->fields._size = v442 + 1;
            v440->m_Items[v442 + 1] = spotId;
          }
        }
        HIDWORD(v443) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v443) = HIDWORD(v443);
        if ( (unsigned int)(v443 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0LL;
          sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v434, v435);
          v315 = v685;
          v316 = 3;
LABEL_328:
          v315->fields.__1__state = v316;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(v685, v428);
      v446 = v685;
      questMaster_5__5 = v685->fields._questMaster_5__5;
      v685->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v446->fields.__7__wrap24.fields._index = 0LL;
      v446->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1B4D1EC(v444, v445);
      v448 = sub_1B4D0C4(*((_QWORD *)&questMaster_5__5->klass->vtable._1_Finalize.methodPtr
                         + 2
                         * *((unsigned __int16 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys_QuestEntity___
                           + 40)));
      v449 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(struct QuestMaster_o *))(v448 + 8))(questMaster_5__5);
      v450 = (Il2CppObject *)v685->fields.__8__3;
      v451 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v451,
        v450,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v452 = System_Linq_Enumerable__Where_object_(
               v449,
               (System_Func_TSource__bool__o *)v451,
               (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v453 = System_Linq_Enumerable__ToArray_object_(
               v452,
               (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v454 = v685;
      v685->fields._questList_5__24 = (struct QuestEntity_array *)v453;
      sub_1B4CF34((CGThumbnailListItem_o *)&v454->fields._questList_5__24, (int32_t)v453, v455, v456);
      v457 = v685;
      v685->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v457->fields._questList_5__24,
                       (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v685;
      v459 = v685->fields._mapCount_5__13;
      v685->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_164;
    case 4:
      v255 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_466;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1B4D1EC(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v459 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1B4D1EC(mapIdx_5__12, method);
    if ( v459 >= questList_5__24->max_length )
      sub_1B4D1F4(mapIdx_5__12, method);
    v514 = questList_5__24->m_Items[v459];
    if ( !v514 )
      sub_1B4D1EC(mapIdx_5__12, method);
    v515 = v4->fields.__8__3;
    if ( !v515 )
      sub_1B4D1EC(mapIdx_5__12, method);
    v515->fields.questId = v514->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, method);
      byte_49B57A5 = 1;
    }
    v517 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v517 = NetworkManager_TypeInfo;
    }
    v518 = v685->fields.__8__3;
    if ( !v518 )
      sub_1B4D1EC(v517, method);
    if ( !userQuestMaster_5__19 )
      sub_1B4D1EC(v517, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v679,
           v517->static_fields->userIdNumber,
           v518->fields.questId,
           0LL) )
    {
      if ( !v679 )
        sub_1B4D1EC(0LL, v519);
      QuestPhase = UserQuestEntity__getQuestPhase(v679, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_40045508 = (MapEntity_o *)QuestEntity__getSpotId_40045508(v514, QuestPhase + 1, 0LL);
    v523 = v685;
    v524 = v685->fields.__8__3;
    if ( !v524 )
      sub_1B4D1EC(SpotId_40045508, warId);
    if ( v524->fields.nowSpotId == (_DWORD)SpotId_40045508 )
    {
      if ( !_4__this )
        sub_1B4D1EC(SpotId_40045508, warId);
    }
    else
    {
      v524->fields.nowSpotId = (int)SpotId_40045508;
      if ( !_4__this )
        sub_1B4D1EC(SpotId_40045508, warId);
      v525 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v524->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v524,
          Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v524->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1B4CF34((CGThumbnailListItem_o *)&v524->fields.__9__12, (int32_t)_9__12, v527, v528);
      }
      if ( !v525 )
        sub_1B4D1EC(SpotId_40045508, warId);
      v529 = System_Collections_Generic_List_object___Find(
               v525,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v523->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v529;
      sub_1B4CF34((CGThumbnailListItem_o *)&v523->fields._spotInfo_5__17, (int32_t)v529, v530, v531);
      spotInfo_5__17 = v685->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1B4D1EC(0LL, v532);
      SpotId_40045508 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_40045508;
      if ( v685->fields._nowMapId_5__20 != (_DWORD)SpotId_40045508 )
      {
        v685->fields._nowMapId_5__20 = (int)SpotId_40045508;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_40045508, 0LL);
        v535 = v685;
        v685->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1B4CF34((CGThumbnailListItem_o *)&v535->fields._mapInfo_5__16, (int32_t)MapInfoByMapID, v536, v537);
        v539 = v685->fields._mapInfo_5__16;
        if ( !v539 )
          sub_1B4D1EC(0LL, v538);
        SpotId_40045508 = MapControl_MapInfo__GetMine(v539, 0LL);
        if ( !SpotId_40045508 )
          sub_1B4D1EC(0LL, v540);
        warId = (unsigned int)SpotId_40045508->fields.warId;
        if ( v685->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v685->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v542 = v685;
          v685->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1B4CF34((CGThumbnailListItem_o *)&v542->fields._warInfo_5__14, (int32_t)WarInfoByWarID, v543, v544);
          v546 = v685->fields._warInfo_5__14;
          if ( !v546 )
            sub_1B4D1EC(0LL, v545);
          v547 = MapControl_WarInfo__GetMine(v546, 0LL);
          v548 = v685;
          v685->fields._warEnt_5__18 = v547;
          sub_1B4CF34((CGThumbnailListItem_o *)&v548->fields._warEnt_5__18, (int32_t)v547, v549, v550);
        }
      }
    }
    v551 = v685->fields.__8__3;
    if ( !v551 )
      sub_1B4D1EC(SpotId_40045508, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v551->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v551,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v551->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1B4CF34((CGThumbnailListItem_o *)&v551->fields.__9__13, (int32_t)_9__13, v554, v555);
    }
    if ( !allQuestInfoList )
      sub_1B4D1EC(SpotId_40045508, warId);
    v556 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v557 = v556;
    if ( v556 != -1 )
    {
      v558 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v558 )
        sub_1B4D1EC(0LL, v557);
      System_Collections_Generic_List_object___RemoveAt(
        v558,
        v557,
        (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v559 = v685->fields._warInfo_5__14;
    if ( !v679 )
    {
      if ( !v559 )
        sub_1B4D1EC(0LL, v557);
      goto LABEL_377;
    }
    if ( !v559 )
      sub_1B4D1EC(0LL, v557);
    MapControl_WarInfo__SetStatusCheckFlag(v559, 1, 0, 0LL);
    if ( !v679 )
      sub_1B4D1EC(0LL, v560);
    HasStatus = UserQuestEntity__HasStatus(v679, 8, 0LL);
    if ( !HasStatus )
    {
      v563 = v685->fields._warInfo_5__14;
      if ( !v563 )
        sub_1B4D1EC(0LL, v562);
      goto LABEL_379;
    }
    if ( !v679 )
      sub_1B4D1EC(HasStatus, v562);
    if ( v679->fields.challengeNum >= 1 )
    {
      v563 = v685->fields._warInfo_5__14;
      if ( !v563 )
        sub_1B4D1EC(0LL, v562);
LABEL_379:
      MapControl_WarInfo__SetStatusCheckFlag(v563, 4, 0, 0LL);
    }
    if ( !v679 )
      sub_1B4D1EC(0LL, v562);
    v567 = UserQuestEntity__getClearNum(v679, 0LL) < 1;
    v559 = v685->fields._warInfo_5__14;
    if ( v567 )
    {
      if ( !v559 )
        sub_1B4D1EC(0LL, v568);
LABEL_377:
      MapControl_WarInfo__SetStatusCheckFlag(v559, 2, 0, 0LL);
      v566 = 0;
      goto LABEL_391;
    }
    if ( !v559 )
      sub_1B4D1EC(0LL, v568);
    v564 = MapControl_WarInfo__GetMine(v559, 0LL);
    if ( !v564 )
      sub_1B4D1EC(0LL, v565);
    v569 = v685->fields.__8__3;
    if ( !v569 )
      sub_1B4D1EC(v564, v565);
    if ( v564->fields.lastQuestId == v569->fields.questId )
    {
      v570 = v685->fields._warInfo_5__14;
      if ( !v570 )
        sub_1B4D1EC(0LL, v565);
      v566 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v570, 8, 1, 0LL);
    }
    else
    {
      v566 = 1;
    }
LABEL_391:
    v571 = v685->fields.__8__3;
    if ( !v571 )
      sub_1B4D1EC(v564, v565);
    v572 = v685->fields._spotInfo_5__17;
    if ( !v572 )
      sub_1B4D1EC(0LL, v565);
    v573 = MapControl_SpotInfo__AddChild(v572, v571->fields.questId, 0LL);
    v576 = v685->fields._warInfo_5__14;
    if ( !v576 )
      sub_1B4D1EC(v573, 0LL);
    v577 = v573;
    if ( !v573 )
      sub_1B4D1EC(0LL, v576);
    v578 = v576->fields.warId;
    v573->fields._WarInfo_k__BackingField = v576;
    v573->fields.warId = v578;
    sub_1B4CF34((CGThumbnailListItem_o *)&v573->fields._WarInfo_k__BackingField, (int32_t)v576, v574, v575);
    v579 = v685->fields._spotInfo_5__17;
    v577->fields._SpotInfo_k__BackingField = v579;
    sub_1B4CF34((CGThumbnailListItem_o *)&v577->fields._SpotInfo_k__BackingField, (int32_t)v579, v580, v581);
    v577->fields.endTime = QuestTree__GetEndTime(_4__this, v577, 0LL);
    warEnt_5__18 = v685->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1B4D1EC(0LL, v582);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v586 = v685->fields._warEnt_5__18;
      if ( !v586 )
        sub_1B4D1EC(IsStartTypeQuest, v585);
      v587 = v685->fields.__8__3;
      if ( !v587 )
        sub_1B4D1EC(IsStartTypeQuest, v585);
      if ( v586->fields.targetId == v587->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v685->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_407;
      }
    }
    v588 = v685->fields._warEnt_5__18;
    if ( !v588 )
      sub_1B4D1EC(IsStartTypeQuest, v585);
    v589 = v685->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v589 )
      sub_1B4D1EC(0LL, v585);
    v590 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v589,
             v588->fields.id,
             &value,
             (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v590 )
    {
      v592 = v685->fields.__8__3;
      if ( !v592 )
        sub_1B4D1EC(v590, v591);
      if ( !value )
        sub_1B4D1EC(0LL, v591);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v592->fields.questId,
             (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_407:
        *(_QWORD *)&v577->fields.dispType = 0LL;
LABEL_411:
        v595 = 1;
        goto LABEL_412;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v514, v577, v685->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_411;
    v594 = v685->fields._warInfo_5__14;
    if ( !v594 )
      sub_1B4D1EC(0LL, v593);
    MapControl_WarInfo__SetStatusCheckFlag(v594, 1, 0, 0LL);
    v595 = 0;
LABEL_412:
    if ( MapControl_QuestInfo__IsDisaplayable(v577, 0LL) )
    {
      if ( ((v566 | v595) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v577, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v598 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestResetMaster___);
          v599 = (System_Int64_array *)sub_1B4D038(long___TypeInfo, 1LL);
          v600 = v685->fields.__8__3;
          if ( !v600 )
            sub_1B4D1EC(v599, v599);
          if ( !v599 )
            sub_1B4D1EC(0LL, 0LL);
          if ( !v599->max_length )
            sub_1B4D1F4(v599, v599);
          v599->m_Items[0] = v600->fields.questId;
          if ( !v598 )
            sub_1B4D1EC(v599, v599);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v598,
                                   v599,
                                   (const MethodInfo_319CF78 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v679 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v679, 0LL) )
          {
            v602 = v685->fields._spotInfo_5__17;
            if ( !v602 )
              sub_1B4D1EC(0LL, v597);
            MapControl_SpotInfo__AddQuestCount(v602, 1, 0LL);
          }
        }
        v603 = v685->fields._spotInfo_5__17;
        if ( !v603 )
          sub_1B4D1EC(0LL, v597);
        MapControl_SpotInfo__AddAvailableQuestId(v603, v577->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v577, 0LL) == 1 )
      {
        v604 = MapControl_QuestInfo__GetMine(v577, 0LL);
        if ( !v604 )
          sub_1B4D1EC(0LL, v605);
        HasFlag = QuestEntity__HasFlag(v604, 0x400000000000LL, 0LL);
        v608 = v685;
        if ( !HasFlag )
        {
          v609 = v685->fields._spotInfo_5__17;
          if ( !v609 )
            sub_1B4D1EC(HasFlag, v607);
          v609->fields._IsNext_k__BackingField = 1;
        }
        v610 = v608->fields._mapInfo_5__16;
        if ( !v610 )
          sub_1B4D1EC(HasFlag, v607);
        v610->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v577, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v613 = v685;
        v614 = v685->fields._spotInfo_5__17;
        if ( !v614 )
          sub_1B4D1EC(IsDisplayQuestNextIcon, v612);
        v614->fields._IsNext_k__BackingField = 1;
        v615 = v613->fields._mapInfo_5__16;
        if ( !v615 )
          sub_1B4D1EC(IsDisplayQuestNextIcon, v612);
        v615->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v514, 0x8000000000LL, 0LL) )
      {
        v616 = v685->fields._spotInfo_5__17;
        if ( !v616 )
          sub_1B4D1EC(0LL, v596);
        MapControl_SpotInfo__AddFreeQuestCount(v616, 1, 0LL);
      }
    }
    v617 = v679;
    if ( v679 )
    {
      v617 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v679, 8, 0LL);
      if ( ((unsigned __int8)v617 & 1) != 0 )
      {
        if ( !v679 )
          sub_1B4D1EC(v617, v596);
        v618 = v679->fields.challengeNum == 0;
      }
      else
      {
        v618 = 0;
      }
    }
    else
    {
      v618 = 1;
    }
    v577->fields.isNew = v618;
    v577->fields.questPhase = QuestPhase;
    v619 = v685->fields.__8__3;
    if ( !v619 )
      sub_1B4D1EC(v617, v596);
    questPickupMaster_5__9 = v685->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1B4D1EC(0LL, v596);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v619->fields.questId, 0LL);
    v577->fields.pickupPriority = Priority;
    v623 = v685->fields.__8__3;
    if ( !v623 )
      sub_1B4D1EC(Priority, v622);
    questPhaseMaster_5__6 = v685->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1B4D1EC(0LL, v622);
    v625 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v623->fields.questId, 0LL);
    v629 = v625;
    if ( !v625 )
      sub_1B4D1EC(0LL, v626);
    v630 = v625[3];
    v631 = v630 - 1;
    if ( (int)v630 >= 1 )
    {
      v632 = 0;
      while ( 1 )
      {
        v633 = v629[v632 + 4];
        if ( !v633 )
          sub_1B4D1EC(v625, v626);
        v625 = MapControl_QuestInfo__AddChild(v577, *(_DWORD *)(v633 + 16), *(_DWORD *)(v633 + 20), 0LL);
        if ( v631 == v632 )
          break;
        if ( (unsigned int)++v632 >= *((_DWORD *)v629 + 6) )
          sub_1B4D1F4(v625, v626);
      }
    }
    v634 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v634 )
      sub_1B4D1EC(0LL, v626);
    v635 = v634->fields._items;
    v636 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v634->fields._version;
    if ( !v635 )
      sub_1B4D1EC(v634, v626);
    v637 = v634->fields._size;
    if ( (unsigned int)v637 >= v635->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v634,
        (Il2CppObject *)v577,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v636[4] + 192LL) + 112LL));
    }
    else
    {
      v638 = &v635->obj.klass + v637;
      v634->fields._size = v637 + 1;
      v638[4] = (Il2CppClass *)v577;
      sub_1B4CF34((CGThumbnailListItem_o *)(v638 + 4), (int32_t)v577, v627, v628);
    }
    v4 = v685;
    v255 = v685->fields._mapCount_5__13;
    if ( v255 && !(v255 % v685->fields._breakInterval_5__22) )
    {
      v685->fields.__2__current = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v639, v640);
      v315 = v685;
      v316 = 4;
      goto LABEL_328;
    }
LABEL_466:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    v459 = v255 + 1;
    v4->fields._mapCount_5__13 = v459;
  }
  if ( !_4__this )
    sub_1B4D1EC(mapIdx_5__12, method);
  v641 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v642 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v642 = QuestTree___c_TypeInfo;
  }
  _9__44_11 = (System_Comparison_T__o *)v642->static_fields->__9__44_11;
  if ( !_9__44_11 )
  {
    if ( !v642->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v642);
      v642 = QuestTree___c_TypeInfo;
    }
    v644 = (Il2CppObject *)v642->static_fields->__9;
    _9__44_11 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__44_11,
      v644,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__,
      0LL);
    v645 = QuestTree___c_TypeInfo->static_fields;
    v645->__9__44_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__44_11;
    sub_1B4CF34((CGThumbnailListItem_o *)&v645->__9__44_11, (int32_t)_9__44_11, v646, v647);
  }
  if ( !v641 )
    sub_1B4D1EC(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_56106144(
    v641,
    _9__44_11,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v648 = v685;
  v685->fields.__8__3 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v648->fields.__8__3, 0, v649, v650);
  v651 = v685;
  v685->fields._warInfo_5__14 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v651->fields._warInfo_5__14, 0, v652, v653);
  v654 = v685;
  v685->fields._mapInfo_5__16 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v654->fields._mapInfo_5__16, 0, v655, v656);
  v657 = v685;
  v685->fields._spotInfo_5__17 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v657->fields._spotInfo_5__17, 0, v658, v659);
  v660 = v685;
  v685->fields._warEnt_5__18 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v660->fields._warEnt_5__18, 0, v661, v662);
  v663 = v685;
  v685->fields._userQuestMaster_5__19 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v663->fields._userQuestMaster_5__19, 0, v664, v665);
  v666 = v685;
  v685->fields._questList_5__24 = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v666->fields._questList_5__24, 0, v667, v668);
  v669 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v669 )
    sub_1B4D1EC(0LL, v670);
  CommonUI__SetLoadMode((CommonUI_o *)v669, 0, 0LL);
  _4__this->fields.isInit = 1;
  v673 = v685;
  if ( v685->fields.endCallback )
  {
    v685->fields.__2__current = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v673->fields.__2__current, 0, v671, v672);
    v315 = v685;
    v316 = 5;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  if ( (byte_49B7F8B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_49B7F8B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}