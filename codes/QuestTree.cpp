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

  if ( (byte_4C240EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C2D490(&MapControl_RootInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4C240EC = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1C2D6DC(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allQuestInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allSpotInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allMapInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v21;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.allWarInfoList, (int32_t)v21, v22, v23);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questReleaseEntList, (int32_t)v24, v25, v26);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39D41E4 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_36419916(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_36417004(
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
  __int64 v11; // x2
  __int64 v12; // x8
  int64_t *v13; // x9
  int64_t v14; // x10

  if ( (byte_4C240E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C240E9 = 1;
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
    v8 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
    if ( !Mine )
      return (char)Mine;
    v9 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C2D538(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v12 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v12 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v12 == 1) )
      sub_1C2D6F4(Time, v7, v11);
    *(_QWORD *)(Time + 40) = v9->fields.endedAt;
    if ( (int)v12 >= 1 )
    {
      v12 = (unsigned int)v12;
      v13 = (int64_t *)(Time + 32);
      do
      {
        v14 = *v13;
        if ( *v13 > v8 && this->fields.forceUpdateTime > v14 )
          this->fields.forceUpdateTime = v14;
        --v12;
        ++v13;
      }
      while ( v12 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1C2D6EC(Time, v7);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v9, 0)
                && MapGimmickEntity__IsEnableTime(v9, v8, 0);
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
  __int64 v10; // x1
  bool v11; // w24
  int64_t Time; // x23
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  __int64 v16; // x29
  __int64 v17; // x28
  _QWORD *v18; // x25
  __int64 v19; // x2
  __int64 v20; // x8
  int64_t *v21; // x9
  int64_t v22; // x10
  int v23; // w22
  _BOOL4 v24; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v30; // w23
  int32_t v31; // w20
  int32_t v32; // w8
  UserQuestEntity_o *v34; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4C240E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C240E5 = 1;
  }
  entity = 0;
  questReleaseNG = 0;
  v34 = 0;
  Instance = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !Instance )
    goto LABEL_73;
  v11 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)Instance,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v16 = *p_openedAt;
  v17 = *p_closedAt;
  v18 = (_QWORD *)sub_1C2D538(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v18 )
    goto LABEL_73;
  v20 = v18[3];
  if ( !(_DWORD)v20 || (v18[4] = Instance, (_DWORD)v20 == 1) || (v18[5] = v16, (unsigned int)v20 <= 2) )
    sub_1C2D6F4(Instance, v10, v19);
  v18[6] = v17;
  if ( (int)v20 >= 1 )
  {
    v20 = (unsigned int)v20;
    v21 = v18 + 4;
    do
    {
      v22 = *v21;
      if ( *v21 > Time && v8->fields.forceUpdateTime > v22 )
        v8->fields.forceUpdateTime = v22;
      --v20;
      ++v21;
    }
    while ( v20 );
  }
  v23 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000, 0) )
  {
    v24 = 0;
    goto LABEL_55;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0);
  if ( HasFlag )
    v23 = 3;
  else
    v23 = 1;
  if ( v11 || HasFlag )
  {
    v24 = !HasFlag;
    goto LABEL_55;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0) > Time
    && QuestEntity__getNoticeAt(questEnt, 0) <= Time )
  {
    goto LABEL_53;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_73;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_73;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
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
                  &v34,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0) )
            goto LABEL_54;
          Instance = (int64_t)v34;
          if ( !v34 )
            goto LABEL_73;
          if ( !UserQuestEntity__HasStatus(v34, 8, 0) )
            goto LABEL_54;
LABEL_53:
          v24 = 0;
          v23 = 2;
          goto LABEL_55;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v27);
  if ( !Instance )
    goto LABEL_73;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_53;
  }
LABEL_54:
  v24 = 0;
  v23 = 0;
LABEL_55:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( (Instance & 1) != 0 )
    v30 = 1;
  else
    v30 = forceOperation;
  if ( v30 )
    v31 = v30 != 2;
  else
    v31 = v23;
  if ( questReleaseNG && v31 == 2 )
  {
    if ( questInfo )
    {
      MapControl_QuestInfo__SetDispType_35964212(questInfo, 2, questReleaseNG, 0);
      goto LABEL_69;
    }
LABEL_73:
    sub_1C2D6EC(Instance, v10);
  }
  if ( !questInfo )
    goto LABEL_73;
  questInfo->fields.dispType = v31;
LABEL_69:
  if ( v30 )
    v32 = v30 != 2;
  else
    v32 = v24;
  questInfo->fields.touchType = v32;
  return v31;
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

  return QuestTree__CheckSpotCond_36419916(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckSpotCond_36419916(
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
  __int64 v45; // x2
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v61; // x20
  int32_t v62; // w23
  unsigned __int64 v63; // x24
  int32_t v64; // w22
  struct System_Threading_CancellationTokenSource_o *v65; // x8
  QuestAfterAction_o *v66; // x20
  unsigned __int64 v67; // x24
  int32_t v68; // w22
  int32_t v69; // w8
  int32_t v71; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C240E8 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C240E8 = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
      v24 = sub_1C7DBA4(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C7DBA4(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
      v61 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v62 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v71 = 1;
        else
          v71 = targetValue;
        v58 = v62 < v71;
LABEL_206:
        LOBYTE(v13) = v58;
        return (unsigned __int8)v13 & 1;
      }
      v62 = 0;
      v63 = 0;
      while ( v63 < (unsigned int)m_CancellationTokenSource )
      {
        v64 = *((_DWORD *)&v61->fields.invalidMapGimmickIdList + v63);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v64,
                                           IsExistCommand,
                                           0);
        LODWORD(m_CancellationTokenSource) = v61->fields.m_CancellationTokenSource;
        ++v63;
        v62 += (unsigned __int8)Instance & 1;
        if ( (__int64)v63 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v41[1].klass, IsExistCommand, 0);
              if ( v40 >= v38->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C2D6EC(Instance, v16);
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
        v65 = Instance->fields.m_CancellationTokenSource;
        v66 = Instance;
        if ( (int)v65 >= 1 )
        {
          v48 = 0;
          v67 = 0;
          while ( v67 < (unsigned int)v65 )
          {
            v68 = *((_DWORD *)&v66->fields.invalidMapGimmickIdList + v67);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v68,
                                               IsExistCommand,
                                               0);
            LODWORD(v65) = v66->fields.m_CancellationTokenSource;
            ++v67;
            v48 += (unsigned __int8)Instance & 1;
            if ( (__int64)v67 >= (int)v65 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1C2D6F4(Instance, v16, v45);
        }
LABEL_188:
        v48 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v69 = 1;
        else
          v69 = targetValue;
        v56 = v48 < v69;
      }
LABEL_193:
      LOBYTE(v13) = !v56;
      return (unsigned __int8)v13 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
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

  return QuestTree__CheckSpotCond_36419916(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_4C240E3 & 1) == 0 )
  {
    sub_1C2D490(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C240E3 = 1;
  }
  v7 = sub_1C2D6DC(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
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
  if ( (byte_4C240E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4C240E6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_42296884((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C2D6EC(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C2D6EC(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C2D6EC(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1C2D6EC(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v17 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0) )
            {
              EndTime = EventEntity__GetEndTime(v17, 1, 0);
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
          sub_1C2D6EC(0, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v23 )
          sub_1C2D6EC(0, v24);
        EndTime = QuestEntity__GetEndTime(v23, 1, 0);
        goto LABEL_27;
      case 166:
        v19 = MapControl_QuestInfo__GetMine(questInfo, 0);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v9;
}


int64_t QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int64_t v9; // x21
  System_DateTime_o v10; // x0
  int64_t Time_41144944; // x0
  int64_t value; // x22
  int64_t v13; // x21
  System_DateTime_o v14; // x0
  int64_t NextDayStartTime; // x0
  int64_t v16; // x11
  int64_t v17; // x22
  int64_t v18; // x26
  int v19; // w27
  System_DateTime_o v20; // x0
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C240E7 & 1) == 0 )
  {
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C240E7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !questEnt )
    goto LABEL_29;
  v8 = Time;
  v9 = 0;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0) )
    return v9;
  Time = QuestEntity__getClosedAt(questEnt, 0);
  v9 = 0;
  if ( v8 > Time )
    return v9;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1C2D6EC(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_41144944 = NetworkManager__getTime_41144944(v10, 0);
  value = questReleaseEnt->fields.value;
  v13 = Time_41144944;
  dateData = NetworkManager__getDateTime_41145724(Time_41144944 - 3600 * value, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v14.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v14, 0) + 1)) & 1) == 0 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0);
  v16 = v13 + 86400;
  v9 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v17 = v16 - 3600 * value;
  v18 = v9 + 518400;
  v19 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_41145724(v17, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v20.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v20, 0) + 1)) & 1) == 0 )
      break;
    v9 += 86400LL;
    --v19;
    v17 += 86400LL;
    if ( !v19 )
    {
      v9 = v18;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0) < v9 )
    return QuestEntity__getClosedAt(questEnt, 0);
  return v9;
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  MapControl_WarInfo_o *current; // x21
  BalanceConfig_c *v18; // x0
  int32_t warId; // w22
  QuestTree___c_c *v20; // x8
  System_Func_object__bool__o *_9__39_1; // x21
  Il2CppObject *v22; // x22
  struct QuestTree___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  BalanceConfig_c *v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C240DC & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C2D490(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C2D490(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__);
    sub_1C2D490(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__);
    sub_1C2D490(&QuestTree___c_TypeInfo);
    byte_4C240DC = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
    _9__39_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__39_0, v8, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__39_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__39_0,
                                                               (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_1C2D6EC(mapControlRootInfo, method);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v14 )
      break;
    current = (MapControl_WarInfo_o *)v30.fields._current;
    if ( !v30.fields._current )
      sub_1C2D6EC(v14, v15);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v30.fields._current[1].klass), v16) )
    {
      v18 = BalanceConfig_TypeInfo;
      warId = current->fields.warId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( warId != v18->static_fields->GrandExtra2WarId )
        goto LABEL_30;
      v20 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v20 = QuestTree___c_TypeInfo;
      }
      _9__39_1 = (System_Func_object__bool__o *)v20->static_fields->__9__39_1;
      if ( !_9__39_1 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = QuestTree___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__39_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__39_1, v22, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__, 0);
        v23 = QuestTree___c_TypeInfo->static_fields;
        v23->__9__39_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__39_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v23->__9__39_1, (int32_t)_9__39_1, v24, v25);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                          v13,
                                          (System_Func_TSource__bool__o *)_9__39_1,
                                          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
      if ( current )
      {
        v27 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        if ( QuestTree__IsActiveWar(this, v27->static_fields->GrandExtra1WarId, v26) )
          goto LABEL_30;
      }
    }
  }
  current = 0;
