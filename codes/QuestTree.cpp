void QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C347C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C32C20(&MapControl_RootInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4C347C0 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1C32E6C(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allQuestInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allSpotInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allMapInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.allWarInfoList, (int32_t)v21, v22, v23);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questReleaseEntList, (int32_t)v24, v25, v26);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39E2EEC *)Method_SingletonTemplate_QuestTree___ctor__);
}


bool QuestTree__CheckMapGimmickCond(
        QuestTree_o *this,
        int32_t mapGimmickId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_36538200(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_36535288(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  int64_t v7; // x20
  MapGimmickEntity_o *v8; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v10; // x8
  int64_t *v11; // x9
  int64_t v12; // x10

  if ( (byte_4C347BD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C347BD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
  {
    LOBYTE(Mine) = 1;
  }
  else
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !mapGimmickInfo )
      goto LABEL_26;
    v7 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
    if ( !Mine )
      return (char)Mine;
    v8 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C32CC8(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v10 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v10 || (*(_QWORD *)(Time + 32) = v8->fields.startedAt, (_DWORD)v10 == 1) )
      sub_1C32E84(Time);
    *(_QWORD *)(Time + 40) = v8->fields.endedAt;
    if ( (int)v10 >= 1 )
    {
      v10 = (unsigned int)v10;
      v11 = (int64_t *)(Time + 32);
      do
      {
        v12 = *v11;
        if ( *v11 > v7 && this->fields.forceUpdateTime > v12 )
          this->fields.forceUpdateTime = v12;
        --v10;
        ++v11;
      }
      while ( v10 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1C32E7C(Time);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v8, 0)
                && MapGimmickEntity__IsEnableTime(v8, v7, 0);
  }
  return (char)Mine;
}


int32_t QuestTree__CheckQuestOpen(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        MapControl_QuestInfo_o *questInfo,
        int32_t warId,
        const MethodInfo *method)
{
  QuestTree_o *v8; // x22
  int64_t Instance; // x0
  bool v10; // w24
  int64_t Time; // x23
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  __int64 v15; // x29
  __int64 v16; // x28
  _QWORD *v17; // x25
  __int64 v18; // x8
  int64_t *v19; // x9
  int64_t v20; // x10
  int v21; // w22
  _BOOL4 v22; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v28; // w23
  int32_t v29; // w20
  int32_t v30; // w8
  UserQuestEntity_o *v32; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4C347B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C347B9 = 1;
  }
  entity = 0;
  questReleaseNG = 0;
  v32 = 0;
  Instance = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !Instance )
    goto LABEL_73;
  v10 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)Instance,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !Instance )
    goto LABEL_73;
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, questEnt->fields.id, 0);
  p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  if ( !ReplaceDataByQuestId )
  {
    p_openedAt = &questEnt->fields.openedAt;
    p_closedAt = &questEnt->fields.closedAt;
  }
  v15 = *p_openedAt;
  v16 = *p_closedAt;
  v17 = (_QWORD *)sub_1C32CC8(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v17 )
    goto LABEL_73;
  v18 = v17[3];
  if ( !(_DWORD)v18 || (v17[4] = Instance, (_DWORD)v18 == 1) || (v17[5] = v15, (unsigned int)v18 <= 2) )
    sub_1C32E84(Instance);
  v17[6] = v16;
  if ( (int)v18 >= 1 )
  {
    v18 = (unsigned int)v18;
    v19 = v17 + 4;
    do
    {
      v20 = *v19;
      if ( *v19 > Time && v8->fields.forceUpdateTime > v20 )
        v8->fields.forceUpdateTime = v20;
      --v18;
      ++v19;
    }
    while ( v18 );
  }
  v21 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000, 0) )
  {
    v22 = 0;
    goto LABEL_55;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0);
  if ( HasFlag )
    v21 = 3;
  else
    v21 = 1;
  if ( v10 || HasFlag )
  {
    v22 = !HasFlag;
    goto LABEL_55;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0) > Time
    && QuestEntity__getNoticeAt(questEnt, 0) <= Time )
  {
    goto LABEL_53;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_73;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( questReleaseNG )
  {
    if ( questReleaseNG->fields.closedMessageId )
    {
      IsShop = entity;
      if ( entity )
      {
        IsShop = (Il2CppObject *)WarEntity__IsShop((WarEntity_o *)entity, 0);
        if ( ((unsigned __int8)IsShop & 1) != 0 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_73;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          Instance = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_73;
          if ( !UserQuestMaster__TryGetEntity(
                  (UserQuestMaster_o *)MasterData_object,
                  &v32,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0) )
            goto LABEL_54;
          Instance = (int64_t)v32;
          if ( !v32 )
            goto LABEL_73;
          if ( !UserQuestEntity__HasStatus(v32, 8, 0) )
            goto LABEL_54;
LABEL_53:
          v22 = 0;
          v21 = 2;
          goto LABEL_55;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v25);
  if ( !Instance )
    goto LABEL_73;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_53;
  }
LABEL_54:
  v22 = 0;
  v21 = 0;
LABEL_55:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( (Instance & 1) != 0 )
    v28 = 1;
  else
    v28 = forceOperation;
  if ( v28 )
    v29 = v28 != 2;
  else
    v29 = v21;
  if ( questReleaseNG && v29 == 2 )
  {
    if ( questInfo )
    {
      MapControl_QuestInfo__SetDispType_36082476(questInfo, 2, questReleaseNG, 0);
      goto LABEL_69;
    }
LABEL_73:
    sub_1C32E7C(Instance);
  }
  if ( !questInfo )
    goto LABEL_73;
  questInfo->fields.dispType = v29;
LABEL_69:
  if ( v28 )
    v30 = v28 != 2;
  else
    v30 = v22;
  questInfo->fields.touchType = v30;
  return v29;
}


bool QuestTree__CheckSpotCond(
        QuestTree_o *this,
        int32_t spotId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_36538200(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckSpotCond_36538200(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  char *v13; // x0
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v16; // x1
  long double inited; // q0
  QuestAfterAction_o *Instance; // x0
  SrcSpotBasePrefab_c *klass; // x8
  SrcSpotBasePrefab_c *v20; // x8
  Il2CppClass *parent; // x8
  int name; // w8
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
  const MethodInfo *v45; // x1
  struct System_Threading_CancellationTokenSource_o *v46; // x8
  QuestAfterAction_o *v47; // x20
  int32_t v48; // w23
  unsigned __int64 v49; // x24
  int32_t v50; // w22
  int32_t v51; // w21
  int32_t v52; // w20
  int64_t v53; // x2
  int32_t v54; // w0
  int32_t v55; // w0
  bool v56; // cc
  int32_t v57; // w8
  bool v58; // cc
  int32_t v59; // w8
  const MethodInfo *v60; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v62; // x20
  int32_t v63; // w23
  unsigned __int64 v64; // x24
  int32_t v65; // w22
  const MethodInfo *v66; // x1
  struct System_Threading_CancellationTokenSource_o *v67; // x8
  QuestAfterAction_o *v68; // x20
  unsigned __int64 v69; // x24
  int32_t v70; // w22
  int32_t v71; // w8
  int32_t v73; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C347BC & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C347BC = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
  {
LABEL_6:
    LOBYTE(v13) = 1;
    return (unsigned __int8)v13 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !klass[1]._1.parent )
    goto LABEL_34;
  if ( !LODWORD(Instance[1].klass) )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  parent = v20[1]._1.parent;
  if ( !parent )
    goto LABEL_209;
  name = (int)parent->_1.name;
  if ( name )
  {
    IsExistCommand = 0;
  }
  else
  {
LABEL_34:
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C83334(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C83334(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      IsExistCommand = QuestAfterAction__IsExistCommand(Instance, commandType, commandTypeId, 0);
      name = 0;
    }
    else
    {
      name = 0;
      IsExistCommand = 1;
    }
  }
  v13 = (char *)&dword_0 + 1;
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v13 & 1;
    case 2:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      if ( targetValue )
        LOBYTE(v13) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0);
      else
        LOBYTE(v13) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0);
      return (unsigned __int8)v13 & 1;
    case 3:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      if ( targetValue )
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(
                            (clsQuestCheck_o *)Instance,
                            targetId,
                            targetValue,
                            IsExistCommand,
                            0);
      else
        IsMissionAchive = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0);
      goto LABEL_173;
    case 5:
      if ( name == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionAchive(targetId, 0);
      return (unsigned __int8)v13 & 1;
    case 6:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0) )
        goto LABEL_6;
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0);
      if ( !Instance )
        goto LABEL_209;
      v28 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0);
      LOBYTE(v13) = QuestTree__CheckQuestOpen(this, v28, 0, WarId, v30) == 1;
      return (unsigned __int8)v13 & 1;
    case 7:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0);
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
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Item, v36);
              if ( !Item || !Instance )
                goto LABEL_209;
              ++v34;
              v33 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)Item[1].klass, IsExistCommand, 0);
              if ( v34 >= v32->fields._size )
                goto LABEL_162;
            }
          }
        }
        v33 = 0;
LABEL_162:
        if ( targetValue <= 1 )
          v57 = 1;
        else
          v57 = targetValue;
        v58 = v33 < v57;
        goto LABEL_206;
      }
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0);
      if ( !Instance )
        goto LABEL_209;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v62 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v63 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v73 = 1;
        else
          v73 = targetValue;
        v58 = v63 < v73;
LABEL_206:
        LOBYTE(v13) = v58;
        return (unsigned __int8)v13 & 1;
      }
      v63 = 0;
      v64 = 0;
      while ( v64 < (unsigned int)m_CancellationTokenSource )
      {
        v65 = *((_DWORD *)&v62->fields.invalidMapGimmickIdList + v64);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v60);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v65,
                                           IsExistCommand,
                                           0);
        LODWORD(m_CancellationTokenSource) = v62->fields.m_CancellationTokenSource;
        ++v64;
        v63 += (unsigned __int8)Instance & 1;
        if ( (__int64)v64 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      if ( this->fields.isUseCache )
      {
        v37 = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0);
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
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v41[1].klass, IsExistCommand, 0);
              if ( v40 >= v38->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C32E7C(Instance);
          }
        }
        v39 = 0;
LABEL_167:
        if ( targetValue <= 1 )
          v59 = 1;
        else
          v59 = targetValue;
        v56 = v39 < v59;
      }
      else
      {
        Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                           (QuestGroupMaster_o *)Instance,
                                           targetId,
                                           2,
                                           0);
        if ( !Instance )
          goto LABEL_209;
        v67 = Instance->fields.m_CancellationTokenSource;
        v68 = Instance;
        if ( (int)v67 >= 1 )
        {
          v48 = 0;
          v69 = 0;
          while ( v69 < (unsigned int)v67 )
          {
            v70 = *((_DWORD *)&v68->fields.invalidMapGimmickIdList + v69);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v66);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v70,
                                               IsExistCommand,
                                               0);
            LODWORD(v67) = v68->fields.m_CancellationTokenSource;
            ++v69;
            v48 += (unsigned __int8)Instance & 1;
            if ( (__int64)v69 >= (int)v67 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1C32E84(Instance);
        }
LABEL_188:
        v48 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v71 = 1;
        else
          v71 = targetValue;
        v56 = v48 < v71;
      }
LABEL_193:
      LOBYTE(v13) = !v56;
      return (unsigned __int8)v13 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
                                         0);
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
      v56 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v13) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0);
      return (unsigned __int8)v13 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0);
      if ( !Instance )
        goto LABEL_209;
      v46 = Instance->fields.m_CancellationTokenSource;
      v47 = Instance;
      if ( (int)v46 < 1 )
        goto LABEL_188;
      v48 = 0;
      v49 = 0;
      while ( v49 < (unsigned int)v46 )
      {
        v50 = *((_DWORD *)&v47->fields.invalidMapGimmickIdList + v49);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v45);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClearRaw(
                                           (clsQuestCheck_o *)Instance,
                                           v50,
                                           IsExistCommand,
                                           0);
        LODWORD(v46) = v47->fields.m_CancellationTokenSource;
        ++v49;
        v48 += (unsigned __int8)Instance & 1;
        if ( (__int64)v49 >= (int)v46 )
          goto LABEL_189;
      }
      goto LABEL_210;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0);
      return (unsigned __int8)v13 & 1;
    case 13:
      v51 = targetId / 100;
      v52 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventRaceGoalScriptPlayed(v51, v52, targetValue, 0);
      return (unsigned __int8)v13 & 1;
    case 16:
      if ( name == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0);
LABEL_173:
      LOBYTE(v13) = !IsMissionAchive;
      return (unsigned __int8)v13 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsQuestAvailable(targetId, 0);
      return (unsigned __int8)v13 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 83;
      goto LABEL_199;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 84;
      goto LABEL_199;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 85;
      goto LABEL_199;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 86;
      goto LABEL_199;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 87;
      goto LABEL_199;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 88;
      goto LABEL_199;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 89;
      goto LABEL_199;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 90;
      goto LABEL_199;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 91;
      goto LABEL_199;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 23;
      goto LABEL_199;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 76;
      goto LABEL_199;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionClearOnly(targetId, 0);
      return (unsigned __int8)v13 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetValue;
      v54 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      v55 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
      if ( v55 < 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v53 = targetValue;
        v54 = 113;
LABEL_199:
        LOBYTE(v13) = CondType__IsOpen(v54, targetId, v53, 0, 0, 0);
      }
      else
      {
        LOBYTE(v13) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v55, 1, 0);
      }
      return (unsigned __int8)v13 & 1;
    default:
LABEL_52:
      LOBYTE(v13) = 0;
      return (unsigned __int8)v13 & 1;
  }
}


bool QuestTree__CheckSpotRoadCond(
        QuestTree_o *this,
        int32_t spoRoadtId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_36538200(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo(
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

  if ( (byte_4C347B7 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C347B7 = 1;
  }
  v7 = sub_1C32E6C(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v7;
}


int64_t QuestTree__GetEndTime(QuestTree_o *this, MapControl_QuestInfo_o *questInfo, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t questId; // w21
  System_Collections_Generic_List_QuestReleaseEntity__o **p_questReleaseEntList; // x19
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x23
  int64_t v9; // x19
  _BOOL8 v10; // x0
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v15; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v17; // x0
  const MethodInfo *v18; // x3
  QuestEntity_o *Mine; // x0
  QuestEntity_o *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4C347BA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4C347BA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_42429532((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C32E7C(this);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0;
  v23 = v22;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C32E7C(v10);
    klass_high = HIDWORD(v23.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C32E7C(v10);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1C32E7C(FirstEntityFromQuestId);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v15 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0) )
            {
              EndTime = EventEntity__GetEndTime(v15, 1, 0);
LABEL_27:
              v9 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !Mine )
          sub_1C32E7C(0);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v20 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v20 )
          sub_1C32E7C(0);
        EndTime = QuestEntity__GetEndTime(v20, 1, 0);
        goto LABEL_27;
      case 166:
        v17 = MapControl_QuestInfo__GetMine(questInfo, 0);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v17, v17, (QuestReleaseEntity_o *)current, v18);
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
    &v23,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v9;
}


int64_t QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t v7; // x22
  int64_t v8; // x21
  System_DateTime_o v9; // x0
  int64_t Time_41266888; // x0
  int64_t value; // x22
  int64_t v12; // x21
  System_DateTime_o v13; // x0
  int64_t NextDayStartTime; // x0
  int64_t v15; // x11
  int64_t v16; // x22
  int64_t v17; // x26
  int v18; // w27
  System_DateTime_o v19; // x0
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C347BB & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C347BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !questEnt )
    goto LABEL_29;
  v7 = Time;
  v8 = 0;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0) )
    return v8;
  Time = QuestEntity__getClosedAt(questEnt, 0);
  v8 = 0;
  if ( v7 > Time )
    return v8;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1C32E7C(Time);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_41266888 = NetworkManager__getTime_41266888(v9, 0);
  value = questReleaseEnt->fields.value;
  v12 = Time_41266888;
  dateData = NetworkManager__getDateTime_41267668(Time_41266888 - 3600 * value, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v13.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v13, 0) + 1)) & 1) == 0 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0);
  v15 = v12 + 86400;
  v8 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v16 = v15 - 3600 * value;
  v17 = v8 + 518400;
  v18 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_41267668(v16, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v19.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v19, 0) + 1)) & 1) == 0 )
      break;
    v8 += 86400LL;
    --v18;
    v16 += 86400LL;
    if ( !v18 )
    {
      v8 = v17;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0) < v8 )
    return QuestEntity__getClosedAt(questEnt, 0);
  return v8;
}


