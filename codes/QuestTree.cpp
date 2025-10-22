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

  if ( (byte_4C53B47 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C3E564(&MapControl_RootInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4C53B47 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1C3E7B0(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allQuestInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allSpotInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allMapInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allWarInfoList, (int32_t)v21, v22, v23);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v24;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questReleaseEntList, (int32_t)v24, v25, v26);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39FFB90 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_36678544(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_36675632(
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

  if ( (byte_4C53B44 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53B44 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C3E60C(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v11 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v11 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v11 == 1) )
      sub_1C3E7C8(Time, v7);
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
      sub_1C3E7C0(Time, v7);
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
  int32_t v31; // w8
  UserQuestEntity_o *v33; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4C53B40 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53B40 = 1;
  }
  entity = 0;
  questReleaseNG = 0;
  v33 = 0;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v18 = (_QWORD *)sub_1C3E60C(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v18 )
    goto LABEL_73;
  v19 = v18[3];
  if ( !(_DWORD)v19 || (v18[4] = Instance, (_DWORD)v19 == 1) || (v18[5] = v16, (unsigned int)v19 <= 2) )
    sub_1C3E7C8(Instance, v10);
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
  if ( QuestEntity__HasFlag(questEnt, 0x800000, 0) )
  {
    v23 = 0;
    goto LABEL_55;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0);
  if ( HasFlag )
    v22 = 3;
  else
    v22 = 1;
  if ( v11 || HasFlag )
  {
    v23 = !HasFlag;
    goto LABEL_55;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0) > Time
    && QuestEntity__getNoticeAt(questEnt, 0) <= Time )
  {
    goto LABEL_53;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_73;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_73;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
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
                  &v33,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0) )
            goto LABEL_54;
          Instance = (int64_t)v33;
          if ( !v33 )
            goto LABEL_73;
          if ( !UserQuestEntity__HasStatus(v33, 8, 0) )
            goto LABEL_54;
LABEL_53:
          v23 = 0;
          v22 = 2;
          goto LABEL_55;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v26);
  if ( !Instance )
    goto LABEL_73;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_53;
  }
LABEL_54:
  v23 = 0;
  v22 = 0;
LABEL_55:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
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
      MapControl_QuestInfo__SetDispType_36222008(questInfo, 2, questReleaseNG, 0);
      goto LABEL_69;
    }
LABEL_73:
    sub_1C3E7C0(Instance, v10);
  }
  if ( !questInfo )
    goto LABEL_73;
  questInfo->fields.dispType = v30;