LABEL_30:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C240DB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C2D490(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__);
    sub_1C2D490(&QuestTree___c_TypeInfo);
    byte_4C240DB = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    _9__38_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C2D6EC(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C2D6EC(v13, v14);
    if ( QuestTree__IsActiveWar(
           this,
           *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&dword_14),
           v15) )
    {
      goto LABEL_17;
    }
  }
  current = 0;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C240D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass24_0_TypeInfo);
    byte_4C240D1 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v5; // x1
  int32_t SpotID; // w0
  const MethodInfo *v7; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v7)) == 0) )
  {
    sub_1C2D6EC(QuestInfo, v5);
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

  if ( (byte_4C240D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C240D4 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
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
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C2D6EC(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C2D6EC(0, v12);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v48.fields._current,
                                                              0);
    if ( !SpotList )
      sub_1C2D6EC(0, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      SpotList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1C2D6EC(0, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v47.fields._current,
                                                                              0,
                                                                              0);
      if ( !v9 )
        sub_1C2D6EC(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v18, v9, v19);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C2D6EC(0, v22);
    v23 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v48.fields._current,
                                                         0);
    if ( !v23 )
      sub_1C2D6EC(0, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v23,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (MapControl_SpotInfo_o *)v47.fields._current;
      if ( !v47.fields._current )
        sub_1C2D6EC(v25, v26);
      if ( HIDWORD(v47.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C2D6EC(0, v29);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v30 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v30 )
        sub_1C2D6EC(0, v31);
      v44 = v17;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v30,
        (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = 0;
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v46,
                (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C2D6EC(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v46.fields._current,
                 (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v21 )
            sub_1C2D6EC(Item, v36);
          v38 = System_Collections_Generic_List_int___Contains(
                  v21,
                  Item,
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1C2D6EC(v38, v39);
            size = v21->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v37,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size] = v37;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v46,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v44 - v32 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestTree__GetQuestCountForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
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

  if ( (byte_4C240D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C240D7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C2D6EC(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_1C2D6EC(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C2D6EC(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_1C2D6EC(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C2D6EC(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C2D6EC(0, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0);
          if ( !v25 )
            sub_1C2D6EC(0, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C2D6EC(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1C2D6EC(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1C2D6EC(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size] = v32;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v41,
            (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C2D6EC(v20, v21);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C240D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass25_0_TypeInfo);
    byte_4C240D2 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C240EA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4C240EA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C2D6EC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    allQuestInfoList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C2D6EC(v8, v9);
    if ( LODWORD(v19.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1C2D6EC(v8, v9);
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)current;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)current, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C240D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C240D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0);
}


MapControl_SpotInfo_o *QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C240D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4C240D0 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *QuestTree__GetUserReachableMapList(
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x21
  QuestTree___c_c *v15; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v17; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Predicate_object__o *v25; // x21

  if ( (byte_4C240D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1C2D490(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__);
    sub_1C2D490(&QuestTree___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&QuestTree___c_TypeInfo);
    byte_4C240D5 = 1;
  }
  v4 = sub_1C2D6DC(QuestTree___c__DisplayClass31_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v11, v12, v13);
  if ( !OpenedButtons )
    goto LABEL_28;
  v14 = *(System_Collections_Generic_List_int__o **)(v4 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v15 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v15 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v15->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestTree___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v17, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v19, v20);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v14 )
    {
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C2D6EC(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v14 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v14->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v14,
      mapId,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v14->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v25 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapInfo__TypeInfo);
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
                                                                    (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4C240D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass35_0_TypeInfo);
    byte_4C240D9 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v10 )
    LODWORD(v10) = v10[4].klass;
  return (int)v10;
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
  __int64 v6; // x1

  if ( (byte_4C240CC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77969776);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4C240CC = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v4,
    allWarInfoList,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___77969776);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_378B4B0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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

  if ( (byte_4C240CD & 1) == 0 )
  {
    sub_1C2D490(&QuestTree__Init_d__17_TypeInfo);
    byte_4C240CD = 1;
  }
  v5 = sub_1C2D6DC(QuestTree__Init_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4C240E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4C240E4 = 1;
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
    sub_1C2D6EC(mapControlRootInfo, method);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C240DE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C240DE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_36414452(this, (WarEntity_o *)entity, v7);
}


bool QuestTree__IsActiveEventWar_36414452(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t id; // w20
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v7; // x21
  bool v8; // w20
  int64_t Time; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v13; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v15; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C240DF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&long___TypeInfo);
    this = (QuestTree_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C240DF = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1C2D538(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_1C2D6EC(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C2D6F4(this, warEnt, v11);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v13 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v15 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v15 )
        v4->fields.forceUpdateTime = (int64_t)v15;
      --v13;
      ++p_allSpotInfoList;
    }
    while ( v13 );
  }
  return v8;
}


bool QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *v6; // x20
  WarEntity_o *Mine; // x0
  __int64 v8; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v10; // x21
  WarEntity_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4C240DD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C240DD = 1;
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
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_1C2D6EC(Mine, v8);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, warId, 0);
  if ( OpenEntity )
  {
    v10 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0) || WarReleaseEntity__IsClose(v10, 0) )
      goto LABEL_18;
  }
  if ( MapControl_WarInfo__IsClosedWar(v6, 0) )
    goto LABEL_18;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_WarInfo__GetMine(v6, 0);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v11 = (WarEntity_o *)mapControlRootInfo;
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_36414452(this, v11, v12) )
LABEL_18:
    LOBYTE(mapControlRootInfo) = 0;
  else
    LOBYTE(mapControlRootInfo) = QuestTree__IsWarOpen(this, v11->fields.id, v12);
  return (char)mapControlRootInfo;
}


bool QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4C240CE & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C240CE = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
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

  if ( (byte_4C240D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C240D8 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_1C2D6EC(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1C2D6EC(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1C2D6EC(v10, v11);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v19.fields._current, 0) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v15)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0) )
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v12 && v16 == 6;
  return (char)MapInfoByMapID;
}


bool QuestTree__IsSpotSatisfyingActiveCond(QuestTree_o *this, SpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1C2D6EC(this, 0);
  return QuestTree__CheckSpotCond_36419916(
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
    sub_1C2D6EC(this, 0);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_36419916(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_36419916(
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
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v10; // x0
  __int64 v11; // x1
  int v12; // w20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C240EB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C240EB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C2D6EC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1C2D6EC(v10, v11);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v10, *(_DWORD *)((char *)&word_10 + (_QWORD)current), 0) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
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
  if ( (byte_4C240DA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C240DA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v7 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0);
  if ( v7 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_1C2D6EC(QuestInfoByWarId, v6);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v9);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1C2D6EC(v10, v11);
    if ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&qword_20) == 1 )
    {
      v13 = 6;
      goto LABEL_15;
    }
  }
  v13 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 && v13 == 6;
}


void QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o *name; // x1
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x22
  bool IsExistCommand; // w21
  int32_t v17; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4C240E0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&SpotEntity_TypeInfo);
    byte_4C240E0 = 1;
  }
  v6 = sub_1C2D6DC(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)name, v9, v10);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C7DBA4(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C7DBA4(v12);
  v15 = **(UnityEngine_Object_o ***)(v14 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C2D6EC(Instance, v8);
  v17 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v17, 0, 0);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  v4 = QuestTree__CheckMapGimmickCond_36417004(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C2D6EC(v4, v5);
  (*mapGimmickInfo)->fields.dispType = v4;
}


void QuestTree__SetupSpotInfo(
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
    sub_1C2D6EC(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36419916(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_36419916(
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
    sub_1C2D6EC(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36419916(
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
    sub_1C2D6EC(this, nowTime);
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
  __int64 v4; // x1

  if ( (byte_4C240CF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C240CF = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  if ( (byte_4C240CB & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C240CB = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4C240E1 & 1) == 0 )
  {
    sub_1C2D490(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
    byte_4C240E1 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4C240E2 & 1) == 0 )
  {
    sub_1C2D490(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
    byte_4C240E2 = 1;
  }
  v7 = sub_1C2D6DC(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 72), (int32_t)endCallback, v10, v11);
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C240D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass29_0_TypeInfo);
    byte_4C240D3 = 1;
  }
  v5 = sub_1C2D6DC(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  int32_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x20
  const MethodInfo *v17; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *v18; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_4C240F2 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C2D490(&BlankEarthSpotMaster_TypeInfo);
    byte_4C240F2 = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
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
      sub_1C2D6F4(this, method, v2);
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
          sub_1C2D434(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C2D6EC(this, method);
  }
  this->klass = 0;
  sub_1C2D434((CGThumbnailListItem_o *)this, 0, v2, v3);
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

  if ( (byte_4C240F3 & 1) == 0 )
  {
    sub_1C2D490(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C240F3 = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C2D6DC(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.blankEarthSpotMaster, (int32_t)_3__blankEarthSpotMaster, v12, v13);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C240F4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__17_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C240F4 = 1;
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
        if ( !byte_4C2417B )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C2417B = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1C7DBA4(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1C7DBA4(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v12);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v13);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C2D434(p__2__current, (int32_t)v14, v16, v17);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C2D6EC(this, method);
      }
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C7DBA4(v5);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1C7DBA4(v5);
      v21 = **(UnityEngine_Object_o ***)(v20 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C240ED & 1) == 0 )
  {
    sub_1C2D490(&QuestTree___c_TypeInfo);
    byte_4C240ED = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__39_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4C240EE & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C240EE = 1;
  }
  if ( !info )
    sub_1C2D6EC(this, info);
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
    sub_1C2D6EC(this, 0);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C240EF & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C240EF = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C2D6EC(this, x);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C240F0 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_3_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C240F0 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C240F1 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_6_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C240F1 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_6_o *)v4->fields.spotInfoList) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
  __int64 v2; // x2
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v3; // x27
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_Dictionary_int__object__o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Object_array *Entitys; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v52; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v57; // x9
  WarEntity_o *v58; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v60; // x21
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
  const MethodInfo *v79; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v80; // x22
  unsigned int v81; // w9
  __int64 v82; // x8
  int32_t v83; // w24
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v88; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v90; // x23
  Il2CppClass **v91; // x0
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v94; // x25
  int v95; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v97; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v98; // x8
  SpotEntity_o **v99; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v100; // t1
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x26
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  __int64 v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v110; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v111; // x25
  int v112; // w27
  unsigned int v113; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c **v114; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v115; // x8
  SpotRoadEntity_o **v116; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_c *v117; // t1
  const MethodInfo *v118; // x3
  Il2CppObject *v119; // x26
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  Il2CppObject *v126; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v127; // x24
  int v128; // w26
  int v129; // w22
  __int64 v130; // x8
  MapControl_MapGimmickInfo_o *v131; // x25
  const MethodInfo *v132; // x2
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  CGThumbnailListItem_o *p__2__current; // x27
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v141; // x22
  Il2CppObject *v142; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  Il2CppObject *v146; // x22
  struct QuestTree___c__DisplayClass44_0_o **p__8__1; // x21
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  int64_t v150; // x22
  MapControl_WarInfo_o *v151; // x23
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  MapControl_MapInfo_o *v154; // x22
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  MapControl_SpotInfo_o *v157; // x22
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  WarEntity_o *v160; // x22
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  Il2CppObject *v163; // x0
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  bool v166; // zf
  int v167; // w8
  QuestEntity_o *v168; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass44_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v173; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  Il2CppObject *v177; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  int32_t MapID; // w0
  const MethodInfo *v181; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  int v192; // w25
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v195; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  const MethodInfo *v199; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v201; // x4
  int v202; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v205; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v207; // x9
  struct MapControl_MapInfo_o *v208; // x9
  bool v209; // w8
  const MethodInfo *v210; // x3
  Il2CppObject *v211; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v212; // x21
  int v213; // w19
  int v214; // w22
  __int64 v215; // x8
  __int64 v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  __int64 v219; // x8
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v223; // x22
  Il2CppObject *v224; // x23
  struct QuestTree___c_StaticFields *v225; // x0
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  CGThumbnailListItem_o *v242; // x27
  int v243; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v244; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v245; // [xsp+10h] [xbp-B0h]
  unsigned int v246; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v247; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v249; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v253; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4C240F5 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C2D490(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C2D490(&MapControl_MapInfo_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&MapControl_SpotInfo_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__);
    sub_1C2D490(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1C2D490(&QuestTree___c__DisplayClass44_0_TypeInfo);
    sub_1C2D490(&QuestTree___c_TypeInfo);
    sub_1C2D490(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C2D490(&MapControl_WarInfo_TypeInfo);
    byte_4C240F5 = 1;
  }
  v253 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v249 = 0;
  mapGimmickInfo = 0;
  value = 0;
  _4__this = v3->fields.__4__this;
  v247 = v3;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, method);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v3->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._dataManager_5__2, (int32_t)Instance, v6, v7);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapMaster___);
      v3->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._mapMaster_5__3, (int32_t)MasterData_object, v9, v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___);
      v3->fields._spotMaster_5__4 = (struct SpotMaster_o *)v11;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._spotMaster_5__4, (int32_t)v11, v12, v13);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v14 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v3->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v14;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._blankEarthSpotMaster_5__5, (int32_t)v14, v15, v16);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
      v3->fields._questMaster_5__6 = (struct QuestMaster_o *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._questMaster_5__6, (int32_t)v17, v18, v19);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v20 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v3->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v20;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._questPhaseMaster_5__7, (int32_t)v20, v21, v22);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      v3->fields._eventMaster_5__8 = (struct EventMaster_o *)v23;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._eventMaster_5__8, (int32_t)v23, v24, v25);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v3->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v26;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._eventDetailMaster_5__9, (int32_t)v26, v27, v28);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v29 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v3->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v29;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._eventStatusMaster_5__10, (int32_t)v29, v30, v31);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v32 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v3->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v32;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._eventStatusQuestMaster_5__11, (int32_t)v32, v33, v34);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v35 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v3->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v35;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._spotRoadMaster_5__12, (int32_t)v35, v36, v37);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v38 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v3->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v38;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._mapGimmickMaster_5__13, (int32_t)v38, v39, v40);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v41 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v3->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v41;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._questPickupMaster_5__14, (int32_t)v41, v42, v43);
      v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v44,
        (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v3->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v44;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v3->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v44,
        v45,
        v46);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_338701C *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v3->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._warList_5__16, (int32_t)Entitys, v48, v49);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)NetworkManager__getTime(0);
      warList_5__16 = v3->fields._warList_5__16;
      v3->fields._nowTime_5__17 = (int64_t)this;
      v3->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_299;
      max_length = warList_5__16->max_length;
      v52 = 0;
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
      ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
        endCallback->fields.method_code,
        endCallback->fields.method);
      goto LABEL_282;
    default:
      return 0;
  }
  while ( v52 < max_length )
  {
    v57 = v3->fields._warList_5__16;
    if ( !v57 )
      goto LABEL_299;
    if ( (unsigned int)v52 >= LODWORD(v57->max_length) )
      goto LABEL_150;
    v58 = v57->m_Items[v52];
    if ( !v58 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v58->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v3->fields._nowTime_5__17,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v60 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v60, 0);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v3->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v60, 1, 0, 0);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v60, 0);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v253,
               (int32_t)this,
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v253;
          if ( !v253 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v253, 0x2000000, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v3->fields._nowTime_5__17, 0) )
            {
              eventStatusMaster_5__10 = v3->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v60, 0);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v3->fields._eventStatusQuestMaster_5__11;
                v68 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetEventId(v60, 0);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v68->fields.statusId,
                                                                           0);
                if ( !v3->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v3->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v69 = v3->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C2D538(long___TypeInfo, 3);
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
        (Il2CppObject *)v60,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = v75 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v78 + 32) = v60;
      sub_1C2D434((CGThumbnailListItem_o *)(v78 + 32), (int32_t)v60, v2, v61);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapMaster__getList((MapMaster_o *)this, id, 0);
    if ( !this )
      goto LABEL_299;
    v80 = this;
    v245 = this->fields.__2__current;
    if ( (int)v245 >= 1 )
    {
      v81 = 0;
      v244 = this;
      while ( 1 )
      {
        v82 = *((_QWORD *)&v80->fields.__4__this + (int)v81);
        v246 = v81;
        if ( !v82 )
          goto LABEL_299;
        v83 = *(_DWORD *)(v82 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__AddChild(v60, v83, 0);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v88 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v90 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v91[4] = (Il2CppClass *)v90;
          sub_1C2D434((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v90, v84, v85);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotMaster__getList((SpotMaster_o *)this, v83, 0);
        if ( !this )
          goto LABEL_299;
        v93 = this->fields.__2__current;
        v94 = this;
        v95 = (_DWORD)v93 - 1;
        if ( (int)v93 >= 1 )
          break;
LABEL_93:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v90,
                                                                   v247->fields._blankEarthSpotMaster_5__5,
                                                                   v92);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v247->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v83,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v110 = this->fields.__2__current;
        v111 = this;
        v112 = (_DWORD)v110 - 1;
        if ( (int)v110 >= 1 )
        {
          v113 = 0;
          while ( 1 )
          {
            v114 = &v111->klass + (int)v113;
            v117 = v114[4];
            v116 = (SpotRoadEntity_o **)(v114 + 4);
            v115 = v117;
            if ( !v117 || !v90 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v90,
                                                                       (int32_t)v115->_1.name,
                                                                       0);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v113 >= LODWORD(v111->fields.__2__current) )
              goto LABEL_150;
            v119 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v116, &spotRoadInfo, v118);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            v122 = *(_QWORD *)&this->fields.__1__state;
            v123 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v122 )
              goto LABEL_299;
            v124 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v119,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
            }
            else
            {
              v125 = v122 + 8 * v124;
              LODWORD(this->fields.__2__current) = v124 + 1;
              *(_QWORD *)(v125 + 32) = v119;
              sub_1C2D434((CGThumbnailListItem_o *)(v125 + 32), (int32_t)v119, v120, v121);
            }
            if ( v112 == v113 )
              break;
            if ( ++v113 >= LODWORD(v111->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v3 = v247;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v247->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v83,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v126 = this->fields.__2__current;
        v127 = this;
        v128 = (_DWORD)v126 - 1;
        if ( (int)v126 >= 1 )
        {
          v129 = 0;
          while ( 1 )
          {
            v130 = *((_QWORD *)&v127->fields.__4__this + v129);
            if ( !v130 )
              goto LABEL_299;
            if ( !v90 )
              goto LABEL_299;
            v131 = MapControl_MapInfo__AddMapGimmick(v90, *(_DWORD *)(v130 + 16), 0);
            mapGimmickInfo = v131;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v132);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            v135 = *(_QWORD *)&this->fields.__1__state;
            v136 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v135 )
              goto LABEL_299;
            v137 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v131,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
            }
            else
            {
              v138 = v135 + 8 * v137;
              LODWORD(this->fields.__2__current) = v137 + 1;
              *(_QWORD *)(v138 + 32) = v131;
              sub_1C2D434((CGThumbnailListItem_o *)(v138 + 32), (int32_t)v131, v133, v134);
            }
            if ( v128 == v129 )
              break;
            if ( (unsigned int)++v129 >= LODWORD(v127->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v80 = v244;
        v81 = v246 + 1;
        if ( v246 + 1 == (_DWORD)v245 )
          goto LABEL_126;
        if ( v81 >= LODWORD(v244->fields.__2__current) )
          goto LABEL_150;
      }
      for ( i = 0; i < LODWORD(v94->fields.__2__current); ++i )
      {
        v97 = &v94->klass + (int)i;
        v100 = v97[4];
        v99 = (SpotEntity_o **)(v97 + 4);
        v98 = v100;
        if ( !v100 || !v90 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__AddChild(
                                                                   v90,
                                                                   (int32_t)v98->_1.name,
                                                                   0);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v94->fields.__2__current) )
          break;
        v102 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v99, &spotInfo, v101);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        v105 = *(_QWORD *)&this->fields.__1__state;
        v106 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v105 )
          goto LABEL_299;
        v107 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v107 >= *(_DWORD *)(v105 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v102,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = v105 + 8 * v107;
          LODWORD(this->fields.__2__current) = v107 + 1;
          *(_QWORD *)(v108 + 32) = v102;
          sub_1C2D434((CGThumbnailListItem_o *)(v108 + 32), (int32_t)v102, v103, v104);
        }
        if ( v95 == i )
          goto LABEL_93;
      }