MapControl_WarInfo_o *QuestTree__GetLatestGrandWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__39_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x2
  MapControl_WarInfo_o *current; // x21
  BalanceConfig_c *v17; // x0
  int32_t warId; // w22
  QuestTree___c_c *v19; // x8
  System_Func_object__bool__o *_9__39_1; // x21
  Il2CppObject *v21; // x22
  struct QuestTree___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  BalanceConfig_c *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C347B0 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C32C20(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C32C20(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C32C20(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__);
    sub_1C32C20(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__);
    sub_1C32C20(&QuestTree___c_TypeInfo);
    byte_4C347B0 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_32;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 0, 1, 0);
  v5 = QuestTree___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v5 = QuestTree___c_TypeInfo;
  }
  _9__39_0 = (System_Func_object__int__o *)v5->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__39_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__39_0, v8, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__39_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__39_0,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_1C32E7C(mapControlRootInfo);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v14 )
      break;
    current = (MapControl_WarInfo_o *)v29.fields._current;
    if ( !v29.fields._current )
      sub_1C32E7C(v14);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v29.fields._current[1].klass), v15) )
    {
      v17 = BalanceConfig_TypeInfo;
      warId = current->fields.warId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( warId != v17->static_fields->GrandExtra2WarId )
        goto LABEL_30;
      v19 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v19 = QuestTree___c_TypeInfo;
      }
      _9__39_1 = (System_Func_object__bool__o *)v19->static_fields->__9__39_1;
      if ( !_9__39_1 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = QuestTree___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v19->static_fields->__9;
        _9__39_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__39_1, v21, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__, 0);
        v22 = QuestTree___c_TypeInfo->static_fields;
        v22->__9__39_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__39_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v22->__9__39_1, (int32_t)_9__39_1, v23, v24);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                          v13,
                                          (System_Func_TSource__bool__o *)_9__39_1,
                                          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
      if ( current )
      {
        v26 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v26 = BalanceConfig_TypeInfo;
        }
        if ( QuestTree__IsActiveWar(this, v26->static_fields->GrandExtra1WarId, v25) )
          goto LABEL_30;
      }
    }
  }
  current = 0;
LABEL_30:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return current;
}


MapControl_WarInfo_o *QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__38_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C347AF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C32C20(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C32C20(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__);
    sub_1C32C20(&QuestTree___c_TypeInfo);
    byte_4C347AF = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0, 0);
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
    _9__38_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C32E7C(mapControlRootInfo);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C32E7C(v13);
    if ( QuestTree__IsActiveWar(
           this,
           *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_14),
           v14) )
    {
      goto LABEL_17;
    }
  }
  current = 0;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C347A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1C32C20(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass24_0_TypeInfo);
    byte_4C347A5 = 1;
  }
  v5 = sub_1C32E6C(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_1C32E7C(v6);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v8,
                                          (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  int32_t SpotID; // w0
  const MethodInfo *v6; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v6)) == 0) )
  {
    sub_1C32E7C(QuestInfo);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0);
}


int32_t QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_object__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v13; // w19
  QuestTree_o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v17; // x21
  System_Collections_Generic_List_object__o *v18; // x0
  _BOOL8 v19; // x0
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_int__o *v22; // x0
  int v23; // w19
  _BOOL8 v24; // x0
  __int64 Item; // x0
  int32_t v26; // w22
  _BOOL8 v27; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int32_t v32; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C347A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C347A8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)ChildByWarID,
                                                                        ChildByWarID,
                                                                        v7);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C32E7C(v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    UserReachableMapList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v36 = v33;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v36.fields._current )
      sub_1C32E7C(0);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v36.fields._current,
                                                              0);
    if ( !SpotList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      SpotList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v35 = v33;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v35.fields._current )
        sub_1C32E7C(0);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v35.fields._current,
                                                                              0,
                                                                              0);
      if ( !v9 )
        sub_1C32E7C(AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v14, v9, v15);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    UserReachableMapList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v13 = 0;
  v36 = v33;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v36.fields._current )
      sub_1C32E7C(0);
    v18 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v36.fields._current,
                                                         0);
    if ( !v18 )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v18,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v35 = v33;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v19 )
        break;
      current = (MapControl_SpotInfo_o *)v35.fields._current;
      if ( !v35.fields._current )
        sub_1C32E7C(v19);
      if ( HIDWORD(v35.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C32E7C(0);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v22 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v22 )
        sub_1C32E7C(0);
      v32 = v13;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        v22,
        (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v23 = 0;
      v34 = v33;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v34,
                (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v24 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C32E7C(v24);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v34.fields._current,
                 (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v26 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v17 )
            sub_1C32E7C(Item);
          v27 = System_Collections_Generic_List_int___Contains(
                  v17,
                  Item,
                  (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v27 )
          {
            ++v23;
          }
          else
          {
            items = v17->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v17->fields._version;
            if ( !items )
              sub_1C32E7C(v27);
            size = v17->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v17,
                v26,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v17->fields._size = size + 1;
              items->m_Items[size] = v26;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v34,
        (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v13 = v32 - v23 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestTree__GetQuestCountForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_MapInfo_o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  _BOOL8 v11; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v17; // x22
  _BOOL8 v18; // x0
  MapControl_SpotInfo_o *v19; // x23
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_int__o *v21; // x0
  int v22; // w25
  _BOOL8 v23; // x0
  __int64 Item; // x0
  int32_t v25; // w24
  _BOOL8 v26; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int v31; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C347AB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C347AB = 1;
  }
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      SpotList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v34 = v32;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v11 )
        break;
      current = v34.fields._current;
      if ( layer < 1 )
      {
        if ( !v34.fields._current )
          sub_1C32E7C(v11);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_1C32E7C(AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v34.fields._current )
          sub_1C32E7C(v11);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v34.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v14, v9, v15);
    v17 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v17,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_1C32E7C(SpotList);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      SpotList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v31 = 0;
    v34 = v32;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v18 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v34,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v31;
        return (int)MapInfoByMapID;
      }
      v19 = (MapControl_SpotInfo_o *)v34.fields._current;
      if ( layer < 1 )
      {
        if ( !v34.fields._current )
          sub_1C32E7C(v18);
LABEL_22:
        if ( v19->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C32E7C(0);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v19->fields.spotId, 0) )
        {
LABEL_25:
          v21 = MapControl_SpotInfo__GetAvailableQuestIdList(v19, 1, 0);
          if ( !v21 )
            sub_1C32E7C(0);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v32,
            v21,
            (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v22 = 0;
          v33 = v32;
          while ( 1 )
          {
            v23 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v33,
                    (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v23 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C32E7C(v23);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v33.fields._current,
                     (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v25 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v17 )
                sub_1C32E7C(Item);
              v26 = System_Collections_Generic_List_int___Contains(
                      v17,
                      Item,
                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v26 )
              {
                ++v22;
              }
              else
              {
                items = v17->fields._items;
                v28 = Method_System_Collections_Generic_List_int__Add__;
                ++v17->fields._version;
                if ( !items )
                  sub_1C32E7C(v26);
                size = v17->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v17,
                    v25,
                    *(const MethodInfo_377B798 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v17->fields._size = size + 1;
                  items->m_Items[size] = v25;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v33,
            (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v31 = v31 - v22 + v19->fields.questCount;
        }
      }
      else
      {
        if ( !v34.fields._current )
          sub_1C32E7C(v18);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v34.fields._current, 0) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
}


MapControl_QuestInfo_o *QuestTree__GetQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C347A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C32C20(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass25_0_TypeInfo);
    byte_4C347A6 = 1;
  }
  v5 = sub_1C32E6C(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C32E7C(v6);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v8,
                                     (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C347BE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4C347BE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    allQuestInfoList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C32E7C(v7);
    if ( LODWORD(v17.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1C32E7C(v7);
      items = v5->fields._items;
      v12 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C32E7C(v7);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v14[4] = (Il2CppClass *)current;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)current, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C347AA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C347AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0);
}


MapControl_SpotInfo_o *QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C347A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C32C20(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4C347A4 = 1;
  }
  v5 = sub_1C32E6C(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_1C32E7C(v6);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v8,
                                    (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v4; // x20
  WarEntity_o *Mine; // x0
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  System_Collections_Generic_List_int__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_int__o *v13; // x21
  QuestTree___c_c *v14; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v16; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t mapId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Predicate_object__o *v25; // x21

  if ( (byte_4C347A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1C32C20(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__);
    sub_1C32C20(&QuestTree___c__DisplayClass31_0_TypeInfo);
    sub_1C32C20(&QuestTree___c_TypeInfo);
    byte_4C347A9 = 1;
  }
  v4 = sub_1C32E6C(QuestTree___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !warInfo )
    goto LABEL_28;
  mapInfoList = warInfo->fields.mapInfoList;
  if ( !MapControl_WarInfo__IsMultiMap(warInfo, 0) )
    return mapInfoList;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !Mine )
    goto LABEL_28;
  BaseMap = WarEntity__GetBaseMap(Mine, 0);
  Map = MapControl_WarInfo__GetMap(warInfo, BaseMap, 0);
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v10, v11, v12);
  if ( !OpenedButtons )
    goto LABEL_28;
  v13 = *(System_Collections_Generic_List_int__o **)(v4 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v14 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v14 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v14->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = QuestTree___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v16, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v18, v19);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v13 )
    {
      System_Collections_Generic_List_int___AddRange(
        v13,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C32E7C(Mine);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v13 )
    goto LABEL_28;
  mapId = Map->fields.mapId;
  items = v13->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      mapId,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v25 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__,
    0);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v25,
                                                                    (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v8; // x20
  Il2CppObject *v9; // x0

  if ( (byte_4C347AD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C32C20(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass35_0_TypeInfo);
    byte_4C347AD = 1;
  }
  v5 = sub_1C32E6C(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C32E7C(v6);
  }
  v9 = System_Collections_Generic_List_object___Find(
         allQuestInfoList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v9 )
    LODWORD(v9) = v9[4].klass;
  return (int)v9;
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allWarInfoList;
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll_OrderReverse(
        QuestTree_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0

  if ( (byte_4C347A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___78035096);
    sub_1C32C20(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4C347A0 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v4,
    allWarInfoList,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___78035096);
  if ( !v4 )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_379A0E8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v4;
}


MapControl_WarInfo_o *QuestTree__GetWarInfoByEventID(QuestTree_o *this, int32_t eventId, const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByEventID((MapControl_RootInfo_o *)result, eventId, 0);
  return result;
}


System_Collections_IEnumerator_o *QuestTree__Init(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C347A1 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree__Init_d__17_TypeInfo);
    byte_4C347A1 = 1;
  }
  v5 = sub_1C32E6C(QuestTree__Init_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
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

  if ( (byte_4C347B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4C347B8 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v6 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v8 = allSpotInfoList->fields._size;
  v9 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v8, 0);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v11 = allSpotRoadInfoList->fields._size;
  v12 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v11, 0);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v14 = allMapGimmickInfoList->fields._size;
  v15 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v14, 0);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v17 = allMapInfoList->fields._size;
  v18 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v18;
  if ( v17 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v17, 0);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_1C32E7C(mapControlRootInfo);
  v20 = allWarInfoList->fields._size;
  v21 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v20, 0);
}


bool QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C347B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C347B2 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_36532736(this, (WarEntity_o *)entity, v6);
}


bool QuestTree__IsActiveEventWar_36532736(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4C347B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&long___TypeInfo);
    this = (QuestTree_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C347B3 = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_33;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, id, 0);
  if ( OpenEntity )
  {
    v7 = OpenEntity;
    if ( WarReleaseEntity__IsOpen(OpenEntity, 0) )
      return 1;
    if ( WarReleaseEntity__IsAnnouncement(v7, 0) || WarReleaseEntity__IsClose(v7, 0) )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
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
  this = (QuestTree_o *)sub_1C32CC8(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_1C32E7C(this);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C32E84(this);
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


bool QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *v6; // x20
  WarEntity_o *Mine; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v9; // x21
  WarEntity_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4C347B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C347B1 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v6 = (MapControl_WarInfo_o *)mapControlRootInfo;
  if ( MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mapControlRootInfo, 0) )
  {
    Mine = MapControl_WarInfo__GetMine(v6, 0);
    if ( !Mine )
      goto LABEL_25;
    if ( WarEntity__IsGrandBoard(Mine, 0) )
    {
      Mine = MapControl_WarInfo__GetMine(v6, 0);
      if ( !Mine )
        goto LABEL_25;
      if ( !WarEntity__IsContainPrioredEntity(Mine, 15, 0) )
      {
        LOBYTE(mapControlRootInfo) = 1;
        return (char)mapControlRootInfo;
      }
    }
  }
  LODWORD(mapControlRootInfo) = MapControl_WarInfo__GetStatus(v6, 0);
  if ( !(_DWORD)mapControlRootInfo )
    return (char)mapControlRootInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_1C32E7C(Mine);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, warId, 0);
  if ( OpenEntity )
  {
    v9 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0) || WarReleaseEntity__IsClose(v9, 0) )
      goto LABEL_18;
  }
  if ( MapControl_WarInfo__IsClosedWar(v6, 0) )
    goto LABEL_18;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_WarInfo__GetMine(v6, 0);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v10 = (WarEntity_o *)mapControlRootInfo;
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_36532736(this, v10, v11) )
LABEL_18:
    LOBYTE(mapControlRootInfo) = 0;
  else
    LOBYTE(mapControlRootInfo) = QuestTree__IsWarOpen(this, v10->fields.id, v11);
  return (char)mapControlRootInfo;
}


bool QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  int64_t forceUpdateTime; // x19

  if ( (byte_4C347A2 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C347A2 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  if ( MonitoringDataMasterRevision != DataManager__getRevisionTotal((DataManager_o *)Instance, 0) )
    return 1;
  forceUpdateTime = this->fields.forceUpdateTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return forceUpdateTime <= NetworkManager__getTime(0);
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__IsNextSpotForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  _BOOL8 v9; // x0
  bool v10; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v13; // x3
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C347AC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C347AC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    SpotList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v10 = v9;
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( layer < 1 )
    {
      if ( !v17.fields._current )
        sub_1C32E7C(v9);
      goto LABEL_12;
    }
    if ( !v17.fields._current )
      sub_1C32E7C(v9);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v17.fields._current, 0) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v13)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0) )
      {
        v14 = 6;
        goto LABEL_16;
      }
    }
  }
  v14 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v10 && v14 == 6;
  return (char)MapInfoByMapID;
}


