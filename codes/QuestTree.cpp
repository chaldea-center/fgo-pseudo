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

  if ( (byte_4B1933C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1BCAFF8(&MapControl_RootInfo_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_4B1933C = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1BCB244(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allQuestInfoList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allSpotInfoList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v30;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v33;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allMapInfoList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v36;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.allWarInfoList, (int32_t)v36, v37, v38);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.questReleaseEntList, (int32_t)v39, v40, v41);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38F8FF0 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_35788252(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_35785340(
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
  __int64 v15; // x2
  __int64 v16; // x8
  int64_t *v17; // x9
  int64_t v18; // x10

  if ( (byte_4B19339 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1BCAFF8(&long___TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v8);
    byte_4B19339 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1BCB0A0(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v16 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v16 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v16 == 1) )
      sub_1BCB25C(Time, v11, v15);
    *(_QWORD *)(Time + 40) = v13->fields.endedAt;
    if ( (int)v16 >= 1 )
    {
      v16 = (unsigned int)v16;
      v17 = (int64_t *)(Time + 32);
      do
      {
        v18 = *v17;
        if ( *v17 > v12 && this->fields.forceUpdateTime > v18 )
          this->fields.forceUpdateTime = v18;
        --v16;
        ++v17;
      }
      while ( v16 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1BCB254(Time, v11);
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
  __int64 v26; // x2
  __int64 v27; // x8
  int64_t *v28; // x9
  int64_t v29; // x10
  int v30; // w22
  _BOOL4 v31; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v34; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v37; // w23
  int32_t v38; // w20
  _BOOL4 v39; // w8
  UserQuestEntity_o *v41; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B19335 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestAddMaster___, questEnt);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v10);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1BCAFF8(&long___TypeInfo, v12);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    this = (QuestTree_o *)sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v15);
    byte_4B19335 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v41 = 0LL;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v25 = (_QWORD *)sub_1BCB0A0(long___TypeInfo, 3LL);
  Instance = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v25 )
    goto LABEL_75;
  v27 = v25[3];
  if ( !(_DWORD)v27 || (v25[4] = Instance, (_DWORD)v27 == 1) || (v25[5] = v23, (unsigned int)v27 <= 2) )
    sub_1BCB25C(Instance, v17, v26);
  v25[6] = v24;
  if ( (int)v27 >= 1 )
  {
    v27 = (unsigned int)v27;
    v28 = v25 + 4;
    do
    {
      v29 = *v28;
      if ( *v28 > Time && v8->fields.forceUpdateTime > v29 )
        v8->fields.forceUpdateTime = v29;
      --v27;
      ++v28;
    }
    while ( v27 );
  }
  v30 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
  {
    v31 = 0;
    goto LABEL_57;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v30 = 3;
  else
    v30 = 1;
  if ( v18 || HasFlag )
  {
    v31 = !HasFlag;
    goto LABEL_57;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0LL) > Time
    && QuestEntity__getNoticeAt(questEnt, 0LL) <= Time )
  {
    goto LABEL_55;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_75;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_32C7E4C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B165D1 )
          {
            sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
            byte_4B165D1 = 1;
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
                  &v41,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_56;
          Instance = (int64_t)v41;
          if ( !v41 )
            goto LABEL_75;
          if ( !UserQuestEntity__HasStatus(v41, 8, 0LL) )
            goto LABEL_56;
LABEL_55:
          v31 = 0;
          v30 = 2;
          goto LABEL_57;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v34);
  if ( !Instance )
    goto LABEL_75;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0LL)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_55;
  }
LABEL_56:
  v31 = 0;
  v30 = 0;
LABEL_57:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (Instance & 1) != 0 )
    v37 = 1;
  else
    v37 = forceOperation;
  if ( v37 )
    v38 = v37 != 2;
  else
    v38 = v30;
  if ( questReleaseNG && v38 == 2 )
  {
    if ( questInfo )
    {
      MapControl_QuestInfo__SetDispType_35402564(questInfo, 2, questReleaseNG, 0LL);
      goto LABEL_71;
    }
LABEL_75:
    sub_1BCB254(Instance, v17);
  }
  if ( !questInfo )
    goto LABEL_75;
  questInfo->fields.dispType = v38;
LABEL_71:
  if ( v37 )
    v39 = v37 != 2;
  else
    v39 = v31;
  questInfo->fields.touchType = v39;
  return v38;
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

  return QuestTree__CheckSpotCond_35788252(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_35788252(
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
  __int64 v58; // x2
  struct System_Threading_CancellationTokenSource_o *v59; // x8
  QuestAfterAction_o *v60; // x20
  int32_t v61; // w23
  unsigned __int64 v62; // x24
  int32_t v63; // w22
  int v64; // w21
  int v65; // w20
  int64_t v66; // x2
  int32_t v67; // w0
  int32_t v68; // w0
  bool v69; // cc
  int32_t v70; // w8
  bool v71; // cc
  int32_t v72; // w8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v74; // x20
  int32_t v75; // w23
  unsigned __int64 v76; // x24
  int32_t v77; // w22
  struct System_Threading_CancellationTokenSource_o *v78; // x8
  QuestAfterAction_o *v79; // x20
  unsigned __int64 v80; // x24
  int32_t v81; // w22
  int32_t v82; // w8
  int32_t v84; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B19338 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v23);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v24);
    byte_4B19338 = 1;
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
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v25);
    byte_4B1676D = 1;
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
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v29);
    byte_4B1676D = 1;
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
  if ( !LODWORD(Instance[1].klass) )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v29);
    byte_4B1676D = 1;
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
      v37 = sub_1C1B45C(inited);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C1B45C(inited);
    v39 = **(UnityEngine_Object_o ***)(v38 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
          v70 = 1;
        else
          v70 = targetValue;
        v71 = v46 < v70;
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
      v74 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v75 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v84 = 1;
        else
          v84 = targetValue;
        v71 = v75 < v84;
LABEL_206:
        LOBYTE(v26) = v71;
        return (unsigned __int8)v26 & 1;
      }
      v75 = 0;
      v76 = 0LL;
      while ( v76 < (unsigned int)m_CancellationTokenSource )
      {
        v77 = *((_DWORD *)&v74->fields.invalidMapGimmickIdList + v76);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v77,
                                           IsExistCommand,
                                           0LL);
        LODWORD(m_CancellationTokenSource) = v74->fields.m_CancellationTokenSource;
        ++v76;
        v75 += (unsigned __int8)Instance & 1;
        if ( (__int64)v76 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
            sub_1BCB254(Instance, v29);
          }
        }
        v52 = 0;
LABEL_167:
        if ( targetValue <= 1 )
          v72 = 1;
        else
          v72 = targetValue;
        v69 = v52 < v72;
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
        v78 = Instance->fields.m_CancellationTokenSource;
        v79 = Instance;
        if ( (int)v78 >= 1 )
        {
          v61 = 0;
          v80 = 0LL;
          while ( v80 < (unsigned int)v78 )
          {
            v81 = *((_DWORD *)&v79->fields.invalidMapGimmickIdList + v80);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v81,
                                               IsExistCommand,
                                               0LL);
            LODWORD(v78) = v79->fields.m_CancellationTokenSource;
            ++v80;
            v61 += (unsigned __int8)Instance & 1;
            if ( (__int64)v80 >= (int)v78 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1BCB25C(Instance, v29, v58);
        }
LABEL_188:
        v61 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v82 = 1;
        else
          v82 = targetValue;
        v69 = v61 < v82;
      }
LABEL_193:
      LOBYTE(v26) = !v69;
      return (unsigned __int8)v26 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v29);
        byte_4B165D1 = 1;
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
      v69 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v26) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v26 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0LL);
      if ( !Instance )
        goto LABEL_209;
      v59 = Instance->fields.m_CancellationTokenSource;
      v60 = Instance;
      if ( (int)v59 < 1 )
        goto LABEL_188;
      v61 = 0;
      v62 = 0LL;
      while ( v62 < (unsigned int)v59 )
      {
        v63 = *((_DWORD *)&v60->fields.invalidMapGimmickIdList + v62);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClearRaw(
                                           (clsQuestCheck_o *)Instance,
                                           v63,
                                           IsExistCommand,
                                           0LL);
        LODWORD(v59) = v60->fields.m_CancellationTokenSource;
        ++v62;
        v61 += (unsigned __int8)Instance & 1;
        if ( (__int64)v62 >= (int)v59 )
          goto LABEL_189;
      }
      goto LABEL_210;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v26 & 1;
    case 13:
      v64 = targetId / 100;
      v65 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventRaceGoalScriptPlayed(v64, v65, targetValue, 0LL);
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
      v66 = targetValue;
      v67 = 83;
      goto LABEL_199;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 84;
      goto LABEL_199;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 85;
      goto LABEL_199;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 86;
      goto LABEL_199;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 87;
      goto LABEL_199;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 88;
      goto LABEL_199;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 89;
      goto LABEL_199;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 90;
      goto LABEL_199;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 91;
      goto LABEL_199;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 23;
      goto LABEL_199;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 76;
      goto LABEL_199;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v26 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetValue;
      v67 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      v68 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v68 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v66 = targetValue;
        v67 = 113;