LABEL_150:
      sub_1C2D6F4(this, method, v2);
    }
LABEL_126:
    warIdx_5__18 = v3->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v3->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(p__2__current, 0, v2, v79);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_129:
    max_length = v3->fields._warCount_5__19;
    v52 = warIdx_5__18 + 1;
    v3->fields._warIdx_5__18 = v52;
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
  v141 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 40LL);
  if ( !v141 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v142 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v141 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v141, v142, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Comparison_MapControl_WarInfo__o *)v141;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)v141, v144, v145);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58242632(
    allWarInfoList,
    v141,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v146 = (Il2CppObject *)sub_1C2D6DC(QuestTree___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v146, 0);
  v3->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v146;
  p__8__1 = &v3->fields.__8__1;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__8__1, (int32_t)v146, v148, v149);
  v150 = v3->fields._nowTime_5__17;
  v151 = (MapControl_WarInfo_o *)sub_1C2D6DC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v151, v150, 0);
  v3->fields._warInfo_5__20 = v151;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._warInfo_5__20, (int32_t)v151, v152, v153);
  v154 = (MapControl_MapInfo_o *)sub_1C2D6DC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v154, 0);
  v3->fields._mapInfo_5__21 = v154;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._mapInfo_5__21, (int32_t)v154, v155, v156);
  v157 = (MapControl_SpotInfo_o *)sub_1C2D6DC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v157, 0);
  v3->fields._spotInfo_5__22 = v157;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._spotInfo_5__22, (int32_t)v157, v158, v159);
  v160 = (WarEntity_o *)sub_1C2D6DC(WarEntity_TypeInfo);
  WarEntity___ctor(v160, 0);
  v3->fields._warEnt_5__23 = v160;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._warEnt_5__23, (int32_t)v160, v161, v162);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v163 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v3->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v163;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._userQuestMaster_5__24, (int32_t)v163, v164, v165);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v3->fields._mapInfoNow_5__27 = -1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v166 = !OptionManager__isSavedMemoryMode(0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questMaster_5__6;
  v167 = v166 ? 5000 : 500;
  v3->fields._breakInterval_5__29 = v167;
  v3->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__Count((QuestMaster_o *)this, 0);
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
                                                               0);
    if ( !this )
      goto LABEL_299;
    v168 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v249 = 0;
    userQuestMaster_5__24 = v3->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
           &v249,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249;
      if ( !v249 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v249, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__getSpotId_42231908(v168, QuestPhase + 1, 0);
    _8__1 = v3->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v173 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C2D434((CGThumbnailListItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v175, v176);
      }
      if ( !v173 )
        goto LABEL_299;
      v177 = System_Collections_Generic_List_object___Find(
               v173,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v3 = v247;
      v247->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v177;
      sub_1C2D434((CGThumbnailListItem_o *)&v247->fields._spotInfo_5__22, (int32_t)v177, v178, v179);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v247->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0);
      if ( v247->fields._mapInfoNow_5__27 != MapID )
      {
        v247->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v181);
        v247->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C2D434((CGThumbnailListItem_o *)&v247->fields._mapInfo_5__21, (int32_t)MapInfoByMapID, v183, v184);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v247->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v247->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v247->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0);
          else
            ChildByWarID = 0;
          v247->fields._warInfo_5__20 = ChildByWarID;
          sub_1C2D434((CGThumbnailListItem_o *)&v247->fields._warInfo_5__20, (int32_t)ChildByWarID, v185, v186);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v247->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
          v247->fields._warEnt_5__23 = Mine;
          sub_1C2D434((CGThumbnailListItem_o *)&v247->fields._warEnt_5__23, (int32_t)Mine, v190, v191);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v249 )
      goto LABEL_198;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249;
    if ( !v249 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v249, 8, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_186;
    if ( !v249 )
      goto LABEL_299;
    if ( v249->fields.challengeNum >= 1 )
    {
LABEL_186:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249;
    if ( !v249 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v249, 0) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_198:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0);
      v192 = 0;
      goto LABEL_199;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v249 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v249->fields.questId,
                                                               0,
                                                               0);
    if ( !v3->fields._warInfo_5__20 )
      goto LABEL_299;
    v192 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_WarInfo__GetMine(v3->fields._warInfo_5__20, 0);
    if ( !this )
      goto LABEL_299;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0);
    }
LABEL_199:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    method = (const MethodInfo *)v3->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_299;
    v195 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v193, v194);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v3->fields._spotInfo_5__22;
    v195->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1C2D434((CGThumbnailListItem_o *)&v195->fields._questPhaseMaster_5__7, (int32_t)spotInfo_5__22, v197, v198);
    if ( !_4__this )
      goto LABEL_299;
    v195->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v195,
                                                                          v199);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_299;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0);
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
           (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_213:
        v195->fields.__4__this = 0;
LABEL_217:
        v202 = 1;
        goto LABEL_218;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v168, (MapControl_QuestInfo_o *)v195, v3->fields._warInfoNow_5__28, v201) != 1 )
      goto LABEL_217;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    v202 = 0;