bool QuestTree__IsSpotSatisfyingActiveCond(QuestTree_o *this, SpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1C32E7C(this);
  return QuestTree__CheckSpotCond_36538200(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.activeCondType,
           spotEnt->fields.activeTargetId,
           spotEnt->fields.activeTargetValue,
           v3);
}


bool QuestTree__IsSpotSatisfyingDisplayCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6
  const MethodInfo *v8; // x6

  if ( !spotEnt )
    sub_1C32E7C(this);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_36538200(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_36538200(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


bool QuestTree__IsUseCache(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.isUseCache;
}


bool QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v9; // x0
  int v10; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C347BF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C347BF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    QuestInfoByWarId,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    v9 = QuestTree__get_QuestCheckInst((QuestTree_o *)v6, v7);
    if ( !current )
      sub_1C32E7C(v9);
    if ( !v9 )
      sub_1C32E7C(0);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v9, *(_DWORD *)((char *)&word_10 + (_QWORD)current), 0) )
    {
      v10 = 4;
      goto LABEL_11;
    }
  }
  v10 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v10 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  clsQuestCheck_o *QuestInfoByWarId; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  _BOOL8 v9; // x0
  bool v10; // w19
  int v11; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C347AE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C347AE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v6 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0);
  if ( v6 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v6, v7);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_1C32E7C(QuestInfoByWarId);
  if ( clsQuestCheck__IsWarClear(QuestInfoByWarId, warId, 0) )
    return 1;
  mapControlRootInfo = v4->fields.mapControlRootInfo;
  if ( mapControlRootInfo )
  {
    ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
    if ( ChildByWarID )
    {
      if ( MapControl_WarInfo__GetStatus(ChildByWarID, 0) != 2 )
        return 1;
    }
  }
LABEL_5:
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v8);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v10 = v9;
    if ( !v9 )
      break;
    if ( !v15.fields._current )
      sub_1C32E7C(v9);
    if ( *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&qword_20) == 1 )
    {
      v11 = 6;
      goto LABEL_15;
    }
  }
  v11 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v10 && v11 == 6;
}


void QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  Il2CppObject *Instance; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o *name; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *v14; // x22
  bool IsExistCommand; // w21
  int32_t v16; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4C347B4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&SpotEntity_TypeInfo);
    byte_4C347B4 = 1;
  }
  v6 = sub_1C32E6C(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)name, v8, v9);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C83334(v11);
  v14 = **(UnityEngine_Object_o ***)(v13 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C32E7C(Instance);
  v16 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v16, 0, 0);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  v4 = QuestTree__CheckMapGimmickCond_36535288(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C32E7C(v4);
  (*mapGimmickInfo)->fields.dispType = v4;
}


void QuestTree__SetupSpotInfo(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        MapControl_SpotInfo_o **spotInfo,
        const MethodInfo *method)
{
  _BOOL8 IsSpotSatisfyingDisplayCond; // x0
  const MethodInfo *v8; // x2
  MapControl_SpotInfo_o *v9; // x8
  int v10; // w9
  int v11; // w10

  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method);
  if ( !IsSpotSatisfyingDisplayCond )
  {
    v9 = *spotInfo;
    if ( *spotInfo )
    {
      v10 = 0;
      v9->fields.dispType = 0;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C32E7C(IsSpotSatisfyingDisplayCond);
  }
  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v8);
  v9 = *spotInfo;
  if ( !*spotInfo )
    goto LABEL_10;
  v10 = 1;
  if ( IsSpotSatisfyingDisplayCond )
    v11 = 1;
  else
    v11 = 2;
  v9->fields.dispType = v11;
LABEL_9:
  v9->fields.touchType = v10;
}


void QuestTree__SetupSpotRoadInfo(
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36538200(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_36538200(
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
    sub_1C32E7C(this);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36538200(
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


void QuestTree__UpdateForceUpdateTime(
        QuestTree_o *this,
        int64_t nowTime,
        System_Int64_array *times,
        const MethodInfo *method)
{
  __int64 max_length; // x8
  int64_t *m_Items; // x9
  int64_t v6; // x10

  if ( !times )
    sub_1C32E7C(this);
  if ( (int)times->max_length >= 1 )
  {
    max_length = (unsigned int)times->max_length;
    m_Items = times->m_Items;
    do
    {
      v6 = *m_Items;
      if ( *m_Items > nowTime && this->fields.forceUpdateTime > v6 )
        this->fields.forceUpdateTime = v6;
      --max_length;
      ++m_Items;
    }
    while ( max_length );
  }
}


void QuestTree__UpdateMonitoringValue(QuestTree_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C347A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C347A3 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0);
}


void QuestTree__UpdateQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
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
    Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0);
    if ( Mine )
    {
      v7 = Mine;
      WarId = QuestEntity__GetWarId(Mine, 0);
      QuestTree__CheckQuestOpen(this, v7, v5, WarId, v9);
    }
  }
}


clsQuestCheck_o *QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  if ( (byte_4C3479F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C3479F = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C347B5 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
    byte_4C347B5 = 1;
  }
  v5 = sub_1C32E6C(QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeUpdateWithOpenCheck(
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

  if ( (byte_4C347B6 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
    byte_4C347B6 = 1;
  }
  v7 = sub_1C32E6C(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 72), (int32_t)endCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


MapControl_RootInfo_o *QuestTree__mfGetMapCtrlP(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.mapControlRootInfo;
}


MapControl_MapInfo_o *QuestTree__mfGetMapInfoByMapID(QuestTree_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C347A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1C32C20(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass29_0_TypeInfo);
    byte_4C347A7 = 1;
  }
  v5 = sub_1C32E6C(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0;
  v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v8,
                                   (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *QuestTree__mfGetQuestInfoListP(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allQuestInfoList;
}


WarEntity_o *QuestTree__mfGetWarEntityByWarID(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0

  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( mapControlRootInfo && (ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0)) != 0 )
    return MapControl_WarInfo__GetMine(ChildByWarID, 0);
  else
    return 0;
}


MapControl_WarInfo_o *QuestTree__mfGetWarInfoByWarID(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByWarID((MapControl_RootInfo_o *)result, warId, 0);
  return result;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__46___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestTree__EnumerateBlankEarthSpotInfo_d__46__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
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
  int32_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x20
  const MethodInfo *v17; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *v18; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_4C347C6 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C32C20(&BlankEarthSpotMaster_TypeInfo);
    byte_4C347C6 = 1;
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
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)v4->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v9 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0);
    v4->fields.__7__wrap1 = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
    v12 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v12 < max_length )
  {
    if ( v12 >= (unsigned int)max_length )
      sub_1C32E84(this);
    v16 = _7__wrap1->m_Items[v12];
    if ( v16 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)v4->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v16->fields.id,
                                                                   0);
        if ( _4__this )
        {
          v18 = this;
          QuestTree__SetupBlankEarthSpotInfo((QuestTree_o *)this, v16, (MapControl_SpotInfo_o *)this, v17);
          v4->fields.__2__current = (struct MapControl_SpotInfo_o *)v18;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C32BC4(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C32E7C(this);
  }
  this->klass = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
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

  if ( (byte_4C347C7 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C347C7 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C32E6C(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.blankEarthSpotMaster, (int32_t)_3__blankEarthSpotMaster, v12, v13);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v6;
}


MapControl_SpotInfo_o *QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__46__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__Init_d__17___ctor(QuestTree__Init_d__17_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__Init_d__17__MoveNext(QuestTree__Init_d__17_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *v14; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_Object_o *v21; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4C347C8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__17_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C347C8 = 1;
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
        if ( !byte_4C3484F )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C3484F = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1C83334(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1C83334(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v12);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v13);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C32BC4(p__2__current, (int32_t)v14, v16, v17);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C32E7C(this);
      }
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C83334(v5);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1C83334(v5);
      v21 = **(UnityEngine_Object_o ***)(v20 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
      }
      endCallback = v2->fields.endCallback;
      if ( endCallback )
        ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
          endCallback->fields.method_code,
          endCallback->fields.method);
    }
    return 0;
  }
  return result;
}


Il2CppObject *QuestTree__Init_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__Init_d__17__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestTree__Init_d__17__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__Init_d__17__System_IDisposable_Dispose(QuestTree__Init_d__17_o *this, const MethodInfo *method)
{
  ;
}


void QuestTree___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C347C1 & 1) == 0 )
  {
    sub_1C32C20(&QuestTree___c_TypeInfo);
    byte_4C347C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestTree___c___GetLatestGrandWarInfo_b__39_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__39_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4C347C2 & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C347C2 = 1;
  }
  if ( !info )
    sub_1C32E7C(this);
  warId = info->fields.warId;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return warId == v5->static_fields->GrandExtra1WarId;
}