LABEL_199:
        LOBYTE(v26) = CondType__IsOpen(v67, targetId, v66, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v26) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v68, 1, 0LL);
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

  return QuestTree__CheckSpotCond_35788252(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B19333 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo, mapInfo);
    byte_4B19333 = 1;
  }
  v7 = sub_1BCB244(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 72) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
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
  if ( (byte_4B19336 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_4B19336 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_41680376((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1BCB254(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1BCB254(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1BCB254(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1BCB254(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1BCB254(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1BCB254(0LL, v32);
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
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_40542184; // x0
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

  if ( (byte_4B19337 & 1) == 0 )
  {
    sub_1BCAFF8(&System_DateTime_TypeInfo, questEnt);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B19337 = 1;
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
    sub_1BCB254(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_40542184 = NetworkManager__getTime_40542184(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_40542184;
  dateData = NetworkManager__getDateTime_40542964(Time_40542184 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_40542964(v16, 0LL).fields._dateData;
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


MapControl_WarInfo_o *__fastcall QuestTree__GetLatestGrandWarInfo(QuestTree_o *this, const MethodInfo *method)
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
  System_Func_object__int__o *_9__39_0; // x21
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

  if ( (byte_4B1932C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1BCAFF8(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__, v9);
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v10);
    byte_4B1932C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 0, 1, 0LL);
  v13 = QuestTree___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v13 = QuestTree___c_TypeInfo;
  }
  _9__39_0 = (System_Func_object__int__o *)v13->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestTree___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__39_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__39_0, v16, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__39_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__39_0,
                                                               (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v20,
                                                  (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1BCB254(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1BCB254(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v26.fields._current[1].klass), v23) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
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

  if ( (byte_4B1932B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1BCAFF8(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, v9);
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v10);
    byte_4B1932B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0, 0LL);
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
    _9__38_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v20,
                                                  (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1BCB254(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1BCB254(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v26.fields._current[1].klass), v23) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4B19321 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1BCAFF8(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__, v6);
    sub_1BCAFF8(&QuestTree___c__DisplayClass24_0_TypeInfo, v7);
    byte_4B19321 = 1;
  }
  v8 = sub_1BCB244(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1BCB254(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1BCB254(QuestInfo, v5);
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

  if ( (byte_4B19324 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_4B19324 = 1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1BCB254(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1BCB254(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1BCB254(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1BCB254(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1BCB254(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1BCB254(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1BCB254(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1BCB254(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BCB254(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1BCB254(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1BCB254(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1BCB254(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1BCB254(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
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
        (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_4B19327 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_4B19327 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1BCB254(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1BCB254(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1BCB254(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1BCB254(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1BCB254(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BCB254(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1BCB254(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1BCB254(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1BCB254(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1BCB254(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_369CBAC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
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
            (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1BCB254(v34, v35);
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

  if ( (byte_4B19322 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1BCAFF8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__, v6);
    sub_1BCAFF8(&QuestTree___c__DisplayClass25_0_TypeInfo, v7);
    byte_4B19322 = 1;
  }
  v8 = sub_1BCB244(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BCB254(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4B1933A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_4B1933A = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    allQuestInfoList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1BCB254(v14, v15);
    if ( LODWORD(v25.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1BCB254(v14, v15);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)current, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4B19326 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B19326 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
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

  if ( (byte_4B19320 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__, v6);
    sub_1BCAFF8(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_4B19320 = 1;
  }
  v8 = sub_1BCB244(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1BCB254(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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

  if ( (byte_4B19325 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1BCAFF8(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__, v13);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__, v14);
    sub_1BCAFF8(&QuestTree___c__DisplayClass31_0_TypeInfo, v15);
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v16);
    byte_4B19325 = 1;
  }
  v17 = sub_1BCB244(QuestTree___c__DisplayClass31_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v24, v25, v26);
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
      _9__31_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v30, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v32, v33);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v27 )
    {
      System_Collections_Generic_List_int___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCB254(Mine, mapId);
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
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v38 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapInfo__TypeInfo);
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
                                                                    (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
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

  if ( (byte_4B19329 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1BCAFF8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1BCAFF8(&QuestTree___c__DisplayClass35_0_TypeInfo, v7);
    byte_4B19329 = 1;
  }
  v8 = sub_1BCB244(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BCB254(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4B1931C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76891200, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4B1931C = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_57382084(
    v6,
    allWarInfoList,
    (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76891200);
  if ( !v6 )
    sub_1BCB254(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_36BB4FC *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1931D & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree__Init_d__17_TypeInfo, endCallback);
    byte_4B1931D = 1;
  }
  v5 = sub_1BCB244(QuestTree__Init_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4B19334 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_4B19334 = 1;
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
    sub_1BCB254(mapControlRootInfo, method);
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

  if ( (byte_4B1932E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1932E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_32C7E4C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_35782788(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_35782788(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  __int64 v16; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v18; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v20; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B1932F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, warEnt);
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarReleaseMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&long___TypeInfo, v8);
    this = (QuestTree_o *)sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B1932F = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1BCB0A0(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_33:
    sub_1BCB254(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1BCB25C(this, warEnt, v16);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v18 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v20 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v20 )
        v4->fields.forceUpdateTime = (int64_t)v20;
      --v18;
      ++p_allSpotInfoList;
    }
    while ( v18 );
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *v8; // x20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v12; // x21
  WarEntity_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B1932D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&warId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&ScrTerminalListTop_TypeInfo, v6);
    byte_4B1932D = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v8 = (MapControl_WarInfo_o *)mapControlRootInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( ScrTerminalListTop__IsGrandQuestWarId(warId, 0LL) && MapControl_WarInfo__GetMine(v8, 0LL) )
  {
    Mine = MapControl_WarInfo__GetMine(v8, 0LL);
    if ( !Mine )
      goto LABEL_26;
    if ( !WarEntity__IsContainPrioredEntity(Mine, 15, 0LL) )
    {
      LOBYTE(mapControlRootInfo) = 1;
      return (char)mapControlRootInfo;
    }
  }
  LODWORD(mapControlRootInfo) = MapControl_WarInfo__GetStatus(v8, 0LL);
  if ( !(_DWORD)mapControlRootInfo )
    return (char)mapControlRootInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_26:
    sub_1BCB254(Mine, v10);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, warId, 0LL);
  if ( OpenEntity )
  {
    v12 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0LL) || WarReleaseEntity__IsClose(v12, 0LL) )
      goto LABEL_19;
  }
  if ( MapControl_WarInfo__IsClosedWar(v8, 0LL) )
    goto LABEL_19;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_WarInfo__GetMine(v8, 0LL);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v13 = (WarEntity_o *)mapControlRootInfo;
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0LL)
    && !QuestTree__IsActiveEventWar_35782788(this, v13, v14) )
  {
LABEL_19:
    LOBYTE(mapControlRootInfo) = 0;
  }
  else
  {
    LOBYTE(mapControlRootInfo) = QuestTree__IsWarOpen(this, v13->fields.id, v14);
  }
  return (char)mapControlRootInfo;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4B1931E & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1931E = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
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

  if ( (byte_4B19328 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_4B19328 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1BCB254(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1BCB254(v13, v14);
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
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1BCB254(this, 0LL);
  return QuestTree__CheckSpotCond_35788252(
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
    sub_1BCB254(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_35788252(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_35788252(
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

  if ( (byte_4B1933B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4B1933B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1BCB254(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1BCB254(v13, v14);
    if ( !v13 )
      sub_1BCB254(0LL, v14);
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
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4B1932A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4B1932A = 1;
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
    sub_1BCB254(QuestInfoByWarId, v9);
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
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1BCB254(v13, v14);
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
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4B19330 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1BCAFF8(&SpotEntity_TypeInfo, v9);
    byte_4B19330 = 1;
  }
  v10 = sub_1BCB244(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)name, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1B45C(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1B45C(v16);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1BCB254(Instance, v12);
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

  v4 = QuestTree__CheckMapGimmickCond_35785340(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1BCB254(v4, v5);
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
    sub_1BCB254(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35788252(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_35788252(
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
    sub_1BCB254(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_35788252(
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
    sub_1BCB254(this, nowTime);
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

  if ( (byte_4B1931F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_4B1931F = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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
  if ( (byte_4B1931B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_4B1931B = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B19331 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo, endCallback);
    byte_4B19331 = 1;
  }
  v5 = sub_1BCB244(QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B19332 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo, *(_QWORD *)&targetWarId);
    byte_4B19332 = 1;
  }
  v7 = sub_1BCB244(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 72), (int32_t)endCallback, v10, v11);
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

  if ( (byte_4B19323 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1BCAFF8(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1BCAFF8(&QuestTree___c__DisplayClass29_0_TypeInfo, v7);
    byte_4B19323 = 1;
  }
  v8 = sub_1BCB244(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *v4; // x19
  int32_t _1__state; // w8
  struct QuestTree_o *_4__this; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w20
  BlankEarthSpotEntity_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x20
  const MethodInfo *v17; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *v18; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_4B19341 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1BCAFF8(&BlankEarthSpotMaster_TypeInfo, method);
    byte_4B19341 = 1;
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
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)v4->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v9 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v4->fields.__7__wrap1 = v9;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
    v12 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v12 < (int)max_length )
  {
    if ( v12 >= max_length )
      sub_1BCB25C(this, method, v2);
    v16 = _7__wrap1->m_Items[v12];
    if ( v16 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)v4->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v16->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v18 = this;
          QuestTree__SetupBlankEarthSpotInfo((QuestTree_o *)this, v16, (MapControl_SpotInfo_o *)this, v17);
          v4->fields.__2__current = (struct MapControl_SpotInfo_o *)v18;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1BCB254(this, method);
  }
  this->klass = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *v6; // x20
  struct QuestTree_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B19342 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo, method);
    byte_4B19342 = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1BCB244(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.blankEarthSpotMaster, (int32_t)_3__blankEarthSpotMaster, v12, v13);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v6;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__46_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
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
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_Object_o *v25; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4B19343 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__17_o *)sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v6);
    byte_4B19343 = 1;
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
      if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, method) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B193CA )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
          byte_4B193CA = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v10->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
            v13 = sub_1C1B45C(v12);
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
          if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
            v14 = sub_1C1B45C(v12);
          v15 = **(UnityEngine_Object_o ***)(v14 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v16);
              v18 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v17);
              v2->fields.__2__current = (Il2CppObject *)v18;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1BCAF9C(p__2__current, (int32_t)v18, v20, v21);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1BCB254(this, method);
      }
      v23 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
        v23 = sub_1C1B45C(v9);
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C1B45C(v9);
      v25 = **(UnityEngine_Object_o ***)(v24 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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

  if ( (byte_4B1933D & 1) == 0 )
  {
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v1);
    byte_4B1933D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetLatestGrandWarInfo_b__39_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCB254(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetLatestProgressWarInfo_b__38_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCB254(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__44_0(
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
    sub_1BCB254(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__44_1(
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
    sub_1BCB254(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_11(
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
    sub_1BCB254(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_2(
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
    sub_1BCB254(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B1933E & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4B1933E = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BCB254(this, x);
  return this->fields.questId == v3->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass44_0___ctor(
        QuestTree___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass44_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass45_0___ctor(
        QuestTree___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass45_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass45_1___ctor(
        QuestTree___c__DisplayClass45_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass45_2___ctor(
        QuestTree___c__DisplayClass45_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass45_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass45_3___ctor(
        QuestTree___c__DisplayClass45_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass45_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass45_3_o *v4; // x20

  v4 = this;
  if ( (byte_4B1933F & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_3_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_4B1933F = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass45_4___ctor(
        QuestTree___c__DisplayClass45_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass45_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass45_5___ctor(
        QuestTree___c__DisplayClass45_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass45_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass45_6___ctor(
        QuestTree___c__DisplayClass45_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass45_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass45_6_o *v4; // x20

  v4 = this;
  if ( (byte_4B19340 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_6_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4B19340 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__44___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v3; // x27
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
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *MasterData_object; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  System_Collections_Generic_Dictionary_int__object__o *v102; // x21
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Object_array *Entitys; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v110; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v115; // x9
  WarEntity_o *v116; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v118; // x21
  const MethodInfo *v119; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v126; // x23
  int64_t v127; // x19
  Il2CppObject *v128; // x8
  Il2CppObject *_2__current; // x9
  __int64 v130; // x8
  struct QuestTree_o **p__4__this; // x9
  struct QuestTree_o *v132; // x10
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 _2__current_low; // x10
  __int64 v136; // x8
  const MethodInfo *v137; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v138; // x22
  unsigned int v139; // w9
  __int64 v140; // x8
  int32_t v141; // w24
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v146; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v148; // x23
  Il2CppClass **v149; // x0
  const MethodInfo *v150; // x3
  Il2CppObject *v151; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v152; // x25
  int v153; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v155; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v156; // x8
  SpotEntity_o **v157; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v158; // t1
  const MethodInfo *v159; // x3
  Il2CppObject *v160; // x26
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  __int64 v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  __int64 v166; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v168; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v169; // x25
  int v170; // w27
  unsigned int v171; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v172; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v173; // x8
  SpotRoadEntity_o **v174; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v175; // t1
  const MethodInfo *v176; // x3
  Il2CppObject *v177; // x26
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  __int64 v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x8
  Il2CppObject *v184; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v185; // x24
  int v186; // w26
  int v187; // w22
  __int64 v188; // x8
  MapControl_MapGimmickInfo_o *v189; // x25
  const MethodInfo *v190; // x2
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  __int64 v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x8
  CGThumbnailListItem_o *p__2__current; // x27
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v199; // x22
  Il2CppObject *v200; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  Il2CppObject *v204; // x22
  struct QuestTree___c__DisplayClass44_0_o **p__8__1; // x21
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  int64_t v208; // x22
  MapControl_WarInfo_o *v209; // x23
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  MapControl_MapInfo_o *v212; // x22
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  MapControl_SpotInfo_o *v215; // x22
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  WarEntity_o *v218; // x22
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  Il2CppObject *v221; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  bool v224; // zf
  int v225; // w8
  QuestEntity_o *v226; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass44_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v231; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  Il2CppObject *v235; // x0
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  int32_t MapID; // w0
  const MethodInfo *v239; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  int v250; // w25
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v253; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  const MethodInfo *v257; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v259; // x4
  int v260; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v263; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v265; // x9
  struct MapControl_MapInfo_o *v266; // x9
  bool v267; // w8
  const MethodInfo *v268; // x3
  Il2CppObject *v269; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v270; // x21
  int v271; // w19
  int v272; // w22
  __int64 v273; // x8
  __int64 v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  __int64 v277; // x8
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v281; // x22
  Il2CppObject *v282; // x23
  struct QuestTree___c_StaticFields *v283; // x0
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  int32_t v292; // w2
  const MethodInfo *v293; // x3
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  CGThumbnailListItem_o *v300; // x27
  int v301; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v302; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v303; // [xsp+10h] [xbp-B0h]
  unsigned int v304; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v305; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v307; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v311; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4B19344 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1BCAFF8(&System_Comparison_MapControl_WarInfo__TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventStatusMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapGimmickMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestAddMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPickupMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SpotMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SpotRoadMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v21);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarAddMaster___, v22);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v23);
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v24);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestResetMaster___, v25);
    sub_1BCAFF8(&DataManager_TypeInfo, v26);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v27);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v28);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v29);
    sub_1BCAFF8(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__, v30);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v31);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v32);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v33);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v34);
    sub_1BCAFF8(&long___TypeInfo, v35);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v36);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v39);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v40);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v41);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v42);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v43);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v44);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v45);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v46);
    sub_1BCAFF8(&MapControl_MapInfo_TypeInfo, v47);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v48);
    sub_1BCAFF8(&OptionManager_TypeInfo, v49);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v50);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v51);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v53);
    sub_1BCAFF8(&MapControl_SpotInfo_TypeInfo, v54);
    sub_1BCAFF8(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__, v55);
    sub_1BCAFF8(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__, v56);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__, v57);
    sub_1BCAFF8(&QuestTree___c__DisplayClass44_0_TypeInfo, v58);
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v59);
    sub_1BCAFF8(&WarEntity_TypeInfo, v60);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1BCAFF8(&MapControl_WarInfo_TypeInfo, v61);
    byte_4B19344 = 1;
  }
  v311 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v307 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v3->fields.__4__this;
  v305 = v3;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, method);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v3->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._dataManager_5__2, (int32_t)Instance, v64, v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapMaster___);
      v3->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._mapMaster_5__3, (int32_t)MasterData_object, v67, v68);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v69 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SpotMaster___);
      v3->fields._spotMaster_5__4 = (struct SpotMaster_o *)v69;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._spotMaster_5__4, (int32_t)v69, v70, v71);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v72 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v3->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v72;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._blankEarthSpotMaster_5__5, (int32_t)v72, v73, v74);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v75 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
      v3->fields._questMaster_5__6 = (struct QuestMaster_o *)v75;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._questMaster_5__6, (int32_t)v75, v76, v77);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v78 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v3->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v78;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._questPhaseMaster_5__7, (int32_t)v78, v79, v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
      v3->fields._eventMaster_5__8 = (struct EventMaster_o *)v81;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._eventMaster_5__8, (int32_t)v81, v82, v83);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v84 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v3->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v84;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._eventDetailMaster_5__9, (int32_t)v84, v85, v86);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v3->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v87;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._eventStatusMaster_5__10, (int32_t)v87, v88, v89);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v90 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v3->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v90;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._eventStatusQuestMaster_5__11, (int32_t)v90, v91, v92);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v93 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v3->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v93;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._spotRoadMaster_5__12, (int32_t)v93, v94, v95);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v96 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v3->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v96;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._mapGimmickMaster_5__13, (int32_t)v96, v97, v98);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v99 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v3->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v99;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._questPickupMaster_5__14, (int32_t)v99, v100, v101);
      v102 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v102,
        (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v3->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v102;
      sub_1BCAF9C(
        (CGThumbnailListItem_o *)&v3->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v102,
        v103,
        v104);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_32C7084 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v3->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._warList_5__16, (int32_t)Entitys, v106, v107);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v3->fields._warList_5__16;
      v3->fields._nowTime_5__17 = (int64_t)this;
      v3->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_299;
      max_length = warList_5__16->max_length;
      v110 = 0;
      v3->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v3->fields._warIdx_5__18;
      v3->fields.__1__state = -1;
      goto LABEL_129;
    case 2:
      questIdx_5__25 = v3->fields._questIdx_5__25;
      v3->fields.__1__state = -1;
      goto LABEL_269;
    case 3:
      endCallback = v3->fields.endCallback;
      v3->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_299;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      goto LABEL_282;
    default:
      return 0;
  }
  while ( v110 < max_length )
  {
    v115 = v3->fields._warList_5__16;
    if ( !v115 )
      goto LABEL_299;
    if ( v110 >= v115->max_length )
      goto LABEL_150;
    v116 = v115->m_Items[v110];
    if ( !v116 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v116->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v3->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v118 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v118, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v3->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v118, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v118, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v311,
               (int32_t)this,
               (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v311;
          if ( !v311 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v311, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v3->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v3->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v118, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v3->fields._eventStatusQuestMaster_5__11;
                v126 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v118, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v126->fields.statusId,
                                                                           0LL);
                if ( !v3->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v3->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v127 = v3->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1BCB0A0(long___TypeInfo, 3LL);
        v128 = entity;
        if ( !entity || !this )
          goto LABEL_299;
        _2__current = this->fields.__2__current;
        if ( !(_DWORD)_2__current )
          goto LABEL_150;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( (_DWORD)_2__current == 1 )
          goto LABEL_150;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v128[5].monitor;
        if ( (unsigned int)_2__current <= 2 )
          goto LABEL_150;
        this->fields.endCallback = (struct System_Action_o *)v128[6].monitor;
        if ( (int)_2__current >= 1 )
        {
          v130 = (unsigned int)_2__current;
          p__4__this = &this->fields.__4__this;
          do
          {
            v132 = *p__4__this;
            if ( (__int64)*p__4__this > v127 && _4__this->fields.forceUpdateTime > (__int64)v132 )
              _4__this->fields.forceUpdateTime = (int64_t)v132;
            --v130;
            ++p__4__this;
          }
          while ( v130 );
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_299;
    v133 = *(_QWORD *)&this->fields.__1__state;
    v134 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v133 )
      goto LABEL_299;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v133 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v118,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    }
    else
    {
      v136 = v133 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v136 + 32) = v118;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v136 + 32), (int32_t)v118, v2, v119);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_299;
    v138 = this;
    v303 = this->fields.__2__current;
    if ( (int)v303 >= 1 )
    {
      v139 = 0;
      v302 = this;
      while ( 1 )
      {
        v140 = *((_QWORD *)&v138->fields.__4__this + (int)v139);
        v304 = v139;
        if ( !v140 )
          goto LABEL_299;
        v141 = *(_DWORD *)(v140 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__AddChild(v118, v141, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v146 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v148 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v149[4] = (Il2CppClass *)v148;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v148, v142, v143);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotMaster__getList((SpotMaster_o *)this, v141, 0LL);
        if ( !this )
          goto LABEL_299;
        v151 = this->fields.__2__current;
        v152 = this;
        v153 = (_DWORD)v151 - 1;
        if ( (int)v151 >= 1 )
          break;
LABEL_93:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v148,
                                                                   v305->fields._blankEarthSpotMaster_5__5,
                                                                   v150);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v305->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v141,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v168 = this->fields.__2__current;
        v169 = this;
        v170 = (_DWORD)v168 - 1;
        if ( (int)v168 >= 1 )
        {
          v171 = 0;
          while ( 1 )
          {
            v172 = &v169->klass + (int)v171;
            v175 = v172[4];
            v174 = (SpotRoadEntity_o **)(v172 + 4);
            v173 = v175;
            if ( !v175 || !v148 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v148,
                                                                       (int32_t)v173->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v171 >= LODWORD(v169->fields.__2__current) )
              goto LABEL_150;
            v177 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v174, &spotRoadInfo, v176);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            v180 = *(_QWORD *)&this->fields.__1__state;
            v181 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v180 )
              goto LABEL_299;
            v182 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v177,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
            }
            else
            {
              v183 = v180 + 8 * v182;
              LODWORD(this->fields.__2__current) = v182 + 1;
              *(_QWORD *)(v183 + 32) = v177;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v183 + 32), (int32_t)v177, v178, v179);
            }
            if ( v170 == v171 )
              break;
            if ( ++v171 >= LODWORD(v169->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v3 = v305;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v305->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v141,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        v184 = this->fields.__2__current;
        v185 = this;
        v186 = (_DWORD)v184 - 1;
        if ( (int)v184 >= 1 )
        {
          v187 = 0;
          while ( 1 )
          {
            v188 = *((_QWORD *)&v185->fields.__4__this + v187);
            if ( !v188 )
              goto LABEL_299;
            if ( !v148 )
              goto LABEL_299;
            v189 = MapControl_MapInfo__AddMapGimmick(v148, *(_DWORD *)(v188 + 16), 0LL);
            mapGimmickInfo = v189;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v190);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            v193 = *(_QWORD *)&this->fields.__1__state;
            v194 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v193 )
              goto LABEL_299;
            v195 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v195 >= *(_DWORD *)(v193 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v189,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
            }
            else
            {
              v196 = v193 + 8 * v195;
              LODWORD(this->fields.__2__current) = v195 + 1;
              *(_QWORD *)(v196 + 32) = v189;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v196 + 32), (int32_t)v189, v191, v192);
            }
            if ( v186 == v187 )
              break;
            if ( (unsigned int)++v187 >= LODWORD(v185->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v138 = v302;
        v139 = v304 + 1;
        if ( v304 + 1 == (_DWORD)v303 )
          goto LABEL_126;
        if ( v139 >= LODWORD(v302->fields.__2__current) )
          goto LABEL_150;
      }
      for ( i = 0; i < LODWORD(v152->fields.__2__current); ++i )
      {
        v155 = &v152->klass + (int)i;
        v158 = v155[4];
        v157 = (SpotEntity_o **)(v155 + 4);
        v156 = v158;
        if ( !v158 || !v148 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddChild(
                                                                   v148,
                                                                   (int32_t)v156->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v152->fields.__2__current) )
          break;
        v160 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v157, &spotInfo, v159);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        v163 = *(_QWORD *)&this->fields.__1__state;
        v164 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v163 )
          goto LABEL_299;
        v165 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v165 >= *(_DWORD *)(v163 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v160,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v166 = v163 + 8 * v165;
          LODWORD(this->fields.__2__current) = v165 + 1;
          *(_QWORD *)(v166 + 32) = v160;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v166 + 32), (int32_t)v160, v161, v162);
        }
        if ( v153 == i )
          goto LABEL_93;
      }
LABEL_150:
      sub_1BCB25C(this, method, v2);
    }
LABEL_126:
    warIdx_5__18 = v3->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v2, v137);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_129:
    max_length = v3->fields._warCount_5__19;
    v110 = warIdx_5__18 + 1;
    v3->fields._warIdx_5__18 = v110;
  }
  if ( !_4__this )
    goto LABEL_299;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
  }
  v199 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v199 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v200 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v199 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v199, v200, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Comparison_MapControl_WarInfo__o *)v199;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)v199, v202, v203);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_57390740(
    allWarInfoList,
    v199,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v204 = (Il2CppObject *)sub_1BCB244(QuestTree___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v204, 0LL);
  v3->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v204;
  p__8__1 = &v3->fields.__8__1;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__8__1, (int32_t)v204, v206, v207);
  v208 = v3->fields._nowTime_5__17;
  v209 = (MapControl_WarInfo_o *)sub_1BCB244(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v209, v208, 0LL);
  v3->fields._warInfo_5__20 = v209;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._warInfo_5__20, (int32_t)v209, v210, v211);
  v212 = (MapControl_MapInfo_o *)sub_1BCB244(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v212, 0LL);
  v3->fields._mapInfo_5__21 = v212;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._mapInfo_5__21, (int32_t)v212, v213, v214);
  v215 = (MapControl_SpotInfo_o *)sub_1BCB244(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v215, 0LL);
  v3->fields._spotInfo_5__22 = v215;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._spotInfo_5__22, (int32_t)v215, v216, v217);
  v218 = (WarEntity_o *)sub_1BCB244(WarEntity_TypeInfo);
  WarEntity___ctor(v218, 0LL);
  v3->fields._warEnt_5__23 = v218;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._warEnt_5__23, (int32_t)v218, v219, v220);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v221 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v3->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v221;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._userQuestMaster_5__24, (int32_t)v221, v222, v223);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v3->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v224 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questMaster_5__6;
  v225 = v224 ? 5000 : 500;
  v3->fields._breakInterval_5__29 = v225;
  v3->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v3->fields._questIdx_5__25;
  v3->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v226 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v307 = 0LL;
    userQuestMaster_5__24 = v3->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, method);
      byte_4B165D1 = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_299;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v307,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v307;
      if ( !v307 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v307, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__getSpotId_41616128(v226, QuestPhase + 1, 0LL);
    _8__1 = v3->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v231 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v233, v234);
      }
      if ( !v231 )
        goto LABEL_299;
      v235 = System_Collections_Generic_List_object___Find(
               v231,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v3 = v305;
      v305->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v235;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v305->fields._spotInfo_5__22, (int32_t)v235, v236, v237);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v305->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v305->fields._mapInfoNow_5__27 != MapID )
      {
        v305->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v239);
        v305->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v305->fields._mapInfo_5__21, (int32_t)MapInfoByMapID, v241, v242);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v305->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v305->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v305->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0LL);
          else
            ChildByWarID = 0LL;
          v305->fields._warInfo_5__20 = ChildByWarID;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v305->fields._warInfo_5__20, (int32_t)ChildByWarID, v243, v244);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v305->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v305->fields._warEnt_5__23 = Mine;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v305->fields._warEnt_5__23, (int32_t)Mine, v248, v249);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v307 )
      goto LABEL_198;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v307;
    if ( !v307 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v307, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_186;
    if ( !v307 )
      goto LABEL_299;
    if ( v307->fields.challengeNum >= 1 )
    {
LABEL_186:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v307;
    if ( !v307 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v307, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_198:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v250 = 0;
      goto LABEL_199;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v307 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v307->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v3->fields._warInfo_5__20 )
      goto LABEL_299;
    v250 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetMine(v3->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_299;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_199:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v3->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_299;
    v253 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v251, v252);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v3->fields._spotInfo_5__22;
    v253->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v253->fields._questPhaseMaster_5__7, (int32_t)spotInfo_5__22, v255, v256);
    if ( !_4__this )
      goto LABEL_299;
    v253->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v253,
                                                                          v257);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_299;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_213;
      }
    }
    warEnt_5__23 = v3->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_299;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_213:
        v253->fields.__4__this = 0LL;
LABEL_217:
        v260 = 1;
        goto LABEL_218;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v226, (MapControl_QuestInfo_o *)v253, v3->fields._warInfoNow_5__28, v259) != 1 )
      goto LABEL_217;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v260 = 0;
LABEL_218:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v253, 0LL) )
    {
      if ( ((v250 | v260) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v253, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1BCB0A0(long___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_299;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_150;
          this->fields.__4__this = (struct QuestTree_o *)_1__state;
          if ( !Master_object )
            goto LABEL_299;
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (System_Int64_array *)this,
                                   (const MethodInfo_32C73DC *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v307 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v307, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v253->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v253, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v253,
                                                                   0LL);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v263 = v3->fields._spotInfo_5__22;
          if ( !v263 )
            goto LABEL_299;
          v263->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v3->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v253,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v265 = v3->fields._spotInfo_5__22;
        if ( !v265 )
          goto LABEL_299;
        v265->fields._IsNext_k__BackingField = 1;
        v266 = v3->fields._mapInfo_5__21;
        if ( !v266 )
          goto LABEL_299;
        v266->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v226, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v307 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v307, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v307 )
          goto LABEL_299;
        v267 = v307->fields.challengeNum == 0;
      }
      else
      {
        v267 = 0;
      }
    }
    else
    {
      v267 = 1;
    }
    LOBYTE(v253->fields.__8__1) = v267;
    HIDWORD(v253->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v253->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_299;
    v269 = this->fields.__2__current;
    v270 = this;
    v271 = (_DWORD)v269 - 1;
    if ( (int)v269 >= 1 )
    {
      v272 = 0;
      while ( 1 )
      {
        v273 = *((_QWORD *)&v270->fields.__4__this + v272);
        if ( !v273 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v253,
                                                                   *(_DWORD *)(v273 + 16),
                                                                   *(_DWORD *)(v273 + 20),
                                                                   0LL);
        if ( v271 == v272 )
          goto LABEL_262;
        if ( (unsigned int)++v272 >= LODWORD(v270->fields.__2__current) )
          goto LABEL_150;
      }
LABEL_299:
      sub_1BCB254(this, method);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v274 = *(_QWORD *)&this->fields.__1__state;
    v275 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v274 )
      goto LABEL_299;
    v276 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v276 >= *(_DWORD *)(v274 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v253,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
    }
    else
    {
      v277 = v274 + 8 * v276;
      LODWORD(this->fields.__2__current) = v276 + 1;
      *(_QWORD *)(v277 + 32) = v253;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v277 + 32), (int32_t)v253, v2, v268);
    }
    questIdx_5__25 = v3->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v3->fields._breakInterval_5__29) )
    {
      v3->fields.__2__current = 0LL;
      v300 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BCAF9C(v300, 0, v278, v279);
      v301 = 2;
      goto LABEL_297;
    }
LABEL_269:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)(unsigned int)v3->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v3->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_299;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
  }
  v281 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 40LL);
  if ( !v281 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v282 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v281 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v281, v282, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__, 0LL);
    v283 = QuestTree___c_TypeInfo->static_fields;
    v283->__9__44_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v281;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v283->__9__44_1, (int32_t)v281, v284, v285);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_57390740(
    allQuestInfoList,
    v281,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v3->fields.__8__1 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__8__1, 0, v286, v287);
  v3->fields._warInfo_5__20 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._warInfo_5__20, 0, v288, v289);
  v3->fields._mapInfo_5__21 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._mapInfo_5__21, 0, v290, v291);
  v3->fields._spotInfo_5__22 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._spotInfo_5__22, 0, v292, v293);
  v3->fields._warEnt_5__23 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._warEnt_5__23, 0, v294, v295);
  v3->fields._userQuestMaster_5__24 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields._userQuestMaster_5__24, 0, v296, v297);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v3->fields.endCallback )
  {
    v3->fields.__2__current = 0LL;
    v300 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1BCAF9C(v300, 0, v298, v299);
    v301 = 3;
LABEL_297:
    LODWORD(v300[-1].fields._ThumbnailSpritePath_k__BackingField) = v301;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_299;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0LL);
  if ( !_4__this )
    goto LABEL_299;
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v4; // x8
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  __int64 v116; // x0
  __int64 v117; // x1
  struct QuestTree___c__DisplayClass45_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v125; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v127; // x0
  Il2CppObject *v128; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  __int64 v132; // x1
  DataManager_o *v133; // x0
  Il2CppObject *v134; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v135; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  __int64 v138; // x1
  DataManager_o *v139; // x0
  Il2CppObject *v140; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v141; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  __int64 v144; // x1
  DataManager_o *v145; // x0
  Il2CppObject *v146; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v147; // x0
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  __int64 v167; // x1
  DataManager_o *v168; // x0
  Il2CppObject *v169; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v170; // x0
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  __int64 v173; // x1
  DataManager_o *v174; // x0
  Il2CppObject *v175; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  System_Collections_Generic_Dictionary_int__object__o *v179; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  Il2CppObject *v183; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v184; // x0
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
  struct QuestTree___c__DisplayClass45_1_o *_8__1; // x8
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
  struct QuestTree___c__DisplayClass45_1_o *v207; // x9
  MapControl_RootInfo_o *v208; // x0
  struct MapControl_WarInfo_o *v209; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v210; // x0
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  __int64 v213; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v215; // x1
  __int64 v216; // x2
  const MethodInfo *v217; // x3
  MapControl_WarInfo_o *v218; // x0
  __int64 EventId; // x0
  __int64 v220; // x1
  _BOOL8 v221; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v222; // x8
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
  struct QuestTree___c__DisplayClass45_1_o *v239; // x8
  Il2CppObject *v240; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v242; // x21
  _QWORD *v243; // x0
  Il2CppObject *v244; // x8
  __int64 v245; // x9
  __int64 v246; // x8
  int64_t *v247; // x9
  int64_t v248; // x10
  System_Collections_Generic_List_object__o *v249; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v251; // x1
  _QWORD *v252; // x9
  __int64 size; // x10
  Il2CppClass **v254; // x8
  __int64 v255; // x0
  __int64 v256; // x1
  int32_t v257; // w9
  struct QuestTree___c__DisplayClass45_1_o *v258; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v260; // x0
  __int64 v261; // x1
  SpotRoadEntity_array *v262; // x20
  int v263; // w25
  il2cpp_array_size_t i; // w26
  __int64 v265; // x21
  __int64 v266; // x0
  __int64 v267; // x1
  __int64 v268; // x2
  SpotRoadEntity_o *v269; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v271; // x24
  __int64 v272; // x0
  __int64 v273; // x1
  unsigned int v274; // w0
  __int64 v275; // x1
  System_Collections_Generic_List_object__o *v276; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v278; // x21
  const MethodInfo *v279; // x3
  __int64 v280; // x1
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  System_Collections_Generic_List_object__o *v283; // x0
  struct System_Object_array *v284; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  Il2CppClass **v287; // x8
  struct QuestTree___c__DisplayClass45_1_o *v288; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v290; // x0
  __int64 v291; // x1
  int32_t v292; // w2
  const MethodInfo *v293; // x3
  MapGimmickEntity_array *v294; // x20
  int v295; // w24
  il2cpp_array_size_t j; // w25
  __int64 v297; // x21
  __int64 v298; // x0
  __int64 v299; // x1
  __int64 v300; // x2
  MapGimmickEntity_o *v301; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v303; // x23
  __int64 v304; // x0
  __int64 v305; // x1
  unsigned int v306; // w0
  __int64 v307; // x1
  System_Collections_Generic_List_object__o *v308; // x0
  MapControl_MapInfo_o *v309; // x0
  MapControl_MapGimmickInfo_o *v310; // x21
  const MethodInfo *v311; // x2
  __int64 v312; // x1
  int32_t v313; // w2
  const MethodInfo *v314; // x3
  System_Collections_Generic_List_object__o *v315; // x0
  struct System_Object_array *v316; // x8
  _QWORD *v317; // x9
  __int64 v318; // x10
  Il2CppClass **v319; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v320; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v321; // x8
  int v322; // w9
  CGThumbnailListItem_o *p_mapInfo_5__16; // x8
  __int64 v324; // x0
  __int64 v325; // x1
  __int64 v326; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v327; // x8
  int32_t max_length; // w10
  int32_t v329; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v331; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v333; // x0
  int32_t v334; // w2
  const MethodInfo *v335; // x3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v337; // x10
  MapEntity_o *v338; // x9
  struct QuestTree___c__DisplayClass45_1_o *v339; // x22
  struct MapControl_WarInfo_o *v340; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  struct MapControl_WarInfo_o *v345; // x8
  System_Collections_Generic_List_object__o *v346; // x0
  struct QuestTree___c__DisplayClass45_1_o *v347; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  __int64 v352; // x0
  __int64 v353; // x1
  System_Collections_Generic_List_object__o *v354; // x0
  struct QuestTree___c__DisplayClass45_1_o *v355; // x8
  MapControl_WarInfo_o *v356; // x0
  struct MapControl_MapInfo_o *v357; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v358; // x0
  int32_t v359; // w2
  const MethodInfo *v360; // x3
  __int64 v361; // x1
  int32_t v362; // w2
  const MethodInfo *v363; // x3
  System_Collections_Generic_List_object__o *v364; // x0
  struct System_Object_array *v365; // x8
  Il2CppObject *v366; // x1
  _QWORD *v367; // x9
  __int64 v368; // x10
  Il2CppClass **v369; // x8
  __int64 v370; // x0
  __int64 v371; // x1
  System_Collections_Generic_List_object__o *v372; // x20
  QuestTree___c_c *v373; // x8
  System_Comparison_T__o *_9__45_2; // x21
  Il2CppObject *v375; // x22
  struct QuestTree___c_StaticFields *v376; // x0
  int32_t v377; // w2
  const MethodInfo *v378; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v379; // x0
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v382; // x0
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v385; // x0
  int32_t v386; // w2
  const MethodInfo *v387; // x3
  Il2CppObject *v388; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v389; // x0
  int32_t v390; // w2
  const MethodInfo *v391; // x3
  int64_t v392; // x21
  MapControl_WarInfo_o *v393; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v394; // x0
  int32_t v395; // w2
  const MethodInfo *v396; // x3
  MapControl_MapInfo_o *v397; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v398; // x0
  int32_t v399; // w2
  const MethodInfo *v400; // x3
  MapControl_SpotInfo_o *v401; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v402; // x0
  int32_t v403; // w2
  const MethodInfo *v404; // x3
  WarEntity_o *v405; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v406; // x0
  int32_t v407; // w2
  const MethodInfo *v408; // x3
  __int64 v409; // x1
  DataManager_o *v410; // x0
  Il2CppObject *v411; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v412; // x0
  int32_t v413; // w2
  const MethodInfo *v414; // x3
  Il2CppObject *Master_object; // x0
  __int64 v416; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v417; // x8
  struct QuestTree___c__DisplayClass45_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v420; // x1
  int32_t v421; // w9
  struct QuestTree___c__DisplayClass45_6_o *v422; // x20
  System_Collections_Generic_List_int__o *v423; // x21
  __int64 v424; // x0
  __int64 v425; // x1
  int32_t v426; // w2
  const MethodInfo *v427; // x3
  __int64 v428; // x1
  System_Collections_Generic_List_object__o *v429; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v430; // x9
  __int128 v431; // q0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v433; // w2
  const MethodInfo *v434; // x3
  const MethodInfo *v435; // x1
  bool v436; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v437; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v440; // x1
  int32_t v441; // w2
  const MethodInfo *v442; // x3
  struct QuestTree___c__DisplayClass45_0_o *v443; // x9
  struct QuestTree___c__DisplayClass45_6_o *v444; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v447; // x9
  _QWORD *v448; // x10
  __int64 v449; // x11
  unsigned __int64 v450; // t2
  __int64 v451; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v452; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v454; // x20
  Il2CppObject *v455; // x22
  System_Func_object__bool__o *v456; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v457; // x0
  System_Object_array *v458; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v459; // x0
  int32_t v460; // w2
  const MethodInfo *v461; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v462; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass45_1_o *v465; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v467; // x0
  __int64 v468; // x1
  const MethodInfo *v469; // x3
  SpotEntity_array *v470; // x20
  int v471; // w25
  il2cpp_array_size_t k; // w26
  __int64 v473; // x21
  __int64 v474; // x0
  __int64 v475; // x1
  __int64 v476; // x2
  SpotEntity_o *v477; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v479; // x24
  __int64 v480; // x0
  __int64 v481; // x1
  unsigned int v482; // w0
  __int64 v483; // x1
  System_Collections_Generic_List_object__o *v484; // x0
  MapControl_MapInfo_o *v485; // x0
  MapControl_SpotInfo_o *v486; // x21
  const MethodInfo *v487; // x3
  __int64 v488; // x1
  int32_t v489; // w2
  const MethodInfo *v490; // x3
  System_Collections_Generic_List_object__o *v491; // x0
  struct System_Object_array *v492; // x8
  _QWORD *v493; // x9
  __int64 v494; // x10
  Il2CppClass **v495; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v496; // x0
  System_Object_array *v497; // x0
  __int64 v498; // x1
  int32_t v499; // w2
  const MethodInfo *v500; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v501; // x20
  __int64 v502; // x21
  QuestTree___c_c *v503; // x8
  System_Func_object__int__o *_9__45_6; // x22
  Il2CppObject *v505; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v507; // w2
  const MethodInfo *v508; // x3
  System_Collections_Generic_IEnumerable_T__o *v509; // x23
  System_Collections_Generic_HashSet_int__o *v510; // x22
  __int64 v511; // x0
  __int64 v512; // x1
  int32_t v513; // w2
  const MethodInfo *v514; // x3
  System_Collections_Generic_List_T__o *v515; // x22
  System_Func_object__bool__o *v516; // x23
  __int64 v517; // x1
  System_Collections_Generic_List_object__o *v518; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v519; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v522; // x20
  struct QuestTree___c__DisplayClass45_6_o *v523; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v525; // x0
  struct QuestTree___c__DisplayClass45_6_o *v526; // x8
  __int64 v527; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *SpotId_41616128; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v531; // x22
  struct QuestTree___c__DisplayClass45_6_o *v532; // x25
  System_Collections_Generic_List_object__o *v533; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v535; // w2
  const MethodInfo *v536; // x3
  Il2CppObject *v537; // x0
  int32_t v538; // w2
  const MethodInfo *v539; // x3
  __int64 v540; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v542; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v544; // x0
  int32_t v545; // w2
  const MethodInfo *v546; // x3
  __int64 v547; // x1
  MapControl_MapInfo_o *v548; // x0
  __int64 v549; // x1
  int32_t v550; // w2
  const MethodInfo *v551; // x3
  MapEntity_o *v552; // x8
  MapControl_WarInfo_o *ChildByWarID; // x1
  __int64 v554; // x1
  MapControl_WarInfo_o *v555; // x0
  struct WarEntity_o *v556; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v557; // x0
  int32_t v558; // w2
  const MethodInfo *v559; // x3
  struct QuestTree___c__DisplayClass45_6_o *v560; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v563; // w2
  const MethodInfo *v564; // x3
  unsigned int v565; // w0
  __int64 v566; // x1
  System_Collections_Generic_List_object__o *v567; // x0
  MapControl_WarInfo_o *v568; // x0
  __int64 v569; // x1
  _BOOL8 HasStatus; // x0
  __int64 v571; // x1
  MapControl_WarInfo_o *v572; // x0
  WarEntity_o *v573; // x0
  __int64 v574; // x1
  int v575; // w23
  bool v576; // cc
  __int64 v577; // x1
  struct QuestTree___c__DisplayClass45_6_o *v578; // x9
  MapControl_WarInfo_o *v579; // x0
  struct QuestTree___c__DisplayClass45_6_o *v580; // x8
  MapControl_SpotInfo_o *v581; // x0
  MapControl_QuestInfo_o *v582; // x0
  int32_t v583; // w2
  const MethodInfo *v584; // x3
  struct MapControl_WarInfo_o *v585; // x1
  MapControl_QuestInfo_o *v586; // x22
  int32_t v587; // w8
  struct MapControl_SpotInfo_o *v588; // x1
  int32_t v589; // w2
  const MethodInfo *v590; // x3
  const MethodInfo *v591; // x2
  __int64 v592; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v595; // x1
  struct WarEntity_o *v596; // x8
  struct QuestTree___c__DisplayClass45_6_o *v597; // x9
  struct WarEntity_o *v598; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v599; // x0
  _BOOL8 v600; // x0
  __int64 v601; // x1
  const MethodInfo *v602; // x4
  struct QuestTree___c__DisplayClass45_6_o *v603; // x8
  __int64 v604; // x1
  MapControl_WarInfo_o *v605; // x0
  int v606; // w24
  __int64 v607; // x1
  __int64 v608; // x1
  Il2CppObject *v609; // x23
  System_Int64_array *v610; // x0
  __int64 v611; // x2
  struct QuestTree___c__DisplayClass45_6_o *v612; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v614; // x0
  MapControl_SpotInfo_o *v615; // x0
  QuestEntity_o *v616; // x0
  __int64 v617; // x1
  _BOOL8 HasFlag; // x0
  __int64 v619; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v620; // x8
  struct MapControl_SpotInfo_o *v621; // x9
  struct MapControl_MapInfo_o *v622; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v624; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v625; // x8
  struct MapControl_SpotInfo_o *v626; // x9
  struct MapControl_MapInfo_o *v627; // x8
  MapControl_SpotInfo_o *v628; // x0
  UserQuestEntity_o *v629; // x0
  bool v630; // w8
  struct QuestTree___c__DisplayClass45_6_o *v631; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v634; // x1
  struct QuestTree___c__DisplayClass45_6_o *v635; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v637; // x0
  __int64 v638; // x1
  __int64 v639; // x2
  const MethodInfo *v640; // x3
  _QWORD *v641; // x20
  __int64 v642; // x8
  int v643; // w21
  int v644; // w23
  __int64 v645; // x8
  System_Collections_Generic_List_object__o *v646; // x0
  struct System_Object_array *v647; // x8
  _QWORD *v648; // x9
  __int64 v649; // x10
  Il2CppClass **v650; // x8
  const MethodInfo *v651; // x3
  System_Collections_Generic_List_object__o *v652; // x20
  QuestTree___c_c *v653; // x8
  System_Comparison_T__o *_9__45_11; // x21
  Il2CppObject *v655; // x22
  struct QuestTree___c_StaticFields *v656; // x0
  int32_t v657; // w2
  const MethodInfo *v658; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v659; // x0
  int32_t v660; // w2
  const MethodInfo *v661; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v662; // x0
  int32_t v663; // w2
  const MethodInfo *v664; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v665; // x0
  int32_t v666; // w2
  const MethodInfo *v667; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v668; // x0
  int32_t v669; // w2
  const MethodInfo *v670; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v671; // x0
  int32_t v672; // w2
  const MethodInfo *v673; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v674; // x0
  int32_t v675; // w2
  const MethodInfo *v676; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v677; // x0
  int32_t v678; // w2
  const MethodInfo *v679; // x3
  Il2CppObject *v680; // x0
  __int64 v681; // x1
  int32_t v682; // w2
  const MethodInfo *v683; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v684; // x0
  EventStatusQuestMaster_o *v685; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v686[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v687; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o **v688; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v690; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v694; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v696; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v696 = this;
  if ( (byte_4B19345 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1BCAFF8(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_1BCAFF8(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v21);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestResetMaster___, v22);
    sub_1BCAFF8(&DataManager_TypeInfo, v23);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v24);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v25);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__, v26);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__, v27);
    sub_1BCAFF8(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v30);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v31);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v32);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_QuestEntity___, v33);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v34);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v35);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v36);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v37);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_QuestEntity___, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v39);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v40);
    sub_1BCAFF8(&System_Func_MapControl_SpotInfo__int__TypeInfo, v41);
    sub_1BCAFF8(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v42);
    sub_1BCAFF8(&System_Func_WarEntity__bool__TypeInfo, v43);
    sub_1BCAFF8(&System_Func_QuestEntity__bool__TypeInfo, v44);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor___76845584, v45);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v46);
    sub_1BCAFF8(&long___TypeInfo, v47);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v48);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v49);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v50);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v51);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v52);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v53);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v54);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v55);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v56);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v57);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v58);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v59);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v60);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v61);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v62);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v63);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v64);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v65);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v66);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v67);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v68);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v69);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v70);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v71);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v72);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v73);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v74);
    sub_1BCAFF8(&MapControl_MapInfo_TypeInfo, v75);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v76);
    sub_1BCAFF8(&OptionManager_TypeInfo, v77);
    sub_1BCAFF8(&System_Predicate_MapControl_WarInfo__TypeInfo, v78);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v79);
    sub_1BCAFF8(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v80);
    sub_1BCAFF8(&System_Predicate_MapControl_MapInfo__TypeInfo, v81);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v82);
    sub_1BCAFF8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v83);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v84);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v85);
    sub_1BCAFF8(&MapControl_SpotInfo_TypeInfo, v86);
    sub_1BCAFF8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__, v87);
    sub_1BCAFF8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__, v88);
    sub_1BCAFF8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__, v89);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v90);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_0_TypeInfo, v91);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v92);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v93);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v94);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_1_TypeInfo, v95);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v96);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_2_TypeInfo, v97);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v98);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_3_TypeInfo, v99);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v100);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_4_TypeInfo, v101);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v102);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_5_TypeInfo, v103);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v104);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v105);
    sub_1BCAFF8(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v106);
    sub_1BCAFF8(&QuestTree___c__DisplayClass45_6_TypeInfo, v107);
    sub_1BCAFF8(&QuestTree___c_TypeInfo, v108);
    sub_1BCAFF8(&WarEntity_TypeInfo, v109);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)sub_1BCAFF8(&MapControl_WarInfo_TypeInfo, v110);
    v4 = v696;
    byte_4B19345 = 1;
  }
  v694 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v690 = 0LL;
  mapGimmickInfo = 0LL;
  v687 = 0LL;
  v688 = &v696;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v112 = (Il2CppObject *)sub_1BCB244(QuestTree___c__DisplayClass45_0_TypeInfo);
      System_Object___ctor(v112, 0LL);
      v113 = v696;
      v696->fields.__8__2 = (struct QuestTree___c__DisplayClass45_0_o *)v112;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v113->fields.__8__2, (int32_t)v112, v114, v115);
      _8__2 = v696->fields.__8__2;
      if ( !_8__2 )
        sub_1BCB254(v116, v117);
      _8__2->fields.targetWarId = v696->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v120 = v696;
      v696->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v120->fields._dataManager_5__2, (int32_t)Instance, v121, v122);
      dataManager_5__2 = v696->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1BCB254(0LL, v123);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapMaster___);
      v127 = v696->fields._dataManager_5__2;
      if ( !v127 )
        sub_1BCB254(0LL, v125);
      v128 = DataManager__GetMasterData_object_(
               v127,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SpotMaster___);
      v129 = v696;
      v696->fields._spotMaster_5__3 = (struct SpotMaster_o *)v128;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v129->fields._spotMaster_5__3, (int32_t)v128, v130, v131);
      v133 = v696->fields._dataManager_5__2;
      if ( !v133 )
        sub_1BCB254(0LL, v132);
      v134 = DataManager__GetMasterData_object_(
               v133,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v135 = v696;
      v696->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v134;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v135->fields._blankEarthSpotMaster_5__4, (int32_t)v134, v136, v137);
      v139 = v696->fields._dataManager_5__2;
      if ( !v139 )
        sub_1BCB254(0LL, v138);
      v140 = DataManager__GetMasterData_object_(
               v139,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
      v141 = v696;
      v696->fields._questMaster_5__5 = (struct QuestMaster_o *)v140;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v141->fields._questMaster_5__5, (int32_t)v140, v142, v143);
      v145 = v696->fields._dataManager_5__2;
      if ( !v145 )
        sub_1BCB254(0LL, v144);
      v146 = DataManager__GetMasterData_object_(
               v145,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v147 = v696;
      v696->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v146;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v147->fields._questPhaseMaster_5__6, (int32_t)v146, v148, v149);
      v151 = v696->fields._dataManager_5__2;
      if ( !v151 )
        sub_1BCB254(0LL, v150);
      v153 = DataManager__GetMasterData_object_(
               v151,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
      v154 = v696->fields._dataManager_5__2;
      if ( !v154 )
        sub_1BCB254(0LL, v152);
      v156 = DataManager__GetMasterData_object_(
               v154,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v157 = v696->fields._dataManager_5__2;
      if ( !v157 )
        sub_1BCB254(0LL, v155);
      v159 = DataManager__GetMasterData_object_(
               v157,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v160 = v696->fields._dataManager_5__2;
      if ( !v160 )
        sub_1BCB254(0LL, v158);
      v685 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v160,
                                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v162 = v696->fields._dataManager_5__2;
      if ( !v162 )
        sub_1BCB254(0LL, v161);
      v163 = DataManager__GetMasterData_object_(
               v162,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v164 = v696;
      v696->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v163;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v164->fields._spotRoadMaster_5__7, (int32_t)v163, v165, v166);
      v168 = v696->fields._dataManager_5__2;
      if ( !v168 )
        sub_1BCB254(0LL, v167);
      v169 = DataManager__GetMasterData_object_(
               v168,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v170 = v696;
      v696->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v169;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v170->fields._mapGimmickMaster_5__8, (int32_t)v169, v171, v172);
      v174 = v696->fields._dataManager_5__2;
      if ( !v174 )
        sub_1BCB254(0LL, v173);
      v175 = DataManager__GetMasterData_object_(
               v174,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v176 = v696;
      v696->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v175;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v176->fields._questPickupMaster_5__9, (int32_t)v175, v177, v178);
      v179 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v179,
        (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v180 = v696;
      v696->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v179;
      sub_1BCAF9C(
        (CGThumbnailListItem_o *)&v180->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v179,
        v181,
        v182);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v696->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v183 = (Il2CppObject *)sub_1BCB244(QuestTree___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor(v183, 0LL);
      v184 = v696;
      v696->fields.__8__1 = (struct QuestTree___c__DisplayClass45_1_o *)v183;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v184->fields.__8__1, (int32_t)v183, v185, v186);
      v188 = v696->fields._dataManager_5__2;
      if ( !v188 )
        sub_1BCB254(0LL, v187);
      v189 = DataManager__GetMasterData_object_(
               v188,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v189 )
        sub_1BCB254(0LL, v190);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v189,
                                                                       (const MethodInfo_32C7084 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v192 = (Il2CppObject *)v696->fields.__8__2;
      v193 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v193,
        v192,
        Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v194 = System_Linq_Enumerable__SingleOrDefault_object__50679820(
               Entitys,
               (System_Func_TSource__bool__o *)v193,
               (const MethodInfo_305500C *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v194 )
        sub_1BCB254(0LL, v195);
      _8__1 = v696->fields.__8__1;
      if ( !_8__1 )
        sub_1BCB254(v194, v195);
      klass_low = LODWORD(v194[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1BCB254(v194, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1BCB254(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v200 = (Il2CppObject *)v696->fields.__8__1;
      v201 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v201,
        v200,
        Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1BCB254(v202, v203);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v201,
                (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v205 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v206 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v206 )
          sub_1BCB254(0LL, v205);
        System_Collections_Generic_List_object___RemoveAt(
          v206,
          v205,
          (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v207 = v696->fields.__8__1;
      if ( !v207 )
        sub_1BCB254(Index, v205);
      v208 = _4__this->fields.mapControlRootInfo;
      if ( !v208 )
        sub_1BCB254(0LL, v205);
      v209 = MapControl_RootInfo__AddChild(v208, v207->fields.warId, v696->fields._nowTime_5__11, 0LL);
      v210 = v696;
      v696->fields._warInfo_5__14 = v209;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v210->fields._warInfo_5__14, (int32_t)v209, v211, v212);
      warInfo_5__14 = v696->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1BCB254(0LL, v213);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v218 = v696->fields._warInfo_5__14;
        if ( !v218 )
          sub_1BCB254(0LL, v215);
        EventId = MapControl_WarInfo__GetEventId(v218, 0LL);
        if ( !v153 )
          sub_1BCB254(EventId, v220);
        v221 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v153,
                 &entity,
                 EventId,
                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v221 )
        {
          if ( !entity )
            sub_1BCB254(v221, v215);
          v222 = v696;
          nowTime_5__11 = v696->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v224 = v696->fields._warInfo_5__14;
            if ( !v224 )
              sub_1BCB254(0LL, v215);
            MapControl_WarInfo__SetStatusCheckFlag(v224, 1, 0, 0LL);
            v222 = v696;
          }
          v225 = v222->fields._warInfo_5__14;
          if ( !v225 )
            sub_1BCB254(0LL, v215);
          v226 = MapControl_WarInfo__GetEventId(v225, 0LL);
          if ( !v156 )
            sub_1BCB254(v226, v227);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
                 &v694,
                 v226,
                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v694 )
              sub_1BCB254(0LL, v228);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v694, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1BCB254(0LL, v229);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v696->fields._nowTime_5__11, 0LL) )
              {
                v231 = v696->fields._warInfo_5__14;
                if ( !v231 )
                  sub_1BCB254(0LL, v230);
                v232 = MapControl_WarInfo__GetEventId(v231, 0LL);
                if ( !v159 )
                  sub_1BCB254(v232, (unsigned int)v232);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v159, v232, 0LL);
                if ( NowEntity )
                {
                  v235 = v696->fields._warInfo_5__14;
                  if ( !v235 )
                    sub_1BCB254(0LL, v233);
                  v236 = (unsigned int)MapControl_WarInfo__GetEventId(v235, 0LL);
                  if ( !v685 )
                    sub_1BCB254(0LL, v236);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v685,
                                        v236,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v239 = v696->fields.__8__1;
                  if ( !v239 )
                    sub_1BCB254(MismatchQuestList, v238);
                  v240 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v696->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1BCB254(0LL, v238);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v239->fields.warId,
                    v240,
                    (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v242 = v696->fields._nowTime_5__11;
          v243 = (_QWORD *)sub_1BCB0A0(long___TypeInfo, 3LL);
          v244 = entity;
          if ( !entity )
            sub_1BCB254(v243, v215);
          if ( !v243 )
            sub_1BCB254(0LL, v215);
          v245 = v243[3];
          if ( !(_DWORD)v245 )
            sub_1BCB25C(v243, v215, v216);
          v243[4] = entity[5].klass;
          if ( (_DWORD)v245 == 1 )
            sub_1BCB25C(v243, v215, v216);
          v243[5] = v244[5].monitor;
          if ( (unsigned int)v245 <= 2 )
            sub_1BCB25C(v243, v215, v216);
          v243[6] = v244[6].monitor;
          if ( (int)v245 >= 1 )
          {
            v246 = (unsigned int)v245;
            v247 = v243 + 4;
            do
            {
              v248 = *v247;
              if ( *v247 > v242 && _4__this->fields.forceUpdateTime > v248 )
                _4__this->fields.forceUpdateTime = v248;
              --v246;
              ++v247;
            }
            while ( v246 );
          }
        }
      }
      v249 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v249 )
        sub_1BCB254(0LL, v215);
      items = v249->fields._items;
      v251 = (Il2CppObject *)v696->fields._warInfo_5__14;
      v252 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v249->fields._version;
      if ( !items )
        sub_1BCB254(v249, v251);
      size = v249->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v249,
          v251,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
      }
      else
      {
        v254 = &items->obj.klass + size;
        v249->fields._size = size + 1;
        v254[4] = (Il2CppClass *)v251;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v254 + 4), (int32_t)v251, v216, v217);
      }
      v331 = v696->fields._warInfo_5__14;
      if ( !v331 )
        sub_1BCB254(v255, v256);
      if ( !MasterData_object )
        sub_1BCB254(v255, v256);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v331->fields.warId, 0LL);
      v333 = v696;
      v696->fields._mapList_5__15 = List;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v333->fields._mapList_5__15, (int32_t)List, v334, v335);
      v327 = v696;
      mapList_5__15 = v696->fields._mapList_5__15;
      v696->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1BCB254(v324, v325);
      max_length = mapList_5__15->max_length;
      v329 = 0;
      v327->fields._mapCount_5__13 = max_length;
      goto LABEL_121;
    case 1:
      v258 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v258 )
        sub_1BCB254(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1BCB254(0LL, method);
      v260 = SpotRoadMaster__getList(spotRoadMaster_5__7, v258->fields.mapId, 0LL);
      v262 = v260;
      if ( !v260 )
        sub_1BCB254(0LL, v261);
      v263 = v260->max_length;
      if ( v263 >= 1 )
      {
        for ( i = 0; i != v263; ++i )
        {
          v265 = sub_1BCB244(QuestTree___c__DisplayClass45_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v265, 0LL);
          if ( i >= v262->max_length )
            sub_1BCB25C(v266, v267, v268);
          v269 = v262->m_Items[i];
          if ( !v269 )
            sub_1BCB254(v266, v267);
          if ( !v265 )
            sub_1BCB254(v266, v267);
          *(_DWORD *)(v265 + 16) = v269->fields.id;
          if ( !_4__this )
            sub_1BCB254(v266, v267);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v271 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v271,
            (Il2CppObject *)v265,
            Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1BCB254(v272, v273);
          v274 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v271,
                   (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v275 = v274;
          if ( v274 != -1 )
          {
            v276 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v276 )
              sub_1BCB254(0LL, v275);
            System_Collections_Generic_List_object___RemoveAt(
              v276,
              v275,
              (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v696->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1BCB254(0LL, v275);
          v278 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v265 + 16), 0LL);
          spotRoadInfo = v278;
          QuestTree__SetupSpotRoadInfo(_4__this, v269, &spotRoadInfo, v279);
          v283 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v283 )
            sub_1BCB254(0LL, v280);
          v284 = v283->fields._items;
          v285 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v283->fields._version;
          if ( !v284 )
            sub_1BCB254(v283, v280);
          v286 = v283->fields._size;
          if ( (unsigned int)v286 >= v284->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v283,
              (Il2CppObject *)v278,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
          }
          else
          {
            v287 = &v284->obj.klass + v286;
            v283->fields._size = v286 + 1;
            v287[4] = (Il2CppClass *)v278;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v287 + 4), (int32_t)v278, v281, v282);
          }
        }
      }
      v288 = v696->fields.__8__1;
      if ( !v288 )
        sub_1BCB254(v260, v261);
      mapGimmickMaster_5__8 = v696->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1BCB254(0LL, v261);
      v290 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v288->fields.mapId, 0LL);
      v294 = v290;
      if ( !v290 )
        sub_1BCB254(0LL, v291);
      v295 = v290->max_length;
      if ( v295 >= 1 )
      {
        for ( j = 0; j != v295; ++j )
        {
          v297 = sub_1BCB244(QuestTree___c__DisplayClass45_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v297, 0LL);
          if ( j >= v294->max_length )
            sub_1BCB25C(v298, v299, v300);
          v301 = v294->m_Items[j];
          if ( !v301 )
            sub_1BCB254(v298, v299);
          if ( !v297 )
            sub_1BCB254(v298, v299);
          *(_DWORD *)(v297 + 16) = v301->fields.id;
          if ( !_4__this )
            sub_1BCB254(v298, v299);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v303 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v303,
            (Il2CppObject *)v297,
            Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1BCB254(v304, v305);
          v306 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v303,
                   (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v307 = v306;
          if ( v306 != -1 )
          {
            v308 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v308 )
              sub_1BCB254(0LL, v307);
            System_Collections_Generic_List_object___RemoveAt(
              v308,
              v307,
              (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v309 = v696->fields._mapInfo_5__16;
          if ( !v309 )
            sub_1BCB254(0LL, v307);
          v310 = MapControl_MapInfo__AddMapGimmick(v309, *(_DWORD *)(v297 + 16), 0LL);
          mapGimmickInfo = v310;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v311);
          v315 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v315 )
            sub_1BCB254(0LL, v312);
          v316 = v315->fields._items;
          v317 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v315->fields._version;
          if ( !v316 )
            sub_1BCB254(v315, v312);
          v318 = v315->fields._size;
          if ( (unsigned int)v318 >= v316->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v315,
              (Il2CppObject *)v310,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v317[4] + 192LL) + 112LL));
          }
          else
          {
            v319 = &v316->obj.klass + v318;
            v315->fields._size = v318 + 1;
            v319[4] = (Il2CppClass *)v310;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v319 + 4), (int32_t)v310, v313, v314);
          }
        }
      }
      v320 = v696;
      v696->fields.__2__current = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v320->fields.__2__current, 0, v292, v293);
      v321 = v696;
      v322 = 2;
      goto LABEL_333;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (CGThumbnailListItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields.viewObject) = -1;
      sub_1BCAF9C(p_mapInfo_5__16, 0, v2, v3);
      v327 = v696;
      max_length = v696->fields._mapCount_5__13;
      v329 = v696->fields._mapIdx_5__12 + 1;
      v696->fields._mapIdx_5__12 = v329;