LABEL_218:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v195, 0) )
    {
      if ( ((v192 | v202) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v195, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C2D538(long___TypeInfo, 1);
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
                                   (const MethodInfo_3387374 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v249 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v249, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v195->fields.__1__state, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v195, 0) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v195,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v205 = v3->fields._spotInfo_5__22;
          if ( !v205 )
            goto LABEL_299;
          v205->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v3->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v195,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v207 = v3->fields._spotInfo_5__22;
        if ( !v207 )
          goto LABEL_299;
        v207->fields._IsNext_k__BackingField = 1;
        v208 = v3->fields._mapInfo_5__21;
        if ( !v208 )
          goto LABEL_299;
        v208->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v168, 0x8000000000LL, 0) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
      }
    }
    if ( v249 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v249, 8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v249 )
          goto LABEL_299;
        v209 = v249->fields.challengeNum == 0;
      }
      else
      {
        v209 = 0;
      }
    }
    else
    {
      v209 = 1;
    }
    LOBYTE(v195->fields.__8__1) = v209;
    HIDWORD(v195->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v195->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v211 = this->fields.__2__current;
    v212 = this;
    v213 = (_DWORD)v211 - 1;
    if ( (int)v211 >= 1 )
    {
      v214 = 0;
      while ( 1 )
      {
        v215 = *((_QWORD *)&v212->fields.__4__this + v214);
        if ( !v215 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v195,
                                                                   *(_DWORD *)(v215 + 16),
                                                                   *(_DWORD *)(v215 + 20),
                                                                   0);
        if ( v213 == v214 )
          goto LABEL_262;
        if ( (unsigned int)++v214 >= LODWORD(v212->fields.__2__current) )
          goto LABEL_150;
      }
LABEL_299:
      sub_1C2D6EC(this, method);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v216 = *(_QWORD *)&this->fields.__1__state;
    v217 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v216 )
      goto LABEL_299;
    v218 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v218 >= *(_DWORD *)(v216 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v195,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
    }
    else
    {
      v219 = v216 + 8 * v218;
      LODWORD(this->fields.__2__current) = v218 + 1;
      *(_QWORD *)(v219 + 32) = v195;
      sub_1C2D434((CGThumbnailListItem_o *)(v219 + 32), (int32_t)v195, v2, v210);
    }
    questIdx_5__25 = v3->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v3->fields._breakInterval_5__29) )
    {
      v3->fields.__2__current = 0;
      v242 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(v242, 0, v220, v221);
      v243 = 2;
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
  v223 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 48LL);
  if ( !v223 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v224 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v223 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v223, v224, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__, 0);
    v225 = QuestTree___c_TypeInfo->static_fields;
    v225->__9__44_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v223;
    sub_1C2D434((CGThumbnailListItem_o *)&v225->__9__44_1, (int32_t)v223, v226, v227);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58242632(
    allQuestInfoList,
    v223,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v3->fields.__8__1 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__8__1, 0, v228, v229);
  v3->fields._warInfo_5__20 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._warInfo_5__20, 0, v230, v231);
  v3->fields._mapInfo_5__21 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._mapInfo_5__21, 0, v232, v233);
  v3->fields._spotInfo_5__22 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._spotInfo_5__22, 0, v234, v235);
  v3->fields._warEnt_5__23 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._warEnt_5__23, 0, v236, v237);
  v3->fields._userQuestMaster_5__24 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._userQuestMaster_5__24, 0, v238, v239);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  _4__this->fields.isInit = 1;
  if ( v3->fields.endCallback )
  {
    v3->fields.__2__current = 0;
    v242 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1C2D434(v242, 0, v240, v241);
    v243 = 3;
LABEL_297:
    LODWORD(v242[-1].fields._ThumbnailSpritePath_k__BackingField) = v243;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarAddMaster___);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v4; // x8
  QuestTree_o *_4__this; // x19
  Il2CppObject *v6; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  struct QuestTree___c__DisplayClass45_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v21; // x0
  Il2CppObject *v22; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  DataManager_o *v27; // x0
  Il2CppObject *v28; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  DataManager_o *v33; // x0
  Il2CppObject *v34; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  DataManager_o *v39; // x0
  Il2CppObject *v40; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  DataManager_o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x24
  DataManager_o *v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x23
  DataManager_o *v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x22
  DataManager_o *v54; // x0
  __int64 v55; // x1
  DataManager_o *v56; // x0
  Il2CppObject *v57; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  DataManager_o *v62; // x0
  Il2CppObject *v63; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  DataManager_o *v68; // x0
  Il2CppObject *v69; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_Dictionary_int__object__o *v73; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x1
  DataManager_o *v82; // x0
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v86; // x27
  System_Func_object__bool__o *v87; // x26
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  struct QuestTree___c__DisplayClass45_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v94; // x27
  System_Predicate_object__o *v95; // x26
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 Index; // x0
  __int64 v99; // x1
  System_Collections_Generic_List_object__o *v100; // x0
  struct QuestTree___c__DisplayClass45_1_o *v101; // x9
  MapControl_RootInfo_o *v102; // x0
  struct MapControl_WarInfo_o *v103; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  const MethodInfo *v111; // x3
  MapControl_WarInfo_o *v112; // x0
  __int64 EventId; // x0
  __int64 v114; // x1
  _BOOL8 v115; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v116; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v118; // x0
  MapControl_WarInfo_o *v119; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  MapControl_WarInfo_o *v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v129; // x0
  __int64 v130; // x1
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v132; // x1
  struct QuestTree___c__DisplayClass45_1_o *v133; // x8
  Il2CppObject *v134; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v136; // x21
  _QWORD *v137; // x0
  Il2CppObject *v138; // x8
  __int64 v139; // x9
  __int64 v140; // x8
  int64_t *v141; // x9
  int64_t v142; // x10
  System_Collections_Generic_List_object__o *v143; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v145; // x1
  _QWORD *v146; // x9
  __int64 size; // x10
  Il2CppClass **v148; // x8
  __int64 v149; // x0
  __int64 v150; // x1
  int32_t v151; // w9
  struct QuestTree___c__DisplayClass45_1_o *v152; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v154; // x0
  __int64 v155; // x1
  SpotRoadEntity_array *v156; // x20
  int v157; // w25
  unsigned int i; // w26
  __int64 v159; // x21
  __int64 v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  SpotRoadEntity_o *v163; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v165; // x24
  __int64 v166; // x0
  __int64 v167; // x1
  unsigned int v168; // w0
  __int64 v169; // x1
  System_Collections_Generic_List_object__o *v170; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v172; // x21
  const MethodInfo *v173; // x3
  __int64 v174; // x1
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  System_Collections_Generic_List_object__o *v177; // x0
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  Il2CppClass **v181; // x8
  struct QuestTree___c__DisplayClass45_1_o *v182; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v184; // x0
  __int64 v185; // x1
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  MapGimmickEntity_array *v188; // x20
  int v189; // w24
  unsigned int j; // w25
  __int64 v191; // x21
  __int64 v192; // x0
  __int64 v193; // x1
  __int64 v194; // x2
  MapGimmickEntity_o *v195; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v197; // x23
  __int64 v198; // x0
  __int64 v199; // x1
  unsigned int v200; // w0
  __int64 v201; // x1
  System_Collections_Generic_List_object__o *v202; // x0
  MapControl_MapInfo_o *v203; // x0
  MapControl_MapGimmickInfo_o *v204; // x21
  const MethodInfo *v205; // x2
  __int64 v206; // x1
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  System_Collections_Generic_List_object__o *v209; // x0
  struct System_Object_array *v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  Il2CppClass **v213; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v214; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v215; // x8
  int v216; // w9
  CGThumbnailListItem_o *p_mapInfo_5__16; // x8
  __int64 v218; // x0
  __int64 v219; // x1
  __int64 v220; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v221; // x8
  int32_t max_length; // w10
  int32_t v223; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v225; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v227; // x0
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v231; // x10
  MapEntity_o *v232; // x9
  struct QuestTree___c__DisplayClass45_1_o *v233; // x22
  struct MapControl_WarInfo_o *v234; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  struct MapControl_WarInfo_o *v239; // x8
  System_Collections_Generic_List_object__o *v240; // x0
  struct QuestTree___c__DisplayClass45_1_o *v241; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  __int64 v246; // x0
  __int64 v247; // x1
  System_Collections_Generic_List_object__o *v248; // x0
  struct QuestTree___c__DisplayClass45_1_o *v249; // x8
  MapControl_WarInfo_o *v250; // x0
  struct MapControl_MapInfo_o *v251; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v252; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  __int64 v255; // x1
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  System_Collections_Generic_List_object__o *v258; // x0
  struct System_Object_array *v259; // x8
  Il2CppObject *v260; // x1
  _QWORD *v261; // x9
  __int64 v262; // x10
  Il2CppClass **v263; // x8
  __int64 v264; // x0
  __int64 v265; // x1
  System_Collections_Generic_List_object__o *v266; // x20
  QuestTree___c_c *v267; // x8
  System_Comparison_T__o *_9__45_2; // x21
  Il2CppObject *v269; // x22
  struct QuestTree___c_StaticFields *v270; // x0
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v273; // x0
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v276; // x0
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v279; // x0
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  Il2CppObject *v282; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v283; // x0
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  int64_t v286; // x21
  MapControl_WarInfo_o *v287; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v288; // x0
  int32_t v289; // w2
  const MethodInfo *v290; // x3
  MapControl_MapInfo_o *v291; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v292; // x0
  int32_t v293; // w2
  const MethodInfo *v294; // x3
  MapControl_SpotInfo_o *v295; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v296; // x0
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  WarEntity_o *v299; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v300; // x0
  int32_t v301; // w2
  const MethodInfo *v302; // x3
  __int64 v303; // x1
  DataManager_o *v304; // x0
  Il2CppObject *v305; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v306; // x0
  int32_t v307; // w2
  const MethodInfo *v308; // x3
  Il2CppObject *Master_object; // x0
  __int64 v310; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v311; // x8
  struct QuestTree___c__DisplayClass45_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v314; // x1
  int32_t v315; // w9
  struct QuestTree___c__DisplayClass45_6_o *v316; // x20
  System_Collections_Generic_List_int__o *v317; // x21
  __int64 v318; // x0
  __int64 v319; // x1
  int32_t v320; // w2
  const MethodInfo *v321; // x3
  __int64 v322; // x1
  System_Collections_Generic_List_object__o *v323; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v324; // x9
  __int128 v325; // q0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v327; // w2
  const MethodInfo *v328; // x3
  const MethodInfo *v329; // x1
  bool v330; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v331; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v334; // x1
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  struct QuestTree___c__DisplayClass45_0_o *v337; // x9
  struct QuestTree___c__DisplayClass45_6_o *v338; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v341; // x9
  _QWORD *v342; // x10
  __int64 v343; // x11
  unsigned __int64 v344; // t2
  __int64 v345; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v346; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v348; // x20
  Il2CppObject *v349; // x22
  System_Func_object__bool__o *v350; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v351; // x0
  System_Object_array *v352; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v353; // x0
  int32_t v354; // w2
  const MethodInfo *v355; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v356; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass45_1_o *v359; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v361; // x0
  __int64 v362; // x1
  const MethodInfo *v363; // x3
  SpotEntity_array *v364; // x20
  int v365; // w25
  unsigned int k; // w26
  __int64 v367; // x21
  __int64 v368; // x0
  __int64 v369; // x1
  __int64 v370; // x2
  SpotEntity_o *v371; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v373; // x24
  __int64 v374; // x0
  __int64 v375; // x1
  unsigned int v376; // w0
  __int64 v377; // x1
  System_Collections_Generic_List_object__o *v378; // x0
  MapControl_MapInfo_o *v379; // x0
  MapControl_SpotInfo_o *v380; // x21
  const MethodInfo *v381; // x3
  __int64 v382; // x1
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  System_Collections_Generic_List_object__o *v385; // x0
  struct System_Object_array *v386; // x8
  _QWORD *v387; // x9
  __int64 v388; // x10
  Il2CppClass **v389; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v390; // x0
  System_Object_array *v391; // x0
  __int64 v392; // x1
  int32_t v393; // w2
  const MethodInfo *v394; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v395; // x20
  __int64 v396; // x21
  QuestTree___c_c *v397; // x8
  System_Func_object__int__o *_9__45_6; // x22
  Il2CppObject *v399; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v401; // w2
  const MethodInfo *v402; // x3
  System_Collections_Generic_IEnumerable_T__o *v403; // x23
  System_Collections_Generic_HashSet_int__o *v404; // x22
  __int64 v405; // x0
  __int64 v406; // x1
  int32_t v407; // w2
  const MethodInfo *v408; // x3
  System_Collections_Generic_List_T__o *v409; // x22
  System_Func_object__bool__o *v410; // x23
  __int64 v411; // x1
  System_Collections_Generic_List_object__o *v412; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v413; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v416; // x20
  struct QuestTree___c__DisplayClass45_6_o *v417; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v419; // x0
  struct QuestTree___c__DisplayClass45_6_o *v420; // x8
  __int64 v421; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *SpotId_42231908; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v425; // x22
  struct QuestTree___c__DisplayClass45_6_o *v426; // x25
  System_Collections_Generic_List_object__o *v427; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v429; // w2
  const MethodInfo *v430; // x3
  Il2CppObject *v431; // x0
  int32_t v432; // w2
  const MethodInfo *v433; // x3
  __int64 v434; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v436; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v438; // x0
  int32_t v439; // w2
  const MethodInfo *v440; // x3
  __int64 v441; // x1
  MapControl_MapInfo_o *v442; // x0
  __int64 v443; // x1
  int32_t v444; // w2
  const MethodInfo *v445; // x3
  MapEntity_o *v446; // x8
  MapControl_WarInfo_o *ChildByWarID; // x1
  __int64 v448; // x1
  MapControl_WarInfo_o *v449; // x0
  struct WarEntity_o *v450; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v451; // x0
  int32_t v452; // w2
  const MethodInfo *v453; // x3
  struct QuestTree___c__DisplayClass45_6_o *v454; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v457; // w2
  const MethodInfo *v458; // x3
  unsigned int v459; // w0
  __int64 v460; // x1
  System_Collections_Generic_List_object__o *v461; // x0
  MapControl_WarInfo_o *v462; // x0
  __int64 v463; // x1
  _BOOL8 HasStatus; // x0
  __int64 v465; // x1
  MapControl_WarInfo_o *v466; // x0
  WarEntity_o *v467; // x0
  __int64 v468; // x1
  int v469; // w23
  bool v470; // cc
  __int64 v471; // x1
  struct QuestTree___c__DisplayClass45_6_o *v472; // x9
  MapControl_WarInfo_o *v473; // x0
  struct QuestTree___c__DisplayClass45_6_o *v474; // x8
  MapControl_SpotInfo_o *v475; // x0
  MapControl_QuestInfo_o *v476; // x0
  int32_t v477; // w2
  const MethodInfo *v478; // x3
  struct MapControl_WarInfo_o *v479; // x1
  MapControl_QuestInfo_o *v480; // x22
  int32_t v481; // w8
  struct MapControl_SpotInfo_o *v482; // x1
  int32_t v483; // w2
  const MethodInfo *v484; // x3
  const MethodInfo *v485; // x2
  __int64 v486; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v489; // x1
  struct WarEntity_o *v490; // x8
  struct QuestTree___c__DisplayClass45_6_o *v491; // x9
  struct WarEntity_o *v492; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v493; // x0
  _BOOL8 v494; // x0
  __int64 v495; // x1
  const MethodInfo *v496; // x4
  struct QuestTree___c__DisplayClass45_6_o *v497; // x8
  __int64 v498; // x1
  MapControl_WarInfo_o *v499; // x0
  int v500; // w24
  __int64 v501; // x1
  __int64 v502; // x1
  Il2CppObject *v503; // x23
  __int64 v504; // x0
  __int64 v505; // x2
  struct QuestTree___c__DisplayClass45_6_o *v506; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v508; // x0
  MapControl_SpotInfo_o *v509; // x0
  QuestEntity_o *v510; // x0
  __int64 v511; // x1
  _BOOL8 HasFlag; // x0
  __int64 v513; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v514; // x8
  struct MapControl_SpotInfo_o *v515; // x9
  struct MapControl_MapInfo_o *v516; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v518; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v519; // x8
  struct MapControl_SpotInfo_o *v520; // x9
  struct MapControl_MapInfo_o *v521; // x8
  MapControl_SpotInfo_o *v522; // x0
  UserQuestEntity_o *v523; // x0
  bool v524; // w8
  struct QuestTree___c__DisplayClass45_6_o *v525; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v528; // x1
  struct QuestTree___c__DisplayClass45_6_o *v529; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v531; // x0
  __int64 v532; // x1
  __int64 v533; // x2
  const MethodInfo *v534; // x3
  _QWORD *v535; // x20
  __int64 v536; // x8
  int v537; // w21
  int v538; // w23
  __int64 v539; // x8
  System_Collections_Generic_List_object__o *v540; // x0
  struct System_Object_array *v541; // x8
  _QWORD *v542; // x9
  __int64 v543; // x10
  Il2CppClass **v544; // x8
  const MethodInfo *v545; // x3
  System_Collections_Generic_List_object__o *v546; // x20
  QuestTree___c_c *v547; // x8
  System_Comparison_T__o *_9__45_11; // x21
  Il2CppObject *v549; // x22
  struct QuestTree___c_StaticFields *v550; // x0
  int32_t v551; // w2
  const MethodInfo *v552; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v553; // x0
  int32_t v554; // w2
  const MethodInfo *v555; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v556; // x0
  int32_t v557; // w2
  const MethodInfo *v558; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v559; // x0
  int32_t v560; // w2
  const MethodInfo *v561; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v562; // x0
  int32_t v563; // w2
  const MethodInfo *v564; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v565; // x0
  int32_t v566; // w2
  const MethodInfo *v567; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v568; // x0
  int32_t v569; // w2
  const MethodInfo *v570; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v571; // x0
  int32_t v572; // w2
  const MethodInfo *v573; // x3
  Il2CppObject *v574; // x0
  __int64 v575; // x1
  int32_t v576; // w2
  const MethodInfo *v577; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v578; // x0
  EventStatusQuestMaster_o *v579; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v580[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v581; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o **v582; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v584; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v588; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v590; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v590 = this;
  if ( (byte_4C240F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1C2D490(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C2D490(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1C2D490(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&MapControl_MapInfo_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&MapControl_SpotInfo_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__);
    sub_1C2D490(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__);
    sub_1C2D490(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_0_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_1_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_2_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_3_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_4_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_5_TypeInfo);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1C2D490(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1C2D490(&QuestTree___c__DisplayClass45_6_TypeInfo);
    sub_1C2D490(&QuestTree___c_TypeInfo);
    sub_1C2D490(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)sub_1C2D490(&MapControl_WarInfo_TypeInfo);
    v4 = v590;
    byte_4C240F6 = 1;
  }
  v588 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v584 = 0;
  mapGimmickInfo = 0;
  v581 = 0;
  v582 = &v590;
  value = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C2D6DC(QuestTree___c__DisplayClass45_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v7 = v590;
      v590->fields.__8__2 = (struct QuestTree___c__DisplayClass45_0_o *)v6;
      sub_1C2D434((CGThumbnailListItem_o *)&v7->fields.__8__2, (int32_t)v6, v8, v9);
      _8__2 = v590->fields.__8__2;
      if ( !_8__2 )
        sub_1C2D6EC(v10, v11);
      _8__2->fields.targetWarId = v590->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v14 = v590;
      v590->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C2D434((CGThumbnailListItem_o *)&v14->fields._dataManager_5__2, (int32_t)Instance, v15, v16);
      dataManager_5__2 = v590->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C2D6EC(0, v17);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapMaster___);
      v21 = v590->fields._dataManager_5__2;
      if ( !v21 )
        sub_1C2D6EC(0, v19);
      v22 = DataManager__GetMasterData_object_(
              v21,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___);
      v23 = v590;
      v590->fields._spotMaster_5__3 = (struct SpotMaster_o *)v22;
      sub_1C2D434((CGThumbnailListItem_o *)&v23->fields._spotMaster_5__3, (int32_t)v22, v24, v25);
      v27 = v590->fields._dataManager_5__2;
      if ( !v27 )
        sub_1C2D6EC(0, v26);
      v28 = DataManager__GetMasterData_object_(
              v27,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v29 = v590;
      v590->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v28;
      sub_1C2D434((CGThumbnailListItem_o *)&v29->fields._blankEarthSpotMaster_5__4, (int32_t)v28, v30, v31);
      v33 = v590->fields._dataManager_5__2;
      if ( !v33 )
        sub_1C2D6EC(0, v32);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
      v35 = v590;
      v590->fields._questMaster_5__5 = (struct QuestMaster_o *)v34;
      sub_1C2D434((CGThumbnailListItem_o *)&v35->fields._questMaster_5__5, (int32_t)v34, v36, v37);
      v39 = v590->fields._dataManager_5__2;
      if ( !v39 )
        sub_1C2D6EC(0, v38);
      v40 = DataManager__GetMasterData_object_(
              v39,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v41 = v590;
      v590->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v40;
      sub_1C2D434((CGThumbnailListItem_o *)&v41->fields._questPhaseMaster_5__6, (int32_t)v40, v42, v43);
      v45 = v590->fields._dataManager_5__2;
      if ( !v45 )
        sub_1C2D6EC(0, v44);
      v47 = DataManager__GetMasterData_object_(
              v45,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      v48 = v590->fields._dataManager_5__2;
      if ( !v48 )
        sub_1C2D6EC(0, v46);
      v50 = DataManager__GetMasterData_object_(
              v48,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v51 = v590->fields._dataManager_5__2;
      if ( !v51 )
        sub_1C2D6EC(0, v49);
      v53 = DataManager__GetMasterData_object_(
              v51,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v54 = v590->fields._dataManager_5__2;
      if ( !v54 )
        sub_1C2D6EC(0, v52);
      v579 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v54,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v56 = v590->fields._dataManager_5__2;
      if ( !v56 )
        sub_1C2D6EC(0, v55);
      v57 = DataManager__GetMasterData_object_(
              v56,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v58 = v590;
      v590->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v57;
      sub_1C2D434((CGThumbnailListItem_o *)&v58->fields._spotRoadMaster_5__7, (int32_t)v57, v59, v60);
      v62 = v590->fields._dataManager_5__2;
      if ( !v62 )
        sub_1C2D6EC(0, v61);
      v63 = DataManager__GetMasterData_object_(
              v62,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v64 = v590;
      v590->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v63;
      sub_1C2D434((CGThumbnailListItem_o *)&v64->fields._mapGimmickMaster_5__8, (int32_t)v63, v65, v66);
      v68 = v590->fields._dataManager_5__2;
      if ( !v68 )
        sub_1C2D6EC(0, v67);
      v69 = DataManager__GetMasterData_object_(
              v68,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v70 = v590;
      v590->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v69;
      sub_1C2D434((CGThumbnailListItem_o *)&v70->fields._questPickupMaster_5__9, (int32_t)v69, v71, v72);
      v73 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v73,
        (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v74 = v590;
      v590->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v73;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v74->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v73,
        v75,
        v76);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v590->fields._nowTime_5__11 = NetworkManager__getTime(0);
      v77 = (Il2CppObject *)sub_1C2D6DC(QuestTree___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor(v77, 0);
      v78 = v590;
      v590->fields.__8__1 = (struct QuestTree___c__DisplayClass45_1_o *)v77;
      sub_1C2D434((CGThumbnailListItem_o *)&v78->fields.__8__1, (int32_t)v77, v79, v80);
      v82 = v590->fields._dataManager_5__2;
      if ( !v82 )
        sub_1C2D6EC(0, v81);
      v83 = DataManager__GetMasterData_object_(
              v82,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v83 )
        sub_1C2D6EC(0, v84);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v83,
                                                                       (const MethodInfo_338701C *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v86 = (Il2CppObject *)v590->fields.__8__2;
      v87 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v87,
        v86,
        Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v88 = System_Linq_Enumerable__SingleOrDefault_object__51427640(
              Entitys,
              (System_Func_TSource__bool__o *)v87,
              (const MethodInfo_310B938 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v88 )
        sub_1C2D6EC(0, v89);
      _8__1 = v590->fields.__8__1;
      if ( !_8__1 )
        sub_1C2D6EC(v88, v89);
      klass_low = LODWORD(v88[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1C2D6EC(v88, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C2D6EC(0, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v94 = (Il2CppObject *)v590->fields.__8__1;
      v95 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v95,
        v94,
        Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_1C2D6EC(v96, v97);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v95,
                (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v99 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v100 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v100 )
          sub_1C2D6EC(0, v99);
        System_Collections_Generic_List_object___RemoveAt(
          v100,
          v99,
          (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v101 = v590->fields.__8__1;
      if ( !v101 )
        sub_1C2D6EC(Index, v99);
      v102 = _4__this->fields.mapControlRootInfo;
      if ( !v102 )
        sub_1C2D6EC(0, v99);
      v103 = MapControl_RootInfo__AddChild(v102, v101->fields.warId, v590->fields._nowTime_5__11, 0);
      v104 = v590;
      v590->fields._warInfo_5__14 = v103;
      sub_1C2D434((CGThumbnailListItem_o *)&v104->fields._warInfo_5__14, (int32_t)v103, v105, v106);
      warInfo_5__14 = v590->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C2D6EC(0, v107);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v112 = v590->fields._warInfo_5__14;
        if ( !v112 )
          sub_1C2D6EC(0, v109);
        EventId = MapControl_WarInfo__GetEventId(v112, 0);
        if ( !v47 )
          sub_1C2D6EC(EventId, v114);
        v115 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                 &entity,
                 EventId,
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v115 )
        {
          if ( !entity )
            sub_1C2D6EC(v115, v109);
          v116 = v590;
          nowTime_5__11 = v590->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v118 = v590->fields._warInfo_5__14;
            if ( !v118 )
              sub_1C2D6EC(0, v109);
            MapControl_WarInfo__SetStatusCheckFlag(v118, 1, 0, 0);
            v116 = v590;
          }
          v119 = v116->fields._warInfo_5__14;
          if ( !v119 )
            sub_1C2D6EC(0, v109);
          v120 = MapControl_WarInfo__GetEventId(v119, 0);
          if ( !v50 )
            sub_1C2D6EC(v120, v121);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v50,
                 &v588,
                 v120,
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v588 )
              sub_1C2D6EC(0, v122);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v588, 0x2000000, 0) )
            {
              if ( !entity )
                sub_1C2D6EC(0, v123);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v590->fields._nowTime_5__11, 0) )
              {
                v125 = v590->fields._warInfo_5__14;
                if ( !v125 )
                  sub_1C2D6EC(0, v124);
                v126 = MapControl_WarInfo__GetEventId(v125, 0);
                if ( !v53 )
                  sub_1C2D6EC(v126, (unsigned int)v126);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v53, v126, 0);
                if ( NowEntity )
                {
                  v129 = v590->fields._warInfo_5__14;
                  if ( !v129 )
                    sub_1C2D6EC(0, v127);
                  v130 = (unsigned int)MapControl_WarInfo__GetEventId(v129, 0);
                  if ( !v579 )
                    sub_1C2D6EC(0, v130);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v579,
                                        v130,
                                        NowEntity->fields.statusId,
                                        0);
                  v133 = v590->fields.__8__1;
                  if ( !v133 )
                    sub_1C2D6EC(MismatchQuestList, v132);
                  v134 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v590->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C2D6EC(0, v132);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v133->fields.warId,
                    v134,
                    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v136 = v590->fields._nowTime_5__11;
          v137 = (_QWORD *)sub_1C2D538(long___TypeInfo, 3);
          v138 = entity;
          if ( !entity )
            sub_1C2D6EC(v137, v109);
          if ( !v137 )
            sub_1C2D6EC(0, v109);
          v139 = v137[3];
          if ( !(_DWORD)v139 )
            sub_1C2D6F4(v137, v109, v110);
          v137[4] = entity[5].klass;
          if ( (_DWORD)v139 == 1 )
            sub_1C2D6F4(v137, v109, v110);
          v137[5] = v138[5].monitor;
          if ( (unsigned int)v139 <= 2 )
            sub_1C2D6F4(v137, v109, v110);
          v137[6] = v138[6].monitor;
          if ( (int)v139 >= 1 )
          {
            v140 = (unsigned int)v139;
            v141 = v137 + 4;
            do
            {
              v142 = *v141;
              if ( *v141 > v136 && _4__this->fields.forceUpdateTime > v142 )
                _4__this->fields.forceUpdateTime = v142;
              --v140;
              ++v141;
            }
            while ( v140 );
          }
        }
      }
      v143 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v143 )
        sub_1C2D6EC(0, v109);
      items = v143->fields._items;
      v145 = (Il2CppObject *)v590->fields._warInfo_5__14;
      v146 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v143->fields._version;
      if ( !items )
        sub_1C2D6EC(v143, v145);
      size = v143->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v143,
          v145,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
      else
      {
        v148 = &items->obj.klass + size;
        v143->fields._size = size + 1;
        v148[4] = (Il2CppClass *)v145;
        sub_1C2D434((CGThumbnailListItem_o *)(v148 + 4), (int32_t)v145, v110, v111);
      }
      v225 = v590->fields._warInfo_5__14;
      if ( !v225 )
        sub_1C2D6EC(v149, v150);
      if ( !MasterData_object )
        sub_1C2D6EC(v149, v150);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v225->fields.warId, 0);
      v227 = v590;
      v590->fields._mapList_5__15 = List;
      sub_1C2D434((CGThumbnailListItem_o *)&v227->fields._mapList_5__15, (int32_t)List, v228, v229);
      v221 = v590;
      mapList_5__15 = v590->fields._mapList_5__15;
      v590->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C2D6EC(v218, v219);
      max_length = mapList_5__15->max_length;
      v223 = 0;
      v221->fields._mapCount_5__13 = max_length;
      goto LABEL_121;
    case 1:
      v152 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v152 )
        sub_1C2D6EC(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C2D6EC(0, method);
      v154 = SpotRoadMaster__getList(spotRoadMaster_5__7, v152->fields.mapId, 0);
      v156 = v154;
      if ( !v154 )
        sub_1C2D6EC(0, v155);
      v157 = v154->max_length;
      if ( v157 >= 1 )
      {
        for ( i = 0; i != v157; ++i )
        {
          v159 = sub_1C2D6DC(QuestTree___c__DisplayClass45_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v159, 0);
          if ( i >= LODWORD(v156->max_length) )
            sub_1C2D6F4(v160, v161, v162);
          v163 = v156->m_Items[i];
          if ( !v163 )
            sub_1C2D6EC(v160, v161);
          if ( !v159 )
            sub_1C2D6EC(v160, v161);
          *(_DWORD *)(v159 + 16) = v163->fields.id;
          if ( !_4__this )
            sub_1C2D6EC(v160, v161);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v165 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v165,
            (Il2CppObject *)v159,
            Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0);
          if ( !allSpotRoadInfoList )
            sub_1C2D6EC(v166, v167);
          v168 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v165,
                   (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v169 = v168;
          if ( v168 != -1 )
          {
            v170 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v170 )
              sub_1C2D6EC(0, v169);
            System_Collections_Generic_List_object___RemoveAt(
              v170,
              v169,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v590->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C2D6EC(0, v169);
          v172 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v159 + 16), 0);
          spotRoadInfo = v172;
          QuestTree__SetupSpotRoadInfo(_4__this, v163, &spotRoadInfo, v173);
          v177 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v177 )
            sub_1C2D6EC(0, v174);
          v178 = v177->fields._items;
          v179 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v177->fields._version;
          if ( !v178 )
            sub_1C2D6EC(v177, v174);
          v180 = v177->fields._size;
          if ( (unsigned int)v180 >= LODWORD(v178->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v177,
              (Il2CppObject *)v172,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
          }
          else
          {
            v181 = &v178->obj.klass + v180;
            v177->fields._size = v180 + 1;
            v181[4] = (Il2CppClass *)v172;
            sub_1C2D434((CGThumbnailListItem_o *)(v181 + 4), (int32_t)v172, v175, v176);
          }
        }
      }
      v182 = v590->fields.__8__1;
      if ( !v182 )
        sub_1C2D6EC(v154, v155);
      mapGimmickMaster_5__8 = v590->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C2D6EC(0, v155);
      v184 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v182->fields.mapId, 0);
      v188 = v184;
      if ( !v184 )
        sub_1C2D6EC(0, v185);
      v189 = v184->max_length;
      if ( v189 >= 1 )
      {
        for ( j = 0; j != v189; ++j )
        {
          v191 = sub_1C2D6DC(QuestTree___c__DisplayClass45_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v191, 0);
          if ( j >= LODWORD(v188->max_length) )
            sub_1C2D6F4(v192, v193, v194);
          v195 = v188->m_Items[j];
          if ( !v195 )
            sub_1C2D6EC(v192, v193);
          if ( !v191 )
            sub_1C2D6EC(v192, v193);
          *(_DWORD *)(v191 + 16) = v195->fields.id;
          if ( !_4__this )
            sub_1C2D6EC(v192, v193);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v197 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v197,
            (Il2CppObject *)v191,
            Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0);
          if ( !allMapGimmickInfoList )
            sub_1C2D6EC(v198, v199);
          v200 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v197,
                   (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v201 = v200;
          if ( v200 != -1 )
          {
            v202 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v202 )
              sub_1C2D6EC(0, v201);
            System_Collections_Generic_List_object___RemoveAt(
              v202,
              v201,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v203 = v590->fields._mapInfo_5__16;
          if ( !v203 )
            sub_1C2D6EC(0, v201);
          v204 = MapControl_MapInfo__AddMapGimmick(v203, *(_DWORD *)(v191 + 16), 0);
          mapGimmickInfo = v204;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v205);
          v209 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v209 )
            sub_1C2D6EC(0, v206);
          v210 = v209->fields._items;
          v211 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v209->fields._version;
          if ( !v210 )
            sub_1C2D6EC(v209, v206);
          v212 = v209->fields._size;
          if ( (unsigned int)v212 >= LODWORD(v210->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v209,
              (Il2CppObject *)v204,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
          }
          else
          {
            v213 = &v210->obj.klass + v212;
            v209->fields._size = v212 + 1;
            v213[4] = (Il2CppClass *)v204;
            sub_1C2D434((CGThumbnailListItem_o *)(v213 + 4), (int32_t)v204, v207, v208);
          }
        }
      }
      v214 = v590;
      v590->fields.__2__current = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v214->fields.__2__current, 0, v186, v187);
      v215 = v590;
      v216 = 2;
      goto LABEL_333;
    case 2:
      v4->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = (CGThumbnailListItem_o *)&v4->fields._mapInfo_5__16;
      p_mapInfo_5__16[-2].fields._Id_k__BackingField = -1;
      sub_1C2D434(p_mapInfo_5__16, 0, v2, v3);
      v221 = v590;
      max_length = v590->fields._mapCount_5__13;
      v223 = v590->fields._mapIdx_5__12 + 1;
      v590->fields._mapIdx_5__12 = v223;
LABEL_121:
      if ( v223 < max_length )
      {
        v231 = v221->fields._mapList_5__15;
        if ( !v231 )
          sub_1C2D6EC(v218, v219);
        if ( (unsigned int)v223 >= LODWORD(v231->max_length) )
          sub_1C2D6F4(v218, v219, v220);
        v232 = v231->m_Items[v223];
        if ( !v232 )
          sub_1C2D6EC(v218, v219);
        v233 = v221->fields.__8__1;
        if ( !v233 )
          sub_1C2D6EC(v218, v219);
        v233->fields.mapId = v232->fields.id;
        v234 = v221->fields._warInfo_5__14;
        if ( !v234 )
          sub_1C2D6EC(v218, v219);
        mapInfoList = (System_Collections_Generic_List_object__o *)v234->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v233->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v233,
              Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0);
            v233->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C2D434((CGThumbnailListItem_o *)&v233->fields.__9__3, (int32_t)_9__3, v237, v238);
          }
          v218 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v219 = (unsigned int)v218;
          if ( (_DWORD)v218 != -1 )
          {
            v239 = v590->fields._warInfo_5__14;
            if ( !v239 )
              sub_1C2D6EC(v218, (unsigned int)v218);
            v240 = (System_Collections_Generic_List_object__o *)v239->fields.mapInfoList;
            if ( !v240 )
              sub_1C2D6EC(0, v219);
            System_Collections_Generic_List_object___RemoveAt(
              v240,
              v219,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C2D6EC(v218, v219);
        v241 = v590->fields.__8__1;
        if ( !v241 )
          sub_1C2D6EC(v218, v219);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v241->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v241,
            Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0);
          v241->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C2D434((CGThumbnailListItem_o *)&v241->fields.__9__4, (int32_t)_9__4, v244, v245);
        }
        if ( !allMapInfoList )
          sub_1C2D6EC(v218, v219);
        v246 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v247 = (unsigned int)v246;
        if ( (_DWORD)v246 != -1 )
        {
          v248 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v248 )
            sub_1C2D6EC(0, v247);
          System_Collections_Generic_List_object___RemoveAt(
            v248,
            v247,
            (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v249 = v590->fields.__8__1;
        if ( !v249 )
          sub_1C2D6EC(v246, v247);
        v250 = v590->fields._warInfo_5__14;
        if ( !v250 )
          sub_1C2D6EC(0, v247);
        v251 = MapControl_WarInfo__AddChild(v250, v249->fields.mapId, 0);
        v252 = v590;
        v590->fields._mapInfo_5__16 = v251;
        sub_1C2D434((CGThumbnailListItem_o *)&v252->fields._mapInfo_5__16, (int32_t)v251, v253, v254);
        v258 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v258 )
          sub_1C2D6EC(0, v255);
        v259 = v258->fields._items;
        v260 = (Il2CppObject *)v590->fields._mapInfo_5__16;
        v261 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v258->fields._version;
        if ( !v259 )
          sub_1C2D6EC(v258, v260);
        v262 = v258->fields._size;
        if ( (unsigned int)v262 >= LODWORD(v259->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v258,
            v260,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
        }
        else
        {
          v263 = &v259->obj.klass + v262;
          v258->fields._size = v262 + 1;
          v263[4] = (Il2CppClass *)v260;
          sub_1C2D434((CGThumbnailListItem_o *)(v263 + 4), (int32_t)v260, v256, v257);
        }
        v359 = v590->fields.__8__1;
        if ( !v359 )
          sub_1C2D6EC(v264, v265);
        spotMaster_5__3 = v590->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C2D6EC(0, v265);
        v361 = SpotMaster__getList(spotMaster_5__3, v359->fields.mapId, 0);
        v364 = v361;
        if ( !v361 )
          sub_1C2D6EC(0, v362);
        v365 = v361->max_length;
        if ( v365 >= 1 )
        {
          for ( k = 0; k != v365; ++k )
          {
            v367 = sub_1C2D6DC(QuestTree___c__DisplayClass45_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v367, 0);
            if ( k >= LODWORD(v364->max_length) )
              sub_1C2D6F4(v368, v369, v370);
            v371 = v364->m_Items[k];
            if ( !v371 )
              sub_1C2D6EC(v368, v369);
            if ( !v367 )
              sub_1C2D6EC(v368, v369);
            *(_DWORD *)(v367 + 16) = v371->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v373 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v373,
              (Il2CppObject *)v367,
              Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_1C2D6EC(v374, v375);
            v376 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v373,
                     (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v377 = v376;
            if ( v376 != -1 )
            {
              v378 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v378 )
                sub_1C2D6EC(0, v377);
              System_Collections_Generic_List_object___RemoveAt(
                v378,
                v377,
                (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v379 = v590->fields._mapInfo_5__16;
            if ( !v379 )
              sub_1C2D6EC(0, v377);
            v380 = MapControl_MapInfo__AddChild(v379, *(_DWORD *)(v367 + 16), 0);
            spotInfo = v380;
            QuestTree__SetupSpotInfo(_4__this, v371, &spotInfo, v381);
            v385 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v385 )
              sub_1C2D6EC(0, v382);
            v386 = v385->fields._items;
            v387 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v385->fields._version;
            if ( !v386 )
              sub_1C2D6EC(v385, v382);
            v388 = v385->fields._size;
            if ( (unsigned int)v388 >= LODWORD(v386->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v385,
                (Il2CppObject *)v380,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v387[4] + 192LL) + 112LL));
            }
            else
            {
              v389 = &v386->obj.klass + v388;
              v385->fields._size = v388 + 1;
              v389[4] = (Il2CppClass *)v380;
              sub_1C2D434((CGThumbnailListItem_o *)(v389 + 4), (int32_t)v380, v383, v384);
            }
          }
        }
        v390 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v590->fields._mapInfo_5__16,
                 v590->fields._blankEarthSpotMaster_5__4,
                 v363);
        v391 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v390,
                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v395 = (System_Collections_Generic_IEnumerable_TSource__o *)v391;
        if ( !v391 )
          sub_1C2D6EC(0, v392);
        if ( v391->max_length )
        {
          v396 = sub_1C2D6DC(QuestTree___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v396, 0);
          v397 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v397 = QuestTree___c_TypeInfo;
          }
          _9__45_6 = (System_Func_object__int__o *)v397->static_fields->__9__45_6;
          if ( !_9__45_6 )
          {
            if ( !v397->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v397);
              v397 = QuestTree___c_TypeInfo;
            }
            v399 = (Il2CppObject *)v397->static_fields->__9;
            _9__45_6 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__45_6,
              v399,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__,
              0);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__45_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__45_6;
            sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__45_6, (int32_t)_9__45_6, v401, v402);
          }
          v403 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v395,
                                                                  (System_Func_TSource__TResult__o *)_9__45_6,
                                                                  (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v404 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_56862832(
            v404,
            v403,
            (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
          if ( !v396 )
            sub_1C2D6EC(v405, v406);
          *(_QWORD *)(v396 + 16) = v404;
          sub_1C2D434((CGThumbnailListItem_o *)(v396 + 16), (int32_t)v404, v407, v408);
          v409 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v410 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v410,
            (Il2CppObject *)v396,
            Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v409,
            (System_Func_T__bool__o *)v410,
            (const MethodInfo_30BD9D4 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v412 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v412 )
            sub_1C2D6EC(0, v411);
          System_Collections_Generic_List_object___AddRange(
            v412,
            (System_Collections_Generic_IEnumerable_T__o *)v395,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v413 = v590;
        v590->fields.__2__current = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v413->fields.__2__current, 0, v393, v394);
        result = 1;
        v590->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C2D6EC(v218, v219);
      v266 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v267 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v267 = QuestTree___c_TypeInfo;
      }
      _9__45_2 = (System_Comparison_T__o *)v267->static_fields->__9__45_2;
      if ( !_9__45_2 )
      {
        if ( !v267->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v267);
          v267 = QuestTree___c_TypeInfo;
        }
        v269 = (Il2CppObject *)v267->static_fields->__9;
        _9__45_2 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__45_2,
          v269,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__,
          0);
        v270 = QuestTree___c_TypeInfo->static_fields;
        v270->__9__45_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__45_2;
        sub_1C2D434((CGThumbnailListItem_o *)&v270->__9__45_2, (int32_t)_9__45_2, v271, v272);
      }
      if ( !v266 )
        sub_1C2D6EC(v218, v219);
      System_Collections_Generic_List_object___Sort_58242632(
        v266,
        _9__45_2,
        (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v273 = v590;
      v590->fields.__8__1 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v273->fields.__8__1, 0, v274, v275);
      v276 = v590;
      v590->fields._warInfo_5__14 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v276->fields._warInfo_5__14, 0, v277, v278);
      v279 = v590;
      v590->fields._mapList_5__15 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v279->fields._mapList_5__15, 0, v280, v281);
      v282 = (Il2CppObject *)sub_1C2D6DC(QuestTree___c__DisplayClass45_6_TypeInfo);
      System_Object___ctor(v282, 0);
      v283 = v590;
      v590->fields.__8__3 = (struct QuestTree___c__DisplayClass45_6_o *)v282;
      sub_1C2D434((CGThumbnailListItem_o *)&v283->fields.__8__3, (int32_t)v282, v284, v285);
      v286 = v590->fields._nowTime_5__11;
      v287 = (MapControl_WarInfo_o *)sub_1C2D6DC(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v287, v286, 0);
      v288 = v590;
      v590->fields._warInfo_5__14 = v287;
      sub_1C2D434((CGThumbnailListItem_o *)&v288->fields._warInfo_5__14, (int32_t)v287, v289, v290);
      v291 = (MapControl_MapInfo_o *)sub_1C2D6DC(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v291, 0);
      v292 = v590;
      v590->fields._mapInfo_5__16 = v291;
      sub_1C2D434((CGThumbnailListItem_o *)&v292->fields._mapInfo_5__16, (int32_t)v291, v293, v294);
      v295 = (MapControl_SpotInfo_o *)sub_1C2D6DC(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v295, 0);
      v296 = v590;
      v590->fields._spotInfo_5__17 = v295;
      sub_1C2D434((CGThumbnailListItem_o *)&v296->fields._spotInfo_5__17, (int32_t)v295, v297, v298);
      v299 = (WarEntity_o *)sub_1C2D6DC(WarEntity_TypeInfo);
      WarEntity___ctor(v299, 0);
      v300 = v590;
      v590->fields._warEnt_5__18 = v299;
      sub_1C2D434((CGThumbnailListItem_o *)&v300->fields._warEnt_5__18, (int32_t)v299, v301, v302);
      v304 = v590->fields._dataManager_5__2;
      if ( !v304 )
        sub_1C2D6EC(0, v303);
      v305 = DataManager__GetMasterData_object_(
               v304,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v306 = v590;
      v590->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v305;
      sub_1C2D434((CGThumbnailListItem_o *)&v306->fields._userQuestMaster_5__19, (int32_t)v305, v307, v308);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v311 = v590;
      _8__3 = v590->fields.__8__3;
      if ( !_8__3 )
        sub_1C2D6EC(Master_object, v310);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v311->fields._nowMapId_5__20 = -1;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
      if ( !v590 )
        sub_1C2D6EC(isSavedMemoryMode, v314);
      if ( isSavedMemoryMode )
        v315 = 500;
      else
        v315 = 5000;
      v316 = v590->fields.__8__3;
      v590->fields._breakInterval_5__22 = v315;
      v317 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v317,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v316 )
        sub_1C2D6EC(v318, v319);
      v316->fields.spotInfoList = v317;
      sub_1C2D434((CGThumbnailListItem_o *)&v316->fields, (int32_t)v317, v320, v321);
      v590->fields._cnt_5__23 = 0;
      v323 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v323 )
        sub_1C2D6EC(0, v322);
      System_Collections_Generic_List_object___GetEnumerator(
        v580,
        v323,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v324 = v590;
      v325 = *(_OWORD *)&v580[0].fields._list;
      p__7__wrap24 = (CGThumbnailListItem_o *)&v590->fields.__7__wrap24;
      v580[1] = v580[0];
      v590->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v580[0].fields._current;
      *(_OWORD *)&v324->fields.__7__wrap24.fields._list = v325;
      sub_1C2D434(p__7__wrap24, 0, v327, v328);
      v4 = v590;
LABEL_169:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v330 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v331 = v590;
        if ( !v330 )
          break;
        current = v590->fields.__7__wrap24.fields._current;
        ++v590->fields._cnt_5__23;
        if ( !current )
          sub_1C2D6EC(v331, v329);
        Mine = MapControl_SpotInfo__GetMine(current, 0);
        if ( !Mine )
          sub_1C2D6EC(0, v334);
        v4 = v590;
        v337 = v590->fields.__8__2;
        if ( !v337 )
          sub_1C2D6EC(Mine, v334);
        if ( Mine->fields.warId == v337->fields.targetWarId )
        {
          v338 = v590->fields.__8__3;
          if ( !v338 )
            sub_1C2D6EC(Mine, v334);
          spotInfoList = v338->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C2D6EC(0, v334);
          spotId = (unsigned int)current->fields.spotId;
          v341 = spotInfoList->fields._items;
          v342 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v341 )
            sub_1C2D6EC(spotInfoList, spotId);
          v343 = spotInfoList->fields._size;
          if ( (unsigned int)v343 >= LODWORD(v341->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v342[4] + 192LL) + 112LL));
            v4 = v590;
          }
          else
          {
            spotInfoList->fields._size = v343 + 1;
            v341->m_Items[v343] = spotId;
          }
        }
        HIDWORD(v344) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v344) = HIDWORD(v344);
        if ( (unsigned int)(v344 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v335, v336);
          v215 = v590;
          v216 = 3;
LABEL_333:
          v215->fields.__1__state = v216;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(v590, v329);
      v346 = v590;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v590->fields._questMaster_5__5;
      v590->fields.__7__wrap24.fields._list = 0;
      *(_QWORD *)&v346->fields.__7__wrap24.fields._index = 0;
      v346->fields.__7__wrap24.fields._current = 0;
      if ( !questMaster_5__5 )
        sub_1C2D6EC(0, v345);
      v348 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_338701C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v349 = (Il2CppObject *)v590->fields.__8__3;
      v350 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v350,
        v349,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v351 = System_Linq_Enumerable__Where_object_(
               v348,
               (System_Func_TSource__bool__o *)v350,
               (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v352 = System_Linq_Enumerable__ToArray_object_(
               v351,
               (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v353 = v590;
      v590->fields._questList_5__24 = (struct QuestEntity_array *)v352;
      sub_1C2D434((CGThumbnailListItem_o *)&v353->fields._questList_5__24, (int32_t)v352, v354, v355);
      v356 = v590;
      v590->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v356->fields._questList_5__24,
                       (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v590;
      mapCount_5__13 = v590->fields._mapCount_5__13;
      v590->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_169;
    case 4:
      v151 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_474;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1C2D6EC(this, method);
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
      sub_1C2D6EC(mapIdx_5__12, method);
    if ( (unsigned int)mapCount_5__13 >= LODWORD(questList_5__24->max_length) )
      sub_1C2D6F4(mapIdx_5__12, method, v2);
    v416 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v416 )
      sub_1C2D6EC(mapIdx_5__12, method);
    v417 = v4->fields.__8__3;
    if ( !v417 )
      sub_1C2D6EC(mapIdx_5__12, method);
    v417->fields.questId = v416->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    v419 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v419 = NetworkManager_TypeInfo;
    }
    v420 = v590->fields.__8__3;
    if ( !v420 )
      sub_1C2D6EC(v419, method);
    if ( !userQuestMaster_5__19 )
      sub_1C2D6EC(v419, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v584,
           v419->static_fields->userIdNumber,
           v420->fields.questId,
           0) )
    {
      if ( !v584 )
        sub_1C2D6EC(0, v421);
      QuestPhase = UserQuestEntity__getQuestPhase(v584, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_42231908 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)QuestEntity__getSpotId_42231908(
                                                                            v416,
                                                                            QuestPhase + 1,
                                                                            0);
    v425 = v590;
    v426 = v590->fields.__8__3;
    if ( !v426 )
      sub_1C2D6EC(SpotId_42231908, warId);
    if ( v426->fields.nowSpotId == (_DWORD)SpotId_42231908 )
    {
      if ( !_4__this )
        sub_1C2D6EC(SpotId_42231908, warId);
    }
    else
    {
      v426->fields.nowSpotId = (int)SpotId_42231908;
      if ( !_4__this )
        sub_1C2D6EC(SpotId_42231908, warId);
      v427 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v426->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v426,
          Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0);
        v426->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C2D434((CGThumbnailListItem_o *)&v426->fields.__9__12, (int32_t)_9__12, v429, v430);
      }
      if ( !v427 )
        sub_1C2D6EC(SpotId_42231908, warId);
      v431 = System_Collections_Generic_List_object___Find(
               v427,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v425->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v431;
      sub_1C2D434((CGThumbnailListItem_o *)&v425->fields._spotInfo_5__17, (int32_t)v431, v432, v433);
      spotInfo_5__17 = v590->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C2D6EC(0, v434);
      SpotId_42231908 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0);
      warId = (unsigned int)SpotId_42231908;
      if ( v590->fields._nowMapId_5__20 != (_DWORD)SpotId_42231908 )
      {
        v590->fields._nowMapId_5__20 = (int)SpotId_42231908;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_42231908, v436);
        v438 = v590;
        v590->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C2D434((CGThumbnailListItem_o *)&v438->fields._mapInfo_5__16, (int32_t)MapInfoByMapID, v439, v440);
        v442 = v590->fields._mapInfo_5__16;
        if ( !v442 )
          sub_1C2D6EC(0, v441);
        v446 = MapControl_MapInfo__GetMine(v442, 0);
        if ( !v446 )
          sub_1C2D6EC(0, v443);
        SpotId_42231908 = v590;
        warId = (unsigned int)v446->fields.warId;
        if ( v590->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v590->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0);
            SpotId_42231908 = v590;
          }
          else
          {
            ChildByWarID = 0;
          }
          SpotId_42231908->fields._warInfo_5__14 = ChildByWarID;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&SpotId_42231908->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v444,
            v445);
          v449 = v590->fields._warInfo_5__14;
          if ( !v449 )
            sub_1C2D6EC(0, v448);
          v450 = MapControl_WarInfo__GetMine(v449, 0);
          v451 = v590;
          v590->fields._warEnt_5__18 = v450;
          sub_1C2D434((CGThumbnailListItem_o *)&v451->fields._warEnt_5__18, (int32_t)v450, v452, v453);
        }
      }
    }
    v454 = v590->fields.__8__3;
    if ( !v454 )
      sub_1C2D6EC(SpotId_42231908, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v454->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v454,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0);
      v454->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C2D434((CGThumbnailListItem_o *)&v454->fields.__9__13, (int32_t)_9__13, v457, v458);
    }
    if ( !allQuestInfoList )
      sub_1C2D6EC(SpotId_42231908, warId);
    v459 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v460 = v459;
    if ( v459 != -1 )
    {
      v461 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v461 )
        sub_1C2D6EC(0, v460);
      System_Collections_Generic_List_object___RemoveAt(
        v461,
        v460,
        (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v462 = v590->fields._warInfo_5__14;
    if ( !v584 )
    {
      if ( !v462 )
        sub_1C2D6EC(0, v460);
      goto LABEL_385;
    }
    if ( !v462 )
      sub_1C2D6EC(0, v460);
    MapControl_WarInfo__SetStatusCheckFlag(v462, 1, 0, 0);
    if ( !v584 )
      sub_1C2D6EC(0, v463);
    HasStatus = UserQuestEntity__HasStatus(v584, 8, 0);
    if ( !HasStatus )
    {
      v466 = v590->fields._warInfo_5__14;
      if ( !v466 )
        sub_1C2D6EC(0, v465);
      goto LABEL_387;
    }
    if ( !v584 )
      sub_1C2D6EC(HasStatus, v465);
    if ( v584->fields.challengeNum >= 1 )
    {
      v466 = v590->fields._warInfo_5__14;
      if ( !v466 )
        sub_1C2D6EC(0, v465);
LABEL_387:
      MapControl_WarInfo__SetStatusCheckFlag(v466, 4, 0, 0);
    }
    if ( !v584 )
      sub_1C2D6EC(0, v465);
    v470 = UserQuestEntity__getClearNum(v584, 0) < 1;
    v462 = v590->fields._warInfo_5__14;
    if ( v470 )
    {
      if ( !v462 )
        sub_1C2D6EC(0, v471);
LABEL_385:
      MapControl_WarInfo__SetStatusCheckFlag(v462, 2, 0, 0);
      v469 = 0;
      goto LABEL_399;
    }
    if ( !v462 )
      sub_1C2D6EC(0, v471);
    v467 = MapControl_WarInfo__GetMine(v462, 0);
    if ( !v467 )
      sub_1C2D6EC(0, v468);
    v472 = v590->fields.__8__3;
    if ( !v472 )
      sub_1C2D6EC(v467, v468);
    if ( v467->fields.lastQuestId == v472->fields.questId )
    {
      v473 = v590->fields._warInfo_5__14;
      if ( !v473 )
        sub_1C2D6EC(0, v468);
      v469 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v473, 8, 1, 0);
    }
    else
    {
      v469 = 1;
    }
LABEL_399:
    v474 = v590->fields.__8__3;
    if ( !v474 )
      sub_1C2D6EC(v467, v468);
    v475 = v590->fields._spotInfo_5__17;
    if ( !v475 )
      sub_1C2D6EC(0, v468);
    v476 = MapControl_SpotInfo__AddChild(v475, v474->fields.questId, 0);
    v479 = v590->fields._warInfo_5__14;
    if ( !v479 )
      sub_1C2D6EC(v476, 0);
    v480 = v476;
    if ( !v476 )
      sub_1C2D6EC(0, v479);
    v481 = v479->fields.warId;
    v476->fields._WarInfo_k__BackingField = v479;
    v476->fields.warId = v481;
    sub_1C2D434((CGThumbnailListItem_o *)&v476->fields._WarInfo_k__BackingField, (int32_t)v479, v477, v478);
    v482 = v590->fields._spotInfo_5__17;
    v480->fields._SpotInfo_k__BackingField = v482;
    sub_1C2D434((CGThumbnailListItem_o *)&v480->fields._SpotInfo_k__BackingField, (int32_t)v482, v483, v484);
    v480->fields.endTime = QuestTree__GetEndTime(_4__this, v480, v485);
    warEnt_5__18 = v590->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C2D6EC(0, v486);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
    if ( IsStartTypeQuest )
    {
      v490 = v590->fields._warEnt_5__18;
      if ( !v490 )
        sub_1C2D6EC(IsStartTypeQuest, v489);
      v491 = v590->fields.__8__3;
      if ( !v491 )
        sub_1C2D6EC(IsStartTypeQuest, v489);
      if ( v490->fields.targetId == v491->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v590->fields._warEnt_5__18, 0x8000, 0);
        if ( !IsStartTypeQuest )
          goto LABEL_415;
      }
    }
    v492 = v590->fields._warEnt_5__18;
    if ( !v492 )
      sub_1C2D6EC(IsStartTypeQuest, v489);
    v493 = v590->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v493 )
      sub_1C2D6EC(0, v489);
    v494 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v493,
             v492->fields.id,
             &value,
             (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v494 )
    {
      v497 = v590->fields.__8__3;
      if ( !v497 )
        sub_1C2D6EC(v494, v495);
      if ( !value )
        sub_1C2D6EC(0, v495);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v497->fields.questId,
             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_415:
        *(_QWORD *)&v480->fields.dispType = 0;
LABEL_419:
        v500 = 1;
        goto LABEL_420;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v416, v480, v590->fields._nowWarId_5__21, v496) != 1 )
      goto LABEL_419;
    v499 = v590->fields._warInfo_5__14;
    if ( !v499 )
      sub_1C2D6EC(0, v498);
    MapControl_WarInfo__SetStatusCheckFlag(v499, 1, 0, 0);
    v500 = 0;