int32_t QuestTree___c___GetLatestProgressWarInfo_b__38_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.targetMapId;
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__44_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__44_1(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_11(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotId;
}


void QuestTree___c__DisplayClass23_0___ctor(QuestTree___c__DisplayClass23_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass23_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass23_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass24_0___ctor(QuestTree___c__DisplayClass24_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass24_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass24_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass25_0___ctor(QuestTree___c__DisplayClass25_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass25_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass25_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId;
}


void QuestTree___c__DisplayClass29_0___ctor(QuestTree___c__DisplayClass29_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass29_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass29_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass31_0___ctor(QuestTree___c__DisplayClass31_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass31_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass31_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass31_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C347C3 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C347C3 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_1C32E7C(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
}


void QuestTree___c__DisplayClass35_0___ctor(QuestTree___c__DisplayClass35_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass35_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass35_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass35_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass35_0_o *)MapControl_QuestInfo__GetMine(x, 0)) == 0) )
    sub_1C32E7C(this);
  return this->fields.questId == v3->fields.questId;
}


void QuestTree___c__DisplayClass44_0___ctor(QuestTree___c__DisplayClass44_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass44_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass44_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void QuestTree___c__DisplayClass45_0___ctor(QuestTree___c__DisplayClass45_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass45_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.id == this->fields.targetWarId;
}


void QuestTree___c__DisplayClass45_1___ctor(QuestTree___c__DisplayClass45_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass45_2___ctor(QuestTree___c__DisplayClass45_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass45_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass45_3___ctor(QuestTree___c__DisplayClass45_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass45_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass45_3_o *v4; // x20

  v4 = this;
  if ( (byte_4C347C4 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_3_o *)sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C347C4 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_1C32E7C(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void QuestTree___c__DisplayClass45_4___ctor(QuestTree___c__DisplayClass45_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass45_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void QuestTree___c__DisplayClass45_5___ctor(QuestTree___c__DisplayClass45_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass45_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass45_6___ctor(QuestTree___c__DisplayClass45_6_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass45_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass45_6_o *v4; // x20

  v4 = this;
  if ( (byte_4C347C5 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_6_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C347C5 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_6_o *)v4->fields.spotInfoList) == 0 )
    sub_1C32E7C(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__44___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v2; // x27
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_Dictionary_int__object__o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Object_array *Entitys; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v51; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v56; // x9
  WarEntity_o *v57; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v68; // x23
  int64_t v69; // x19
  Il2CppObject *v70; // x8
  Il2CppObject *_2__current; // x9
  __int64 v72; // x8
  struct QuestTree_o **p__4__this; // x9
  struct QuestTree_o *v74; // x10
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 _2__current_low; // x10
  __int64 v78; // x8
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v81; // x22
  unsigned int v82; // w9
  __int64 v83; // x8
  int32_t v84; // w24
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v89; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v91; // x23
  Il2CppClass **v92; // x0
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v95; // x25
  int v96; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v98; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v99; // x8
  SpotEntity_o **v100; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v101; // t1
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x26
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  __int64 v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v111; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v112; // x25
  int v113; // w27
  unsigned int v114; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v115; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v116; // x8
  SpotRoadEntity_o **v117; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v118; // t1
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x26
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  Il2CppObject *v127; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v128; // x24
  int v129; // w26
  int v130; // w22
  __int64 v131; // x8
  MapControl_MapGimmickInfo_o *v132; // x25
  const MethodInfo *v133; // x2
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  __int64 v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  __int64 v139; // x8
  CGThumbnailListItem_o *p__2__current; // x27
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v142; // x22
  Il2CppObject *v143; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  Il2CppObject *v147; // x22
  struct QuestTree___c__DisplayClass44_0_o **p__8__1; // x21
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int64_t v151; // x22
  MapControl_WarInfo_o *v152; // x23
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  MapControl_MapInfo_o *v155; // x22
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  MapControl_SpotInfo_o *v158; // x22
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  WarEntity_o *v161; // x22
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  Il2CppObject *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  bool v167; // zf
  int v168; // w8
  int32_t v169; // w1
  QuestEntity_o *v170; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass44_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v175; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  Il2CppObject *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  int32_t MapID; // w0
  const MethodInfo *v183; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  int32_t v189; // w1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  int v195; // w25
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  struct MapControl_WarInfo_o *warInfo_5__20; // x1
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v199; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  const MethodInfo *v203; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v205; // x4
  int v206; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v209; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v211; // x9
  struct MapControl_MapInfo_o *v212; // x9
  bool v213; // w8
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  Il2CppObject *v216; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v217; // x21
  int v218; // w19
  int v219; // w22
  __int64 v220; // x8
  __int64 v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  __int64 v224; // x8
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v228; // x22
  Il2CppObject *v229; // x23
  struct QuestTree___c_StaticFields *v230; // x0
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  CGThumbnailListItem_o *v247; // x27
  int v248; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v249; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v250; // [xsp+10h] [xbp-B0h]
  unsigned int v251; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v252; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v254; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v258; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4C347C9 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C32C20(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C32C20(&MapControl_MapInfo_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&MapControl_SpotInfo_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__);
    sub_1C32C20(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1C32C20(&QuestTree___c__DisplayClass44_0_TypeInfo);
    sub_1C32C20(&QuestTree___c_TypeInfo);
    sub_1C32C20(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C32C20(&MapControl_WarInfo_TypeInfo);
    byte_4C347C9 = 1;
  }
  v258 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v254 = 0;
  mapGimmickInfo = 0;
  value = 0;
  _4__this = v2->fields.__4__this;
  v252 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, method);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v5, v6);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._mapMaster_5__3, (int32_t)MasterData_object, v8, v9);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v10 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v10;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v10, v11, v12);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v13 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v13;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v13, v14, v15);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v16;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._questMaster_5__6, (int32_t)v16, v17, v18);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v19 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v19, v20, v21);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v22 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v22;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v22, v23, v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v25;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v25, v26, v27);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v28;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v28, v29, v30);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v31;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMaster_5__11, (int32_t)v31, v32, v33);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v34;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v34, v35, v36);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v37;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v37, v38, v39);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v40 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v40;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v40, v41, v42);
      v43 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v43,
        (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v43;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_3395ABC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._warList_5__16, (int32_t)Entitys, v47, v48);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)NetworkManager__getTime(0);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_299;
      max_length = warList_5__16->max_length;
      v51 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_129;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_269;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_299;
      ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
        endCallback->fields.method_code,
        endCallback->fields.method);
      goto LABEL_282;
    default:
      return 0;
  }
  while ( v51 < max_length )
  {
    v56 = v2->fields._warList_5__16;
    if ( !v56 )
      goto LABEL_299;
    if ( (unsigned int)v51 >= LODWORD(v56->max_length) )
      goto LABEL_150;
    v57 = v56->m_Items[v51];
    if ( !v57 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v57->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v59 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v59, 0);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v59, 1, 0, 0);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v59, 0);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v258,
               (int32_t)this,
               (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v258;
          if ( !v258 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v258, 0x2000000, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v59, 0);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v68 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v59, 0);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v68->fields.statusId,
                                                                           0);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v69 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C32CC8(long___TypeInfo, 3);
        v70 = entity;
        if ( !entity || !this )
          goto LABEL_299;
        _2__current = this->fields.__2__current;
        if ( !(_DWORD)_2__current )
          goto LABEL_150;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( (_DWORD)_2__current == 1 )
          goto LABEL_150;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v70[5].monitor;
        if ( (unsigned int)_2__current <= 2 )
          goto LABEL_150;
        this->fields.endCallback = (struct System_Action_o *)v70[6].monitor;
        if ( (int)_2__current >= 1 )
        {
          v72 = (unsigned int)_2__current;
          p__4__this = &this->fields.__4__this;
          do
          {
            v74 = *p__4__this;
            if ( (__int64)*p__4__this > v69 && _4__this->fields.forceUpdateTime > (__int64)v74 )
              _4__this->fields.forceUpdateTime = (int64_t)v74;
            --v72;
            ++p__4__this;
          }
          while ( v72 );
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_299;
    v75 = *(_QWORD *)&this->fields.__1__state;
    v76 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v75 )
      goto LABEL_299;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v75 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v59,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = v75 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v78 + 32) = v59;
      sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 32), (int32_t)v59, v60, v61);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapMaster__getList((MapMaster_o *)this, id, 0);
    if ( !this )
      goto LABEL_299;
    v81 = this;
    v250 = this->fields.__2__current;
    if ( (int)v250 >= 1 )
    {
      v82 = 0;
      v249 = this;
      while ( 1 )
      {
        v83 = *((_QWORD *)&v81->fields.__4__this + (int)v82);
        v251 = v82;
        if ( !v83 )
          goto LABEL_299;
        v84 = *(_DWORD *)(v83 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__AddChild(v59, v84, 0);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v89 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v91 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v92 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v92[4] = (Il2CppClass *)v91;
          sub_1C32BC4((CGThumbnailListItem_o *)(v92 + 4), (int32_t)v91, v85, v86);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotMaster__getList((SpotMaster_o *)this, v84, 0);
        if ( !this )
          goto LABEL_299;
        v94 = this->fields.__2__current;
        v95 = this;
        v96 = (_DWORD)v94 - 1;
        if ( (int)v94 >= 1 )
          break;
LABEL_93:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v91,
                                                                   v252->fields._blankEarthSpotMaster_5__5,
                                                                   v93);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v252->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v84,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v111 = this->fields.__2__current;
        v112 = this;
        v113 = (_DWORD)v111 - 1;
        if ( (int)v111 >= 1 )
        {
          v114 = 0;
          while ( 1 )
          {
            v115 = &v112->klass + (int)v114;
            v118 = v115[4];
            v117 = (SpotRoadEntity_o **)(v115 + 4);
            v116 = v118;
            if ( !v118 || !v91 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v91,
                                                                       (int32_t)v116->_1.name,
                                                                       0);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v114 >= LODWORD(v112->fields.__2__current) )
              goto LABEL_150;
            v120 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v117, &spotRoadInfo, v119);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            v123 = *(_QWORD *)&this->fields.__1__state;
            v124 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v123 )
              goto LABEL_299;
            v125 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v120,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
            }
            else
            {
              v126 = v123 + 8 * v125;
              LODWORD(this->fields.__2__current) = v125 + 1;
              *(_QWORD *)(v126 + 32) = v120;
              sub_1C32BC4((CGThumbnailListItem_o *)(v126 + 32), (int32_t)v120, v121, v122);
            }
            if ( v113 == v114 )
              break;
            if ( ++v114 >= LODWORD(v112->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v2 = v252;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v252->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v84,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v127 = this->fields.__2__current;
        v128 = this;
        v129 = (_DWORD)v127 - 1;
        if ( (int)v127 >= 1 )
        {
          v130 = 0;
          while ( 1 )
          {
            v131 = *((_QWORD *)&v128->fields.__4__this + v130);
            if ( !v131 )
              goto LABEL_299;
            if ( !v91 )
              goto LABEL_299;
            v132 = MapControl_MapInfo__AddMapGimmick(v91, *(_DWORD *)(v131 + 16), 0);
            mapGimmickInfo = v132;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v133);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            v136 = *(_QWORD *)&this->fields.__1__state;
            v137 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v136 )
              goto LABEL_299;
            v138 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v138 >= *(_DWORD *)(v136 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v132,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
            }
            else
            {
              v139 = v136 + 8 * v138;
              LODWORD(this->fields.__2__current) = v138 + 1;
              *(_QWORD *)(v139 + 32) = v132;
              sub_1C32BC4((CGThumbnailListItem_o *)(v139 + 32), (int32_t)v132, v134, v135);
            }
            if ( v129 == v130 )
              break;
            if ( (unsigned int)++v130 >= LODWORD(v128->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v81 = v249;
        v82 = v251 + 1;
        if ( v251 + 1 == (_DWORD)v250 )
          goto LABEL_126;
        if ( v82 >= LODWORD(v249->fields.__2__current) )
          goto LABEL_150;
      }
      for ( i = 0; i < LODWORD(v95->fields.__2__current); ++i )
      {
        v98 = &v95->klass + (int)i;
        v101 = v98[4];
        v100 = (SpotEntity_o **)(v98 + 4);
        v99 = v101;
        if ( !v101 || !v91 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddChild(
                                                                   v91,
                                                                   (int32_t)v99->_1.name,
                                                                   0);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v95->fields.__2__current) )
          break;
        v103 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v100, &spotInfo, v102);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        v106 = *(_QWORD *)&this->fields.__1__state;
        v107 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v106 )
          goto LABEL_299;
        v108 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v108 >= *(_DWORD *)(v106 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v103,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = v106 + 8 * v108;
          LODWORD(this->fields.__2__current) = v108 + 1;
          *(_QWORD *)(v109 + 32) = v103;
          sub_1C32BC4((CGThumbnailListItem_o *)(v109 + 32), (int32_t)v103, v104, v105);
        }
        if ( v96 == i )
          goto LABEL_93;
      }
LABEL_150:
      sub_1C32E84(this);
    }
LABEL_126:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C32BC4(p__2__current, 0, v79, v80);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_129:
    max_length = v2->fields._warCount_5__19;
    v51 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v51;
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
  v142 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 40LL);
  if ( !v142 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v143 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v142 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v142, v143, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Comparison_MapControl_WarInfo__o *)v142;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)v142, v145, v146);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58303104(
    allWarInfoList,
    v142,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v147 = (Il2CppObject *)sub_1C32E6C(QuestTree___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v147, 0);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v147;
  p__8__1 = &v2->fields.__8__1;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v147, v149, v150);
  v151 = v2->fields._nowTime_5__17;
  v152 = (MapControl_WarInfo_o *)sub_1C32E6C(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v152, v151, 0);
  v2->fields._warInfo_5__20 = v152;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, (int32_t)v152, v153, v154);
  v155 = (MapControl_MapInfo_o *)sub_1C32E6C(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v155, 0);
  v2->fields._mapInfo_5__21 = v155;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v155, v156, v157);
  v158 = (MapControl_SpotInfo_o *)sub_1C32E6C(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v158, 0);
  v2->fields._spotInfo_5__22 = v158;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v158, v159, v160);
  v161 = (WarEntity_o *)sub_1C32E6C(WarEntity_TypeInfo);
  WarEntity___ctor(v161, 0);
  v2->fields._warEnt_5__23 = v161;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, (int32_t)v161, v162, v163);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v164 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v164;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v164, v165, v166);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v167 = !OptionManager__isSavedMemoryMode(0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questMaster_5__6;
  v168 = v167 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v168;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__Count((QuestMaster_o *)this, 0);
  v169 = v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( v169 < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               v169,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v170 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v254 = 0;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
           &v254,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v254;
      if ( !v254 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v254, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__getSpotId_42364636(v170, QuestPhase + 1, 0);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v175 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C32BC4((CGThumbnailListItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v177, v178);
      }
      if ( !v175 )
        goto LABEL_299;
      v179 = System_Collections_Generic_List_object___Find(
               v175,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v252;
      v252->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v179;
      sub_1C32BC4((CGThumbnailListItem_o *)&v252->fields._spotInfo_5__22, (int32_t)v179, v180, v181);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v252->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0);
      if ( v252->fields._mapInfoNow_5__27 != MapID )
      {
        v252->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v183);
        v252->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C32BC4((CGThumbnailListItem_o *)&v252->fields._mapInfo_5__21, (int32_t)MapInfoByMapID, v185, v186);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v252->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v189 = *(&this->fields.__1__state + 1);
        if ( v252->fields._warInfoNow_5__28 != v189 )
        {
          v252->fields._warInfoNow_5__28 = v189;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, v189, 0);
          else
            ChildByWarID = 0;
          v252->fields._warInfo_5__20 = ChildByWarID;
          sub_1C32BC4((CGThumbnailListItem_o *)&v252->fields._warInfo_5__20, (int32_t)ChildByWarID, v187, v188);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v252->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
          v252->fields._warEnt_5__23 = Mine;
          sub_1C32BC4((CGThumbnailListItem_o *)&v252->fields._warEnt_5__23, (int32_t)Mine, v193, v194);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v254 )
      goto LABEL_198;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v254;
    if ( !v254 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v254, 8, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_186;
    if ( !v254 )
      goto LABEL_299;
    if ( v254->fields.challengeNum >= 1 )
    {
LABEL_186:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v254;
    if ( !v254 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v254, 0) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_198:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0);
      v195 = 0;
      goto LABEL_199;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v254 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v254->fields.questId,
                                                               0,
                                                               0);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_299;
    v195 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0);
    if ( !this )
      goto LABEL_299;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0);
    }
LABEL_199:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    warInfo_5__20 = v2->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_299;
    v199 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)warInfo_5__20;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._eventMaster_5__8, (int32_t)warInfo_5__20, v196, v197);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v199->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1C32BC4((CGThumbnailListItem_o *)&v199->fields._questPhaseMaster_5__7, (int32_t)spotInfo_5__22, v201, v202);
    if ( !_4__this )
      goto LABEL_299;
    v199->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v199,
                                                                          v203);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_299;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_213;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_299;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_213:
        v199->fields.__4__this = 0;
LABEL_217:
        v206 = 1;
        goto LABEL_218;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v170, (MapControl_QuestInfo_o *)v199, v2->fields._warInfoNow_5__28, v205) != 1 )
      goto LABEL_217;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    v206 = 0;
LABEL_218:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v199, 0) )
    {
      if ( ((v195 | v206) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v199, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C32CC8(long___TypeInfo, 1);
          if ( !this )
            goto LABEL_299;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_150;
          this->fields.__4__this = (struct QuestTree_o *)_1__state;
          if ( !Master_object )
            goto LABEL_299;
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (System_Int64_array *)this,
                                   (const MethodInfo_3395E14 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v254 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v254, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v199->fields.__1__state, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v199, 0) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v199,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v209 = v2->fields._spotInfo_5__22;
          if ( !v209 )
            goto LABEL_299;
          v209->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v199,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v211 = v2->fields._spotInfo_5__22;
        if ( !v211 )
          goto LABEL_299;
        v211->fields._IsNext_k__BackingField = 1;
        v212 = v2->fields._mapInfo_5__21;
        if ( !v212 )
          goto LABEL_299;
        v212->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v170, 0x8000000000LL, 0) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
      }
    }
    if ( v254 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v254, 8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v254 )
          goto LABEL_299;
        v213 = v254->fields.challengeNum == 0;
      }
      else
      {
        v213 = 0;
      }
    }
    else
    {
      v213 = 1;
    }
    LOBYTE(v199->fields.__8__1) = v213;
    HIDWORD(v199->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v199->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v216 = this->fields.__2__current;
    v217 = this;
    v218 = (_DWORD)v216 - 1;
    if ( (int)v216 >= 1 )
    {
      v219 = 0;
      while ( 1 )
      {
        v220 = *((_QWORD *)&v217->fields.__4__this + v219);
        if ( !v220 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v199,
                                                                   *(_DWORD *)(v220 + 16),
                                                                   *(_DWORD *)(v220 + 20),
                                                                   0);
        if ( v218 == v219 )
          goto LABEL_262;
        if ( (unsigned int)++v219 >= LODWORD(v217->fields.__2__current) )
          goto LABEL_150;
      }
LABEL_299:
      sub_1C32E7C(this);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v221 = *(_QWORD *)&this->fields.__1__state;
    v222 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v221 )
      goto LABEL_299;
    v223 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v223 >= *(_DWORD *)(v221 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v199,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
    }
    else
    {
      v224 = v221 + 8 * v223;
      LODWORD(this->fields.__2__current) = v223 + 1;
      *(_QWORD *)(v224 + 32) = v199;
      sub_1C32BC4((CGThumbnailListItem_o *)(v224 + 32), (int32_t)v199, v214, v215);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0;
      v247 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C32BC4(v247, 0, v225, v226);
      v248 = 2;
      goto LABEL_297;
    }
LABEL_269:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)(unsigned int)v2->fields._questCount_5__26;
    v169 = questIdx_5__25 + 1;
    v2->fields._questIdx_5__25 = questIdx_5__25 + 1;
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
  v228 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 48LL);
  if ( !v228 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v229 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v228 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v228, v229, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__, 0);
    v230 = QuestTree___c_TypeInfo->static_fields;
    v230->__9__44_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v228;
    sub_1C32BC4((CGThumbnailListItem_o *)&v230->__9__44_1, (int32_t)v228, v231, v232);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58303104(
    allQuestInfoList,
    v228,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v233, v234);
  v2->fields._warInfo_5__20 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, 0, v235, v236);
  v2->fields._mapInfo_5__21 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, 0, v237, v238);
  v2->fields._spotInfo_5__22 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, 0, v239, v240);
  v2->fields._warEnt_5__23 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, 0, v241, v242);
  v2->fields._userQuestMaster_5__24 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, 0, v243, v244);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0;
    v247 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1C32BC4(v247, 0, v245, v246);
    v248 = 3;