LABEL_121:
      if ( v329 < max_length )
      {
        v337 = v327->fields._mapList_5__15;
        if ( !v337 )
          sub_1BCB254(v324, v325);
        if ( v329 >= v337->max_length )
          sub_1BCB25C(v324, v325, v326);
        v338 = v337->m_Items[v329];
        if ( !v338 )
          sub_1BCB254(v324, v325);
        v339 = v327->fields.__8__1;
        if ( !v339 )
          sub_1BCB254(v324, v325);
        v339->fields.mapId = v338->fields.id;
        v340 = v327->fields._warInfo_5__14;
        if ( !v340 )
          sub_1BCB254(v324, v325);
        mapInfoList = (System_Collections_Generic_List_object__o *)v340->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v339->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v339,
              Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v339->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v339->fields.__9__3, (int32_t)_9__3, v343, v344);
          }
          v324 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v325 = (unsigned int)v324;
          if ( (_DWORD)v324 != -1 )
          {
            v345 = v696->fields._warInfo_5__14;
            if ( !v345 )
              sub_1BCB254(v324, (unsigned int)v324);
            v346 = (System_Collections_Generic_List_object__o *)v345->fields.mapInfoList;
            if ( !v346 )
              sub_1BCB254(0LL, v325);
            System_Collections_Generic_List_object___RemoveAt(
              v346,
              v325,
              (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1BCB254(v324, v325);
        v347 = v696->fields.__8__1;
        if ( !v347 )
          sub_1BCB254(v324, v325);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v347->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v347,
            Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v347->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v347->fields.__9__4, (int32_t)_9__4, v350, v351);
        }
        if ( !allMapInfoList )
          sub_1BCB254(v324, v325);
        v352 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v353 = (unsigned int)v352;
        if ( (_DWORD)v352 != -1 )
        {
          v354 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v354 )
            sub_1BCB254(0LL, v353);
          System_Collections_Generic_List_object___RemoveAt(
            v354,
            v353,
            (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v355 = v696->fields.__8__1;
        if ( !v355 )
          sub_1BCB254(v352, v353);
        v356 = v696->fields._warInfo_5__14;
        if ( !v356 )
          sub_1BCB254(0LL, v353);
        v357 = MapControl_WarInfo__AddChild(v356, v355->fields.mapId, 0LL);
        v358 = v696;
        v696->fields._mapInfo_5__16 = v357;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v358->fields._mapInfo_5__16, (int32_t)v357, v359, v360);
        v364 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v364 )
          sub_1BCB254(0LL, v361);
        v365 = v364->fields._items;
        v366 = (Il2CppObject *)v696->fields._mapInfo_5__16;
        v367 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v364->fields._version;
        if ( !v365 )
          sub_1BCB254(v364, v366);
        v368 = v364->fields._size;
        if ( (unsigned int)v368 >= v365->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v364,
            v366,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v367[4] + 192LL) + 112LL));
        }
        else
        {
          v369 = &v365->obj.klass + v368;
          v364->fields._size = v368 + 1;
          v369[4] = (Il2CppClass *)v366;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v369 + 4), (int32_t)v366, v362, v363);
        }
        v465 = v696->fields.__8__1;
        if ( !v465 )
          sub_1BCB254(v370, v371);
        spotMaster_5__3 = v696->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1BCB254(0LL, v371);
        v467 = SpotMaster__getList(spotMaster_5__3, v465->fields.mapId, 0LL);
        v470 = v467;
        if ( !v467 )
          sub_1BCB254(0LL, v468);
        v471 = v467->max_length;
        if ( v471 >= 1 )
        {
          for ( k = 0; k != v471; ++k )
          {
            v473 = sub_1BCB244(QuestTree___c__DisplayClass45_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v473, 0LL);
            if ( k >= v470->max_length )
              sub_1BCB25C(v474, v475, v476);
            v477 = v470->m_Items[k];
            if ( !v477 )
              sub_1BCB254(v474, v475);
            if ( !v473 )
              sub_1BCB254(v474, v475);
            *(_DWORD *)(v473 + 16) = v477->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v479 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v479,
              (Il2CppObject *)v473,
              Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1BCB254(v480, v481);
            v482 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v479,
                     (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v483 = v482;
            if ( v482 != -1 )
            {
              v484 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v484 )
                sub_1BCB254(0LL, v483);
              System_Collections_Generic_List_object___RemoveAt(
                v484,
                v483,
                (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v485 = v696->fields._mapInfo_5__16;
            if ( !v485 )
              sub_1BCB254(0LL, v483);
            v486 = MapControl_MapInfo__AddChild(v485, *(_DWORD *)(v473 + 16), 0LL);
            spotInfo = v486;
            QuestTree__SetupSpotInfo(_4__this, v477, &spotInfo, v487);
            v491 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v491 )
              sub_1BCB254(0LL, v488);
            v492 = v491->fields._items;
            v493 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v491->fields._version;
            if ( !v492 )
              sub_1BCB254(v491, v488);
            v494 = v491->fields._size;
            if ( (unsigned int)v494 >= v492->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v491,
                (Il2CppObject *)v486,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v493[4] + 192LL) + 112LL));
            }
            else
            {
              v495 = &v492->obj.klass + v494;
              v491->fields._size = v494 + 1;
              v495[4] = (Il2CppClass *)v486;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v495 + 4), (int32_t)v486, v489, v490);
            }
          }
        }
        v496 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v696->fields._mapInfo_5__16,
                 v696->fields._blankEarthSpotMaster_5__4,
                 v469);
        v497 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v496,
                 (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v501 = (System_Collections_Generic_IEnumerable_TSource__o *)v497;
        if ( !v497 )
          sub_1BCB254(0LL, v498);
        if ( *(_QWORD *)&v497->max_length )
        {
          v502 = sub_1BCB244(QuestTree___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v502, 0LL);
          v503 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v503 = QuestTree___c_TypeInfo;
          }
          _9__45_6 = (System_Func_object__int__o *)v503->static_fields->__9__45_6;
          if ( !_9__45_6 )
          {
            if ( !v503->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v503);
              v503 = QuestTree___c_TypeInfo;
            }
            v505 = (Il2CppObject *)v503->static_fields->__9;
            _9__45_6 = (System_Func_object__int__o *)sub_1BCB244(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__45_6,
              v505,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__45_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__45_6;
            sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__45_6, (int32_t)_9__45_6, v507, v508);
          }
          v509 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v501,
                                                                  (System_Func_TSource__TResult__o *)_9__45_6,
                                                                  (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v510 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_56036616(
            v510,
            v509,
            (const MethodInfo_3570D08 *)Method_System_Collections_Generic_HashSet_int___ctor___76845584);
          if ( !v502 )
            sub_1BCB254(v511, v512);
          *(_QWORD *)(v502 + 16) = v510;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v502 + 16), (int32_t)v510, v513, v514);
          v515 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v516 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v516,
            (Il2CppObject *)v502,
            Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v515,
            (System_Func_T__bool__o *)v516,
            (const MethodInfo_3009C00 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v518 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v518 )
            sub_1BCB254(0LL, v517);
          System_Collections_Generic_List_object___AddRange(
            v518,
            (System_Collections_Generic_IEnumerable_T__o *)v501,
            (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v519 = v696;
        v696->fields.__2__current = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v519->fields.__2__current, 0, v499, v500);
        result = 1;
        v696->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1BCB254(v324, v325);
      v372 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v373 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v373 = QuestTree___c_TypeInfo;
      }
      _9__45_2 = (System_Comparison_T__o *)v373->static_fields->__9__45_2;
      if ( !_9__45_2 )
      {
        if ( !v373->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v373);
          v373 = QuestTree___c_TypeInfo;
        }
        v375 = (Il2CppObject *)v373->static_fields->__9;
        _9__45_2 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__45_2,
          v375,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__,
          0LL);
        v376 = QuestTree___c_TypeInfo->static_fields;
        v376->__9__45_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__45_2;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v376->__9__45_2, (int32_t)_9__45_2, v377, v378);
      }
      if ( !v372 )
        sub_1BCB254(v324, v325);
      System_Collections_Generic_List_object___Sort_57390740(
        v372,
        _9__45_2,
        (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v379 = v696;
      v696->fields.__8__1 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v379->fields.__8__1, 0, v380, v381);
      v382 = v696;
      v696->fields._warInfo_5__14 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v382->fields._warInfo_5__14, 0, v383, v384);
      v385 = v696;
      v696->fields._mapList_5__15 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v385->fields._mapList_5__15, 0, v386, v387);
      v388 = (Il2CppObject *)sub_1BCB244(QuestTree___c__DisplayClass45_6_TypeInfo);
      System_Object___ctor(v388, 0LL);
      v389 = v696;
      v696->fields.__8__3 = (struct QuestTree___c__DisplayClass45_6_o *)v388;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v389->fields.__8__3, (int32_t)v388, v390, v391);
      v392 = v696->fields._nowTime_5__11;
      v393 = (MapControl_WarInfo_o *)sub_1BCB244(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v393, v392, 0LL);
      v394 = v696;
      v696->fields._warInfo_5__14 = v393;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v394->fields._warInfo_5__14, (int32_t)v393, v395, v396);
      v397 = (MapControl_MapInfo_o *)sub_1BCB244(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v397, 0LL);
      v398 = v696;
      v696->fields._mapInfo_5__16 = v397;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v398->fields._mapInfo_5__16, (int32_t)v397, v399, v400);
      v401 = (MapControl_SpotInfo_o *)sub_1BCB244(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v401, 0LL);
      v402 = v696;
      v696->fields._spotInfo_5__17 = v401;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v402->fields._spotInfo_5__17, (int32_t)v401, v403, v404);
      v405 = (WarEntity_o *)sub_1BCB244(WarEntity_TypeInfo);
      WarEntity___ctor(v405, 0LL);
      v406 = v696;
      v696->fields._warEnt_5__18 = v405;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v406->fields._warEnt_5__18, (int32_t)v405, v407, v408);
      v410 = v696->fields._dataManager_5__2;
      if ( !v410 )
        sub_1BCB254(0LL, v409);
      v411 = DataManager__GetMasterData_object_(
               v410,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v412 = v696;
      v696->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v411;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v412->fields._userQuestMaster_5__19, (int32_t)v411, v413, v414);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v417 = v696;
      _8__3 = v696->fields.__8__3;
      if ( !_8__3 )
        sub_1BCB254(Master_object, v416);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v417->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v696 )
        sub_1BCB254(isSavedMemoryMode, v420);
      if ( isSavedMemoryMode )
        v421 = 500;
      else
        v421 = 5000;
      v422 = v696->fields.__8__3;
      v696->fields._breakInterval_5__22 = v421;
      v423 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v423,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v422 )
        sub_1BCB254(v424, v425);
      v422->fields.spotInfoList = v423;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v422->fields, (int32_t)v423, v426, v427);
      v696->fields._cnt_5__23 = 0;
      v429 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v429 )
        sub_1BCB254(0LL, v428);
      System_Collections_Generic_List_object___GetEnumerator(
        v686,
        v429,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v430 = v696;
      v431 = *(_OWORD *)&v686[0].fields._list;
      p__7__wrap24 = (CGThumbnailListItem_o *)&v696->fields.__7__wrap24;
      v686[1] = v686[0];
      v696->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v686[0].fields._current;
      *(_OWORD *)&v430->fields.__7__wrap24.fields._list = v431;
      sub_1BCAF9C(p__7__wrap24, 0, v433, v434);
      v4 = v696;
LABEL_169:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v436 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v437 = v696;
        if ( !v436 )
          break;
        current = v696->fields.__7__wrap24.fields._current;
        ++v696->fields._cnt_5__23;
        if ( !current )
          sub_1BCB254(v437, v435);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1BCB254(0LL, v440);
        v4 = v696;
        v443 = v696->fields.__8__2;
        if ( !v443 )
          sub_1BCB254(Mine, v440);
        if ( Mine->fields.warId == v443->fields.targetWarId )
        {
          v444 = v696->fields.__8__3;
          if ( !v444 )
            sub_1BCB254(Mine, v440);
          spotInfoList = v444->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1BCB254(0LL, v440);
          spotId = (unsigned int)current->fields.spotId;
          v447 = spotInfoList->fields._items;
          v448 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v447 )
            sub_1BCB254(spotInfoList, spotId);
          v449 = spotInfoList->fields._size;
          if ( (unsigned int)v449 >= v447->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v448[4] + 192LL) + 112LL));
            v4 = v696;
          }
          else
          {
            spotInfoList->fields._size = v449 + 1;
            v447->m_Items[v449 + 1] = spotId;
          }
        }
        HIDWORD(v450) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v450) = HIDWORD(v450);
        if ( (unsigned int)(v450 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v441, v442);
          v321 = v696;
          v322 = 3;
LABEL_333:
          v321->fields.__1__state = v322;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(v696, v435);
      v452 = v696;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v696->fields._questMaster_5__5;
      v696->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v452->fields.__7__wrap24.fields._index = 0LL;
      v452->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1BCB254(0LL, v451);
      v454 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_32C7084 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v455 = (Il2CppObject *)v696->fields.__8__3;
      v456 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v456,
        v455,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v457 = System_Linq_Enumerable__Where_object_(
               v454,
               (System_Func_TSource__bool__o *)v456,
               (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v458 = System_Linq_Enumerable__ToArray_object_(
               v457,
               (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v459 = v696;
      v696->fields._questList_5__24 = (struct QuestEntity_array *)v458;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v459->fields._questList_5__24, (int32_t)v458, v460, v461);
      v462 = v696;
      v696->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v462->fields._questList_5__24,
                       (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v696;
      mapCount_5__13 = v696->fields._mapCount_5__13;
      v696->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_169;
    case 4:
      v257 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_474;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1BCB254(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( mapCount_5__13 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1BCB254(mapIdx_5__12, method);
    if ( mapCount_5__13 >= questList_5__24->max_length )
      sub_1BCB25C(mapIdx_5__12, method, v2);
    v522 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v522 )
      sub_1BCB254(mapIdx_5__12, method);
    v523 = v4->fields.__8__3;
    if ( !v523 )
      sub_1BCB254(mapIdx_5__12, method);
    v523->fields.questId = v522->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, method);
      byte_4B165D1 = 1;
    }
    v525 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v525 = NetworkManager_TypeInfo;
    }
    v526 = v696->fields.__8__3;
    if ( !v526 )
      sub_1BCB254(v525, method);
    if ( !userQuestMaster_5__19 )
      sub_1BCB254(v525, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v690,
           v525->static_fields->userIdNumber,
           v526->fields.questId,
           0LL) )
    {
      if ( !v690 )
        sub_1BCB254(0LL, v527);
      QuestPhase = UserQuestEntity__getQuestPhase(v690, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_41616128 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)QuestEntity__getSpotId_41616128(
                                                                            v522,
                                                                            QuestPhase + 1,
                                                                            0LL);
    v531 = v696;
    v532 = v696->fields.__8__3;
    if ( !v532 )
      sub_1BCB254(SpotId_41616128, warId);
    if ( v532->fields.nowSpotId == (_DWORD)SpotId_41616128 )
    {
      if ( !_4__this )
        sub_1BCB254(SpotId_41616128, warId);
    }
    else
    {
      v532->fields.nowSpotId = (int)SpotId_41616128;
      if ( !_4__this )
        sub_1BCB254(SpotId_41616128, warId);
      v533 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v532->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v532,
          Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v532->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v532->fields.__9__12, (int32_t)_9__12, v535, v536);
      }
      if ( !v533 )
        sub_1BCB254(SpotId_41616128, warId);
      v537 = System_Collections_Generic_List_object___Find(
               v533,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v531->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v537;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v531->fields._spotInfo_5__17, (int32_t)v537, v538, v539);
      spotInfo_5__17 = v696->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1BCB254(0LL, v540);
      SpotId_41616128 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0LL);
      warId = (unsigned int)SpotId_41616128;
      if ( v696->fields._nowMapId_5__20 != (_DWORD)SpotId_41616128 )
      {
        v696->fields._nowMapId_5__20 = (int)SpotId_41616128;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_41616128, v542);
        v544 = v696;
        v696->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v544->fields._mapInfo_5__16, (int32_t)MapInfoByMapID, v545, v546);
        v548 = v696->fields._mapInfo_5__16;
        if ( !v548 )
          sub_1BCB254(0LL, v547);
        v552 = MapControl_MapInfo__GetMine(v548, 0LL);
        if ( !v552 )
          sub_1BCB254(0LL, v549);
        SpotId_41616128 = v696;
        warId = (unsigned int)v552->fields.warId;
        if ( v696->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v696->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0LL);
            SpotId_41616128 = v696;
          }
          else
          {
            ChildByWarID = 0LL;
          }
          SpotId_41616128->fields._warInfo_5__14 = ChildByWarID;
          sub_1BCAF9C(
            (CGThumbnailListItem_o *)&SpotId_41616128->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v550,
            v551);
          v555 = v696->fields._warInfo_5__14;
          if ( !v555 )
            sub_1BCB254(0LL, v554);
          v556 = MapControl_WarInfo__GetMine(v555, 0LL);
          v557 = v696;
          v696->fields._warEnt_5__18 = v556;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v557->fields._warEnt_5__18, (int32_t)v556, v558, v559);
        }
      }
    }
    v560 = v696->fields.__8__3;
    if ( !v560 )
      sub_1BCB254(SpotId_41616128, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v560->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v560,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v560->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v560->fields.__9__13, (int32_t)_9__13, v563, v564);
    }
    if ( !allQuestInfoList )
      sub_1BCB254(SpotId_41616128, warId);
    v565 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v566 = v565;
    if ( v565 != -1 )
    {
      v567 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v567 )
        sub_1BCB254(0LL, v566);
      System_Collections_Generic_List_object___RemoveAt(
        v567,
        v566,
        (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v568 = v696->fields._warInfo_5__14;
    if ( !v690 )
    {
      if ( !v568 )
        sub_1BCB254(0LL, v566);
      goto LABEL_385;
    }
    if ( !v568 )
      sub_1BCB254(0LL, v566);
    MapControl_WarInfo__SetStatusCheckFlag(v568, 1, 0, 0LL);
    if ( !v690 )
      sub_1BCB254(0LL, v569);
    HasStatus = UserQuestEntity__HasStatus(v690, 8, 0LL);
    if ( !HasStatus )
    {
      v572 = v696->fields._warInfo_5__14;
      if ( !v572 )
        sub_1BCB254(0LL, v571);
      goto LABEL_387;
    }
    if ( !v690 )
      sub_1BCB254(HasStatus, v571);
    if ( v690->fields.challengeNum >= 1 )
    {
      v572 = v696->fields._warInfo_5__14;
      if ( !v572 )
        sub_1BCB254(0LL, v571);
LABEL_387:
      MapControl_WarInfo__SetStatusCheckFlag(v572, 4, 0, 0LL);
    }
    if ( !v690 )
      sub_1BCB254(0LL, v571);
    v576 = UserQuestEntity__getClearNum(v690, 0LL) < 1;
    v568 = v696->fields._warInfo_5__14;
    if ( v576 )
    {
      if ( !v568 )
        sub_1BCB254(0LL, v577);
LABEL_385:
      MapControl_WarInfo__SetStatusCheckFlag(v568, 2, 0, 0LL);
      v575 = 0;
      goto LABEL_399;
    }
    if ( !v568 )
      sub_1BCB254(0LL, v577);
    v573 = MapControl_WarInfo__GetMine(v568, 0LL);
    if ( !v573 )
      sub_1BCB254(0LL, v574);
    v578 = v696->fields.__8__3;
    if ( !v578 )
      sub_1BCB254(v573, v574);
    if ( v573->fields.lastQuestId == v578->fields.questId )
    {
      v579 = v696->fields._warInfo_5__14;
      if ( !v579 )
        sub_1BCB254(0LL, v574);
      v575 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v579, 8, 1, 0LL);
    }
    else
    {
      v575 = 1;
    }
LABEL_399:
    v580 = v696->fields.__8__3;
    if ( !v580 )
      sub_1BCB254(v573, v574);
    v581 = v696->fields._spotInfo_5__17;
    if ( !v581 )
      sub_1BCB254(0LL, v574);
    v582 = MapControl_SpotInfo__AddChild(v581, v580->fields.questId, 0LL);
    v585 = v696->fields._warInfo_5__14;
    if ( !v585 )
      sub_1BCB254(v582, 0LL);
    v586 = v582;
    if ( !v582 )
      sub_1BCB254(0LL, v585);
    v587 = v585->fields.warId;
    v582->fields._WarInfo_k__BackingField = v585;
    v582->fields.warId = v587;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v582->fields._WarInfo_k__BackingField, (int32_t)v585, v583, v584);
    v588 = v696->fields._spotInfo_5__17;
    v586->fields._SpotInfo_k__BackingField = v588;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v586->fields._SpotInfo_k__BackingField, (int32_t)v588, v589, v590);
    v586->fields.endTime = QuestTree__GetEndTime(_4__this, v586, v591);
    warEnt_5__18 = v696->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1BCB254(0LL, v592);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v596 = v696->fields._warEnt_5__18;
      if ( !v596 )
        sub_1BCB254(IsStartTypeQuest, v595);
      v597 = v696->fields.__8__3;
      if ( !v597 )
        sub_1BCB254(IsStartTypeQuest, v595);
      if ( v596->fields.targetId == v597->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v696->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_415;
      }
    }
    v598 = v696->fields._warEnt_5__18;
    if ( !v598 )
      sub_1BCB254(IsStartTypeQuest, v595);
    v599 = v696->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v599 )
      sub_1BCB254(0LL, v595);
    v600 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v599,
             v598->fields.id,
             &value,
             (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v600 )
    {
      v603 = v696->fields.__8__3;
      if ( !v603 )
        sub_1BCB254(v600, v601);
      if ( !value )
        sub_1BCB254(0LL, v601);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v603->fields.questId,
             (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_415:
        *(_QWORD *)&v586->fields.dispType = 0LL;
LABEL_419:
        v606 = 1;
        goto LABEL_420;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v522, v586, v696->fields._nowWarId_5__21, v602) != 1 )
      goto LABEL_419;
    v605 = v696->fields._warInfo_5__14;
    if ( !v605 )
      sub_1BCB254(0LL, v604);
    MapControl_WarInfo__SetStatusCheckFlag(v605, 1, 0, 0LL);
    v606 = 0;