LABEL_420:
    if ( MapControl_QuestInfo__IsDisaplayable(v480, 0) )
    {
      if ( ((v469 | v500) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v480, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v503 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestResetMaster___);
          v504 = sub_1C2D538(long___TypeInfo, 1);
          v506 = v590->fields.__8__3;
          if ( !v506 )
            sub_1C2D6EC(v504, v504);
          if ( !v504 )
            sub_1C2D6EC(0, 0);
          if ( !*(_DWORD *)(v504 + 24) )
            sub_1C2D6F4(v504, v504, v505);
          *(_QWORD *)(v504 + 32) = v506->fields.questId;
          if ( !v503 )
            sub_1C2D6EC(v504, v504);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v503,
                                   (System_Int64_array *)v504,
                                   (const MethodInfo_3387374 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v584 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v584, 0) )
          {
            v508 = v590->fields._spotInfo_5__17;
            if ( !v508 )
              sub_1C2D6EC(0, v502);
            MapControl_SpotInfo__AddQuestCount(v508, 1, 0);
          }
        }
        v509 = v590->fields._spotInfo_5__17;
        if ( !v509 )
          sub_1C2D6EC(0, v502);
        MapControl_SpotInfo__AddAvailableQuestId(v509, v480->fields.questId, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType(v480, 0) == 1 )
      {
        v510 = MapControl_QuestInfo__GetMine(v480, 0);
        if ( !v510 )
          sub_1C2D6EC(0, v511);
        HasFlag = QuestEntity__HasFlag(v510, 0x400000000000LL, 0);
        v514 = v590;
        if ( !HasFlag )
        {
          v515 = v590->fields._spotInfo_5__17;
          if ( !v515 )
            sub_1C2D6EC(HasFlag, v513);
          v515->fields._IsNext_k__BackingField = 1;
        }
        v516 = v514->fields._mapInfo_5__16;
        if ( !v516 )
          sub_1C2D6EC(HasFlag, v513);
        v516->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v480, 0);
      if ( IsDisplayQuestNextIcon )
      {
        v519 = v590;
        v520 = v590->fields._spotInfo_5__17;
        if ( !v520 )
          sub_1C2D6EC(IsDisplayQuestNextIcon, v518);
        v520->fields._IsNext_k__BackingField = 1;
        v521 = v519->fields._mapInfo_5__16;
        if ( !v521 )
          sub_1C2D6EC(IsDisplayQuestNextIcon, v518);
        v521->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v416, 0x8000000000LL, 0) )
      {
        v522 = v590->fields._spotInfo_5__17;
        if ( !v522 )
          sub_1C2D6EC(0, v501);
        MapControl_SpotInfo__AddFreeQuestCount(v522, 1, 0);
      }
    }
    v523 = v584;
    if ( v584 )
    {
      v523 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v584, 8, 0);
      if ( ((unsigned __int8)v523 & 1) != 0 )
      {
        if ( !v584 )
          sub_1C2D6EC(v523, v501);
        v524 = v584->fields.challengeNum == 0;
      }
      else
      {
        v524 = 0;
      }
    }
    else
    {
      v524 = 1;
    }
    v480->fields.isNew = v524;
    v480->fields.questPhase = QuestPhase;
    v525 = v590->fields.__8__3;
    if ( !v525 )
      sub_1C2D6EC(v523, v501);
    questPickupMaster_5__9 = v590->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C2D6EC(0, v501);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v525->fields.questId, 0);
    v480->fields.pickupPriority = Priority;
    v529 = v590->fields.__8__3;
    if ( !v529 )
      sub_1C2D6EC(Priority, v528);
    questPhaseMaster_5__6 = v590->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C2D6EC(0, v528);
    v531 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v529->fields.questId, 0);
    v535 = v531;
    if ( !v531 )
      sub_1C2D6EC(0, v532);
    v536 = v531[3];
    v537 = v536 - 1;
    if ( (int)v536 >= 1 )
    {
      v538 = 0;
      while ( 1 )
      {
        v539 = v535[v538 + 4];
        if ( !v539 )
          sub_1C2D6EC(v531, v532);
        v531 = MapControl_QuestInfo__AddChild(v480, *(_DWORD *)(v539 + 16), *(_DWORD *)(v539 + 20), 0);
        if ( v537 == v538 )
          break;
        if ( (unsigned int)++v538 >= *((_DWORD *)v535 + 6) )
          sub_1C2D6F4(v531, v532, v533);
      }
    }
    v540 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v540 )
      sub_1C2D6EC(0, v532);
    v541 = v540->fields._items;
    v542 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v540->fields._version;
    if ( !v541 )
      sub_1C2D6EC(v540, v532);
    v543 = v540->fields._size;
    if ( (unsigned int)v543 >= LODWORD(v541->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v540,
        (Il2CppObject *)v480,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v542[4] + 192LL) + 112LL));
    }
    else
    {
      v544 = &v541->obj.klass + v543;
      v540->fields._size = v543 + 1;
      v544[4] = (Il2CppClass *)v480;
      sub_1C2D434((CGThumbnailListItem_o *)(v544 + 4), (int32_t)v480, v533, v534);
    }
    v4 = v590;
    v151 = v590->fields._mapCount_5__13;
    if ( v151 && !(v151 % v590->fields._breakInterval_5__22) )
    {
      v590->fields.__2__current = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v545);
      v215 = v590;
      v216 = 4;
      goto LABEL_333;
    }