LABEL_69:
  if ( v29 )
    v31 = v29 != 2;
  else
    v31 = v23;
  questInfo->fields.touchType = v31;
  return v30;
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

  return QuestTree__CheckSpotCond_36678544(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckSpotCond_36678544(
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
  struct System_Threading_CancellationTokenSource_o *v45; // x8
  QuestAfterAction_o *v46; // x20
  int32_t v47; // w23
  unsigned __int64 v48; // x24
  int32_t v49; // w22
  int32_t v50; // w21
  int32_t v51; // w20
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

  if ( (byte_4C53B43 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C53B43 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
      v24 = sub_1C8EC78(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C8EC78(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
                                         0);
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
      v62 = 0;
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
                                           0);
        LODWORD(m_CancellationTokenSource) = v60->fields.m_CancellationTokenSource;
        ++v62;
        v61 += (unsigned __int8)Instance & 1;
        if ( (__int64)v62 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v41[1].klass, IsExistCommand, 0);
              if ( v40 >= v38->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C3E7C0(Instance, v16);
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
                                           0);
        if ( !Instance )
          goto LABEL_209;
        v64 = Instance->fields.m_CancellationTokenSource;
        v65 = Instance;
        if ( (int)v64 >= 1 )
        {
          v47 = 0;
          v66 = 0;
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
                                               0);
            LODWORD(v64) = v65->fields.m_CancellationTokenSource;
            ++v66;
            v47 += (unsigned __int8)Instance & 1;
            if ( (__int64)v66 >= (int)v64 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1C3E7C8(Instance, v16);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
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
      v55 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v13) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0);
      return (unsigned __int8)v13 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0);
      if ( !Instance )
        goto LABEL_209;
      v45 = Instance->fields.m_CancellationTokenSource;
      v46 = Instance;
      if ( (int)v45 < 1 )
        goto LABEL_188;
      v47 = 0;
      v48 = 0;
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
                                           0);
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
      LOBYTE(v13) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0);
      return (unsigned __int8)v13 & 1;
    case 13:
      v50 = targetId / 100;
      v51 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventRaceGoalScriptPlayed(v50, v51, targetValue, 0);
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
      LOBYTE(v13) = CondType__IsMissionClearOnly(targetId, 0);
      return (unsigned __int8)v13 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetValue;
      v53 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)((char *)&dword_0 + 1), v16);
      if ( !Instance )
        goto LABEL_209;
      v54 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
      if ( v54 < 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v52 = targetValue;
        v53 = 113;
LABEL_199:
        LOBYTE(v13) = CondType__IsOpen(v53, targetId, v52, 0, 0, 0);
      }
      else
      {
        LOBYTE(v13) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v54, 1, 0);
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

  return QuestTree__CheckSpotCond_36678544(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_4C53B3E & 1) == 0 )
  {
    sub_1C3E564(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C53B3E = 1;
  }
  v7 = sub_1C3E7B0(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
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
  if ( (byte_4C53B41 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4C53B41 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_42583184((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C3E7C0(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C3E7C0(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C3E7C0(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1C3E7C0(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1C3E7C0(0, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v23 )
          sub_1C3E7C0(0, v24);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_41414896; // x0
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

  if ( (byte_4C53B42 & 1) == 0 )
  {
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C53B42 = 1;
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
    sub_1C3E7C0(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_41414896 = NetworkManager__getTime_41414896(v10, 0);
  value = questReleaseEnt->fields.value;
  v13 = Time_41414896;
  dateData = NetworkManager__getDateTime_41415676(Time_41414896 - 3600 * value, 0).fields._dateData;
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
    dateData = NetworkManager__getDateTime_41415676(v17, 0).fields._dateData;
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

  if ( (byte_4C53B37 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C3E564(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C3E564(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C3E564(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__);
    sub_1C3E564(&Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__);
    sub_1C3E564(&QuestTree___c_TypeInfo);
    byte_4C53B37 = 1;
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
    _9__39_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__39_0, v8, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__39_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__39_0,
                                                               (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_1C3E7C0(mapControlRootInfo, method);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v14 )
      break;
    current = (MapControl_WarInfo_o *)v30.fields._current;
    if ( !v30.fields._current )
      sub_1C3E7C0(v14, v15);
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
        _9__39_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__39_1, v22, Method_QuestTree___c__GetLatestGrandWarInfo_b__39_1__, 0);
        v23 = QuestTree___c_TypeInfo->static_fields;
        v23->__9__39_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__39_1;
        sub_1C3E508((CGThumbnailListItem_o *)&v23->__9__39_1, (int32_t)_9__39_1, v24, v25);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                          v13,
                                          (System_Func_TSource__bool__o *)_9__39_1,
                                          (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4C53B36 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C3E564(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C3E564(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__);
    sub_1C3E564(&QuestTree___c_TypeInfo);
    byte_4C53B36 = 1;
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
    _9__38_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C3E7C0(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C3E7C0(v13, v14);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4C53B2C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1C3E564(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass24_0_TypeInfo);
    byte_4C53B2C = 1;
  }
  v5 = sub_1C3E7B0(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1C3E7C0(QuestInfo, v5);
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

  if ( (byte_4C53B2F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C53B2F = 1;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C3E7C0(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C3E7C0(0, v12);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v48.fields._current,
                                                              0);
    if ( !SpotList )
      sub_1C3E7C0(0, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      SpotList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1C3E7C0(0, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v47.fields._current,
                                                                              0,
                                                                              0);
      if ( !v9 )
        sub_1C3E7C0(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v18, v9, v19);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C3E7C0(0, v22);
    v23 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v48.fields._current,
                                                         0);
    if ( !v23 )
      sub_1C3E7C0(0, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v23,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (MapControl_SpotInfo_o *)v47.fields._current;
      if ( !v47.fields._current )
        sub_1C3E7C0(v25, v26);
      if ( HIDWORD(v47.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C3E7C0(0, v29);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v30 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v30 )
        sub_1C3E7C0(0, v31);
      v44 = v17;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v30,
        (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = 0;
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v46,
                (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C3E7C0(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v46.fields._current,
                 (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v21 )
            sub_1C3E7C0(Item, v36);
          v38 = System_Collections_Generic_List_int___Contains(
                  v21,
                  Item,
                  (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1C3E7C0(v38, v39);
            size = v21->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v37,
                *(const MethodInfo_379843C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
        (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v44 - v32 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_4C53B32 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C53B32 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C3E7C0(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_1C3E7C0(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C3E7C0(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_1C3E7C0(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C3E7C0(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C3E7C0(0, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0);
          if ( !v25 )
            sub_1C3E7C0(0, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C3E7C0(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1C3E7C0(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1C3E7C0(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_379843C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
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
            (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C3E7C0(v20, v21);
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

  if ( (byte_4C53B2D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C3E564(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass25_0_TypeInfo);
    byte_4C53B2D = 1;
  }
  v5 = sub_1C3E7B0(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4C53B45 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4C53B45 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C3E7C0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    allQuestInfoList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C3E7C0(v8, v9);
    if ( LODWORD(v19.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1C3E7C0(v8, v9);
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C3E7C0(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)current;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)current, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C53B31 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53B31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v5);
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

  if ( (byte_4C53B2B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C3E564(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4C53B2B = 1;
  }
  v5 = sub_1C3E7B0(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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

  if ( (byte_4C53B30 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1C3E564(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__);
    sub_1C3E564(&QuestTree___c__DisplayClass31_0_TypeInfo);
    sub_1C3E564(&QuestTree___c_TypeInfo);
    byte_4C53B30 = 1;
  }
  v4 = sub_1C3E7B0(QuestTree___c__DisplayClass31_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1C3E508((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v11, v12, v13);
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
      _9__31_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v17, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v19, v20);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v14 )
    {
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C3E7C0(Mine, mapId);
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
      *(const MethodInfo_379843C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v14->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v25 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapInfo__TypeInfo);
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
                                                                    (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4C53B34 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C3E564(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass35_0_TypeInfo);
    byte_4C53B34 = 1;
  }
  v5 = sub_1C3E7B0(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C3E7C0(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4C53B27 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___78160832);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4C53B27 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v4,
    allWarInfoList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___78160832);
  if ( !v4 )
    sub_1C3E7C0(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_37B6D8C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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

  if ( (byte_4C53B28 & 1) == 0 )
  {
    sub_1C3E564(&QuestTree__Init_d__17_TypeInfo);
    byte_4C53B28 = 1;
  }
  v5 = sub_1C3E7B0(QuestTree__Init_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4C53B3F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4C53B3F = 1;
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
    sub_1C3E7C0(mapControlRootInfo, method);
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

  if ( (byte_4C53B39 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53B39 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_36673080(this, (WarEntity_o *)entity, v7);
}


bool QuestTree__IsActiveEventWar_36673080(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4C53B3A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&long___TypeInfo);
    this = (QuestTree_o *)sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C53B3A = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1C3E60C(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_1C3E7C0(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C3E7C8(this, warEnt);
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
  __int64 v8; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v10; // x21
  WarEntity_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4C53B38 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C53B38 = 1;
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
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_1C3E7C0(Mine, v8);
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
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_36673080(this, v11, v12) )
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

  if ( (byte_4C53B29 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53B29 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
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

  if ( (byte_4C53B33 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C53B33 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_1C3E7C0(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1C3E7C0(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1C3E7C0(v10, v11);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v12 && v16 == 6;
  return (char)MapInfoByMapID;
}


bool QuestTree__IsSpotSatisfyingActiveCond(QuestTree_o *this, SpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1C3E7C0(this, 0);
  return QuestTree__CheckSpotCond_36678544(
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
    sub_1C3E7C0(this, 0);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_36678544(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_36678544(
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

  if ( (byte_4C53B46 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C53B46 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C3E7C0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1C3E7C0(v10, v11);
    if ( !v10 )
      sub_1C3E7C0(0, v11);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4C53B35 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C53B35 = 1;
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
    sub_1C3E7C0(QuestInfoByWarId, v6);
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
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1C3E7C0(v10, v11);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4C53B3B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&SpotEntity_TypeInfo);
    byte_4C53B3B = 1;
  }
  v6 = sub_1C3E7B0(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)name, v9, v10);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8EC78(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8EC78(v12);
  v15 = **(UnityEngine_Object_o ***)(v14 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C3E7C0(Instance, v8);
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

  v4 = QuestTree__CheckMapGimmickCond_36675632(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C3E7C0(v4, v5);
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
    sub_1C3E7C0(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36678544(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_36678544(
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
    sub_1C3E7C0(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_36678544(
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
    sub_1C3E7C0(this, nowTime);
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

  if ( (byte_4C53B2A & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53B2A = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
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
  if ( (byte_4C53B26 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C53B26 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4C53B3C & 1) == 0 )
  {
    sub_1C3E564(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
    byte_4C53B3C = 1;
  }
  v5 = sub_1C3E7B0(QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4C53B3D & 1) == 0 )
  {
    sub_1C3E564(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
    byte_4C53B3D = 1;
  }
  v7 = sub_1C3E7B0(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 72), (int32_t)endCallback, v10, v11);
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

  if ( (byte_4C53B2E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1C3E564(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass29_0_TypeInfo);
    byte_4C53B2E = 1;
  }
  v5 = sub_1C3E7B0(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_4C53B4D & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C3E564(&BlankEarthSpotMaster_TypeInfo);
    byte_4C53B4D = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
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
      sub_1C3E7C8(this, method);
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
          sub_1C3E508(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C3E7C0(this, method);
  }
  this->klass = 0;
  sub_1C3E508((CGThumbnailListItem_o *)this, 0, v2, v3);
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

  if ( (byte_4C53B4E & 1) == 0 )
  {
    sub_1C3E564(&QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    byte_4C53B4E = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__46_o *)sub_1C3E7B0(QuestTree__EnumerateBlankEarthSpotInfo_d__46_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.blankEarthSpotMaster, (int32_t)_3__blankEarthSpotMaster, v12, v13);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C53B4F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__17_o *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53B4F = 1;
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
        if ( !byte_4C53BD6 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53BD6 = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1C8EC78(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1C8EC78(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v12);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v13);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C3E508(p__2__current, (int32_t)v14, v16, v17);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C3E7C0(this, method);
      }
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C8EC78(v5);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1C8EC78(v5);
      v21 = **(UnityEngine_Object_o ***)(v20 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C53B48 & 1) == 0 )
  {
    sub_1C3E564(&QuestTree___c_TypeInfo);
    byte_4C53B48 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__39_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4C53B49 & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C53B49 = 1;
  }
  if ( !info )
    sub_1C3E7C0(this, info);
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
    sub_1C3E7C0(this, 0);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__45_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C53B4A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C53B4A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_1C3E7C0(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass45_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass45_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C53B4B & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_3_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C53B4B = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_1C3E7C0(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C53B4C & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass45_6_o *)sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C53B4C = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass45_6_o *)v4->fields.spotInfoList) == 0 )
    sub_1C3E7C0(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass45_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass45_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
  QuestEntity_o *v169; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass44_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v174; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  Il2CppObject *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  int32_t MapID; // w0
  const MethodInfo *v182; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  int v193; // w25
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v196; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  const MethodInfo *v200; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v202; // x4
  int v203; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v206; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v208; // x9
  struct MapControl_MapInfo_o *v209; // x9
  bool v210; // w8
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  Il2CppObject *v213; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v214; // x21
  int v215; // w19
  int v216; // w22
  __int64 v217; // x8
  __int64 v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  __int64 v221; // x8
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v225; // x22
  Il2CppObject *v226; // x23
  struct QuestTree___c_StaticFields *v227; // x0
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
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  CGThumbnailListItem_o *v244; // x27
  int v245; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v246; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v247; // [xsp+10h] [xbp-B0h]
  unsigned int v248; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *v249; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v251; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v255; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4C53B50 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C3E564(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C3E564(&MapControl_MapInfo_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&MapControl_SpotInfo_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__);
    sub_1C3E564(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1C3E564(&QuestTree___c__DisplayClass44_0_TypeInfo);
    sub_1C3E564(&QuestTree___c_TypeInfo);
    sub_1C3E564(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C3E564(&MapControl_WarInfo_TypeInfo);
    byte_4C53B50 = 1;
  }
  v255 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v251 = 0;
  mapGimmickInfo = 0;
  value = 0;
  _4__this = v2->fields.__4__this;
  v249 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, method);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v5, v6);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._mapMaster_5__3, (int32_t)MasterData_object, v8, v9);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v10 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v10;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v10, v11, v12);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v13 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v13;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v13, v14, v15);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v16;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._questMaster_5__6, (int32_t)v16, v17, v18);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v19 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v19;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v19, v20, v21);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v22 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v22;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v22, v23, v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v25;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v25, v26, v27);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v28;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v28, v29, v30);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v31;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMaster_5__11, (int32_t)v31, v32, v33);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v34;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v34, v35, v36);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v37;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v37, v38, v39);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v40 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v40;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v40, v41, v42);
      v43 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v43,
        (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v43;
      sub_1C3E508(
        (CGThumbnailListItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_33B21DC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._warList_5__16, (int32_t)Entitys, v47, v48);
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
                                                                 (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
               &v255,
               (int32_t)this,
               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v255;
          if ( !v255 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v255, 0x2000000, 0) )
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
                  (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v69 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C3E60C(long___TypeInfo, 3);
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
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = v75 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v78 + 32) = v59;
      sub_1C3E508((CGThumbnailListItem_o *)(v78 + 32), (int32_t)v59, v60, v61);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapMaster__getList((MapMaster_o *)this, id, 0);
    if ( !this )
      goto LABEL_299;
    v81 = this;
    v247 = this->fields.__2__current;
    if ( (int)v247 >= 1 )
    {
      v82 = 0;
      v246 = this;
      while ( 1 )
      {
        v83 = *((_QWORD *)&v81->fields.__4__this + (int)v82);
        v248 = v82;
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v92 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v92[4] = (Il2CppClass *)v91;
          sub_1C3E508((CGThumbnailListItem_o *)(v92 + 4), (int32_t)v91, v85, v86);
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
                                                                   v249->fields._blankEarthSpotMaster_5__5,
                                                                   v93);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249->fields._spotRoadMaster_5__12;
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
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
            }
            else
            {
              v126 = v123 + 8 * v125;
              LODWORD(this->fields.__2__current) = v125 + 1;
              *(_QWORD *)(v126 + 32) = v120;
              sub_1C3E508((CGThumbnailListItem_o *)(v126 + 32), (int32_t)v120, v121, v122);
            }
            if ( v113 == v114 )
              break;
            if ( ++v114 >= LODWORD(v112->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v2 = v249;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249->fields._mapGimmickMaster_5__13;
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
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
            }
            else
            {
              v139 = v136 + 8 * v138;
              LODWORD(this->fields.__2__current) = v138 + 1;
              *(_QWORD *)(v139 + 32) = v132;
              sub_1C3E508((CGThumbnailListItem_o *)(v139 + 32), (int32_t)v132, v134, v135);
            }
            if ( v129 == v130 )
              break;
            if ( (unsigned int)++v130 >= LODWORD(v128->fields.__2__current) )
              goto LABEL_150;
          }
        }
        v81 = v246;
        v82 = v248 + 1;
        if ( v248 + 1 == (_DWORD)v247 )
          goto LABEL_126;
        if ( v82 >= LODWORD(v246->fields.__2__current) )
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = v106 + 8 * v108;
          LODWORD(this->fields.__2__current) = v108 + 1;
          *(_QWORD *)(v109 + 32) = v103;
          sub_1C3E508((CGThumbnailListItem_o *)(v109 + 32), (int32_t)v103, v104, v105);
        }
        if ( v96 == i )
          goto LABEL_93;
      }
LABEL_150:
      sub_1C3E7C8(this, method);
    }
LABEL_126:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, 0, v79, v80);
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
    v142 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v142, v143, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Comparison_MapControl_WarInfo__o *)v142;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)v142, v145, v146);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58421028(
    allWarInfoList,
    v142,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v147 = (Il2CppObject *)sub_1C3E7B0(QuestTree___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v147, 0);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass44_0_o *)v147;
  p__8__1 = &v2->fields.__8__1;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v147, v149, v150);
  v151 = v2->fields._nowTime_5__17;
  v152 = (MapControl_WarInfo_o *)sub_1C3E7B0(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v152, v151, 0);
  v2->fields._warInfo_5__20 = v152;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, (int32_t)v152, v153, v154);
  v155 = (MapControl_MapInfo_o *)sub_1C3E7B0(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v155, 0);
  v2->fields._mapInfo_5__21 = v155;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v155, v156, v157);
  v158 = (MapControl_SpotInfo_o *)sub_1C3E7B0(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v158, 0);
  v2->fields._spotInfo_5__22 = v158;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v158, v159, v160);
  v161 = (WarEntity_o *)sub_1C3E7B0(WarEntity_TypeInfo);
  WarEntity___ctor(v161, 0);
  v2->fields._warEnt_5__23 = v161;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, (int32_t)v161, v162, v163);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v164 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v164;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v164, v165, v166);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
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
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v169 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v251 = 0;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
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
           &v251,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v251;
      if ( !v251 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v251, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__getSpotId_42518288(v169, QuestPhase + 1, 0);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v174 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass44_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C3E508((CGThumbnailListItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v176, v177);
      }
      if ( !v174 )
        goto LABEL_299;
      v178 = System_Collections_Generic_List_object___Find(
               v174,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v249;
      v249->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v178;
      sub_1C3E508((CGThumbnailListItem_o *)&v249->fields._spotInfo_5__22, (int32_t)v178, v179, v180);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0);
      if ( v249->fields._mapInfoNow_5__27 != MapID )
      {
        v249->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v182);
        v249->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C3E508((CGThumbnailListItem_o *)&v249->fields._mapInfo_5__21, (int32_t)MapInfoByMapID, v184, v185);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v249->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v249->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0);
          else
            ChildByWarID = 0;
          v249->fields._warInfo_5__20 = ChildByWarID;
          sub_1C3E508((CGThumbnailListItem_o *)&v249->fields._warInfo_5__20, (int32_t)ChildByWarID, v186, v187);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v249->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
          v249->fields._warEnt_5__23 = Mine;
          sub_1C3E508((CGThumbnailListItem_o *)&v249->fields._warEnt_5__23, (int32_t)Mine, v191, v192);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v251 )
      goto LABEL_198;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v251;
    if ( !v251 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v251, 8, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_186;
    if ( !v251 )
      goto LABEL_299;
    if ( v251->fields.challengeNum >= 1 )
    {
LABEL_186:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v251;
    if ( !v251 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v251, 0) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_198:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0);
      v193 = 0;
      goto LABEL_199;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v251 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v251->fields.questId,
                                                               0,
                                                               0);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_299;
    v193 = (int)this;
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
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_299;
    v196 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v194, v195);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v196->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1C3E508((CGThumbnailListItem_o *)&v196->fields._questPhaseMaster_5__7, (int32_t)spotInfo_5__22, v198, v199);
    if ( !_4__this )
      goto LABEL_299;
    v196->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v196,
                                                                          v200);
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
           (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_213:
        v196->fields.__4__this = 0;
LABEL_217:
        v203 = 1;
        goto LABEL_218;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v169, (MapControl_QuestInfo_o *)v196, v2->fields._warInfoNow_5__28, v202) != 1 )
      goto LABEL_217;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    v203 = 0;
LABEL_218:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v196, 0) )
    {
      if ( ((v193 | v203) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v196, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)sub_1C3E60C(long___TypeInfo, 1);
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
                                   (const MethodInfo_33B2534 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v251 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v251, 0) )
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
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v196->fields.__1__state, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v196, 0) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v196,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v206 = v2->fields._spotInfo_5__22;
          if ( !v206 )
            goto LABEL_299;
          v206->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v196,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v208 = v2->fields._spotInfo_5__22;
        if ( !v208 )
          goto LABEL_299;
        v208->fields._IsNext_k__BackingField = 1;
        v209 = v2->fields._mapInfo_5__21;
        if ( !v209 )
          goto LABEL_299;
        v209->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v169, 0x8000000000LL, 0) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
      }
    }
    if ( v251 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)UserQuestEntity__HasStatus(v251, 8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v251 )
          goto LABEL_299;
        v210 = v251->fields.challengeNum == 0;
      }
      else
      {
        v210 = 0;
      }
    }
    else
    {
      v210 = 1;
    }
    LOBYTE(v196->fields.__8__1) = v210;
    HIDWORD(v196->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v196->fields.endCallback) = QuestPickupMaster__GetPriority(
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
    v213 = this->fields.__2__current;
    v214 = this;
    v215 = (_DWORD)v213 - 1;
    if ( (int)v213 >= 1 )
    {
      v216 = 0;
      while ( 1 )
      {
        v217 = *((_QWORD *)&v214->fields.__4__this + v216);
        if ( !v217 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v196,
                                                                   *(_DWORD *)(v217 + 16),
                                                                   *(_DWORD *)(v217 + 20),
                                                                   0);
        if ( v215 == v216 )
          goto LABEL_262;
        if ( (unsigned int)++v216 >= LODWORD(v214->fields.__2__current) )
          goto LABEL_150;
      }
LABEL_299:
      sub_1C3E7C0(this, method);
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v218 = *(_QWORD *)&this->fields.__1__state;
    v219 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v218 )
      goto LABEL_299;
    v220 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v220 >= *(_DWORD *)(v218 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v196,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
    }
    else
    {
      v221 = v218 + 8 * v220;
      LODWORD(this->fields.__2__current) = v220 + 1;
      *(_QWORD *)(v221 + 32) = v196;
      sub_1C3E508((CGThumbnailListItem_o *)(v221 + 32), (int32_t)v196, v211, v212);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0;
      v244 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(v244, 0, v222, v223);
      v245 = 2;
      goto LABEL_297;
    }
LABEL_269:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
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
  v225 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 48LL);
  if ( !v225 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)QuestTree___c_TypeInfo;
    }
    v226 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v225 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v225, v226, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__44_1__, 0);
    v227 = QuestTree___c_TypeInfo->static_fields;
    v227->__9__44_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v225;
    sub_1C3E508((CGThumbnailListItem_o *)&v227->__9__44_1, (int32_t)v225, v228, v229);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_58421028(
    allQuestInfoList,
    v225,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v230, v231);
  v2->fields._warInfo_5__20 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._warInfo_5__20, 0, v232, v233);
  v2->fields._mapInfo_5__21 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._mapInfo_5__21, 0, v234, v235);
  v2->fields._spotInfo_5__22 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._spotInfo_5__22, 0, v236, v237);
  v2->fields._warEnt_5__23 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._warEnt_5__23, 0, v238, v239);
  v2->fields._userQuestMaster_5__24 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._userQuestMaster_5__24, 0, v240, v241);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0;
    v244 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1C3E508(v244, 0, v242, v243);
    v245 = 3;
LABEL_297:
    LODWORD(v244[-1].fields._ThumbnailSpritePath_k__BackingField) = v245;
    return 1;
  }
LABEL_282:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarAddMaster___);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  int32_t v110; // w2
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
  SpotRoadEntity_o *v162; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v164; // x24
  __int64 v165; // x0
  __int64 v166; // x1
  unsigned int v167; // w0
  __int64 v168; // x1
  System_Collections_Generic_List_object__o *v169; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v171; // x21
  const MethodInfo *v172; // x3
  __int64 v173; // x1
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  System_Collections_Generic_List_object__o *v176; // x0
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x8
  struct QuestTree___c__DisplayClass45_1_o *v181; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v183; // x0
  __int64 v184; // x1
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  MapGimmickEntity_array *v187; // x20
  int v188; // w24
  unsigned int j; // w25
  __int64 v190; // x21
  __int64 v191; // x0
  __int64 v192; // x1
  MapGimmickEntity_o *v193; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v195; // x23
  __int64 v196; // x0
  __int64 v197; // x1
  unsigned int v198; // w0
  __int64 v199; // x1
  System_Collections_Generic_List_object__o *v200; // x0
  MapControl_MapInfo_o *v201; // x0
  MapControl_MapGimmickInfo_o *v202; // x21
  const MethodInfo *v203; // x2
  __int64 v204; // x1
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  System_Collections_Generic_List_object__o *v207; // x0
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  Il2CppClass **v211; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v212; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v213; // x8
  int v214; // w9
  CGThumbnailListItem_o *p_mapInfo_5__16; // x8
  __int64 v216; // x0
  __int64 v217; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v218; // x8
  int32_t max_length; // w10
  int32_t v220; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v222; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v224; // x0
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v228; // x10
  MapEntity_o *v229; // x9
  struct QuestTree___c__DisplayClass45_1_o *v230; // x22
  struct MapControl_WarInfo_o *v231; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  struct MapControl_WarInfo_o *v236; // x8
  System_Collections_Generic_List_object__o *v237; // x0
  struct QuestTree___c__DisplayClass45_1_o *v238; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  __int64 v243; // x0
  __int64 v244; // x1
  System_Collections_Generic_List_object__o *v245; // x0
  struct QuestTree___c__DisplayClass45_1_o *v246; // x8
  MapControl_WarInfo_o *v247; // x0
  struct MapControl_MapInfo_o *v248; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v249; // x0
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  __int64 v252; // x1
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  System_Collections_Generic_List_object__o *v255; // x0
  struct System_Object_array *v256; // x8
  Il2CppObject *v257; // x1
  _QWORD *v258; // x9
  __int64 v259; // x10
  Il2CppClass **v260; // x8
  __int64 v261; // x0
  __int64 v262; // x1
  System_Collections_Generic_List_object__o *v263; // x20
  QuestTree___c_c *v264; // x8
  System_Comparison_T__o *_9__45_2; // x21
  Il2CppObject *v266; // x22
  struct QuestTree___c_StaticFields *v267; // x0
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v270; // x0
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v273; // x0
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v276; // x0
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  Il2CppObject *v279; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v280; // x0
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  int64_t v283; // x21
  MapControl_WarInfo_o *v284; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v285; // x0
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  MapControl_MapInfo_o *v288; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v289; // x0
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  MapControl_SpotInfo_o *v292; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v293; // x0
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  WarEntity_o *v296; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v297; // x0
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  __int64 v300; // x1
  DataManager_o *v301; // x0
  Il2CppObject *v302; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v303; // x0
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  Il2CppObject *Master_object; // x0
  __int64 v307; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v308; // x8
  struct QuestTree___c__DisplayClass45_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v311; // x1
  int32_t v312; // w9
  struct QuestTree___c__DisplayClass45_6_o *v313; // x20
  System_Collections_Generic_List_int__o *v314; // x21
  __int64 v315; // x0
  __int64 v316; // x1
  int32_t v317; // w2
  const MethodInfo *v318; // x3
  __int64 v319; // x1
  System_Collections_Generic_List_object__o *v320; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v321; // x9
  __int128 v322; // q0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  const MethodInfo *v326; // x1
  bool v327; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v328; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v331; // x1
  int32_t v332; // w2
  const MethodInfo *v333; // x3
  struct QuestTree___c__DisplayClass45_0_o *v334; // x9
  struct QuestTree___c__DisplayClass45_6_o *v335; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v338; // x9
  _QWORD *v339; // x10
  __int64 v340; // x11
  unsigned __int64 v341; // t2
  __int64 v342; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v343; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v345; // x20
  Il2CppObject *v346; // x22
  System_Func_object__bool__o *v347; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v348; // x0
  System_Object_array *v349; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v350; // x0
  int32_t v351; // w2
  const MethodInfo *v352; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v353; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass45_1_o *v356; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v358; // x0
  __int64 v359; // x1
  const MethodInfo *v360; // x3
  SpotEntity_array *v361; // x20
  int v362; // w25
  unsigned int k; // w26
  __int64 v364; // x21
  __int64 v365; // x0
  __int64 v366; // x1
  SpotEntity_o *v367; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v369; // x24
  __int64 v370; // x0
  __int64 v371; // x1
  unsigned int v372; // w0
  __int64 v373; // x1
  System_Collections_Generic_List_object__o *v374; // x0
  MapControl_MapInfo_o *v375; // x0
  MapControl_SpotInfo_o *v376; // x21
  const MethodInfo *v377; // x3
  __int64 v378; // x1
  int32_t v379; // w2
  const MethodInfo *v380; // x3
  System_Collections_Generic_List_object__o *v381; // x0
  struct System_Object_array *v382; // x8
  _QWORD *v383; // x9
  __int64 v384; // x10
  Il2CppClass **v385; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v386; // x0
  System_Object_array *v387; // x0
  __int64 v388; // x1
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v391; // x20
  __int64 v392; // x21
  QuestTree___c_c *v393; // x8
  System_Func_object__int__o *_9__45_6; // x22
  Il2CppObject *v395; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v397; // w2
  const MethodInfo *v398; // x3
  System_Collections_Generic_IEnumerable_T__o *v399; // x23
  System_Collections_Generic_HashSet_int__o *v400; // x22
  __int64 v401; // x0
  __int64 v402; // x1
  int32_t v403; // w2
  const MethodInfo *v404; // x3
  System_Collections_Generic_List_T__o *v405; // x22
  System_Func_object__bool__o *v406; // x23
  __int64 v407; // x1
  System_Collections_Generic_List_object__o *v408; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v409; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v412; // x20
  struct QuestTree___c__DisplayClass45_6_o *v413; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v415; // x0
  struct QuestTree___c__DisplayClass45_6_o *v416; // x8
  __int64 v417; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *SpotId_42518288; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v421; // x22
  struct QuestTree___c__DisplayClass45_6_o *v422; // x25
  System_Collections_Generic_List_object__o *v423; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v425; // w2
  const MethodInfo *v426; // x3
  Il2CppObject *v427; // x0
  int32_t v428; // w2
  const MethodInfo *v429; // x3
  __int64 v430; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v432; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v434; // x0
  int32_t v435; // w2
  const MethodInfo *v436; // x3
  __int64 v437; // x1
  MapControl_MapInfo_o *v438; // x0
  __int64 v439; // x1
  int32_t v440; // w2
  const MethodInfo *v441; // x3
  MapEntity_o *v442; // x8
  MapControl_WarInfo_o *ChildByWarID; // x1
  __int64 v444; // x1
  MapControl_WarInfo_o *v445; // x0
  struct WarEntity_o *v446; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v447; // x0
  int32_t v448; // w2
  const MethodInfo *v449; // x3
  struct QuestTree___c__DisplayClass45_6_o *v450; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v453; // w2
  const MethodInfo *v454; // x3
  unsigned int v455; // w0
  __int64 v456; // x1
  System_Collections_Generic_List_object__o *v457; // x0
  MapControl_WarInfo_o *v458; // x0
  __int64 v459; // x1
  _BOOL8 HasStatus; // x0
  __int64 v461; // x1
  MapControl_WarInfo_o *v462; // x0
  WarEntity_o *v463; // x0
  __int64 v464; // x1
  int v465; // w23
  bool v466; // cc
  __int64 v467; // x1
  struct QuestTree___c__DisplayClass45_6_o *v468; // x9
  MapControl_WarInfo_o *v469; // x0
  struct QuestTree___c__DisplayClass45_6_o *v470; // x8
  MapControl_SpotInfo_o *v471; // x0
  MapControl_QuestInfo_o *v472; // x0
  int32_t v473; // w2
  const MethodInfo *v474; // x3
  struct MapControl_WarInfo_o *v475; // x1
  MapControl_QuestInfo_o *v476; // x22
  int32_t v477; // w8
  struct MapControl_SpotInfo_o *v478; // x1
  int32_t v479; // w2
  const MethodInfo *v480; // x3
  const MethodInfo *v481; // x2
  __int64 v482; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v485; // x1
  struct WarEntity_o *v486; // x8
  struct QuestTree___c__DisplayClass45_6_o *v487; // x9
  struct WarEntity_o *v488; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v489; // x0
  _BOOL8 v490; // x0
  __int64 v491; // x1
  const MethodInfo *v492; // x4
  struct QuestTree___c__DisplayClass45_6_o *v493; // x8
  __int64 v494; // x1
  MapControl_WarInfo_o *v495; // x0
  int v496; // w24
  __int64 v497; // x1
  __int64 v498; // x1
  Il2CppObject *v499; // x23
  __int64 v500; // x0
  struct QuestTree___c__DisplayClass45_6_o *v501; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v503; // x0
  MapControl_SpotInfo_o *v504; // x0
  QuestEntity_o *v505; // x0
  __int64 v506; // x1
  _BOOL8 HasFlag; // x0
  __int64 v508; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v509; // x8
  struct MapControl_SpotInfo_o *v510; // x9
  struct MapControl_MapInfo_o *v511; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v513; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v514; // x8
  struct MapControl_SpotInfo_o *v515; // x9
  struct MapControl_MapInfo_o *v516; // x8
  MapControl_SpotInfo_o *v517; // x0
  UserQuestEntity_o *v518; // x0
  bool v519; // w8
  struct QuestTree___c__DisplayClass45_6_o *v520; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v523; // x1
  struct QuestTree___c__DisplayClass45_6_o *v524; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v526; // x0
  __int64 v527; // x1
  int32_t v528; // w2
  const MethodInfo *v529; // x3
  _QWORD *v530; // x20
  __int64 v531; // x8
  int v532; // w21
  int v533; // w23
  __int64 v534; // x8
  System_Collections_Generic_List_object__o *v535; // x0
  struct System_Object_array *v536; // x8
  _QWORD *v537; // x9
  __int64 v538; // x10
  Il2CppClass **v539; // x8
  int32_t v540; // w2
  const MethodInfo *v541; // x3
  System_Collections_Generic_List_object__o *v542; // x20
  QuestTree___c_c *v543; // x8
  System_Comparison_T__o *_9__45_11; // x21
  Il2CppObject *v545; // x22
  struct QuestTree___c_StaticFields *v546; // x0
  int32_t v547; // w2
  const MethodInfo *v548; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v549; // x0
  int32_t v550; // w2
  const MethodInfo *v551; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v552; // x0
  int32_t v553; // w2
  const MethodInfo *v554; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v555; // x0
  int32_t v556; // w2
  const MethodInfo *v557; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v558; // x0
  int32_t v559; // w2
  const MethodInfo *v560; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v561; // x0
  int32_t v562; // w2
  const MethodInfo *v563; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v564; // x0
  int32_t v565; // w2
  const MethodInfo *v566; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v567; // x0
  int32_t v568; // w2
  const MethodInfo *v569; // x3
  Il2CppObject *v570; // x0
  __int64 v571; // x1
  int32_t v572; // w2
  const MethodInfo *v573; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v574; // x0
  EventStatusQuestMaster_o *v575; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v576[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v577; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o **v578; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v580; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v584; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *v586; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v586 = this;
  if ( (byte_4C53B51 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1C3E564(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C3E564(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C3E564(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1C3E564(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor___78114696);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&MapControl_MapInfo_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&MapControl_SpotInfo_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__);
    sub_1C3E564(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__);
    sub_1C3E564(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_0_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_1_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_2_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_3_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_4_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_5_TypeInfo);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1C3E564(&Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1C3E564(&QuestTree___c__DisplayClass45_6_TypeInfo);
    sub_1C3E564(&QuestTree___c_TypeInfo);
    sub_1C3E564(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)sub_1C3E564(&MapControl_WarInfo_TypeInfo);
    v4 = v586;
    byte_4C53B51 = 1;
  }
  v584 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v580 = 0;
  mapGimmickInfo = 0;
  v577 = 0;
  v578 = &v586;
  value = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C3E7B0(QuestTree___c__DisplayClass45_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v7 = v586;
      v586->fields.__8__2 = (struct QuestTree___c__DisplayClass45_0_o *)v6;
      sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.__8__2, (int32_t)v6, v8, v9);
      _8__2 = v586->fields.__8__2;
      if ( !_8__2 )
        sub_1C3E7C0(v10, v11);
      _8__2->fields.targetWarId = v586->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v14 = v586;
      v586->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C3E508((CGThumbnailListItem_o *)&v14->fields._dataManager_5__2, (int32_t)Instance, v15, v16);
      dataManager_5__2 = v586->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C3E7C0(0, v17);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapMaster___);
      v21 = v586->fields._dataManager_5__2;
      if ( !v21 )
        sub_1C3E7C0(0, v19);
      v22 = DataManager__GetMasterData_object_(
              v21,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___);
      v23 = v586;
      v586->fields._spotMaster_5__3 = (struct SpotMaster_o *)v22;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->fields._spotMaster_5__3, (int32_t)v22, v24, v25);
      v27 = v586->fields._dataManager_5__2;
      if ( !v27 )
        sub_1C3E7C0(0, v26);
      v28 = DataManager__GetMasterData_object_(
              v27,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v29 = v586;
      v586->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v28;
      sub_1C3E508((CGThumbnailListItem_o *)&v29->fields._blankEarthSpotMaster_5__4, (int32_t)v28, v30, v31);
      v33 = v586->fields._dataManager_5__2;
      if ( !v33 )
        sub_1C3E7C0(0, v32);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
      v35 = v586;
      v586->fields._questMaster_5__5 = (struct QuestMaster_o *)v34;
      sub_1C3E508((CGThumbnailListItem_o *)&v35->fields._questMaster_5__5, (int32_t)v34, v36, v37);
      v39 = v586->fields._dataManager_5__2;
      if ( !v39 )
        sub_1C3E7C0(0, v38);
      v40 = DataManager__GetMasterData_object_(
              v39,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v41 = v586;
      v586->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v40;
      sub_1C3E508((CGThumbnailListItem_o *)&v41->fields._questPhaseMaster_5__6, (int32_t)v40, v42, v43);
      v45 = v586->fields._dataManager_5__2;
      if ( !v45 )
        sub_1C3E7C0(0, v44);
      v47 = DataManager__GetMasterData_object_(
              v45,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
      v48 = v586->fields._dataManager_5__2;
      if ( !v48 )
        sub_1C3E7C0(0, v46);
      v50 = DataManager__GetMasterData_object_(
              v48,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v51 = v586->fields._dataManager_5__2;
      if ( !v51 )
        sub_1C3E7C0(0, v49);
      v53 = DataManager__GetMasterData_object_(
              v51,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v54 = v586->fields._dataManager_5__2;
      if ( !v54 )
        sub_1C3E7C0(0, v52);
      v575 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v54,
                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v56 = v586->fields._dataManager_5__2;
      if ( !v56 )
        sub_1C3E7C0(0, v55);
      v57 = DataManager__GetMasterData_object_(
              v56,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v58 = v586;
      v586->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v57;
      sub_1C3E508((CGThumbnailListItem_o *)&v58->fields._spotRoadMaster_5__7, (int32_t)v57, v59, v60);
      v62 = v586->fields._dataManager_5__2;
      if ( !v62 )
        sub_1C3E7C0(0, v61);
      v63 = DataManager__GetMasterData_object_(
              v62,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v64 = v586;
      v586->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v63;
      sub_1C3E508((CGThumbnailListItem_o *)&v64->fields._mapGimmickMaster_5__8, (int32_t)v63, v65, v66);
      v68 = v586->fields._dataManager_5__2;
      if ( !v68 )
        sub_1C3E7C0(0, v67);
      v69 = DataManager__GetMasterData_object_(
              v68,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v70 = v586;
      v586->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v69;
      sub_1C3E508((CGThumbnailListItem_o *)&v70->fields._questPickupMaster_5__9, (int32_t)v69, v71, v72);
      v73 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v73,
        (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v74 = v586;
      v586->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v73;
      sub_1C3E508(
        (CGThumbnailListItem_o *)&v74->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v73,
        v75,
        v76);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v586->fields._nowTime_5__11 = NetworkManager__getTime(0);
      v77 = (Il2CppObject *)sub_1C3E7B0(QuestTree___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor(v77, 0);
      v78 = v586;
      v586->fields.__8__1 = (struct QuestTree___c__DisplayClass45_1_o *)v77;
      sub_1C3E508((CGThumbnailListItem_o *)&v78->fields.__8__1, (int32_t)v77, v79, v80);
      v82 = v586->fields._dataManager_5__2;
      if ( !v82 )
        sub_1C3E7C0(0, v81);
      v83 = DataManager__GetMasterData_object_(
              v82,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v83 )
        sub_1C3E7C0(0, v84);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v83,
                                                                       (const MethodInfo_33B21DC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v86 = (Il2CppObject *)v586->fields.__8__2;
      v87 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v87,
        v86,
        Method_QuestTree___c__DisplayClass45_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v88 = System_Linq_Enumerable__SingleOrDefault_object__51604276(
              Entitys,
              (System_Func_TSource__bool__o *)v87,
              (const MethodInfo_3136B34 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v88 )
        sub_1C3E7C0(0, v89);
      _8__1 = v586->fields.__8__1;
      if ( !_8__1 )
        sub_1C3E7C0(v88, v89);
      klass_low = LODWORD(v88[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1C3E7C0(v88, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C3E7C0(0, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v94 = (Il2CppObject *)v586->fields.__8__1;
      v95 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v95,
        v94,
        Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_1C3E7C0(v96, v97);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v95,
                (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v99 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v100 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v100 )
          sub_1C3E7C0(0, v99);
        System_Collections_Generic_List_object___RemoveAt(
          v100,
          v99,
          (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v101 = v586->fields.__8__1;
      if ( !v101 )
        sub_1C3E7C0(Index, v99);
      v102 = _4__this->fields.mapControlRootInfo;
      if ( !v102 )
        sub_1C3E7C0(0, v99);
      v103 = MapControl_RootInfo__AddChild(v102, v101->fields.warId, v586->fields._nowTime_5__11, 0);
      v104 = v586;
      v586->fields._warInfo_5__14 = v103;
      sub_1C3E508((CGThumbnailListItem_o *)&v104->fields._warInfo_5__14, (int32_t)v103, v105, v106);
      warInfo_5__14 = v586->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C3E7C0(0, v107);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v112 = v586->fields._warInfo_5__14;
        if ( !v112 )
          sub_1C3E7C0(0, v109);
        EventId = MapControl_WarInfo__GetEventId(v112, 0);
        if ( !v47 )
          sub_1C3E7C0(EventId, v114);
        v115 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                 &entity,
                 EventId,
                 (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v115 )
        {
          if ( !entity )
            sub_1C3E7C0(v115, v109);
          v116 = v586;
          nowTime_5__11 = v586->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v118 = v586->fields._warInfo_5__14;
            if ( !v118 )
              sub_1C3E7C0(0, v109);
            MapControl_WarInfo__SetStatusCheckFlag(v118, 1, 0, 0);
            v116 = v586;
          }
          v119 = v116->fields._warInfo_5__14;
          if ( !v119 )
            sub_1C3E7C0(0, v109);
          v120 = MapControl_WarInfo__GetEventId(v119, 0);
          if ( !v50 )
            sub_1C3E7C0(v120, v121);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v50,
                 &v584,
                 v120,
                 (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v584 )
              sub_1C3E7C0(0, v122);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v584, 0x2000000, 0) )
            {
              if ( !entity )
                sub_1C3E7C0(0, v123);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v586->fields._nowTime_5__11, 0) )
              {
                v125 = v586->fields._warInfo_5__14;
                if ( !v125 )
                  sub_1C3E7C0(0, v124);
                v126 = MapControl_WarInfo__GetEventId(v125, 0);
                if ( !v53 )
                  sub_1C3E7C0(v126, (unsigned int)v126);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v53, v126, 0);
                if ( NowEntity )
                {
                  v129 = v586->fields._warInfo_5__14;
                  if ( !v129 )
                    sub_1C3E7C0(0, v127);
                  v130 = (unsigned int)MapControl_WarInfo__GetEventId(v129, 0);
                  if ( !v575 )
                    sub_1C3E7C0(0, v130);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v575,
                                        v130,
                                        NowEntity->fields.statusId,
                                        0);
                  v133 = v586->fields.__8__1;
                  if ( !v133 )
                    sub_1C3E7C0(MismatchQuestList, v132);
                  v134 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v586->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C3E7C0(0, v132);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v133->fields.warId,
                    v134,
                    (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v136 = v586->fields._nowTime_5__11;
          v137 = (_QWORD *)sub_1C3E60C(long___TypeInfo, 3);
          v138 = entity;
          if ( !entity )
            sub_1C3E7C0(v137, v109);
          if ( !v137 )
            sub_1C3E7C0(0, v109);
          v139 = v137[3];
          if ( !(_DWORD)v139 )
            sub_1C3E7C8(v137, v109);
          v137[4] = entity[5].klass;
          if ( (_DWORD)v139 == 1 )
            sub_1C3E7C8(v137, v109);
          v137[5] = v138[5].monitor;
          if ( (unsigned int)v139 <= 2 )
            sub_1C3E7C8(v137, v109);
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
        sub_1C3E7C0(0, v109);
      items = v143->fields._items;
      v145 = (Il2CppObject *)v586->fields._warInfo_5__14;
      v146 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v143->fields._version;
      if ( !items )
        sub_1C3E7C0(v143, v145);
      size = v143->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v143,
          v145,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
      else
      {
        v148 = &items->obj.klass + size;
        v143->fields._size = size + 1;
        v148[4] = (Il2CppClass *)v145;
        sub_1C3E508((CGThumbnailListItem_o *)(v148 + 4), (int32_t)v145, v110, v111);
      }
      v222 = v586->fields._warInfo_5__14;
      if ( !v222 )
        sub_1C3E7C0(v149, v150);
      if ( !MasterData_object )
        sub_1C3E7C0(v149, v150);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v222->fields.warId, 0);
      v224 = v586;
      v586->fields._mapList_5__15 = List;
      sub_1C3E508((CGThumbnailListItem_o *)&v224->fields._mapList_5__15, (int32_t)List, v225, v226);
      v218 = v586;
      mapList_5__15 = v586->fields._mapList_5__15;
      v586->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C3E7C0(v216, v217);
      max_length = mapList_5__15->max_length;
      v220 = 0;
      v218->fields._mapCount_5__13 = max_length;
      goto LABEL_121;
    case 1:
      v152 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v152 )
        sub_1C3E7C0(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C3E7C0(0, method);
      v154 = SpotRoadMaster__getList(spotRoadMaster_5__7, v152->fields.mapId, 0);
      v156 = v154;
      if ( !v154 )
        sub_1C3E7C0(0, v155);
      v157 = v154->max_length;
      if ( v157 >= 1 )
      {
        for ( i = 0; i != v157; ++i )
        {
          v159 = sub_1C3E7B0(QuestTree___c__DisplayClass45_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v159, 0);
          if ( i >= LODWORD(v156->max_length) )
            sub_1C3E7C8(v160, v161);
          v162 = v156->m_Items[i];
          if ( !v162 )
            sub_1C3E7C0(v160, v161);
          if ( !v159 )
            sub_1C3E7C0(v160, v161);
          *(_DWORD *)(v159 + 16) = v162->fields.id;
          if ( !_4__this )
            sub_1C3E7C0(v160, v161);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v164 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v164,
            (Il2CppObject *)v159,
            Method_QuestTree___c__DisplayClass45_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0);
          if ( !allSpotRoadInfoList )
            sub_1C3E7C0(v165, v166);
          v167 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v164,
                   (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v168 = v167;
          if ( v167 != -1 )
          {
            v169 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v169 )
              sub_1C3E7C0(0, v168);
            System_Collections_Generic_List_object___RemoveAt(
              v169,
              v168,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v586->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C3E7C0(0, v168);
          v171 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v159 + 16), 0);
          spotRoadInfo = v171;
          QuestTree__SetupSpotRoadInfo(_4__this, v162, &spotRoadInfo, v172);
          v176 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v176 )
            sub_1C3E7C0(0, v173);
          v177 = v176->fields._items;
          v178 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v176->fields._version;
          if ( !v177 )
            sub_1C3E7C0(v176, v173);
          v179 = v176->fields._size;
          if ( (unsigned int)v179 >= LODWORD(v177->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v176,
              (Il2CppObject *)v171,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
          }
          else
          {
            v180 = &v177->obj.klass + v179;
            v176->fields._size = v179 + 1;
            v180[4] = (Il2CppClass *)v171;
            sub_1C3E508((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v171, v174, v175);
          }
        }
      }
      v181 = v586->fields.__8__1;
      if ( !v181 )
        sub_1C3E7C0(v154, v155);
      mapGimmickMaster_5__8 = v586->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C3E7C0(0, v155);
      v183 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v181->fields.mapId, 0);
      v187 = v183;
      if ( !v183 )
        sub_1C3E7C0(0, v184);
      v188 = v183->max_length;
      if ( v188 >= 1 )
      {
        for ( j = 0; j != v188; ++j )
        {
          v190 = sub_1C3E7B0(QuestTree___c__DisplayClass45_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v190, 0);
          if ( j >= LODWORD(v187->max_length) )
            sub_1C3E7C8(v191, v192);
          v193 = v187->m_Items[j];
          if ( !v193 )
            sub_1C3E7C0(v191, v192);
          if ( !v190 )
            sub_1C3E7C0(v191, v192);
          *(_DWORD *)(v190 + 16) = v193->fields.id;
          if ( !_4__this )
            sub_1C3E7C0(v191, v192);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v195 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v195,
            (Il2CppObject *)v190,
            Method_QuestTree___c__DisplayClass45_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0);
          if ( !allMapGimmickInfoList )
            sub_1C3E7C0(v196, v197);
          v198 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v195,
                   (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v199 = v198;
          if ( v198 != -1 )
          {
            v200 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v200 )
              sub_1C3E7C0(0, v199);
            System_Collections_Generic_List_object___RemoveAt(
              v200,
              v199,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v201 = v586->fields._mapInfo_5__16;
          if ( !v201 )
            sub_1C3E7C0(0, v199);
          v202 = MapControl_MapInfo__AddMapGimmick(v201, *(_DWORD *)(v190 + 16), 0);
          mapGimmickInfo = v202;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v203);
          v207 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v207 )
            sub_1C3E7C0(0, v204);
          v208 = v207->fields._items;
          v209 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v207->fields._version;
          if ( !v208 )
            sub_1C3E7C0(v207, v204);
          v210 = v207->fields._size;
          if ( (unsigned int)v210 >= LODWORD(v208->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v207,
              (Il2CppObject *)v202,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
          }
          else
          {
            v211 = &v208->obj.klass + v210;
            v207->fields._size = v210 + 1;
            v211[4] = (Il2CppClass *)v202;
            sub_1C3E508((CGThumbnailListItem_o *)(v211 + 4), (int32_t)v202, v205, v206);
          }
        }
      }
      v212 = v586;
      v586->fields.__2__current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v212->fields.__2__current, 0, v185, v186);
      v213 = v586;
      v214 = 2;
      goto LABEL_333;
    case 2:
      v4->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = (CGThumbnailListItem_o *)&v4->fields._mapInfo_5__16;
      p_mapInfo_5__16[-2].fields._Id_k__BackingField = -1;
      sub_1C3E508(p_mapInfo_5__16, 0, v2, v3);
      v218 = v586;
      max_length = v586->fields._mapCount_5__13;
      v220 = v586->fields._mapIdx_5__12 + 1;
      v586->fields._mapIdx_5__12 = v220;
LABEL_121:
      if ( v220 < max_length )
      {
        v228 = v218->fields._mapList_5__15;
        if ( !v228 )
          sub_1C3E7C0(v216, v217);
        if ( (unsigned int)v220 >= LODWORD(v228->max_length) )
          sub_1C3E7C8(v216, v217);
        v229 = v228->m_Items[v220];
        if ( !v229 )
          sub_1C3E7C0(v216, v217);
        v230 = v218->fields.__8__1;
        if ( !v230 )
          sub_1C3E7C0(v216, v217);
        v230->fields.mapId = v229->fields.id;
        v231 = v218->fields._warInfo_5__14;
        if ( !v231 )
          sub_1C3E7C0(v216, v217);
        mapInfoList = (System_Collections_Generic_List_object__o *)v231->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v230->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v230,
              Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0);
            v230->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C3E508((CGThumbnailListItem_o *)&v230->fields.__9__3, (int32_t)_9__3, v234, v235);
          }
          v216 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v217 = (unsigned int)v216;
          if ( (_DWORD)v216 != -1 )
          {
            v236 = v586->fields._warInfo_5__14;
            if ( !v236 )
              sub_1C3E7C0(v216, (unsigned int)v216);
            v237 = (System_Collections_Generic_List_object__o *)v236->fields.mapInfoList;
            if ( !v237 )
              sub_1C3E7C0(0, v217);
            System_Collections_Generic_List_object___RemoveAt(
              v237,
              v217,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C3E7C0(v216, v217);
        v238 = v586->fields.__8__1;
        if ( !v238 )
          sub_1C3E7C0(v216, v217);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v238->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v238,
            Method_QuestTree___c__DisplayClass45_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0);
          v238->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C3E508((CGThumbnailListItem_o *)&v238->fields.__9__4, (int32_t)_9__4, v241, v242);
        }
        if ( !allMapInfoList )
          sub_1C3E7C0(v216, v217);
        v243 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v244 = (unsigned int)v243;
        if ( (_DWORD)v243 != -1 )
        {
          v245 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v245 )
            sub_1C3E7C0(0, v244);
          System_Collections_Generic_List_object___RemoveAt(
            v245,
            v244,
            (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v246 = v586->fields.__8__1;
        if ( !v246 )
          sub_1C3E7C0(v243, v244);
        v247 = v586->fields._warInfo_5__14;
        if ( !v247 )
          sub_1C3E7C0(0, v244);
        v248 = MapControl_WarInfo__AddChild(v247, v246->fields.mapId, 0);
        v249 = v586;
        v586->fields._mapInfo_5__16 = v248;
        sub_1C3E508((CGThumbnailListItem_o *)&v249->fields._mapInfo_5__16, (int32_t)v248, v250, v251);
        v255 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v255 )
          sub_1C3E7C0(0, v252);
        v256 = v255->fields._items;
        v257 = (Il2CppObject *)v586->fields._mapInfo_5__16;
        v258 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v255->fields._version;
        if ( !v256 )
          sub_1C3E7C0(v255, v257);
        v259 = v255->fields._size;
        if ( (unsigned int)v259 >= LODWORD(v256->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v255,
            v257,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
        }
        else
        {
          v260 = &v256->obj.klass + v259;
          v255->fields._size = v259 + 1;
          v260[4] = (Il2CppClass *)v257;
          sub_1C3E508((CGThumbnailListItem_o *)(v260 + 4), (int32_t)v257, v253, v254);
        }
        v356 = v586->fields.__8__1;
        if ( !v356 )
          sub_1C3E7C0(v261, v262);
        spotMaster_5__3 = v586->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C3E7C0(0, v262);
        v358 = SpotMaster__getList(spotMaster_5__3, v356->fields.mapId, 0);
        v361 = v358;
        if ( !v358 )
          sub_1C3E7C0(0, v359);
        v362 = v358->max_length;
        if ( v362 >= 1 )
        {
          for ( k = 0; k != v362; ++k )
          {
            v364 = sub_1C3E7B0(QuestTree___c__DisplayClass45_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v364, 0);
            if ( k >= LODWORD(v361->max_length) )
              sub_1C3E7C8(v365, v366);
            v367 = v361->m_Items[k];
            if ( !v367 )
              sub_1C3E7C0(v365, v366);
            if ( !v364 )
              sub_1C3E7C0(v365, v366);
            *(_DWORD *)(v364 + 16) = v367->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v369 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v369,
              (Il2CppObject *)v364,
              Method_QuestTree___c__DisplayClass45_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_1C3E7C0(v370, v371);
            v372 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v369,
                     (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v373 = v372;
            if ( v372 != -1 )
            {
              v374 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v374 )
                sub_1C3E7C0(0, v373);
              System_Collections_Generic_List_object___RemoveAt(
                v374,
                v373,
                (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v375 = v586->fields._mapInfo_5__16;
            if ( !v375 )
              sub_1C3E7C0(0, v373);
            v376 = MapControl_MapInfo__AddChild(v375, *(_DWORD *)(v364 + 16), 0);
            spotInfo = v376;
            QuestTree__SetupSpotInfo(_4__this, v367, &spotInfo, v377);
            v381 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v381 )
              sub_1C3E7C0(0, v378);
            v382 = v381->fields._items;
            v383 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v381->fields._version;
            if ( !v382 )
              sub_1C3E7C0(v381, v378);
            v384 = v381->fields._size;
            if ( (unsigned int)v384 >= LODWORD(v382->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v381,
                (Il2CppObject *)v376,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v383[4] + 192LL) + 112LL));
            }
            else
            {
              v385 = &v382->obj.klass + v384;
              v381->fields._size = v384 + 1;
              v385[4] = (Il2CppClass *)v376;
              sub_1C3E508((CGThumbnailListItem_o *)(v385 + 4), (int32_t)v376, v379, v380);
            }
          }
        }
        v386 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v586->fields._mapInfo_5__16,
                 v586->fields._blankEarthSpotMaster_5__4,
                 v360);
        v387 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v386,
                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v391 = (System_Collections_Generic_IEnumerable_TSource__o *)v387;
        if ( !v387 )
          sub_1C3E7C0(0, v388);
        if ( v387->max_length )
        {
          v392 = sub_1C3E7B0(QuestTree___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v392, 0);
          v393 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v393 = QuestTree___c_TypeInfo;
          }
          _9__45_6 = (System_Func_object__int__o *)v393->static_fields->__9__45_6;
          if ( !_9__45_6 )
          {
            if ( !v393->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v393);
              v393 = QuestTree___c_TypeInfo;
            }
            v395 = (Il2CppObject *)v393->static_fields->__9;
            _9__45_6 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__45_6,
              v395,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_6__,
              0);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__45_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__45_6;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__45_6, (int32_t)_9__45_6, v397, v398);
          }
          v399 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v391,
                                                                  (System_Func_TSource__TResult__o *)_9__45_6,
                                                                  (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v400 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_57040820(
            v400,
            v399,
            (const MethodInfo_3665FB4 *)Method_System_Collections_Generic_HashSet_int___ctor___78114696);
          if ( !v392 )
            sub_1C3E7C0(v401, v402);
          *(_QWORD *)(v392 + 16) = v400;
          sub_1C3E508((CGThumbnailListItem_o *)(v392 + 16), (int32_t)v400, v403, v404);
          v405 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v406 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v406,
            (Il2CppObject *)v392,
            Method_QuestTree___c__DisplayClass45_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v405,
            (System_Func_T__bool__o *)v406,
            (const MethodInfo_30E8AF4 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v408 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v408 )
            sub_1C3E7C0(0, v407);
          System_Collections_Generic_List_object___AddRange(
            v408,
            (System_Collections_Generic_IEnumerable_T__o *)v391,
            (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v409 = v586;
        v586->fields.__2__current = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v409->fields.__2__current, 0, v389, v390);
        result = 1;
        v586->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C3E7C0(v216, v217);
      v263 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v264 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v264 = QuestTree___c_TypeInfo;
      }
      _9__45_2 = (System_Comparison_T__o *)v264->static_fields->__9__45_2;
      if ( !_9__45_2 )
      {
        if ( !v264->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v264);
          v264 = QuestTree___c_TypeInfo;
        }
        v266 = (Il2CppObject *)v264->static_fields->__9;
        _9__45_2 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__45_2,
          v266,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_2__,
          0);
        v267 = QuestTree___c_TypeInfo->static_fields;
        v267->__9__45_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__45_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v267->__9__45_2, (int32_t)_9__45_2, v268, v269);
      }
      if ( !v263 )
        sub_1C3E7C0(v216, v217);
      System_Collections_Generic_List_object___Sort_58421028(
        v263,
        _9__45_2,
        (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v270 = v586;
      v586->fields.__8__1 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v270->fields.__8__1, 0, v271, v272);
      v273 = v586;
      v586->fields._warInfo_5__14 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v273->fields._warInfo_5__14, 0, v274, v275);
      v276 = v586;
      v586->fields._mapList_5__15 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v276->fields._mapList_5__15, 0, v277, v278);
      v279 = (Il2CppObject *)sub_1C3E7B0(QuestTree___c__DisplayClass45_6_TypeInfo);
      System_Object___ctor(v279, 0);
      v280 = v586;
      v586->fields.__8__3 = (struct QuestTree___c__DisplayClass45_6_o *)v279;
      sub_1C3E508((CGThumbnailListItem_o *)&v280->fields.__8__3, (int32_t)v279, v281, v282);
      v283 = v586->fields._nowTime_5__11;
      v284 = (MapControl_WarInfo_o *)sub_1C3E7B0(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v284, v283, 0);
      v285 = v586;
      v586->fields._warInfo_5__14 = v284;
      sub_1C3E508((CGThumbnailListItem_o *)&v285->fields._warInfo_5__14, (int32_t)v284, v286, v287);
      v288 = (MapControl_MapInfo_o *)sub_1C3E7B0(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v288, 0);
      v289 = v586;
      v586->fields._mapInfo_5__16 = v288;
      sub_1C3E508((CGThumbnailListItem_o *)&v289->fields._mapInfo_5__16, (int32_t)v288, v290, v291);
      v292 = (MapControl_SpotInfo_o *)sub_1C3E7B0(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v292, 0);
      v293 = v586;
      v586->fields._spotInfo_5__17 = v292;
      sub_1C3E508((CGThumbnailListItem_o *)&v293->fields._spotInfo_5__17, (int32_t)v292, v294, v295);
      v296 = (WarEntity_o *)sub_1C3E7B0(WarEntity_TypeInfo);
      WarEntity___ctor(v296, 0);
      v297 = v586;
      v586->fields._warEnt_5__18 = v296;
      sub_1C3E508((CGThumbnailListItem_o *)&v297->fields._warEnt_5__18, (int32_t)v296, v298, v299);
      v301 = v586->fields._dataManager_5__2;
      if ( !v301 )
        sub_1C3E7C0(0, v300);
      v302 = DataManager__GetMasterData_object_(
               v301,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v303 = v586;
      v586->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v302;
      sub_1C3E508((CGThumbnailListItem_o *)&v303->fields._userQuestMaster_5__19, (int32_t)v302, v304, v305);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v308 = v586;
      _8__3 = v586->fields.__8__3;
      if ( !_8__3 )
        sub_1C3E7C0(Master_object, v307);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v308->fields._nowMapId_5__20 = -1;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
      if ( !v586 )
        sub_1C3E7C0(isSavedMemoryMode, v311);
      if ( isSavedMemoryMode )
        v312 = 500;
      else
        v312 = 5000;
      v313 = v586->fields.__8__3;
      v586->fields._breakInterval_5__22 = v312;
      v314 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v314,
        (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v313 )
        sub_1C3E7C0(v315, v316);
      v313->fields.spotInfoList = v314;
      sub_1C3E508((CGThumbnailListItem_o *)&v313->fields, (int32_t)v314, v317, v318);
      v586->fields._cnt_5__23 = 0;
      v320 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v320 )
        sub_1C3E7C0(0, v319);
      System_Collections_Generic_List_object___GetEnumerator(
        v576,
        v320,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v321 = v586;
      v322 = *(_OWORD *)&v576[0].fields._list;
      p__7__wrap24 = (CGThumbnailListItem_o *)&v586->fields.__7__wrap24;
      v576[1] = v576[0];
      v586->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v576[0].fields._current;
      *(_OWORD *)&v321->fields.__7__wrap24.fields._list = v322;
      sub_1C3E508(p__7__wrap24, 0, v324, v325);
      v4 = v586;
LABEL_169:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v327 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v328 = v586;
        if ( !v327 )
          break;
        current = v586->fields.__7__wrap24.fields._current;
        ++v586->fields._cnt_5__23;
        if ( !current )
          sub_1C3E7C0(v328, v326);
        Mine = MapControl_SpotInfo__GetMine(current, 0);
        if ( !Mine )
          sub_1C3E7C0(0, v331);
        v4 = v586;
        v334 = v586->fields.__8__2;
        if ( !v334 )
          sub_1C3E7C0(Mine, v331);
        if ( Mine->fields.warId == v334->fields.targetWarId )
        {
          v335 = v586->fields.__8__3;
          if ( !v335 )
            sub_1C3E7C0(Mine, v331);
          spotInfoList = v335->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C3E7C0(0, v331);
          spotId = (unsigned int)current->fields.spotId;
          v338 = spotInfoList->fields._items;
          v339 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v338 )
            sub_1C3E7C0(spotInfoList, spotId);
          v340 = spotInfoList->fields._size;
          if ( (unsigned int)v340 >= LODWORD(v338->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v339[4] + 192LL) + 112LL));
            v4 = v586;
          }
          else
          {
            spotInfoList->fields._size = v340 + 1;
            v338->m_Items[v340] = spotId;
          }
        }
        HIDWORD(v341) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v341) = HIDWORD(v341);
        if ( (unsigned int)(v341 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v332, v333);
          v213 = v586;
          v214 = 3;
LABEL_333:
          v213->fields.__1__state = v214;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45____m__Finally1(v586, v326);
      v343 = v586;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v586->fields._questMaster_5__5;
      v586->fields.__7__wrap24.fields._list = 0;
      *(_QWORD *)&v343->fields.__7__wrap24.fields._index = 0;
      v343->fields.__7__wrap24.fields._current = 0;
      if ( !questMaster_5__5 )
        sub_1C3E7C0(0, v342);
      v345 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_33B21DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v346 = (Il2CppObject *)v586->fields.__8__3;
      v347 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v347,
        v346,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v348 = System_Linq_Enumerable__Where_object_(
               v345,
               (System_Func_TSource__bool__o *)v347,
               (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v349 = System_Linq_Enumerable__ToArray_object_(
               v348,
               (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v350 = v586;
      v586->fields._questList_5__24 = (struct QuestEntity_array *)v349;
      sub_1C3E508((CGThumbnailListItem_o *)&v350->fields._questList_5__24, (int32_t)v349, v351, v352);
      v353 = v586;
      v586->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v353->fields._questList_5__24,
                       (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v586;
      mapCount_5__13 = v586->fields._mapCount_5__13;
      v586->fields._mapIdx_5__12 = mapIdx_5__12;
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
        sub_1C3E7C0(this, method);
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
      sub_1C3E7C0(mapIdx_5__12, method);
    if ( (unsigned int)mapCount_5__13 >= LODWORD(questList_5__24->max_length) )
      sub_1C3E7C8(mapIdx_5__12, method);
    v412 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v412 )
      sub_1C3E7C0(mapIdx_5__12, method);
    v413 = v4->fields.__8__3;
    if ( !v413 )
      sub_1C3E7C0(mapIdx_5__12, method);
    v413->fields.questId = v412->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    v415 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v415 = NetworkManager_TypeInfo;
    }
    v416 = v586->fields.__8__3;
    if ( !v416 )
      sub_1C3E7C0(v415, method);
    if ( !userQuestMaster_5__19 )
      sub_1C3E7C0(v415, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v580,
           v415->static_fields->userIdNumber,
           v416->fields.questId,
           0) )
    {
      if ( !v580 )
        sub_1C3E7C0(0, v417);
      QuestPhase = UserQuestEntity__getQuestPhase(v580, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_42518288 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)QuestEntity__getSpotId_42518288(
                                                                            v412,
                                                                            QuestPhase + 1,
                                                                            0);
    v421 = v586;
    v422 = v586->fields.__8__3;
    if ( !v422 )
      sub_1C3E7C0(SpotId_42518288, warId);
    if ( v422->fields.nowSpotId == (_DWORD)SpotId_42518288 )
    {
      if ( !_4__this )
        sub_1C3E7C0(SpotId_42518288, warId);
    }
    else
    {
      v422->fields.nowSpotId = (int)SpotId_42518288;
      if ( !_4__this )
        sub_1C3E7C0(SpotId_42518288, warId);
      v423 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v422->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v422,
          Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0);
        v422->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C3E508((CGThumbnailListItem_o *)&v422->fields.__9__12, (int32_t)_9__12, v425, v426);
      }
      if ( !v423 )
        sub_1C3E7C0(SpotId_42518288, warId);
      v427 = System_Collections_Generic_List_object___Find(
               v423,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v421->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v427;
      sub_1C3E508((CGThumbnailListItem_o *)&v421->fields._spotInfo_5__17, (int32_t)v427, v428, v429);
      spotInfo_5__17 = v586->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C3E7C0(0, v430);
      SpotId_42518288 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0);
      warId = (unsigned int)SpotId_42518288;
      if ( v586->fields._nowMapId_5__20 != (_DWORD)SpotId_42518288 )
      {
        v586->fields._nowMapId_5__20 = (int)SpotId_42518288;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_42518288, v432);
        v434 = v586;
        v586->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C3E508((CGThumbnailListItem_o *)&v434->fields._mapInfo_5__16, (int32_t)MapInfoByMapID, v435, v436);
        v438 = v586->fields._mapInfo_5__16;
        if ( !v438 )
          sub_1C3E7C0(0, v437);
        v442 = MapControl_MapInfo__GetMine(v438, 0);
        if ( !v442 )
          sub_1C3E7C0(0, v439);
        SpotId_42518288 = v586;
        warId = (unsigned int)v442->fields.warId;
        if ( v586->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v586->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0);
            SpotId_42518288 = v586;
          }
          else
          {
            ChildByWarID = 0;
          }
          SpotId_42518288->fields._warInfo_5__14 = ChildByWarID;
          sub_1C3E508(
            (CGThumbnailListItem_o *)&SpotId_42518288->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v440,
            v441);
          v445 = v586->fields._warInfo_5__14;
          if ( !v445 )
            sub_1C3E7C0(0, v444);
          v446 = MapControl_WarInfo__GetMine(v445, 0);
          v447 = v586;
          v586->fields._warEnt_5__18 = v446;
          sub_1C3E508((CGThumbnailListItem_o *)&v447->fields._warEnt_5__18, (int32_t)v446, v448, v449);
        }
      }
    }
    v450 = v586->fields.__8__3;
    if ( !v450 )
      sub_1C3E7C0(SpotId_42518288, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v450->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v450,
        Method_QuestTree___c__DisplayClass45_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0);
      v450->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C3E508((CGThumbnailListItem_o *)&v450->fields.__9__13, (int32_t)_9__13, v453, v454);
    }
    if ( !allQuestInfoList )
      sub_1C3E7C0(SpotId_42518288, warId);
    v455 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v456 = v455;
    if ( v455 != -1 )
    {
      v457 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v457 )
        sub_1C3E7C0(0, v456);
      System_Collections_Generic_List_object___RemoveAt(
        v457,
        v456,
        (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v458 = v586->fields._warInfo_5__14;
    if ( !v580 )
    {
      if ( !v458 )
        sub_1C3E7C0(0, v456);
      goto LABEL_385;
    }
    if ( !v458 )
      sub_1C3E7C0(0, v456);
    MapControl_WarInfo__SetStatusCheckFlag(v458, 1, 0, 0);
    if ( !v580 )
      sub_1C3E7C0(0, v459);
    HasStatus = UserQuestEntity__HasStatus(v580, 8, 0);
    if ( !HasStatus )
    {
      v462 = v586->fields._warInfo_5__14;
      if ( !v462 )
        sub_1C3E7C0(0, v461);
      goto LABEL_387;
    }
    if ( !v580 )
      sub_1C3E7C0(HasStatus, v461);
    if ( v580->fields.challengeNum >= 1 )
    {
      v462 = v586->fields._warInfo_5__14;
      if ( !v462 )
        sub_1C3E7C0(0, v461);
LABEL_387:
      MapControl_WarInfo__SetStatusCheckFlag(v462, 4, 0, 0);
    }
    if ( !v580 )
      sub_1C3E7C0(0, v461);
    v466 = UserQuestEntity__getClearNum(v580, 0) < 1;
    v458 = v586->fields._warInfo_5__14;
    if ( v466 )
    {
      if ( !v458 )
        sub_1C3E7C0(0, v467);
LABEL_385:
      MapControl_WarInfo__SetStatusCheckFlag(v458, 2, 0, 0);
      v465 = 0;
      goto LABEL_399;
    }
    if ( !v458 )
      sub_1C3E7C0(0, v467);
    v463 = MapControl_WarInfo__GetMine(v458, 0);
    if ( !v463 )
      sub_1C3E7C0(0, v464);
    v468 = v586->fields.__8__3;
    if ( !v468 )
      sub_1C3E7C0(v463, v464);
    if ( v463->fields.lastQuestId == v468->fields.questId )
    {
      v469 = v586->fields._warInfo_5__14;
      if ( !v469 )
        sub_1C3E7C0(0, v464);
      v465 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v469, 8, 1, 0);
    }
    else
    {
      v465 = 1;
    }
LABEL_399:
    v470 = v586->fields.__8__3;
    if ( !v470 )
      sub_1C3E7C0(v463, v464);
    v471 = v586->fields._spotInfo_5__17;
    if ( !v471 )
      sub_1C3E7C0(0, v464);
    v472 = MapControl_SpotInfo__AddChild(v471, v470->fields.questId, 0);
    v475 = v586->fields._warInfo_5__14;
    if ( !v475 )
      sub_1C3E7C0(v472, 0);
    v476 = v472;
    if ( !v472 )
      sub_1C3E7C0(0, v475);
    v477 = v475->fields.warId;
    v472->fields._WarInfo_k__BackingField = v475;
    v472->fields.warId = v477;
    sub_1C3E508((CGThumbnailListItem_o *)&v472->fields._WarInfo_k__BackingField, (int32_t)v475, v473, v474);
    v478 = v586->fields._spotInfo_5__17;
    v476->fields._SpotInfo_k__BackingField = v478;
    sub_1C3E508((CGThumbnailListItem_o *)&v476->fields._SpotInfo_k__BackingField, (int32_t)v478, v479, v480);
    v476->fields.endTime = QuestTree__GetEndTime(_4__this, v476, v481);
    warEnt_5__18 = v586->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C3E7C0(0, v482);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
    if ( IsStartTypeQuest )
    {
      v486 = v586->fields._warEnt_5__18;
      if ( !v486 )
        sub_1C3E7C0(IsStartTypeQuest, v485);
      v487 = v586->fields.__8__3;
      if ( !v487 )
        sub_1C3E7C0(IsStartTypeQuest, v485);
      if ( v486->fields.targetId == v487->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v586->fields._warEnt_5__18, 0x8000, 0);
        if ( !IsStartTypeQuest )
          goto LABEL_415;
      }
    }
    v488 = v586->fields._warEnt_5__18;
    if ( !v488 )
      sub_1C3E7C0(IsStartTypeQuest, v485);
    v489 = v586->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v489 )
      sub_1C3E7C0(0, v485);
    v490 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v489,
             v488->fields.id,
             &value,
             (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v490 )
    {
      v493 = v586->fields.__8__3;
      if ( !v493 )
        sub_1C3E7C0(v490, v491);
      if ( !value )
        sub_1C3E7C0(0, v491);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v493->fields.questId,
             (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_415:
        *(_QWORD *)&v476->fields.dispType = 0;
LABEL_419:
        v496 = 1;
        goto LABEL_420;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v412, v476, v586->fields._nowWarId_5__21, v492) != 1 )
      goto LABEL_419;
    v495 = v586->fields._warInfo_5__14;
    if ( !v495 )
      sub_1C3E7C0(0, v494);
    MapControl_WarInfo__SetStatusCheckFlag(v495, 1, 0, 0);
    v496 = 0;
LABEL_420:
    if ( MapControl_QuestInfo__IsDisaplayable(v476, 0) )
    {
      if ( ((v465 | v496) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v476, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v499 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestResetMaster___);
          v500 = sub_1C3E60C(long___TypeInfo, 1);
          v501 = v586->fields.__8__3;
          if ( !v501 )
            sub_1C3E7C0(v500, v500);
          if ( !v500 )
            sub_1C3E7C0(0, 0);
          if ( !*(_DWORD *)(v500 + 24) )
            sub_1C3E7C8(v500, v500);
          *(_QWORD *)(v500 + 32) = v501->fields.questId;
          if ( !v499 )
            sub_1C3E7C0(v500, v500);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v499,
                                   (System_Int64_array *)v500,
                                   (const MethodInfo_33B2534 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v580 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v580, 0) )
          {
            v503 = v586->fields._spotInfo_5__17;
            if ( !v503 )
              sub_1C3E7C0(0, v498);
            MapControl_SpotInfo__AddQuestCount(v503, 1, 0);
          }
        }
        v504 = v586->fields._spotInfo_5__17;
        if ( !v504 )
          sub_1C3E7C0(0, v498);
        MapControl_SpotInfo__AddAvailableQuestId(v504, v476->fields.questId, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType(v476, 0) == 1 )
      {
        v505 = MapControl_QuestInfo__GetMine(v476, 0);
        if ( !v505 )
          sub_1C3E7C0(0, v506);
        HasFlag = QuestEntity__HasFlag(v505, 0x400000000000LL, 0);
        v509 = v586;
        if ( !HasFlag )
        {
          v510 = v586->fields._spotInfo_5__17;
          if ( !v510 )
            sub_1C3E7C0(HasFlag, v508);
          v510->fields._IsNext_k__BackingField = 1;
        }
        v511 = v509->fields._mapInfo_5__16;
        if ( !v511 )
          sub_1C3E7C0(HasFlag, v508);
        v511->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v476, 0);
      if ( IsDisplayQuestNextIcon )
      {
        v514 = v586;
        v515 = v586->fields._spotInfo_5__17;
        if ( !v515 )
          sub_1C3E7C0(IsDisplayQuestNextIcon, v513);
        v515->fields._IsNext_k__BackingField = 1;
        v516 = v514->fields._mapInfo_5__16;
        if ( !v516 )
          sub_1C3E7C0(IsDisplayQuestNextIcon, v513);
        v516->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v412, 0x8000000000LL, 0) )
      {
        v517 = v586->fields._spotInfo_5__17;
        if ( !v517 )
          sub_1C3E7C0(0, v497);
        MapControl_SpotInfo__AddFreeQuestCount(v517, 1, 0);
      }
    }
    v518 = v580;
    if ( v580 )
    {
      v518 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v580, 8, 0);
      if ( ((unsigned __int8)v518 & 1) != 0 )
      {
        if ( !v580 )
          sub_1C3E7C0(v518, v497);
        v519 = v580->fields.challengeNum == 0;
      }
      else
      {
        v519 = 0;
      }
    }
    else
    {
      v519 = 1;
    }
    v476->fields.isNew = v519;
    v476->fields.questPhase = QuestPhase;
    v520 = v586->fields.__8__3;
    if ( !v520 )
      sub_1C3E7C0(v518, v497);
    questPickupMaster_5__9 = v586->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C3E7C0(0, v497);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v520->fields.questId, 0);
    v476->fields.pickupPriority = Priority;
    v524 = v586->fields.__8__3;
    if ( !v524 )
      sub_1C3E7C0(Priority, v523);
    questPhaseMaster_5__6 = v586->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C3E7C0(0, v523);
    v526 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v524->fields.questId, 0);
    v530 = v526;
    if ( !v526 )
      sub_1C3E7C0(0, v527);
    v531 = v526[3];
    v532 = v531 - 1;
    if ( (int)v531 >= 1 )
    {
      v533 = 0;
      while ( 1 )
      {
        v534 = v530[v533 + 4];
        if ( !v534 )
          sub_1C3E7C0(v526, v527);
        v526 = MapControl_QuestInfo__AddChild(v476, *(_DWORD *)(v534 + 16), *(_DWORD *)(v534 + 20), 0);
        if ( v532 == v533 )
          break;
        if ( (unsigned int)++v533 >= *((_DWORD *)v530 + 6) )
          sub_1C3E7C8(v526, v527);
      }
    }
    v535 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v535 )
      sub_1C3E7C0(0, v527);
    v536 = v535->fields._items;
    v537 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v535->fields._version;
    if ( !v536 )
      sub_1C3E7C0(v535, v527);
    v538 = v535->fields._size;
    if ( (unsigned int)v538 >= LODWORD(v536->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v535,
        (Il2CppObject *)v476,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v537[4] + 192LL) + 112LL));
    }
    else
    {
      v539 = &v536->obj.klass + v538;
      v535->fields._size = v538 + 1;
      v539[4] = (Il2CppClass *)v476;
      sub_1C3E508((CGThumbnailListItem_o *)(v539 + 4), (int32_t)v476, v528, v529);
    }
    v4 = v586;
    v151 = v586->fields._mapCount_5__13;
    if ( v151 && !(v151 % v586->fields._breakInterval_5__22) )
    {
      v586->fields.__2__current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v540, v541);
      v213 = v586;
      v214 = 4;
      goto LABEL_333;
    }
LABEL_474:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    mapCount_5__13 = v151 + 1;
    v4->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1C3E7C0(mapIdx_5__12, method);
  v542 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v543 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v543 = QuestTree___c_TypeInfo;
  }
  _9__45_11 = (System_Comparison_T__o *)v543->static_fields->__9__45_11;
  if ( !_9__45_11 )
  {
    if ( !v543->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v543);
      v543 = QuestTree___c_TypeInfo;
    }
    v545 = (Il2CppObject *)v543->static_fields->__9;
    _9__45_11 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(_9__45_11, v545, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__45_11__, 0);
    v546 = QuestTree___c_TypeInfo->static_fields;
    v546->__9__45_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__45_11;
    sub_1C3E508((CGThumbnailListItem_o *)&v546->__9__45_11, (int32_t)_9__45_11, v547, v548);
  }
  if ( !v542 )
    sub_1C3E7C0(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_58421028(
    v542,
    _9__45_11,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v549 = v586;
  v586->fields.__8__3 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v549->fields.__8__3, 0, v550, v551);
  v552 = v586;
  v586->fields._warInfo_5__14 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v552->fields._warInfo_5__14, 0, v553, v554);
  v555 = v586;
  v586->fields._mapInfo_5__16 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v555->fields._mapInfo_5__16, 0, v556, v557);
  v558 = v586;
  v586->fields._spotInfo_5__17 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v558->fields._spotInfo_5__17, 0, v559, v560);
  v561 = v586;
  v586->fields._warEnt_5__18 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v561->fields._warEnt_5__18, 0, v562, v563);
  v564 = v586;
  v586->fields._userQuestMaster_5__19 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v564->fields._userQuestMaster_5__19, 0, v565, v566);
  v567 = v586;
  v586->fields._questList_5__24 = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v567->fields._questList_5__24, 0, v568, v569);
  v570 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v570 )
    sub_1C3E7C0(0, v571);
  CommonUI__SetLoadMode((CommonUI_o *)v570, 0, 0);
  _4__this->fields.isInit = 1;
  v574 = v586;
  if ( v586->fields.endCallback )
  {
    v586->fields.__2__current = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v574->fields.__2__current, 0, v572, v573);
    v213 = v586;
    v214 = 5;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C53B52 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4C53B52 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}