LABEL_420:
    if ( MapControl_QuestInfo__IsDisaplayable(v586, 0LL) )
    {
      if ( ((v575 | v606) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v586, 0LL) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v609 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestResetMaster___);
          v610 = (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, 1LL);
          v612 = v696->fields.__8__3;
          if ( !v612 )
            sub_1BCB254(v610, v610);
          if ( !v610 )
            sub_1BCB254(0LL, 0LL);
          if ( !v610->max_length )
            sub_1BCB25C(v610, v610, v611);
          v610->m_Items[0] = v612->fields.questId;
          if ( !v609 )
            sub_1BCB254(v610, v610);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v609,
                                   v610,
                                   (const MethodInfo_32C73DC *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v690 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v690, 0LL) )
          {
            v614 = v696->fields._spotInfo_5__17;
            if ( !v614 )
              sub_1BCB254(0LL, v608);
            MapControl_SpotInfo__AddQuestCount(v614, 1, 0LL);
          }
        }
        v615 = v696->fields._spotInfo_5__17;
        if ( !v615 )
          sub_1BCB254(0LL, v608);
        MapControl_SpotInfo__AddAvailableQuestId(v615, v586->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v586, 0LL) == 1 )
      {
        v616 = MapControl_QuestInfo__GetMine(v586, 0LL);
        if ( !v616 )
          sub_1BCB254(0LL, v617);
        HasFlag = QuestEntity__HasFlag(v616, 0x400000000000LL, 0LL);
        v620 = v696;
        if ( !HasFlag )
        {
          v621 = v696->fields._spotInfo_5__17;
          if ( !v621 )
            sub_1BCB254(HasFlag, v619);
          v621->fields._IsNext_k__BackingField = 1;
        }
        v622 = v620->fields._mapInfo_5__16;
        if ( !v622 )
          sub_1BCB254(HasFlag, v619);
        v622->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v586, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v625 = v696;
        v626 = v696->fields._spotInfo_5__17;
        if ( !v626 )
          sub_1BCB254(IsDisplayQuestNextIcon, v624);
        v626->fields._IsNext_k__BackingField = 1;
        v627 = v625->fields._mapInfo_5__16;
        if ( !v627 )
          sub_1BCB254(IsDisplayQuestNextIcon, v624);
        v627->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v522, 0x8000000000LL, 0LL) )
      {
        v628 = v696->fields._spotInfo_5__17;
        if ( !v628 )
          sub_1BCB254(0LL, v607);
        MapControl_SpotInfo__AddFreeQuestCount(v628, 1, 0LL);
      }
    }
    v629 = v690;
    if ( v690 )
    {
      v629 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v690, 8, 0LL);
      if ( ((unsigned __int8)v629 & 1) != 0 )
      {
        if ( !v690 )
          sub_1BCB254(v629, v607);
        v630 = v690->fields.challengeNum == 0;
      }
      else
      {
        v630 = 0;
      }
    }
    else
    {
      v630 = 1;
    }
    v586->fields.isNew = v630;
    v586->fields.questPhase = QuestPhase;
    v631 = v696->fields.__8__3;
    if ( !v631 )
      sub_1BCB254(v629, v607);
    questPickupMaster_5__9 = v696->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1BCB254(0LL, v607);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v631->fields.questId, 0LL);
    v586->fields.pickupPriority = Priority;
    v635 = v696->fields.__8__3;
    if ( !v635 )
      sub_1BCB254(Priority, v634);
    questPhaseMaster_5__6 = v696->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1BCB254(0LL, v634);
    v637 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v635->fields.questId, 0LL);
    v641 = v637;
    if ( !v637 )
      sub_1BCB254(0LL, v638);
    v642 = v637[3];
    v643 = v642 - 1;
    if ( (int)v642 >= 1 )
    {
      v644 = 0;
      while ( 1 )
      {
        v645 = v641[v644 + 4];
        if ( !v645 )
          sub_1BCB254(v637, v638);
        v637 = MapControl_QuestInfo__AddChild(v586, *(_DWORD *)(v645 + 16), *(_DWORD *)(v645 + 20), 0LL);
        if ( v643 == v644 )
          break;
        if ( (unsigned int)++v644 >= *((_DWORD *)v641 + 6) )
          sub_1BCB25C(v637, v638, v639);
      }
    }
    v646 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v646 )
      sub_1BCB254(0LL, v638);
    v647 = v646->fields._items;
    v648 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v646->fields._version;
    if ( !v647 )
      sub_1BCB254(v646, v638);
    v649 = v646->fields._size;
    if ( (unsigned int)v649 >= v647->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v646,
        (Il2CppObject *)v586,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v648[4] + 192LL) + 112LL));
    }
    else
    {
      v650 = &v647->obj.klass + v649;
      v646->fields._size = v649 + 1;
      v650[4] = (Il2CppClass *)v586;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v650 + 4), (int32_t)v586, v639, v640);
    }
    v4 = v696;
    v257 = v696->fields._mapCount_5__13;
    if ( v257 && !(v257 % v696->fields._breakInterval_5__22) )
    {
      v696->fields.__2__current = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v651);
      v321 = v696;
      v322 = 4;
      goto LABEL_333;
    }