LABEL_297:
    LODWORD(v247[-1].fields._ThumbnailSpritePath_k__BackingField) = v248;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_299;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0);
  if ( !_4__this )
    goto LABEL_299;
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__44__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v4; // x8
  QuestTree_o *_4__this; // x19
  Il2CppObject *v6; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  struct QuestTree___c__DisplayClass45_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataManager_o *dataManager_5__2; // x0
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v18; // x0
  Il2CppObject *v19; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  DataManager_o *v23; // x0
  Il2CppObject *v24; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  DataManager_o *v28; // x0
  Il2CppObject *v29; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  DataManager_o *v33; // x0
  Il2CppObject *v34; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  DataManager_o *v38; // x0
  Il2CppObject *v39; // x24
  DataManager_o *v40; // x0
  Il2CppObject *v41; // x23
  DataManager_o *v42; // x0
  Il2CppObject *v43; // x22
  DataManager_o *v44; // x0
  DataManager_o *v45; // x0
  Il2CppObject *v46; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  DataManager_o *v50; // x0
  Il2CppObject *v51; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  DataManager_o *v55; // x0
  Il2CppObject *v56; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_Dictionary_int__object__o *v60; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  DataManager_o *v68; // x0
  Il2CppObject *v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v71; // x27
  System_Func_object__bool__o *v72; // x26
  Il2CppObject *v73; // x0
  struct QuestTree___c__DisplayClass45_1_o *_8__1; // x8
  int32_t klass; // w1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v78; // x27
  System_Predicate_object__o *v79; // x26
  __int64 v80; // x0
  __int64 Index; // x0
  int32_t v82; // w1
  System_Collections_Generic_List_object__o *v83; // x0
  struct QuestTree___c__DisplayClass45_1_o *v84; // x9
  MapControl_RootInfo_o *v85; // x0
  struct MapControl_WarInfo_o *v86; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  MapControl_WarInfo_o *warInfo_5__14; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  MapControl_WarInfo_o *v93; // x0
  __int64 EventId; // x0
  _BOOL8 v95; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v96; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v98; // x0
  MapControl_WarInfo_o *v99; // x0
  __int64 v100; // x0
  MapControl_WarInfo_o *v101; // x0
  __int64 v102; // x0
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v104; // x0
  int32_t v105; // w1
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  struct QuestTree___c__DisplayClass45_1_o *v107; // x8
  Il2CppObject *v108; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v110; // x21
  _QWORD *v111; // x0
  Il2CppObject *v112; // x8
  __int64 v113; // x9
  __int64 v114; // x8
  int64_t *v115; // x9
  int64_t v116; // x10
  System_Collections_Generic_List_object__o *v117; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v119; // x1
  _QWORD *v120; // x9
  __int64 size; // x10
  Il2CppClass **v122; // x8
  __int64 v123; // x0
  int32_t v124; // w9
  struct QuestTree___c__DisplayClass45_1_o *v125; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v127; // x0
  SpotRoadEntity_array *v128; // x20
  int v129; // w25
  unsigned int i; // w26
  __int64 v131; // x21
  __int64 v132; // x0
  SpotRoadEntity_o *v133; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v135; // x24
  __int64 v136; // x0
  int32_t v137; // w1
  System_Collections_Generic_List_object__o *v138; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v140; // x21
  const MethodInfo *v141; // x3
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  System_Collections_Generic_List_object__o *v144; // x0
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x8
  struct QuestTree___c__DisplayClass45_1_o *v149; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v151; // x0
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  MapGimmickEntity_array *v154; // x20
  int v155; // w24
  unsigned int j; // w25
  __int64 v157; // x21
  __int64 v158; // x0
  MapGimmickEntity_o *v159; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v161; // x23
  __int64 v162; // x0
  int32_t v163; // w1
  System_Collections_Generic_List_object__o *v164; // x0
  MapControl_MapInfo_o *v165; // x0
  MapControl_MapGimmickInfo_o *v166; // x21
  const MethodInfo *v167; // x2
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  System_Collections_Generic_List_object__o *v170; // x0
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v175; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v176; // x8
  int v177; // w9
  CGThumbnailListItem_o *p_mapInfo_5__16; // x8
  __int64 v179; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v180; // x8
  int32_t max_length; // w10
  int32_t v182; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v184; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v186; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v190; // x10
  MapEntity_o *v191; // x9
  struct QuestTree___c__DisplayClass45_1_o *v192; // x22
  struct MapControl_WarInfo_o *v193; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  int32_t v198; // w1
  struct MapControl_WarInfo_o *v199; // x8
  System_Collections_Generic_List_object__o *v200; // x0
  struct QuestTree___c__DisplayClass45_1_o *v201; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  __int64 v206; // x0
  int32_t v207; // w1
  System_Collections_Generic_List_object__o *v208; // x0
  struct QuestTree___c__DisplayClass45_1_o *v209; // x8
  MapControl_WarInfo_o *v210; // x0
  struct MapControl_MapInfo_o *v211; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v212; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  System_Collections_Generic_List_object__o *v217; // x0
  struct System_Object_array *v218; // x8
  Il2CppObject *v219; // x1
  _QWORD *v220; // x9
  __int64 v221; // x10
  Il2CppClass **v222; // x8
  __int64 v223; // x0
  System_Collections_Generic_List_object__o *v224; // x20
  QuestTree___c_c *v225; // x8
  System_Comparison_T__o *_9__45_2; // x21
  Il2CppObject *v227; // x22
  struct QuestTree___c_StaticFields *v228; // x0
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v231; // x0
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v234; // x0
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v237; // x0
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  Il2CppObject *v240; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v241; // x0
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  int64_t v244; // x21
  MapControl_WarInfo_o *v245; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v246; // x0
  int32_t v247; // w2
  const MethodInfo *v248; // x3
  MapControl_MapInfo_o *v249; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v250; // x0
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  MapControl_SpotInfo_o *v253; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v254; // x0
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  WarEntity_o *v257; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v258; // x0
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  DataManager_o *v261; // x0
  Il2CppObject *v262; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v263; // x0
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  Il2CppObject *Master_object; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v267; // x8
  struct QuestTree___c__DisplayClass45_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  int32_t v270; // w9
  struct QuestTree___c__DisplayClass45_6_o *v271; // x20
  System_Collections_Generic_List_int__o *v272; // x21
  __int64 v273; // x0
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  System_Collections_Generic_List_object__o *v276; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v277; // x9
  __int128 v278; // q0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  const MethodInfo *v282; // x1
  bool v283; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v284; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  int32_t v287; // w2
  const MethodInfo *v288; // x3
  struct QuestTree___c__DisplayClass45_0_o *v289; // x9
  struct QuestTree___c__DisplayClass45_6_o *v290; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  int32_t spotId; // w1
  struct System_Int32_array *v293; // x9
  _QWORD *v294; // x10
  __int64 v295; // x11
  unsigned __int64 v296; // t2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v297; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v299; // x20
  Il2CppObject *v300; // x22
  System_Func_object__bool__o *v301; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v302; // x0
  System_Object_array *v303; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v304; // x0
  int32_t v305; // w2
  const MethodInfo *v306; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v307; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass45_1_o *v310; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v312; // x0
  const MethodInfo *v313; // x3
  SpotEntity_array *v314; // x20
  int v315; // w25
  unsigned int k; // w26
  __int64 v317; // x21
  __int64 v318; // x0
  SpotEntity_o *v319; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v321; // x24
  __int64 v322; // x0
  int32_t v323; // w1
  System_Collections_Generic_List_object__o *v324; // x0
  MapControl_MapInfo_o *v325; // x0
  MapControl_SpotInfo_o *v326; // x21
  const MethodInfo *v327; // x3
  int32_t v328; // w2
  const MethodInfo *v329; // x3
  System_Collections_Generic_List_object__o *v330; // x0
  struct System_Object_array *v331; // x8
  _QWORD *v332; // x9
  __int64 v333; // x10
  Il2CppClass **v334; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v335; // x0
  System_Object_array *v336; // x0
  int32_t v337; // w2
  const MethodInfo *v338; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v339; // x20
  __int64 v340; // x21
  QuestTree___c_c *v341; // x8
  System_Func_object__int__o *_9__45_6; // x22
  Il2CppObject *v343; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v345; // w2
  const MethodInfo *v346; // x3
  System_Collections_Generic_IEnumerable_T__o *v347; // x23
  System_Collections_Generic_HashSet_int__o *v348; // x22
  __int64 v349; // x0
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  System_Collections_Generic_List_T__o *v352; // x22
  System_Func_object__bool__o *v353; // x23
  System_Collections_Generic_List_object__o *v354; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v355; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v358; // x20
  struct QuestTree___c__DisplayClass45_6_o *v359; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v361; // x0
  struct QuestTree___c__DisplayClass45_6_o *v362; // x8
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *SpotId_42364636; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v365; // x22
  struct QuestTree___c__DisplayClass45_6_o *v366; // x25
  System_Collections_Generic_List_object__o *v367; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  Il2CppObject *v371; // x0
  int32_t v372; // w2
  const MethodInfo *v373; // x3
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v375; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v377; // x0
  int32_t v378; // w2
  const MethodInfo *v379; // x3
  MapControl_MapInfo_o *v380; // x0
  int32_t v381; // w2
  const MethodInfo *v382; // x3
  MapEntity_o *v383; // x8
  int32_t warId; // w1
  MapControl_WarInfo_o *ChildByWarID; // x1
  MapControl_WarInfo_o *v386; // x0
  struct WarEntity_o *v387; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v388; // x0
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  struct QuestTree___c__DisplayClass45_6_o *v391; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v394; // w2
  const MethodInfo *v395; // x3
  int32_t v396; // w1
  System_Collections_Generic_List_object__o *v397; // x0
  MapControl_WarInfo_o *v398; // x0
  _BOOL8 HasStatus; // x0
  MapControl_WarInfo_o *v400; // x0
  WarEntity_o *v401; // x0
  int v402; // w23
  bool v403; // cc
  struct QuestTree___c__DisplayClass45_6_o *v404; // x9
  MapControl_WarInfo_o *v405; // x0
  struct QuestTree___c__DisplayClass45_6_o *v406; // x8
  MapControl_SpotInfo_o *v407; // x0
  MapControl_QuestInfo_o *v408; // x0
  int32_t v409; // w2
  const MethodInfo *v410; // x3
  struct MapControl_WarInfo_o *v411; // x1
  MapControl_QuestInfo_o *v412; // x22
  int32_t v413; // w8
  struct MapControl_SpotInfo_o *v414; // x1
  int32_t v415; // w2
  const MethodInfo *v416; // x3
  const MethodInfo *v417; // x2
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  struct WarEntity_o *v420; // x8
  struct QuestTree___c__DisplayClass45_6_o *v421; // x9
  struct WarEntity_o *v422; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v423; // x0
  _BOOL8 v424; // x0
  const MethodInfo *v425; // x4
  struct QuestTree___c__DisplayClass45_6_o *v426; // x8
  MapControl_WarInfo_o *v427; // x0
  int v428; // w24
  Il2CppObject *v429; // x23
  __int64 v430; // x0
  struct QuestTree___c__DisplayClass45_6_o *v431; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v433; // x0
  MapControl_SpotInfo_o *v434; // x0
  QuestEntity_o *v435; // x0
  _BOOL8 HasFlag; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v437; // x8
  struct MapControl_SpotInfo_o *v438; // x9
  struct MapControl_MapInfo_o *v439; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v441; // x8
  struct MapControl_SpotInfo_o *v442; // x9
  struct MapControl_MapInfo_o *v443; // x8
  MapControl_SpotInfo_o *v444; // x0
  UserQuestEntity_o *v445; // x0
  bool v446; // w8
  struct QuestTree___c__DisplayClass45_6_o *v447; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  struct QuestTree___c__DisplayClass45_6_o *v450; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v452; // x0
  int32_t v453; // w2
  const MethodInfo *v454; // x3
  _QWORD *v455; // x20
  __int64 v456; // x8
  int v457; // w21
  int v458; // w23
  __int64 v459; // x8
  System_Collections_Generic_List_object__o *v460; // x0
  struct System_Object_array *v461; // x8
  _QWORD *v462; // x9
  __int64 v463; // x10
  Il2CppClass **v464; // x8
  int32_t v465; // w2
  const MethodInfo *v466; // x3
  System_Collections_Generic_List_object__o *v467; // x20
  QuestTree___c_c *v468; // x8
  System_Comparison_T__o *_9__45_11; // x21
  Il2CppObject *v470; // x22
  struct QuestTree___c_StaticFields *v471; // x0
  int32_t v472; // w2
  const MethodInfo *v473; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v474; // x0
  int32_t v475; // w2
  const MethodInfo *v476; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v477; // x0
  int32_t v478; // w2
  const MethodInfo *v479; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v480; // x0
  int32_t v481; // w2
  const MethodInfo *v482; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v483; // x0
  int32_t v484; // w2
  const MethodInfo *v485; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v486; // x0
  int32_t v487; // w2
  const MethodInfo *v488; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v489; // x0
  int32_t v490; // w2
  const MethodInfo *v491; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v492; // x0
  int32_t v493; // w2
  const MethodInfo *v494; // x3
  Il2CppObject *v495; // x0
  int32_t v496; // w2
  const MethodInfo *v497; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v498; // x0
  EventStatusQuestMaster_o *v499; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v500[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v501; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o **v502; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v504; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v508; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v510; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v510 = this;
  if ( (byte_4C347CA & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1C32C20(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C32C20(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C32C20(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1C32C20(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&MapControl_MapInfo_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C32C20(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&MapControl_SpotInfo_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__);
    sub_1C32C20(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__);
    sub_1C32C20(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_0_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_1_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_2_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_3_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_4_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_5_TypeInfo);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1C32C20(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1C32C20(&QuestTree___c__DisplayClass45_6_TypeInfo);
    sub_1C32C20(&QuestTree___c_TypeInfo);
    sub_1C32C20(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)sub_1C32C20(&MapControl_WarInfo_TypeInfo);
    v4 = v510;
    byte_4C347CA = 1;
  }
  v508 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v504 = 0;
  mapGimmickInfo = 0;
  v501 = 0;
  v502 = &v510;
  value = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C32E6C(QuestTree___c__DisplayClass45_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v7 = v510;
      v510->fields.__8__2 = (struct QuestTree___c__DisplayClass45_0_o *)v6;
      sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.__8__2, (int32_t)v6, v8, v9);
      _8__2 = v510->fields.__8__2;
      if ( !_8__2 )
        sub_1C32E7C(v10);
      _8__2->fields.targetWarId = v510->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v13 = v510;
      v510->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields._dataManager_5__2, (int32_t)Instance, v14, v15);
      dataManager_5__2 = v510->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C32E7C(0);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapMaster___);
      v18 = v510->fields._dataManager_5__2;
      if ( !v18 )
        sub_1C32E7C(0);
      v19 = DataManager__GetMasterData_object_(
              v18,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotMaster___);
      v20 = v510;
      v510->fields._spotMaster_5__3 = (struct SpotMaster_o *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields._spotMaster_5__3, (int32_t)v19, v21, v22);
      v23 = v510->fields._dataManager_5__2;
      if ( !v23 )
        sub_1C32E7C(0);
      v24 = DataManager__GetMasterData_object_(
              v23,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v25 = v510;
      v510->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v24;
      sub_1C32BC4((CGThumbnailListItem_o *)&v25->fields._blankEarthSpotMaster_5__4, (int32_t)v24, v26, v27);
      v28 = v510->fields._dataManager_5__2;
      if ( !v28 )
        sub_1C32E7C(0);
      v29 = DataManager__GetMasterData_object_(
              v28,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
      v30 = v510;
      v510->fields._questMaster_5__5 = (struct QuestMaster_o *)v29;
      sub_1C32BC4((CGThumbnailListItem_o *)&v30->fields._questMaster_5__5, (int32_t)v29, v31, v32);
      v33 = v510->fields._dataManager_5__2;
      if ( !v33 )
        sub_1C32E7C(0);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v35 = v510;
      v510->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v34;
      sub_1C32BC4((CGThumbnailListItem_o *)&v35->fields._questPhaseMaster_5__6, (int32_t)v34, v36, v37);
      v38 = v510->fields._dataManager_5__2;
      if ( !v38 )
        sub_1C32E7C(0);
      v39 = DataManager__GetMasterData_object_(
              v38,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      v40 = v510->fields._dataManager_5__2;
      if ( !v40 )
        sub_1C32E7C(0);
      v41 = DataManager__GetMasterData_object_(
              v40,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v42 = v510->fields._dataManager_5__2;
      if ( !v42 )
        sub_1C32E7C(0);
      v43 = DataManager__GetMasterData_object_(
              v42,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v44 = v510->fields._dataManager_5__2;
      if ( !v44 )
        sub_1C32E7C(0);
      v499 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v44,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v45 = v510->fields._dataManager_5__2;
      if ( !v45 )
        sub_1C32E7C(0);
      v46 = DataManager__GetMasterData_object_(
              v45,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v47 = v510;
      v510->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v46;
      sub_1C32BC4((CGThumbnailListItem_o *)&v47->fields._spotRoadMaster_5__7, (int32_t)v46, v48, v49);
      v50 = v510->fields._dataManager_5__2;
      if ( !v50 )
        sub_1C32E7C(0);
      v51 = DataManager__GetMasterData_object_(
              v50,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v52 = v510;
      v510->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v51;
      sub_1C32BC4((CGThumbnailListItem_o *)&v52->fields._mapGimmickMaster_5__8, (int32_t)v51, v53, v54);
      v55 = v510->fields._dataManager_5__2;
      if ( !v55 )
        sub_1C32E7C(0);
      v56 = DataManager__GetMasterData_object_(
              v55,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v57 = v510;
      v510->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v56;
      sub_1C32BC4((CGThumbnailListItem_o *)&v57->fields._questPickupMaster_5__9, (int32_t)v56, v58, v59);
      v60 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v60,
        (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v61 = v510;
      v510->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v60;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&v61->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v60,
        v62,
        v63);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v510->fields._nowTime_5__11 = NetworkManager__getTime(0);
      v64 = (Il2CppObject *)sub_1C32E6C(QuestTree___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor(v64, 0);
      v65 = v510;
      v510->fields.__8__1 = (struct QuestTree___c__DisplayClass45_1_o *)v64;
      sub_1C32BC4((CGThumbnailListItem_o *)&v65->fields.__8__1, (int32_t)v64, v66, v67);
      v68 = v510->fields._dataManager_5__2;
      if ( !v68 )
        sub_1C32E7C(0);
      v69 = DataManager__GetMasterData_object_(
              v68,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v69 )
        sub_1C32E7C(0);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                                                                       (const MethodInfo_3395ABC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v71 = (Il2CppObject *)v510->fields.__8__2;
      v72 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v72,
        v71,
        Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v73 = System_Linq_Enumerable__SingleOrDefault_object__51487704(
              Entitys,
              (System_Func_TSource__bool__o *)v72,
              (const MethodInfo_311A3D8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v73 )
        sub_1C32E7C(0);
      _8__1 = v510->fields.__8__1;
      if ( !_8__1 )
        sub_1C32E7C(v73);
      klass = (int32_t)v73[1].klass;
      _8__1->fields.warId = klass;
      if ( !_4__this )
        sub_1C32E7C(v73);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C32E7C(0);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v78 = (Il2CppObject *)v510->fields.__8__1;
      v79 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v79,
        v78,
        Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_1C32E7C(v80);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v79,
                (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v82 = Index;
      if ( (_DWORD)Index != -1 )
      {
        v83 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v83 )
          sub_1C32E7C(0);
        System_Collections_Generic_List_object___RemoveAt(
          v83,
          v82,
          (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v84 = v510->fields.__8__1;
      if ( !v84 )
        sub_1C32E7C(Index);
      v85 = _4__this->fields.mapControlRootInfo;
      if ( !v85 )
        sub_1C32E7C(0);
      v86 = MapControl_RootInfo__AddChild(v85, v84->fields.warId, v510->fields._nowTime_5__11, 0);
      v87 = v510;
      v510->fields._warInfo_5__14 = v86;
      sub_1C32BC4((CGThumbnailListItem_o *)&v87->fields._warInfo_5__14, (int32_t)v86, v88, v89);
      warInfo_5__14 = v510->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C32E7C(0);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v93 = v510->fields._warInfo_5__14;
        if ( !v93 )
          sub_1C32E7C(0);
        EventId = MapControl_WarInfo__GetEventId(v93, 0);
        if ( !v39 )
          sub_1C32E7C(EventId);
        v95 = DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v39,
                &entity,
                EventId,
                (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v95 )
        {
          if ( !entity )
            sub_1C32E7C(v95);
          v96 = v510;
          nowTime_5__11 = v510->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v98 = v510->fields._warInfo_5__14;
            if ( !v98 )
              sub_1C32E7C(0);
            MapControl_WarInfo__SetStatusCheckFlag(v98, 1, 0, 0);
            v96 = v510;
          }
          v99 = v96->fields._warInfo_5__14;
          if ( !v99 )
            sub_1C32E7C(0);
          v100 = MapControl_WarInfo__GetEventId(v99, 0);
          if ( !v41 )
            sub_1C32E7C(v100);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                 &v508,
                 v100,
                 (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v508 )
              sub_1C32E7C(0);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v508, 0x2000000, 0) )
            {
              if ( !entity )
                sub_1C32E7C(0);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v510->fields._nowTime_5__11, 0) )
              {
                v101 = v510->fields._warInfo_5__14;
                if ( !v101 )
                  sub_1C32E7C(0);
                v102 = MapControl_WarInfo__GetEventId(v101, 0);
                if ( !v43 )
                  sub_1C32E7C(v102);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v43, v102, 0);
                if ( NowEntity )
                {
                  v104 = v510->fields._warInfo_5__14;
                  if ( !v104 )
                    sub_1C32E7C(0);
                  v105 = MapControl_WarInfo__GetEventId(v104, 0);
                  if ( !v499 )
                    sub_1C32E7C(0);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v499,
                                        v105,
                                        NowEntity->fields.statusId,
                                        0);
                  v107 = v510->fields.__8__1;
                  if ( !v107 )
                    sub_1C32E7C(MismatchQuestList);
                  v108 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v510->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C32E7C(0);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v107->fields.warId,
                    v108,
                    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v110 = v510->fields._nowTime_5__11;
          v111 = (_QWORD *)sub_1C32CC8(long___TypeInfo, 3);
          v112 = entity;
          if ( !entity )
            sub_1C32E7C(v111);
          if ( !v111 )
            sub_1C32E7C(0);
          v113 = v111[3];
          if ( !(_DWORD)v113 )
            sub_1C32E84(v111);
          v111[4] = entity[5].klass;
          if ( (_DWORD)v113 == 1 )
            sub_1C32E84(v111);
          v111[5] = v112[5].monitor;
          if ( (unsigned int)v113 <= 2 )
            sub_1C32E84(v111);
          v111[6] = v112[6].monitor;
          if ( (int)v113 >= 1 )
          {
            v114 = (unsigned int)v113;
            v115 = v111 + 4;
            do
            {
              v116 = *v115;
              if ( *v115 > v110 && _4__this->fields.forceUpdateTime > v116 )
                _4__this->fields.forceUpdateTime = v116;
              --v114;
              ++v115;
            }
            while ( v114 );
          }
        }
      }
      v117 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v117 )
        sub_1C32E7C(0);
      items = v117->fields._items;
      v119 = (Il2CppObject *)v510->fields._warInfo_5__14;
      v120 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v117->fields._version;
      if ( !items )
        sub_1C32E7C(v117);
      size = v117->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v117,
          v119,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = &items->obj.klass + size;
        v117->fields._size = size + 1;
        v122[4] = (Il2CppClass *)v119;
        sub_1C32BC4((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v119, v91, v92);
      }
      v184 = v510->fields._warInfo_5__14;
      if ( !v184 )
        sub_1C32E7C(v123);
      if ( !MasterData_object )
        sub_1C32E7C(v123);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v184->fields.warId, 0);
      v186 = v510;
      v510->fields._mapList_5__15 = List;
      sub_1C32BC4((CGThumbnailListItem_o *)&v186->fields._mapList_5__15, (int32_t)List, v187, v188);
      v180 = v510;
      mapList_5__15 = v510->fields._mapList_5__15;
      v510->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C32E7C(v179);
      max_length = mapList_5__15->max_length;
      v182 = 0;
      v180->fields._mapCount_5__13 = max_length;
      goto LABEL_121;
    case 1:
      v125 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v125 )
        sub_1C32E7C(this);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C32E7C(0);
      v127 = SpotRoadMaster__getList(spotRoadMaster_5__7, v125->fields.mapId, 0);
      v128 = v127;
      if ( !v127 )
        sub_1C32E7C(0);
      v129 = v127->max_length;
      if ( v129 >= 1 )
      {
        for ( i = 0; i != v129; ++i )
        {
          v131 = sub_1C32E6C(QuestTree___c__DisplayClass45_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v131, 0);
          if ( i >= LODWORD(v128->max_length) )
            sub_1C32E84(v132);
          v133 = v128->m_Items[i];
          if ( !v133 )
            sub_1C32E7C(v132);
          if ( !v131 )
            sub_1C32E7C(v132);
          *(_DWORD *)(v131 + 16) = v133->fields.id;
          if ( !_4__this )
            sub_1C32E7C(v132);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v135 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v135,
            (Il2CppObject *)v131,
            Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0);
          if ( !allSpotRoadInfoList )
            sub_1C32E7C(v136);
          v137 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v135,
                   (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          if ( v137 != -1 )
          {
            v138 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v138 )
              sub_1C32E7C(0);
            System_Collections_Generic_List_object___RemoveAt(
              v138,
              v137,
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v510->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C32E7C(0);
          v140 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v131 + 16), 0);
          spotRoadInfo = v140;
          QuestTree__SetupSpotRoadInfo(_4__this, v133, &spotRoadInfo, v141);
          v144 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v144 )
            sub_1C32E7C(0);
          v145 = v144->fields._items;
          v146 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v144->fields._version;
          if ( !v145 )
            sub_1C32E7C(v144);
          v147 = v144->fields._size;
          if ( (unsigned int)v147 >= LODWORD(v145->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v144,
              (Il2CppObject *)v140,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v148 = &v145->obj.klass + v147;
            v144->fields._size = v147 + 1;
            v148[4] = (Il2CppClass *)v140;
            sub_1C32BC4((CGThumbnailListItem_o *)(v148 + 4), (int32_t)v140, v142, v143);
          }
        }
      }
      v149 = v510->fields.__8__1;
      if ( !v149 )
        sub_1C32E7C(v127);
      mapGimmickMaster_5__8 = v510->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C32E7C(0);
      v151 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v149->fields.mapId, 0);
      v154 = v151;
      if ( !v151 )
        sub_1C32E7C(0);
      v155 = v151->max_length;
      if ( v155 >= 1 )
      {
        for ( j = 0; j != v155; ++j )
        {
          v157 = sub_1C32E6C(QuestTree___c__DisplayClass45_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v157, 0);
          if ( j >= LODWORD(v154->max_length) )
            sub_1C32E84(v158);
          v159 = v154->m_Items[j];
          if ( !v159 )
            sub_1C32E7C(v158);
          if ( !v157 )
            sub_1C32E7C(v158);
          *(_DWORD *)(v157 + 16) = v159->fields.id;
          if ( !_4__this )
            sub_1C32E7C(v158);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v161 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v161,
            (Il2CppObject *)v157,
            Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0);
          if ( !allMapGimmickInfoList )
            sub_1C32E7C(v162);
          v163 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v161,
                   (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          if ( v163 != -1 )
          {
            v164 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v164 )
              sub_1C32E7C(0);
            System_Collections_Generic_List_object___RemoveAt(
              v164,
              v163,
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v165 = v510->fields._mapInfo_5__16;
          if ( !v165 )
            sub_1C32E7C(0);
          v166 = MapControl_MapInfo__AddMapGimmick(v165, *(_DWORD *)(v157 + 16), 0);
          mapGimmickInfo = v166;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v167);
          v170 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v170 )
            sub_1C32E7C(0);
          v171 = v170->fields._items;
          v172 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v170->fields._version;
          if ( !v171 )
            sub_1C32E7C(v170);
          v173 = v170->fields._size;
          if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v170,
              (Il2CppObject *)v166,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
          }
          else
          {
            v174 = &v171->obj.klass + v173;
            v170->fields._size = v173 + 1;
            v174[4] = (Il2CppClass *)v166;
            sub_1C32BC4((CGThumbnailListItem_o *)(v174 + 4), (int32_t)v166, v168, v169);
          }
        }
      }
      v175 = v510;
      v510->fields.__2__current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v175->fields.__2__current, 0, v152, v153);
      v176 = v510;
      v177 = 2;
      goto LABEL_333;
    case 2:
      v4->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = (CGThumbnailListItem_o *)&v4->fields._mapInfo_5__16;
      p_mapInfo_5__16[-2].fields._Id_k__BackingField = -1;
      sub_1C32BC4(p_mapInfo_5__16, 0, v2, v3);
      v180 = v510;
      max_length = v510->fields._mapCount_5__13;
      v182 = v510->fields._mapIdx_5__12 + 1;
      v510->fields._mapIdx_5__12 = v182;
LABEL_121:
      if ( v182 < max_length )
      {
        v190 = v180->fields._mapList_5__15;
        if ( !v190 )
          sub_1C32E7C(v179);
        if ( (unsigned int)v182 >= LODWORD(v190->max_length) )
          sub_1C32E84(v179);
        v191 = v190->m_Items[v182];
        if ( !v191 )
          sub_1C32E7C(v179);
        v192 = v180->fields.__8__1;
        if ( !v192 )
          sub_1C32E7C(v179);
        v192->fields.mapId = v191->fields.id;
        v193 = v180->fields._warInfo_5__14;
        if ( !v193 )
          sub_1C32E7C(v179);
        mapInfoList = (System_Collections_Generic_List_object__o *)v193->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v192->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v192,
              Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0);
            v192->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C32BC4((CGThumbnailListItem_o *)&v192->fields.__9__3, (int32_t)_9__3, v196, v197);
          }
          v179 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v198 = v179;
          if ( (_DWORD)v179 != -1 )
          {
            v199 = v510->fields._warInfo_5__14;
            if ( !v199 )
              sub_1C32E7C(v179);
            v200 = (System_Collections_Generic_List_object__o *)v199->fields.mapInfoList;
            if ( !v200 )
              sub_1C32E7C(0);
            System_Collections_Generic_List_object___RemoveAt(
              v200,
              v198,
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C32E7C(v179);
        v201 = v510->fields.__8__1;
        if ( !v201 )
          sub_1C32E7C(v179);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v201->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v201,
            Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0);
          v201->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C32BC4((CGThumbnailListItem_o *)&v201->fields.__9__4, (int32_t)_9__4, v204, v205);
        }
        if ( !allMapInfoList )
          sub_1C32E7C(v179);
        v206 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v207 = v206;
        if ( (_DWORD)v206 != -1 )
        {
          v208 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v208 )
            sub_1C32E7C(0);
          System_Collections_Generic_List_object___RemoveAt(
            v208,
            v207,
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v209 = v510->fields.__8__1;
        if ( !v209 )
          sub_1C32E7C(v206);
        v210 = v510->fields._warInfo_5__14;
        if ( !v210 )
          sub_1C32E7C(0);
        v211 = MapControl_WarInfo__AddChild(v210, v209->fields.mapId, 0);
        v212 = v510;
        v510->fields._mapInfo_5__16 = v211;
        sub_1C32BC4((CGThumbnailListItem_o *)&v212->fields._mapInfo_5__16, (int32_t)v211, v213, v214);
        v217 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v217 )
          sub_1C32E7C(0);
        v218 = v217->fields._items;
        v219 = (Il2CppObject *)v510->fields._mapInfo_5__16;
        v220 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v217->fields._version;
        if ( !v218 )
          sub_1C32E7C(v217);
        v221 = v217->fields._size;
        if ( (unsigned int)v221 >= LODWORD(v218->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v217,
            v219,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
        }
        else
        {
          v222 = &v218->obj.klass + v221;
          v217->fields._size = v221 + 1;
          v222[4] = (Il2CppClass *)v219;
          sub_1C32BC4((CGThumbnailListItem_o *)(v222 + 4), (int32_t)v219, v215, v216);
        }
        v310 = v510->fields.__8__1;
        if ( !v310 )
          sub_1C32E7C(v223);
        spotMaster_5__3 = v510->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C32E7C(0);
        v312 = SpotMaster__getList(spotMaster_5__3, v310->fields.mapId, 0);
        v314 = v312;
        if ( !v312 )
          sub_1C32E7C(0);
        v315 = v312->max_length;
        if ( v315 >= 1 )
        {
          for ( k = 0; k != v315; ++k )
          {
            v317 = sub_1C32E6C(QuestTree___c__DisplayClass45_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v317, 0);
            if ( k >= LODWORD(v314->max_length) )
              sub_1C32E84(v318);
            v319 = v314->m_Items[k];
            if ( !v319 )
              sub_1C32E7C(v318);
            if ( !v317 )
              sub_1C32E7C(v318);
            *(_DWORD *)(v317 + 16) = v319->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v321 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v321,
              (Il2CppObject *)v317,
              Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_1C32E7C(v322);
            v323 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v321,
                     (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            if ( v323 != -1 )
            {
              v324 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v324 )
                sub_1C32E7C(0);
              System_Collections_Generic_List_object___RemoveAt(
                v324,
                v323,
                (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v325 = v510->fields._mapInfo_5__16;
            if ( !v325 )
              sub_1C32E7C(0);
            v326 = MapControl_MapInfo__AddChild(v325, *(_DWORD *)(v317 + 16), 0);
            spotInfo = v326;
            QuestTree__SetupSpotInfo(_4__this, v319, &spotInfo, v327);
            v330 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v330 )
              sub_1C32E7C(0);
            v331 = v330->fields._items;
            v332 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v330->fields._version;
            if ( !v331 )
              sub_1C32E7C(v330);
            v333 = v330->fields._size;
            if ( (unsigned int)v333 >= LODWORD(v331->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v330,
                (Il2CppObject *)v326,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v332[4] + 192LL) + 112LL));
            }
            else
            {
              v334 = &v331->obj.klass + v333;
              v330->fields._size = v333 + 1;
              v334[4] = (Il2CppClass *)v326;
              sub_1C32BC4((CGThumbnailListItem_o *)(v334 + 4), (int32_t)v326, v328, v329);
            }
          }
        }
        v335 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v510->fields._mapInfo_5__16,
                 v510->fields._blankEarthSpotMaster_5__4,
                 v313);
        v336 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v335,
                 (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v339 = (System_Collections_Generic_IEnumerable_TSource__o *)v336;
        if ( !v336 )
          sub_1C32E7C(0);
        if ( v336->max_length )
        {
          v340 = sub_1C32E6C(QuestTree___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v340, 0);
          v341 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v341 = QuestTree___c_TypeInfo;
          }
          _9__45_6 = (System_Func_object__int__o *)v341->static_fields->__9__45_6;
          if ( !_9__45_6 )
          {
            if ( !v341->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v341);
              v341 = QuestTree___c_TypeInfo;
            }
            v343 = (Il2CppObject *)v341->static_fields->__9;
            _9__45_6 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__45_6,
              v343,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__,
              0);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__45_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__45_6;
            sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__45_6, (int32_t)_9__45_6, v345, v346);
          }
          v347 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v339,
                                                                  (System_Func_TSource__TResult__o *)_9__45_6,
                                                                  (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v348 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_56922896(
            v348,
            v347,
            (const MethodInfo_3649310 *)Method_System_Collections_Generic_HashSet_int___ctor___77989016);
          if ( !v340 )
            sub_1C32E7C(v349);
          *(_QWORD *)(v340 + 16) = v348;
          sub_1C32BC4((CGThumbnailListItem_o *)(v340 + 16), (int32_t)v348, v350, v351);
          v352 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v353 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v353,
            (Il2CppObject *)v340,
            Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v352,
            (System_Func_T__bool__o *)v353,
            (const MethodInfo_30CC474 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v354 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v354 )
            sub_1C32E7C(0);
          System_Collections_Generic_List_object___AddRange(
            v354,
            (System_Collections_Generic_IEnumerable_T__o *)v339,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v355 = v510;
        v510->fields.__2__current = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v355->fields.__2__current, 0, v337, v338);
        result = 1;
        v510->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C32E7C(v179);
      v224 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v225 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v225 = QuestTree___c_TypeInfo;
      }
      _9__45_2 = (System_Comparison_T__o *)v225->static_fields->__9__45_2;
      if ( !_9__45_2 )
      {
        if ( !v225->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v225);
          v225 = QuestTree___c_TypeInfo;
        }
        v227 = (Il2CppObject *)v225->static_fields->__9;
        _9__45_2 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__45_2,
          v227,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__,
          0);
        v228 = QuestTree___c_TypeInfo->static_fields;
        v228->__9__45_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__45_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v228->__9__45_2, (int32_t)_9__45_2, v229, v230);
      }
      if ( !v224 )
        sub_1C32E7C(v179);
      System_Collections_Generic_List_object___Sort_58303104(
        v224,
        _9__45_2,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v231 = v510;
      v510->fields.__8__1 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v231->fields.__8__1, 0, v232, v233);
      v234 = v510;
      v510->fields._warInfo_5__14 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v234->fields._warInfo_5__14, 0, v235, v236);
      v237 = v510;
      v510->fields._mapList_5__15 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v237->fields._mapList_5__15, 0, v238, v239);
      v240 = (Il2CppObject *)sub_1C32E6C(QuestTree___c__DisplayClass45_6_TypeInfo);
      System_Object___ctor(v240, 0);
      v241 = v510;
      v510->fields.__8__3 = (struct QuestTree___c__DisplayClass45_6_o *)v240;
      sub_1C32BC4((CGThumbnailListItem_o *)&v241->fields.__8__3, (int32_t)v240, v242, v243);
      v244 = v510->fields._nowTime_5__11;
      v245 = (MapControl_WarInfo_o *)sub_1C32E6C(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v245, v244, 0);
      v246 = v510;
      v510->fields._warInfo_5__14 = v245;
      sub_1C32BC4((CGThumbnailListItem_o *)&v246->fields._warInfo_5__14, (int32_t)v245, v247, v248);
      v249 = (MapControl_MapInfo_o *)sub_1C32E6C(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v249, 0);
      v250 = v510;
      v510->fields._mapInfo_5__16 = v249;
      sub_1C32BC4((CGThumbnailListItem_o *)&v250->fields._mapInfo_5__16, (int32_t)v249, v251, v252);
      v253 = (MapControl_SpotInfo_o *)sub_1C32E6C(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v253, 0);
      v254 = v510;
      v510->fields._spotInfo_5__17 = v253;
      sub_1C32BC4((CGThumbnailListItem_o *)&v254->fields._spotInfo_5__17, (int32_t)v253, v255, v256);
      v257 = (WarEntity_o *)sub_1C32E6C(WarEntity_TypeInfo);
      WarEntity___ctor(v257, 0);
      v258 = v510;
      v510->fields._warEnt_5__18 = v257;
      sub_1C32BC4((CGThumbnailListItem_o *)&v258->fields._warEnt_5__18, (int32_t)v257, v259, v260);
      v261 = v510->fields._dataManager_5__2;
      if ( !v261 )
        sub_1C32E7C(0);
      v262 = DataManager__GetMasterData_object_(
               v261,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v263 = v510;
      v510->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v262;
      sub_1C32BC4((CGThumbnailListItem_o *)&v263->fields._userQuestMaster_5__19, (int32_t)v262, v264, v265);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v267 = v510;
      _8__3 = v510->fields.__8__3;
      if ( !_8__3 )
        sub_1C32E7C(Master_object);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v267->fields._nowMapId_5__20 = -1;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
      if ( !v510 )
        sub_1C32E7C(isSavedMemoryMode);
      if ( isSavedMemoryMode )
        v270 = 500;
      else
        v270 = 5000;
      v271 = v510->fields.__8__3;
      v510->fields._breakInterval_5__22 = v270;
      v272 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v272,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v271 )
        sub_1C32E7C(v273);
      v271->fields.spotInfoList = v272;
      sub_1C32BC4((CGThumbnailListItem_o *)&v271->fields, (int32_t)v272, v274, v275);
      v510->fields._cnt_5__23 = 0;
      v276 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v276 )
        sub_1C32E7C(0);
      System_Collections_Generic_List_object___GetEnumerator(
        v500,
        v276,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v277 = v510;
      v278 = *(_OWORD *)&v500[0].fields._list;
      p__7__wrap24 = (CGThumbnailListItem_o *)&v510->fields.__7__wrap24;
      v500[1] = v500[0];
      v510->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v500[0].fields._current;
      *(_OWORD *)&v277->fields.__7__wrap24.fields._list = v278;
      sub_1C32BC4(p__7__wrap24, 0, v280, v281);
      v4 = v510;
LABEL_169:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v283 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v284 = v510;
        if ( !v283 )
          break;
        current = v510->fields.__7__wrap24.fields._current;
        ++v510->fields._cnt_5__23;
        if ( !current )
          sub_1C32E7C(v284);
        Mine = MapControl_SpotInfo__GetMine(current, 0);
        if ( !Mine )
          sub_1C32E7C(0);
        v4 = v510;
        v289 = v510->fields.__8__2;
        if ( !v289 )
          sub_1C32E7C(Mine);
        if ( Mine->fields.warId == v289->fields.targetWarId )
        {
          v290 = v510->fields.__8__3;
          if ( !v290 )
            sub_1C32E7C(Mine);
          spotInfoList = v290->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C32E7C(0);
          spotId = current->fields.spotId;
          v293 = spotInfoList->fields._items;
          v294 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v293 )
            sub_1C32E7C(spotInfoList);
          v295 = spotInfoList->fields._size;
          if ( (unsigned int)v295 >= LODWORD(v293->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
            v4 = v510;
          }
          else
          {
            spotInfoList->fields._size = v295 + 1;
            v293->m_Items[v295] = spotId;
          }
        }
        HIDWORD(v296) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v296) = HIDWORD(v296);
        if ( (unsigned int)(v296 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v287, v288);
          v176 = v510;
          v177 = 3;
LABEL_333:
          v176->fields.__1__state = v177;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(v510, v282);
      v297 = v510;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v510->fields._questMaster_5__5;
      v510->fields.__7__wrap24.fields._list = 0;
      *(_QWORD *)&v297->fields.__7__wrap24.fields._index = 0;
      v297->fields.__7__wrap24.fields._current = 0;
      if ( !questMaster_5__5 )
        sub_1C32E7C(0);
      v299 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_3395ABC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v300 = (Il2CppObject *)v510->fields.__8__3;
      v301 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v301,
        v300,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v302 = System_Linq_Enumerable__Where_object_(
               v299,
               (System_Func_TSource__bool__o *)v301,
               (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v303 = System_Linq_Enumerable__ToArray_object_(
               v302,
               (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v304 = v510;
      v510->fields._questList_5__24 = (struct QuestEntity_array *)v303;
      sub_1C32BC4((CGThumbnailListItem_o *)&v304->fields._questList_5__24, (int32_t)v303, v305, v306);
      v307 = v510;
      v510->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v307->fields._questList_5__24,
                       (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v510;
      mapCount_5__13 = v510->fields._mapCount_5__13;
      v510->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_169;
    case 4:
      v124 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_474;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1C32E7C(this);
      ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
        endCallback->fields.method_code,
        endCallback->fields.method);
      return 0;
    default:
      return 0;
  }
  while ( mapCount_5__13 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1C32E7C(mapIdx_5__12);
    if ( (unsigned int)mapCount_5__13 >= LODWORD(questList_5__24->max_length) )
      sub_1C32E84(mapIdx_5__12);
    v358 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v358 )
      sub_1C32E7C(mapIdx_5__12);
    v359 = v4->fields.__8__3;
    if ( !v359 )
      sub_1C32E7C(mapIdx_5__12);
    v359->fields.questId = v358->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    v361 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v361 = NetworkManager_TypeInfo;
    }
    v362 = v510->fields.__8__3;
    if ( !v362 )
      sub_1C32E7C(v361);
    if ( !userQuestMaster_5__19 )
      sub_1C32E7C(v361);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v504,
           v361->static_fields->userIdNumber,
           v362->fields.questId,
           0) )
    {
      if ( !v504 )
        sub_1C32E7C(0);
      QuestPhase = UserQuestEntity__getQuestPhase(v504, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_42364636 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)QuestEntity__getSpotId_42364636(
                                                                            v358,
                                                                            QuestPhase + 1,
                                                                            0);
    v365 = v510;
    v366 = v510->fields.__8__3;
    if ( !v366 )
      sub_1C32E7C(SpotId_42364636);
    if ( v366->fields.nowSpotId == (_DWORD)SpotId_42364636 )
    {
      if ( !_4__this )
        sub_1C32E7C(SpotId_42364636);
    }
    else
    {
      v366->fields.nowSpotId = (int)SpotId_42364636;
      if ( !_4__this )
        sub_1C32E7C(SpotId_42364636);
      v367 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v366->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v366,
          Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0);
        v366->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C32BC4((CGThumbnailListItem_o *)&v366->fields.__9__12, (int32_t)_9__12, v369, v370);
      }
      if ( !v367 )
        sub_1C32E7C(SpotId_42364636);
      v371 = System_Collections_Generic_List_object___Find(
               v367,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v365->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v371;
      sub_1C32BC4((CGThumbnailListItem_o *)&v365->fields._spotInfo_5__17, (int32_t)v371, v372, v373);
      spotInfo_5__17 = v510->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C32E7C(0);
      SpotId_42364636 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0);
      if ( v510->fields._nowMapId_5__20 != (_DWORD)SpotId_42364636 )
      {
        v510->fields._nowMapId_5__20 = (int)SpotId_42364636;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_42364636, v375);
        v377 = v510;
        v510->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C32BC4((CGThumbnailListItem_o *)&v377->fields._mapInfo_5__16, (int32_t)MapInfoByMapID, v378, v379);
        v380 = v510->fields._mapInfo_5__16;
        if ( !v380 )
          sub_1C32E7C(0);
        v383 = MapControl_MapInfo__GetMine(v380, 0);
        if ( !v383 )
          sub_1C32E7C(0);
        SpotId_42364636 = v510;
        warId = v383->fields.warId;
        if ( v510->fields._nowWarId_5__21 != warId )
        {
          v510->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0);
            SpotId_42364636 = v510;
          }
          else
          {
            ChildByWarID = 0;
          }
          SpotId_42364636->fields._warInfo_5__14 = ChildByWarID;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&SpotId_42364636->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v381,
            v382);
          v386 = v510->fields._warInfo_5__14;
          if ( !v386 )
            sub_1C32E7C(0);
          v387 = MapControl_WarInfo__GetMine(v386, 0);
          v388 = v510;
          v510->fields._warEnt_5__18 = v387;
          sub_1C32BC4((CGThumbnailListItem_o *)&v388->fields._warEnt_5__18, (int32_t)v387, v389, v390);
        }
      }
    }
    v391 = v510->fields.__8__3;
    if ( !v391 )
      sub_1C32E7C(SpotId_42364636);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v391->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v391,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0);
      v391->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C32BC4((CGThumbnailListItem_o *)&v391->fields.__9__13, (int32_t)_9__13, v394, v395);
    }
    if ( !allQuestInfoList )
      sub_1C32E7C(SpotId_42364636);
    v396 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    if ( v396 != -1 )
    {
      v397 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v397 )
        sub_1C32E7C(0);
      System_Collections_Generic_List_object___RemoveAt(
        v397,
        v396,
        (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v398 = v510->fields._warInfo_5__14;
    if ( !v504 )
    {
      if ( !v398 )
        sub_1C32E7C(0);
      goto LABEL_385;
    }
    if ( !v398 )
      sub_1C32E7C(0);
    MapControl_WarInfo__SetStatusCheckFlag(v398, 1, 0, 0);
    if ( !v504 )
      sub_1C32E7C(0);
    HasStatus = UserQuestEntity__HasStatus(v504, 8, 0);
    if ( !HasStatus )
    {
      v400 = v510->fields._warInfo_5__14;
      if ( !v400 )
        sub_1C32E7C(0);
      goto LABEL_387;
    }
    if ( !v504 )
      sub_1C32E7C(HasStatus);
    if ( v504->fields.challengeNum >= 1 )
    {
      v400 = v510->fields._warInfo_5__14;
      if ( !v400 )
        sub_1C32E7C(0);
LABEL_387:
      MapControl_WarInfo__SetStatusCheckFlag(v400, 4, 0, 0);
    }
    if ( !v504 )
      sub_1C32E7C(0);
    v403 = UserQuestEntity__getClearNum(v504, 0) < 1;
    v398 = v510->fields._warInfo_5__14;
    if ( v403 )
    {
      if ( !v398 )
        sub_1C32E7C(0);
LABEL_385:
      MapControl_WarInfo__SetStatusCheckFlag(v398, 2, 0, 0);
      v402 = 0;
      goto LABEL_399;
    }
    if ( !v398 )
      sub_1C32E7C(0);
    v401 = MapControl_WarInfo__GetMine(v398, 0);
    if ( !v401 )
      sub_1C32E7C(0);
    v404 = v510->fields.__8__3;
    if ( !v404 )
      sub_1C32E7C(v401);
    if ( v401->fields.lastQuestId == v404->fields.questId )
    {
      v405 = v510->fields._warInfo_5__14;
      if ( !v405 )
        sub_1C32E7C(0);
      v402 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v405, 8, 1, 0);
    }
    else
    {
      v402 = 1;
    }
LABEL_399:
    v406 = v510->fields.__8__3;
    if ( !v406 )
      sub_1C32E7C(v401);
    v407 = v510->fields._spotInfo_5__17;
    if ( !v407 )
      sub_1C32E7C(0);
    v408 = MapControl_SpotInfo__AddChild(v407, v406->fields.questId, 0);
    v411 = v510->fields._warInfo_5__14;
    if ( !v411 )
      sub_1C32E7C(v408);
    v412 = v408;
    if ( !v408 )
      sub_1C32E7C(0);
    v413 = v411->fields.warId;
    v408->fields._WarInfo_k__BackingField = v411;
    v408->fields.warId = v413;
    sub_1C32BC4((CGThumbnailListItem_o *)&v408->fields._WarInfo_k__BackingField, (int32_t)v411, v409, v410);
    v414 = v510->fields._spotInfo_5__17;
    v412->fields._SpotInfo_k__BackingField = v414;
    sub_1C32BC4((CGThumbnailListItem_o *)&v412->fields._SpotInfo_k__BackingField, (int32_t)v414, v415, v416);
    v412->fields.endTime = QuestTree__GetEndTime(_4__this, v412, v417);
    warEnt_5__18 = v510->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C32E7C(0);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
    if ( IsStartTypeQuest )
    {
      v420 = v510->fields._warEnt_5__18;
      if ( !v420 )
        sub_1C32E7C(IsStartTypeQuest);
      v421 = v510->fields.__8__3;
      if ( !v421 )
        sub_1C32E7C(IsStartTypeQuest);
      if ( v420->fields.targetId == v421->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v510->fields._warEnt_5__18, 0x8000, 0);
        if ( !IsStartTypeQuest )
          goto LABEL_415;
      }
    }
    v422 = v510->fields._warEnt_5__18;
    if ( !v422 )
      sub_1C32E7C(IsStartTypeQuest);
    v423 = v510->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v423 )
      sub_1C32E7C(0);
    v424 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v423,
             v422->fields.id,
             &value,
             (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v424 )
    {
      v426 = v510->fields.__8__3;
      if ( !v426 )
        sub_1C32E7C(v424);
      if ( !value )
        sub_1C32E7C(0);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v426->fields.questId,
             (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_415:
        *(_QWORD *)&v412->fields.dispType = 0;
LABEL_419:
        v428 = 1;
        goto LABEL_420;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v358, v412, v510->fields._nowWarId_5__21, v425) != 1 )
      goto LABEL_419;
    v427 = v510->fields._warInfo_5__14;
    if ( !v427 )
      sub_1C32E7C(0);
    MapControl_WarInfo__SetStatusCheckFlag(v427, 1, 0, 0);
    v428 = 0;