LABEL_474:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    mapCount_5__13 = v151 + 1;
    v4->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1C2D6EC(mapIdx_5__12, method);
  v546 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v547 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v547 = QuestTree___c_TypeInfo;
  }
  _9__45_11 = (System_Comparison_T__o *)v547->static_fields->__9__45_11;
  if ( !_9__45_11 )
  {
    if ( !v547->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v547);
      v547 = QuestTree___c_TypeInfo;
    }
    v549 = (Il2CppObject *)v547->static_fields->__9;
    _9__45_11 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(_9__45_11, v549, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__, 0);
    v550 = QuestTree___c_TypeInfo->static_fields;
    v550->__9__45_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__45_11;
    sub_1C2D434((CGThumbnailListItem_o *)&v550->__9__45_11, (int32_t)_9__45_11, v551, v552);
  }
  if ( !v546 )
    sub_1C2D6EC(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_58242632(
    v546,
    _9__45_11,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v553 = v590;
  v590->fields.__8__3 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v553->fields.__8__3, 0, v554, v555);
  v556 = v590;
  v590->fields._warInfo_5__14 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v556->fields._warInfo_5__14, 0, v557, v558);
  v559 = v590;
  v590->fields._mapInfo_5__16 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v559->fields._mapInfo_5__16, 0, v560, v561);
  v562 = v590;
  v590->fields._spotInfo_5__17 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v562->fields._spotInfo_5__17, 0, v563, v564);
  v565 = v590;
  v590->fields._warEnt_5__18 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v565->fields._warEnt_5__18, 0, v566, v567);
  v568 = v590;
  v590->fields._userQuestMaster_5__19 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v568->fields._userQuestMaster_5__19, 0, v569, v570);
  v571 = v590;
  v590->fields._questList_5__24 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v571->fields._questList_5__24, 0, v572, v573);
  v574 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v574 )
    sub_1C2D6EC(0, v575);
  CommonUI__SetLoadMode((CommonUI_o *)v574, 0, 0);
  _4__this->fields.isInit = 1;
  v578 = v590;
  if ( v590->fields.endCallback )
  {
    v590->fields.__2__current = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v578->fields.__2__current, 0, v576, v577);
    v215 = v590;
    v216 = 5;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C240F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4C240F7 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}