LABEL_474:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    mapCount_5__13 = v257 + 1;
    v4->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1BCB254(mapIdx_5__12, method);
  v652 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v653 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v653 = QuestTree___c_TypeInfo;
  }
  _9__45_11 = (System_Comparison_T__o *)v653->static_fields->__9__45_11;
  if ( !_9__45_11 )
  {
    if ( !v653->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v653);
      v653 = QuestTree___c_TypeInfo;
    }
    v655 = (Il2CppObject *)v653->static_fields->__9;
    _9__45_11 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__45_11,
      v655,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__,
      0LL);
    v656 = QuestTree___c_TypeInfo->static_fields;
    v656->__9__45_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__45_11;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v656->__9__45_11, (int32_t)_9__45_11, v657, v658);
  }
  if ( !v652 )
    sub_1BCB254(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_57390740(
    v652,
    _9__45_11,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v659 = v696;
  v696->fields.__8__3 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v659->fields.__8__3, 0, v660, v661);
  v662 = v696;
  v696->fields._warInfo_5__14 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v662->fields._warInfo_5__14, 0, v663, v664);
  v665 = v696;
  v696->fields._mapInfo_5__16 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v665->fields._mapInfo_5__16, 0, v666, v667);
  v668 = v696;
  v696->fields._spotInfo_5__17 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v668->fields._spotInfo_5__17, 0, v669, v670);
  v671 = v696;
  v696->fields._warEnt_5__18 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v671->fields._warEnt_5__18, 0, v672, v673);
  v674 = v696;
  v696->fields._userQuestMaster_5__19 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v674->fields._userQuestMaster_5__19, 0, v675, v676);
  v677 = v696;
  v696->fields._questList_5__24 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v677->fields._questList_5__24, 0, v678, v679);
  v680 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v680 )
    sub_1BCB254(0LL, v681);
  CommonUI__SetLoadMode((CommonUI_o *)v680, 0, 0LL);
  _4__this->fields.isInit = 1;
  v684 = v696;
  if ( v696->fields.endCallback )
  {
    v696->fields.__2__current = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v684->fields.__2__current, 0, v682, v683);
    v321 = v696;
    v322 = 5;
    goto LABEL_333;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B19346 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4B19346 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}