LABEL_420:
    if ( MapControl_QuestInfo__IsDisaplayable(v412, 0) )
    {
      if ( ((v402 | v428) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v412, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v429 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestResetMaster___);
          v430 = sub_1C32CC8(long___TypeInfo, 1);
          v431 = v510->fields.__8__3;
          if ( !v431 )
            sub_1C32E7C(v430);
          if ( !v430 )
            sub_1C32E7C(0);
          if ( !*(_DWORD *)(v430 + 24) )
            sub_1C32E84(v430);
          *(_QWORD *)(v430 + 32) = v431->fields.questId;
          if ( !v429 )
            sub_1C32E7C(v430);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v429,
                                   (System_Int64_array *)v430,
                                   (const MethodInfo_3395E14 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v504 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v504, 0) )
          {
            v433 = v510->fields._spotInfo_5__17;
            if ( !v433 )
              sub_1C32E7C(0);
            MapControl_SpotInfo__AddQuestCount(v433, 1, 0);
          }
        }
        v434 = v510->fields._spotInfo_5__17;
        if ( !v434 )
          sub_1C32E7C(0);
        MapControl_SpotInfo__AddAvailableQuestId(v434, v412->fields.questId, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType(v412, 0) == 1 )
      {
        v435 = MapControl_QuestInfo__GetMine(v412, 0);
        if ( !v435 )
          sub_1C32E7C(0);
        HasFlag = QuestEntity__HasFlag(v435, 0x400000000000LL, 0);
        v437 = v510;
        if ( !HasFlag )
        {
          v438 = v510->fields._spotInfo_5__17;
          if ( !v438 )
            sub_1C32E7C(HasFlag);
          v438->fields._IsNext_k__BackingField = 1;
        }
        v439 = v437->fields._mapInfo_5__16;
        if ( !v439 )
          sub_1C32E7C(HasFlag);
        v439->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v412, 0);
      if ( IsDisplayQuestNextIcon )
      {
        v441 = v510;
        v442 = v510->fields._spotInfo_5__17;
        if ( !v442 )
          sub_1C32E7C(IsDisplayQuestNextIcon);
        v442->fields._IsNext_k__BackingField = 1;
        v443 = v441->fields._mapInfo_5__16;
        if ( !v443 )
          sub_1C32E7C(IsDisplayQuestNextIcon);
        v443->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v358, 0x8000000000LL, 0) )
      {
        v444 = v510->fields._spotInfo_5__17;
        if ( !v444 )
          sub_1C32E7C(0);
        MapControl_SpotInfo__AddFreeQuestCount(v444, 1, 0);
      }
    }
    v445 = v504;
    if ( v504 )
    {
      v445 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v504, 8, 0);
      if ( ((unsigned __int8)v445 & 1) != 0 )
      {
        if ( !v504 )
          sub_1C32E7C(v445);
        v446 = v504->fields.challengeNum == 0;
      }
      else
      {
        v446 = 0;
      }
    }
    else
    {
      v446 = 1;
    }
    v412->fields.isNew = v446;
    v412->fields.questPhase = QuestPhase;
    v447 = v510->fields.__8__3;
    if ( !v447 )
      sub_1C32E7C(v445);
    questPickupMaster_5__9 = v510->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C32E7C(0);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v447->fields.questId, 0);
    v412->fields.pickupPriority = Priority;
    v450 = v510->fields.__8__3;
    if ( !v450 )
      sub_1C32E7C(Priority);
    questPhaseMaster_5__6 = v510->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C32E7C(0);
    v452 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v450->fields.questId, 0);
    v455 = v452;
    if ( !v452 )
      sub_1C32E7C(0);
    v456 = v452[3];
    v457 = v456 - 1;
    if ( (int)v456 >= 1 )
    {
      v458 = 0;
      while ( 1 )
      {
        v459 = v455[v458 + 4];
        if ( !v459 )
          sub_1C32E7C(v452);
        v452 = MapControl_QuestInfo__AddChild(v412, *(_DWORD *)(v459 + 16), *(_DWORD *)(v459 + 20), 0);
        if ( v457 == v458 )
          break;
        if ( (unsigned int)++v458 >= *((_DWORD *)v455 + 6) )
          sub_1C32E84(v452);
      }
    }
    v460 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v460 )
      sub_1C32E7C(0);
    v461 = v460->fields._items;
    v462 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v460->fields._version;
    if ( !v461 )
      sub_1C32E7C(v460);
    v463 = v460->fields._size;
    if ( (unsigned int)v463 >= LODWORD(v461->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v460,
        (Il2CppObject *)v412,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v462[4] + 192LL) + 112LL));
    }
    else
    {
      v464 = &v461->obj.klass + v463;
      v460->fields._size = v463 + 1;
      v464[4] = (Il2CppClass *)v412;
      sub_1C32BC4((CGThumbnailListItem_o *)(v464 + 4), (int32_t)v412, v453, v454);
    }
    v4 = v510;
    v124 = v510->fields._mapCount_5__13;
    if ( v124 && !(v124 % v510->fields._breakInterval_5__22) )
    {
      v510->fields.__2__current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v465, v466);
      v176 = v510;
      v177 = 4;
      goto LABEL_333;
    }
LABEL_474:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    mapCount_5__13 = v124 + 1;
    v4->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1C32E7C(mapIdx_5__12);
  v467 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v468 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v468 = QuestTree___c_TypeInfo;
  }
  _9__45_11 = (System_Comparison_T__o *)v468->static_fields->__9__45_11;
  if ( !_9__45_11 )
  {
    if ( !v468->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v468);
      v468 = QuestTree___c_TypeInfo;
    }
    v470 = (Il2CppObject *)v468->static_fields->__9;
    _9__45_11 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(_9__45_11, v470, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__, 0);
    v471 = QuestTree___c_TypeInfo->static_fields;
    v471->__9__45_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__45_11;
    sub_1C32BC4((CGThumbnailListItem_o *)&v471->__9__45_11, (int32_t)_9__45_11, v472, v473);
  }
  if ( !v467 )
    sub_1C32E7C(mapIdx_5__12);
  System_Collections_Generic_List_object___Sort_58303104(
    v467,
    _9__45_11,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v474 = v510;
  v510->fields.__8__3 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v474->fields.__8__3, 0, v475, v476);
  v477 = v510;
  v510->fields._warInfo_5__14 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v477->fields._warInfo_5__14, 0, v478, v479);
  v480 = v510;
  v510->fields._mapInfo_5__16 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v480->fields._mapInfo_5__16, 0, v481, v482);
  v483 = v510;
  v510->fields._spotInfo_5__17 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v483->fields._spotInfo_5__17, 0, v484, v485);
  v486 = v510;
  v510->fields._warEnt_5__18 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v486->fields._warEnt_5__18, 0, v487, v488);
  v489 = v510;
  v510->fields._userQuestMaster_5__19 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v489->fields._userQuestMaster_5__19, 0, v490, v491);
  v492 = v510;
  v510->fields._questList_5__24 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v492->fields._questList_5__24, 0, v493, v494);
  v495 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v495 )
    sub_1C32E7C(0);
  CommonUI__SetLoadMode((CommonUI_o *)v495, 0, 0);
  _4__this->fields.isInit = 1;
  v498 = v510;
  if ( v510->fields.endCallback )
  {
    v510->fields.__2__current = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v498->fields.__2__current, 0, v496, v497);
    v176 = v510;
    v177 = 5;
    goto LABEL_333;
  }
  return 0;
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(this, method);
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C347CB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4C347CB = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}